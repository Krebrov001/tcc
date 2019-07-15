#include "MakeStaticMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Lex/Lexer.h"
#include "clang/Tooling/Core/Replacement.h"

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

using clang::Expr;
using clang::Decl;
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

extern bool print_debug_output;  // defined in refactoring_tool.cpp


void MakeStaticMatchCallback::getASTmatchers(MatchFinder& mf)
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
    mf.addMatcher(free_call_matcher, this);
    mf.addMatcher(calloc_assign_matcher, this);
}


void MakeStaticMatchCallback::run(const MatchFinder::MatchResult &Result) {
    SM = Result.SourceManager;

	// Handle calls to free() by commenting out the call or just replacing it.
	if (const auto *call_expr = Result.Nodes.getNodeAs<CallExpr>("free_call")) {
		_num_free_calls++;

        // Get the location at the start of the free call.
        SourceLocation loc_start = call_expr->getLocStart();
        if (!loc_start.isValid()) {
            errs() << "ERROR: Unable to find the source location of the free call.\n";
            errs() << "\n\n";
            return;
        }
		// Get the location after the semicolon following the free call.
		SourceLocation after_semi_loc = Lexer::findLocationAfterToken(
			call_expr->getLocEnd(), semi, *SM, LangOptions(), false);
		if (!after_semi_loc.isValid()) {
            outputExpression(call_expr, errs(), loc_start);
			errs() << "ERROR: Unable to find semicolon location after free call.\n";
            errs() << "\n\n";
			return;
		}

		// Remove the unneeded code (as opposed to comment it out)
		if (_remove_code) {
			// "Replace" the free call with nothing
			CharSourceRange range =
				CharSourceRange::getTokenRange(call_expr->getLocStart(), after_semi_loc);
			Replacement free_rep(*SM, range, "");
			if (Error err = (*replacements)[free_rep.getFilePath()].add(free_rep)) {
                outputExpression(call_expr, errs(), loc_start);
				errs() << "ERROR: Error adding replacement that removes free call.\n";
                errs() << "\n\n";
				return;
			}

            if (print_debug_output) {
                outputExpression(call_expr, outs(), loc_start);
                // replaced with nothing
                outs() << "replaced with:\n" << "" << '\n';
                outs() << "\n\n";
            }
        // Comment out the unneeded code (as opposed to remove it)
		} else {
			Replacement free_start_rep(*(SM), call_expr->getLocStart(), 0, "/*");
			if (Error err = (*replacements)[free_start_rep.getFilePath()].add(free_start_rep)) {
                outputExpression(call_expr, errs(), loc_start);
				errs() << "ERROR: Error adding free start replacement: \"/*\"\n";
                errs() << "\n\n";
				return;
			}
            // Adding start replacement succeeded.

			Replacement free_end_rep(*(SM), after_semi_loc, 0, "*/");
			if (Error err = (*replacements)[free_end_rep.getFilePath()].add(free_end_rep)) {
                outputExpression(call_expr, errs(), loc_start);
				errs() << "ERROR: Error adding free end replacement: \"*/\"\n";
                errs() << "\n\n";
				return;
			}
            // Adding end replacement succeeded.

            if (print_debug_output) {
                outputExpression(call_expr, outs(), loc_start);
                // replaced with comments
                outs() << "replaced with:\n";
                outs() << "/*" << getExprAsString(call_expr) << "*/\n";
                outs() << "\n\n";
            }
		}
    // Handle cases of a calloc() call on right-hand size of assignment operator.
	} else if (const auto *assign_expr = Result.Nodes.getNodeAs<BinaryOperator>("calloc_assign")) {
		_num_calloc_calls++;

		// Expr for the actual calloc() call
		const CallExpr *ce = dyn_cast<CallExpr>(assign_expr->getRHS()->IgnoreParenCasts());
		if (ce == nullptr) {
            outputExpression(assign_expr, errs(), assign_expr->getLocStart());
			errs() << "ERROR: Unable to get CallExpr for calloc assignment.\n";
            errs() << "\n\n";
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
            outputExpression(assign_expr, errs(), assign_expr->getLocStart());
			errs() << "ERROR: Unable to get declarator decl for assigned variable.\n";
            errs() << "\n\n";
			return;
		}

		// Get the data type used for 2nd argument to calloc and element count
		// from 1st argument. The data type is required since Matlab/Simulink
		// coder uses void pointers in declarations.
		const auto *sizeof_expr = dyn_cast<UnaryExprOrTypeTraitExpr>(ce->getArg(1));
		if ((sizeof_expr == nullptr) || (sizeof_expr->getKind() != UETT_SizeOf)) {
            outputExpression(ce, errs(), ce->getLocStart());
			errs() << "ERROR: Unable to get Expr for sizeof or sizeof not in calloc().\n";
            errs() << "\n\n";
			return;
		}

		const Expr *count_expr = ce->getArg(0);
		if (count_expr == nullptr) {
            outputExpression(ce, errs(), ce->getLocStart());
			errs() << "ERROR: Unable to get Expr for element count in calloc().\n";
            errs() << "\n\n";
			return;
        }

		string type = sizeof_expr->getTypeOfArgument().getAsString();

		// Get the source text to modify the variable definition
		bool count_invalid;
		string count_src =
			Lexer::getSourceText(CharSourceRange::getTokenRange(count_expr->getSourceRange()),
								 *SM, LangOptions(), &count_invalid)
				.str();
		if (count_invalid) {
            outputExpression(ce, errs(), ce->getLocStart());
			errs() << "ERROR: Inavlid location in source text lookup.\n";
            errs() << "\n\n";
			return;
		}

		// Get the location after the semicolon following the calloc call
		SourceLocation after_semi_loc = Lexer::findLocationAfterToken(
			assign_expr->getLocEnd(), semi, *SM, LangOptions(), false);
		if (!after_semi_loc.isValid()) {
            outputExpression(ce, errs(), ce->getLocStart());
			outs() << "ERROR: Unable to find semicolon location after calloc call.\n";
            errs() << "\n\n";
			return;
		}

		// Remove the unneeded code (as opposed to comment it out)
		if (_remove_code) {
			// "Replace" the calloc call and assignment with nothing
			CharSourceRange range =
				CharSourceRange::getTokenRange(assign_expr->getLocStart(), after_semi_loc);
			Replacement calloc_rep(*SM, range, "");
			if (Error err = (*replacements)[calloc_rep.getFilePath()].add(calloc_rep)) {
                outputExpression(assign_expr, errs(), assign_expr->getLocStart());
				errs() << "ERROR: Error adding replacement that removes calloc call "
						  "and assignment.\n";
                errs() << "\n\n";
				return;
			}

            if (print_debug_output) {
                outputExpression(assign_expr, outs(), assign_expr->getLocStart());
                // replaced with nothing
                outs() << "replaced with:\n" << "" << '\n';
                outs() << "\n\n";
            }
        // Comment out the unneeded code (as opposed to remove it)
		} else {
			// Comment out the entire calloc call and variable assignment
			Replacement calloc_start_rep(*(SM), assign_expr->getLocStart(), 0,
										 "/*");
			if (Error err = (*replacements)[calloc_start_rep.getFilePath()].add(calloc_start_rep)) {
                outputExpression(assign_expr, errs(), assign_expr->getLocStart());
				errs() << "ERROR: Error adding calloc start replacement: \"/*\"\n";
                errs() << "\n\n";
				return;
			}
            // Adding start replacement succeeded.

			Replacement calloc_end_rep(*(SM), after_semi_loc, 0, "*/");
			if (Error err = (*replacements)[calloc_end_rep.getFilePath()].add(calloc_end_rep)) {
                outputExpression(assign_expr, errs(), assign_expr->getLocStart());
				errs() << "ERROR: Error adding calloc end replacement: \"*/\"\n";
                errs() << "\n\n";
				return;
			}
            // Adding end replacement succeeded.

            if (print_debug_output) {
                outputExpression(assign_expr, outs(), assign_expr->getLocStart());
                // replaced with comments
                outs() << "replaced with:\n";
                outs() << "/*" << getExprAsString(assign_expr) << "*/\n";
                outs() << "\n\n";
            }
		}

		// Change the variable type (typically void*) to type specified in call to
		// sizeof()
		Replacement type_rep(*(SM), var_decl->getLocStart(),
							 var_decl->getType().getAsString().length(), type + " ");
		if (Error err = (*replacements)[type_rep.getFilePath()].add(type_rep)) {
            outputDeclaration(var_decl, errs(), var_decl->getLocStart());
			errs() << "ERROR: Error adding type declaration replacement.\n";
            errs() << "\n\n";
			return;
		}

        string var_decl_name = var_decl->getNameAsString();

		// Add the array and size to variable declaration (X to X[const]).
		// Size comes from arguments to calloc call.
		string array_src = "[" + count_src + "]";
		Replacement array_rep(*(SM), var_decl->getLocEnd(),
							  var_decl_name.length(), var_decl_name + array_src);
		if (Error err = (*replacements)[array_rep.getFilePath()].add(array_rep)) {
            outputDeclaration(var_decl, errs(), var_decl->getLocStart());
			errs() << "ERROR: Error adding array declaration replacement.\n";
            errs() << "\n\n";
			return;
		}

        if (print_debug_output) {
            outputDeclaration(var_decl, outs(), var_decl->getLocStart());
            outs() << "replaced with:\n";
            outs() << type << " " << var_decl_name + array_src << '\n';
            outs() << "\n\n";
        }
	} else {
		errs() << "ERROR: MatchCallback called with unexpected match type.\n";
        errs() << "\n\n";
		return;
	}
}


void MakeStaticMatchCallback::outputExpression(const Expr* expr, raw_ostream& output, const SourceLocation& loc_start) const
{
    output << getExprAsString(expr) << '\n';
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}


void MakeStaticMatchCallback::outputDeclaration(const Decl* decl, raw_ostream& output, const SourceLocation& loc_start) const
{
    output << getDeclAsString(decl) << '\n';
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}


string MakeStaticMatchCallback::getExprAsString(const Expr* expression) const
{
    // References are easier to work with than pointers.
    const SourceManager &sm = *SM;
    // Sources:
    // https://stackoverflow.com/a/37963981/5500589
    // https://stackoverflow.com/a/32118182/5500589
    // https://stackoverflow.com/a/39598930/5500589
    LangOptions lopt;
    // Get the source range and manager.
    //SourceLocation startLoc = expression->getLocStart();
    //SourceLocation _endLoc = expression->getLocEnd();

    SourceLocation startLoc = sm.getFileLoc(expression->getLocStart());
    SourceLocation _endLoc = sm.getFileLoc(expression->getLocEnd());
    if (startLoc.isMacroID()) {
        startLoc = sm.getSpellingLoc(startLoc);
    }
    if (_endLoc.isMacroID()) {
        _endLoc = sm.getSpellingLoc(_endLoc);
    }
    SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, sm, lopt);

    // Use LLVM's lexer to get source text.
    return string(sm.getCharacterData(startLoc), sm.getCharacterData(endLoc) - sm.getCharacterData(startLoc));
}


string MakeStaticMatchCallback::getDeclAsString(const Decl* declaration) const
{
    // References are easier to work with than pointers.
    const SourceManager &sm = *SM;
    // Source:
    // https://stackoverflow.com/a/11154162/5500589
    LangOptions lopt;

    SourceLocation startLoc = declaration->getLocStart();
    SourceLocation _endLoc = declaration->getLocEnd();
    SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, sm, lopt);

    return string(sm.getCharacterData(startLoc), sm.getCharacterData(endLoc) - sm.getCharacterData(startLoc));
}
