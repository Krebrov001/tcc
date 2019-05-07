/*
 * Add header comments here.
 */
// Clang LLVM library includes
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/ParentMap.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h" 
#include "clang/Tooling/Refactoring.h"
#include "clang/Tooling/Tooling.h"
// C library includes
#include <cstdlib>
#include <cstdio>
// C++ library includes
#include <iostream>
#include <string>

using namespace std;
using namespace llvm;
using namespace llvm::cl;
using namespace clang;
using namespace clang::tooling;
using namespace clang::ast_matchers;


class MemcpyMatcher : public MatchFinder::MatchCallback
{
  public:
    MemcpyMatcher(map<string, Replacements> * replacements)
		: replacements(replacements) {}
    /* Callback method for the MatchFinder.
	 * @param result - Found matching results.
	 */
	virtual void run(const MatchFinder::MatchResult& result)
	{
		const CallExpr* call_expr = result.Nodes.getNodeAs<CallExpr>("memcpy_call");
		if (call_expr != NULL) {
			
			vector<string> arguments;			
			tok::TokenKind tokens[3] = {tok::comma, tok::comma, tok::r_paren}; 
			for (int i = 0; i < 3; ++i) {
				const Expr* argument = call_expr->getArg(i)->IgnoreImplicit();
                SourceLocation end_of_expression = Lexer::findLocationAfterToken(
				 argument->getLocEnd(), tokens[i], *result.SourceManager, LangOptions(), false);
                if (!end_of_expression.isValid()) {
                    outs() << "ERROR: Unable to find token location at the end of argument " << i << "\n";
                    return;
                }
	            CharSourceRange range = CharSourceRange::getTokenRange(argument->getLocStart(), end_of_expression);
			    const string text = Lexer::getSourceText(range, *result.SourceManager, LangOptions());
			    arguments.push_back(text);  // add the string to the list of all arguments
			}
			
			arguments[0].pop_back();  // delete the ','
			arguments[1].pop_back();  // delete the ','
			arguments[2].pop_back();  // delete the ';'
			arguments[2].pop_back();  // delete the ')'
			/*
			for (int i = 0; i < 3; ++i) {
				cout << arguments[i] << endl;
		    }
			*/
			
			string loop_header = "for (int mcl_counter = 0; mcl_counter <" + arguments[2] + "; ++mcl_counter) {";
			string front_end = "((unsigned char*) ", rear_end = ")[mcl_counter]";
			string full_loop = loop_header + front_end + arguments[0] + rear_end + "=" + front_end + arguments[1]
			                               + rear_end + ";}";
			
			// Get the location after the semicolon following the memcpy() call
            SourceLocation after_semi_loc = Lexer::findLocationAfterToken(
             call_expr->getLocEnd(), tok::semi, *result.SourceManager, LangOptions(), false);
            if (!after_semi_loc.isValid()) {
                outs() << "ERROR: Unable to find semicolon location after memcpy() call.\n";
                return;
            }
	        CharSourceRange range = CharSourceRange::getTokenRange(call_expr->getLocStart(), after_semi_loc);
            Replacement memcpy_rep(*result.SourceManager, range, full_loop);
		
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
    opt<string> OutputFilename("o", desc("Specify output filename"), value_desc("filename"));
	
	// Define comomn help message printer.
    extrahelp common_help(CommonOptionsParser::HelpMessage);
    // Define specific help message printer.
    extrahelp more_help("This program replaces att instances of memcpy() in C/C++ code with a loop."); 
    
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
	
	outs() << "Starting match finder\n";
	
	MatchFinder mf;
	// Make the MemcpyMatcher class be able to recieve the match results.
	MemcpyMatcher matcher(&remove_memcpy_tool.getReplacements());
	// Match all callexpressions whose function declaration is named "memcpy",
	// match all calls to the memcpy() function,
	// and bind the resultant nodes to the string "memcpy_call", to be later retrieved in the match callback.
	StatementMatcher memcpy_matcher = callExpr(callee(functionDecl(hasName("memcpy")))).bind("memcpy_call");
	mf.addMatcher(memcpy_matcher, &matcher);
	
	// Run the compiler.
	auto result = remove_memcpy_tool.runAndSave(newFrontendActionFactory(&mf).get());
	
	return result;
}
