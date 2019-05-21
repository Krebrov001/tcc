/*
 * Add header comments here.
 */
// Clang LLVM library includes
//#include "clang/AST/ASTConsumer.h"
//#include "clang/AST/ASTContext.h"
//#include "clang/AST/ParentMap.h"
//#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
//#include "clang/ASTMatchers/ASTMatchers.h"
//#include "clang/Rewrite/Core/Rewriter.h"
//#include "clang/Frontend/CompilerInstance.h"
//#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h" 
#include "clang/Tooling/Refactoring.h"
//#include "clang/Tooling/Tooling.h"
// C library includes
//#include <cstdlib>
//#include <cstdio>
// C++ library includes
#include <iostream>
//#include <string>

using namespace std;
using namespace llvm;
using namespace llvm::cl;
using namespace clang;
using namespace clang::tooling;
using namespace clang::ast_matchers;


class MemcpyMatcher : public MatchFinder::MatchCallback
{
  private:
    string getArgString(const Expr *expr, const string& var) const {
		string arg_string;
		const ValueDecl *valdecl = nullptr;

		// Parse tree until entire type string is determined
		while( expr ){
			if( auto memexp = dyn_cast<MemberExpr>(expr) ){
				valdecl = dyn_cast<ValueDecl>(memexp->getMemberDecl());
				arg_string = "." + valdecl->getNameAsString();
				expr = memexp->getBase();
			}
			else if( auto varexp = dyn_cast<DeclRefExpr>(expr) ){
				const ValueDecl *tmpdecl = dyn_cast<ValueDecl>(varexp->getDecl());
				// Don't erase declaration found with member expression
				if( !valdecl ) {
					valdecl = tmpdecl;
				}
				arg_string = tmpdecl->getNameAsString() + arg_string;
				expr = nullptr;
			}
			else if( auto unaryop = dyn_cast<UnaryOperator>(expr) ){
				expr = unaryop->getSubExpr();
			}
			else if( auto asubexp = dyn_cast<ArraySubscriptExpr>(expr) ){
				expr = asubexp->getBase()->IgnoreParenCasts();
			}
			else {
				outs() << "ERROR: Unable to further iteratively parse expression.\n";
			}
		}

		if( !valdecl ){
			outs() << "ERROR: Member expression not a value declaration\n";
		}
		if( dyn_cast<clang::PointerType>(valdecl->getType().getTypePtr()) ){
			arg_string += "[" + var + "]";
		}
		else if( dyn_cast<clang::ConstantArrayType>(valdecl->getType().getTypePtr()) ){
			arg_string += "[" + var + "]";
		}

		return arg_string;
	}

	string getSizeString(const Expr *expr, const SourceManager &sm) const {
		string lhs_string;
		if( const BinaryOperator *binop = dyn_cast<BinaryOperator>(expr) ) {
			const Expr *lhs = binop->getLHS()->IgnoreParenCasts();
			const Expr *rhs = binop->getRHS()->IgnoreParenCasts();

			lhs_string = getSizeString(lhs, sm);
			lhs_string += binop->getOpcodeStr();
			lhs_string += getSizeString(rhs, sm);
		}
		else if( const DeclRefExpr *varexp = dyn_cast<DeclRefExpr>(expr) ){
			const ValueDecl *vardecl = dyn_cast<ValueDecl>(varexp->getDecl());
			if( vardecl ) {
				lhs_string = vardecl->getNameAsString();
			}
			else {
				lhs_string = "ERROR: DeclRefExpr without ValueDecl";
			}
		}
		else if( const UnaryExprOrTypeTraitExpr *ttexp = dyn_cast<UnaryExprOrTypeTraitExpr>(expr) ){
			if( UETT_SizeOf == ttexp->getKind() ){
				lhs_string = "1";
			}
			else {
				lhs_string = "ERROR: Type trait not sizeof";
			}
		}
		else if( const IntegerLiteral *intexp = dyn_cast<IntegerLiteral>(expr) ){
			lhs_string = intexp->getValue().toString(10, false); // Args are base, signed
		}
		else {
			outs() << "ERROR: Unable to determine size expression.\n";
		}

		return lhs_string;
	}

  public:
    MemcpyMatcher(map<string, Replacements> * replacements)
		: replacements(replacements) {}
    /* Callback method for the MatchFinder.
	 * @param result - Found matching results.
	 */
	virtual void run(const MatchFinder::MatchResult& result)
	{
		const CallExpr* call_expr = nullptr;
		SourceLocation loc_start;

		// Remove the C-style cast operator before some memcpy calls.
		// (void) memcpy(dst, src, size) a common pattern.
		const CStyleCastExpr *cast_expr = result.Nodes.getNodeAs<CStyleCastExpr>("cast_memcpy_call");
		if ( cast_expr ){
			call_expr = dyn_cast<const CallExpr>(cast_expr->getSubExpr());
			loc_start = cast_expr->getLocStart();
		}
		else {
			call_expr = result.Nodes.getNodeAs<CallExpr>("memcpy_call");
			loc_start = call_expr->getLocStart();
		}

		if ( call_expr ) {
			string dst = getArgString(call_expr->getArg(0)->IgnoreParenCasts(), "i");
			string src = getArgString(call_expr->getArg(1)->IgnoreParenCasts(), "i");
			string size = getSizeString(call_expr->getArg(2)->IgnoreParenCasts(), *result.SourceManager);
			unsigned indent = (*result.SourceManager).getPresumedLoc(loc_start).getColumn();
			// Decrement, but don't let it go negative
			if( indent > 0 ){
				--indent;
			}
			string replacement = "{\r\n";
			replacement.append(indent+2, ' ');
			replacement.append("for(int i = 0; i < " + size + "; ++i) {\r\n");
			replacement.append(indent+4, ' ');
			replacement.append(dst + " = " + src + ";\r\n");
			replacement.append(indent+2, ' ');
			replacement.append("}\r\n");
			replacement.append(indent, ' ');
			replacement.append("}");

			// Get the location after the semicolon following the memcpy() call
            SourceLocation after_semi_loc = Lexer::findLocationAfterToken(call_expr->getLocEnd(), tok::semi, *result.SourceManager, LangOptions(), false);
            if (!after_semi_loc.isValid()) {
                outs() << "ERROR: Unable to find semicolon location after memcpy() call.\n";
                return;
            }
	        CharSourceRange range = CharSourceRange::getTokenRange(loc_start, after_semi_loc);
            Replacement memcpy_rep(*result.SourceManager, range, replacement);
		
		    if (Error err = (*replacements)[memcpy_rep.getFilePath()].add(memcpy_rep)) {
                outs() << "ERROR: Error adding replacement that removes memcpy() call.\n";
                return;
            }
	    }
	}

  private:
    map<string, Replacements>* replacements;
	// Add other variables here as needed.
};


int main(int argc, const char **argv)
{
	// Format should be:
	// $ ./a.out tool_specific options -- clang_specific_options (not used)
	// By default, input file(s) treated as a positional arguments of the tool-specific part of the options
	
	// strncmp returns 0 if the strings match, and non-0 otherwise
	if (argc < 3 && (strncmp(argv[argc - 1], "--", 2)) != 0) {
		cerr << "Usage:\n$ " << argv[0] << " <source files> --" << endl;
		return -1;  // error code
	}
	
	/* Command line options description: */
	
	// Define code generation tool option category.
	// Prints a tool-specific message about arguments when --help is used
	OptionCategory remove_memcpy_tool_category("remove_memcpy name", "remove_memcpy description");
    // Define option for output file name.
//    opt<string> OutputFilename("o", desc("Specify output filename"), value_desc("filename"));
	
	// Define comomn help message printer.
//    extrahelp common_help(CommonOptionsParser::HelpMessage);
    // Define specific help message printer.
 //   extrahelp more_help("This program replaces att instances of memcpy() in C/C++ code with a loop."); 
    
	/* Command line parsing: */
	
	// Parses the command line arguments for you.
	// The third argument is a tool-specific options category.
	CommonOptionsParser optionsParser(argc, argv, remove_memcpy_tool_category);
	/* Run the Clang compiler for the each input file separately
     * (one input file - one output file).
     *	This is default ClangTool behaviour.
	 */
	// The first argument is a list of compilations.
	// The second argument is a list of source files to parse.
	RefactoringTool remove_memcpy_tool(optionsParser.getCompilations(), optionsParser.getSourcePathList());
	
//	outs() << "Starting match finder\n";
	
	// Make the MemcpyMatcher class be able to recieve the match results.
	MemcpyMatcher matcher(&remove_memcpy_tool.getReplacements());

	MatchFinder mf;
	// Match all callexpressions whose function declaration is named "memcpy",
	// match all calls to the memcpy() function,
	// and bind the resultant nodes to the string "memcpy_call", to be later retrieved in the match callback.
	StatementMatcher cast_memcpy_matcher = cStyleCastExpr(hasSourceExpression(callExpr(callee(functionDecl(hasName("memcpy")))))).bind("cast_memcpy_call");
	StatementMatcher memcpy_matcher = callExpr(callee(functionDecl(hasName("memcpy"))), unless(hasAncestor(cStyleCastExpr()))).bind("memcpy_call");
	//StatementMatcher memcpy_matcher = callExpr(callee(functionDecl(hasName("memcpy")))).bind("memcpy_call");
//	StatementMatcher cast_matcher = cStyleCastExpr().bind("cast");
	mf.addMatcher(memcpy_matcher, &matcher);
	mf.addMatcher(cast_memcpy_matcher, &matcher);
//	mf.addMatcher(cast_matcher, &matcher);
	
	// Run the compiler.
	auto result = remove_memcpy_tool.runAndSave(newFrontendActionFactory(&mf).get());
	
	return result;
}
