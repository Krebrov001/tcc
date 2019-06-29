#include "MakeStaticMatchCallback.h"

#include "clang/Lex/Lexer.h"

using llvm::outs;
using llvm::errs;
using llvm::raw_ostream;
using llvm::Error;

using clang::tooling::Replacement;
using clang::ast_matchers::StatementMatcher;
using clang::ast_matchers::functionDecl;
using clang::ast_matchers::callExpr;
using clang::ast_matchers::binaryOperator;
using clang::ast_matchers::callee;
using clang::ast_matchers::ignoringParenImpCasts;
using clang::ast_matchers::has;
using clang::ast_matchers::hasName;
using clang::ast_matchers::hasRHS;
using clang::ast_matchers::hasOperatorName;

using clang::CallExpr;
using clang::SourceLocation;
using clang::Lexer;
using clang::LangOptions;
using clang::CharSourceRange;
using clang::BinaryOperator;
using clang::dyn_cast;
using clang::DeclaratorDecl;
using clang::MemberExpr;
using clang::DeclRefExpr;
using clang::UnaryExprOrTypeTraitExpr;
using clang::UETT_SizeOf;
using clang::Expr;
using clang::tok::semi;


void MakeStaticMatchCallback::getASTmatchers(MatchFinder& mf) const
{
    StatementMatcher free_call_matcher = callExpr(
        callee(functionDecl(hasName("free")))
    ).bind("free_call");

    StatementMatcher calloc_assign_matcher = binaryOperator(
        hasOperatorName("="),
        hasRHS(ignoringParenImpCasts((has(
            callExpr(callee(functionDecl(hasName("calloc"))))
        ))))
    ).bind("calloc_assign");

    // &make_static_match_callback, is the address of the calling object == this
    // The second argument should be of type (MatchFinder::MatchCallback *)
    mf.addMatcher(free_call_matcher, (MatchFinder::MatchCallback *) this);
    mf.addMatcher(calloc_assign_matcher, (MatchFinder::MatchCallback *) this);
}


void MakeStaticMatchCallback::run(const MatchFinder::MatchResult &Result) {

	// Handle calls to free() by commenting out the call
	if (const auto *call_expr = Result.Nodes.getNodeAs<CallExpr>("free_call")) {
		_num_free_calls++;

		// Get the location after the semicolon following the free call
		SourceLocation after_semi_loc = Lexer::findLocationAfterToken(
			call_expr->getLocEnd(), semi, *Result.SourceManager, LangOptions(), false);
		if (!after_semi_loc.isValid()) {
			outs() << "ERROR: Unable to find semicolon location after free call.\n";
			return;
		}

		// Remove the unneeded code (as opposed to comment it out)
		if (_remove_code) {
			// "Replace" the free call with nothing
			CharSourceRange range =
				CharSourceRange::getTokenRange(call_expr->getLocStart(), after_semi_loc);
			Replacement free_rep(*Result.SourceManager, range, "");
			if (Error err = (*replacements)[free_rep.getFilePath()].add(free_rep)) {
				outs() << "ERROR: Error adding replacement that removes free call.\n";
				return;
			}
		}
		// Comment out the unneeded code (as opposed to remove it)
		else {
			Replacement free_start_rep(*(Result.SourceManager), call_expr->getLocStart(), 0, "/*");
			if (Error err = (*replacements)[free_start_rep.getFilePath()].add(free_start_rep)) {
				outs() << "ERROR: Error adding free start replacement.\n";
				return;
			}
			Replacement free_end_rep(*(Result.SourceManager), after_semi_loc, 0, "*/");
			if (Error err = (*replacements)[free_end_rep.getFilePath()].add(free_end_rep)) {
				outs() << "ERROR: Error adding free end replacement.\n";
				return;
			}
		}
	}
	// Handle cases of a calloc() call on right-hand size of assignment operator
	else if (const auto *assign_expr =
				 Result.Nodes.getNodeAs<BinaryOperator>("calloc_assign")) {
		_num_calloc_calls++;

		// Expr for the actual calloc() call
		const CallExpr *ce = dyn_cast<CallExpr>(assign_expr->getRHS()->IgnoreParenCasts());
		if (ce == nullptr) {
			outs() << "ERROR: Unable to get CallExpr for calloc assignment.\n";
			return;
		}

		// Decl for the variable that stores calloc() return value
		const DeclaratorDecl *var_decl = nullptr;
		if (const MemberExpr *memexp = dyn_cast<MemberExpr>(assign_expr->getLHS())) {
			var_decl = dyn_cast<DeclaratorDecl>(memexp->getMemberDecl());
		} else if (const DeclRefExpr *varexp = dyn_cast<DeclRefExpr>(assign_expr->getLHS())) {
			var_decl = dyn_cast<DeclaratorDecl>(varexp->getDecl());
		}
		if (var_decl == nullptr) {
			outs() << "ERROR: Unable to get declarator decl for assigned variable.\n";
			return;
		}

		// Get the data type used for 2nd argument to calloc and element count
		// from 1st argument. The data type is required since Matlab/Simulink
		// coder uses void pointers in declarations.
		const auto *sizeof_expr = dyn_cast<UnaryExprOrTypeTraitExpr>(ce->getArg(1));
		if ((sizeof_expr == nullptr) || (sizeof_expr->getKind() != UETT_SizeOf)) {
			outs() << "ERROR: Unable to get Expr for sizeof or sizeof not in "
					  "calloc().\n";
			return;
		}
		const Expr *count_expr = ce->getArg(0);
		if (count_expr == nullptr) {
			outs() << "ERROR: Unable to get Expr for element count in calloc().\n";
			return;
		}
		string type = sizeof_expr->getTypeOfArgument().getAsString();

		// Get the source text to modify the variable definition
		bool count_invalid;
		string count_src =
			Lexer::getSourceText(CharSourceRange::getTokenRange(count_expr->getSourceRange()),
								 *Result.SourceManager, LangOptions(), &count_invalid)
				.str();
		if (count_invalid) {
			outs() << "ERROR: Inavlid location in source text lookup.\n";
			return;
		}

		// Get the location after the semicolon following the calloc call
		SourceLocation after_semi_loc = Lexer::findLocationAfterToken(
			assign_expr->getLocEnd(), semi, *Result.SourceManager, LangOptions(), false);
		if (!after_semi_loc.isValid()) {
			outs() << "ERROR: Unable to find semicolon location after calloc call.\n";
			return;
		}

		// Remove the unneeded code (as opposed to comment it out)
		if (_remove_code) {
			// "Replace" the calloc call and assignment with nothing
			CharSourceRange range =
				CharSourceRange::getTokenRange(assign_expr->getLocStart(), after_semi_loc);
			Replacement calloc_rep(*Result.SourceManager, range, "");
			if (Error err = (*replacements)[calloc_rep.getFilePath()].add(calloc_rep)) {
				outs() << "ERROR: Error adding replacement that removes calloc call "
						  "and assignment.\n";
				return;
			}
		}
		// Comment out the unneeded code (as opposed to remove it)
		else {
			// Comment out the entire calloc call and variable assignment
			Replacement calloc_start_rep(*(Result.SourceManager), assign_expr->getLocStart(), 0,
										 "/*");
			if (Error err = (*replacements)[calloc_start_rep.getFilePath()].add(calloc_start_rep)) {
				outs() << "ERROR: Error adding calloc start replacement.\n";
				return;
			}
			Replacement calloc_end_rep(*(Result.SourceManager), after_semi_loc, 0, "*/");
			if (Error err = (*replacements)[calloc_end_rep.getFilePath()].add(calloc_end_rep)) {
				outs() << "ERROR: Error adding calloc end replacement.\n";
				return;
			}
		}

		// Change the variable type (typically void*) to type specified in call to
		// sizeof()
		Replacement type_rep(*(Result.SourceManager), var_decl->getLocStart(),
							 var_decl->getType().getAsString().length(), type + " ");
		if (Error err = (*replacements)[type_rep.getFilePath()].add(type_rep)) {
			outs() << "ERROR: Error adding type declaration replacement.\n";
			return;
		}

		// Add the array and size to variable declaration (X to X[const]).
		// Size comes from arguments to calloc call.
		string array_src = "[" + count_src + "]";
		Replacement array_rep(*(Result.SourceManager), var_decl->getLocEnd(),
							  var_decl->getNameAsString().length(),
							  var_decl->getNameAsString() + array_src);
		if (Error err = (*replacements)[array_rep.getFilePath()].add(array_rep)) {
			outs() << "ERROR: Error adding array declaration replacement.\n";
			return;
		}
	} else {
		outs() << "ERROR: MatchCallback called with unexpected match type.\n";
		return;
	}
}
