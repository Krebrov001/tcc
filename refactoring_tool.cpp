/*
 * As part of LLVM coding standards, you should organize your include statements by putting local headers
 * first, followed by Clang and LLVM API headers. When two headers pertain to the same category,
 * order them alphabetically.
 */
#include "RemoveMemcpyMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"

#include <cstring>
#include <string>

using std::string;

using llvm::outs;
using llvm::errs;
using llvm::nulls;
using llvm::cl::opt;
using llvm::cl::desc;
using llvm::cl::OptionCategory;

using clang::tooling::CommonOptionsParser;
using clang::tooling::RefactoringTool;
using clang::tooling::newFrontendActionFactory;
using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::StatementMatcher;
using clang::ast_matchers::hasName;
using clang::ast_matchers::functionDecl;
using clang::ast_matchers::cStyleCastExpr;
using clang::ast_matchers::callee;
using clang::ast_matchers::callExpr;
using clang::ast_matchers::hasAncestor;
using clang::ast_matchers::unless;
using clang::ast_matchers::hasSourceExpression;

// Global variable is non static so that it can be externed into other translation units.
bool print_debug_output = false;

// <bool> Says that this option takes no argument, and is to be treated as a bool value only.
// If this option is set, then the variable becomes true, otherwise it becomes false.
opt<bool> DebugOutput("debug", desc("This option enables diagnostic output."));


int main(int argc, const char **argv)
{
	// Format should be:
	// $ ./a.out tool_specific options -- clang_specific_options (not used)
	// By default, input file(s) treated as a positional arguments of the tool-specific part of the options

	// strncmp returns 0 if the strings match, and non-0 otherwise
	if (argc < 3 || strncmp(argv[argc - 1], "--", 2) != 0) {
	    errs() << "Usage:\n$ " << argv[0] << " <source files> --" << '\n';
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

    // CommonOptionsParser optionsParser has to be constructed before DebugOutput can be used.
    // Internally, it calls cl::ParseCommandLineOptions, which sets the value of the DebugOutput
    // depending on the presence or absence of the -debug flag in the command line arguments.
    // cl::opt<T> is a class which has an operator T() method, in this case it is used to convert
    // to bool. It's easier to work with build in data types than classes.
    print_debug_output = DebugOutput;

	/* Run the Clang compiler for the each input file separately
     * (one input file - one output file).
     *	This is default ClangTool behaviour.
	 */
	// The first argument is a list of compilations.
	// The second argument is a list of source files to parse.
	RefactoringTool remove_memcpy_tool(optionsParser.getCompilations(), optionsParser.getSourcePathList());

    if (print_debug_output) {
	    outs() << "Starting match finder\n";
    }

	// Make the RemoveMemcpyMatchCallback class be able to recieve the match results.
	RemoveMemcpyMatchCallback matcher(&remove_memcpy_tool.getReplacements());

	MatchFinder mf;
	// match all instances of:
    // (void) memcpy(/* ... */);
	StatementMatcher cast_memcpy_matcher = cStyleCastExpr(hasSourceExpression(callExpr(callee(functionDecl(hasName("memcpy")))))).bind("cast_memcpy_call");
    // match all instances of:
    // memcpy(/* ... */);
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
