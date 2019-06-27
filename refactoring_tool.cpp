/*
 * As part of LLVM coding standards, you should organize your include statements by putting local headers
 * first, followed by Clang and LLVM API headers. When two headers pertain to the same category,
 * order them alphabetically.
 */
#include "RemoveMemcpyMatchCallback.h"
#include "RemovePointerMatchCallback.h"
#include "MakeStaticMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"

using llvm::outs;
using llvm::errs;
using llvm::cl::opt;
using llvm::cl::desc;
using llvm::cl::OptionCategory;

using clang::tooling::CommonOptionsParser;
using clang::tooling::RefactoringTool;
using clang::tooling::newFrontendActionFactory;
using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::StatementMatcher;
using clang::ast_matchers::DeclarationMatcher;
using clang::ast_matchers::hasName;
using clang::ast_matchers::functionDecl;
using clang::ast_matchers::cStyleCastExpr;
using clang::ast_matchers::callee;
using clang::ast_matchers::callExpr;
using clang::ast_matchers::hasAncestor;
using clang::ast_matchers::hasDescendant;
using clang::ast_matchers::unless;
using clang::ast_matchers::hasSourceExpression;
using clang::ast_matchers::declRefExpr;
using clang::ast_matchers::varDecl;
using clang::ast_matchers::to;
using clang::ast_matchers::hasGlobalStorage;
using clang::ast_matchers::pointerType;
using clang::ast_matchers::hasType;
using clang::ast_matchers::isArrow;
using clang::ast_matchers::memberExpr;
using clang::ast_matchers::isExpansionInMainFile;
using clang::ast_matchers::declRefExpr;
using clang::ast_matchers::namedDecl;

// Global variable is non static so that it can be externed into other translation units.
bool print_debug_output = false;

int main(int argc, const char **argv)
{
	// Format should be:
	// $ ./a.out tool_specific options -- clang_specific_options (not used)
	// By default, input file(s) treated as a positional arguments of the tool-specific part of the options

	/* Command line options description: */

	// Define code generation tool option category.
	// Prints a tool-specific message about arguments when --help is used
	OptionCategory tool_category("remove_memcpy name", "remove_memcpy description");
    // Define option for output file name.

	/* Command line parsing: */

    // <bool> Says that this option takes no argument, and is to be treated as a bool value only.
    // If this option is set, then the variable becomes true, otherwise it becomes false.
    // This line of code has to be above the declaration of the CommonOptionsParser, otherwise
    // it will fail to parse the -debug option out, and the refactoring_tool executable will
    // fail to recognize that command line option.
    opt<bool> DebugOutput("debug", desc("This option enables diagnostic output."));

    opt<bool> RunRemoveMemcpy("remove-memcpy", desc("This option turns on removal of memcpy()."));
    opt<bool> RunMakeStatic("make-static", desc("This option turns all dynamic memory allocations"
                                                "into stack ones, gets rid of calloc() and free()."));
    opt<bool> RunRemovePointer("remove-pointer", desc("This option turns on removal of the global pointer."));

	// Parses the command line arguments for you.
	// The third argument is a tool-specific options category.
    // This line of code has to be below the declaration of all opt<T> variables.
	CommonOptionsParser optionsParser(argc, argv, tool_category);

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
	RefactoringTool tool(optionsParser.getCompilations(), optionsParser.getSourcePathList());

    if (print_debug_output) {
	    outs() << "Starting match finder\n";
        outs() << "\n\n";
    }

	MatchFinder mf;

    // Only add the StatementMatchers if the options enabling these refactorings are activated.

	//// Remove memcpy details
	// Make the RemoveMemcpyMatchCallback class be able to recieve the match results.
	RemoveMemcpyMatchCallback remove_memcpy_match_callback(&tool.getReplacements());
    if (RunRemoveMemcpy) {
	    // match all instances of:
        // (void) memcpy(/* ... */);
	    StatementMatcher cast_memcpy_matcher = cStyleCastExpr(hasSourceExpression(callExpr(callee(functionDecl(hasName("memcpy")))))).bind("cast_memcpy_call");
        // match all instances of:
        // memcpy(/* ... */);
	    StatementMatcher memcpy_matcher = callExpr(callee(functionDecl(hasName("memcpy"))), unless(hasAncestor(cStyleCastExpr()))).bind("memcpy_call");
	    mf.addMatcher(memcpy_matcher, &remove_memcpy_match_callback);
	    mf.addMatcher(cast_memcpy_matcher, &remove_memcpy_match_callback);
    }

	//// Make static details
	MakeStaticMatchCallback make_static_match_callback(&tool.getReplacements());
    if (RunMakeStatic) {
	    StatementMatcher free_call_matcher = callExpr(callee(functionDecl(hasName("free")))).bind("free_call");
	    StatementMatcher calloc_assign_matcher = binaryOperator(hasOperatorName("="),
		hasRHS(ignoringParenImpCasts((has(callExpr(callee(functionDecl(hasName("calloc"))))))))).bind("calloc_assign");
	    mf.addMatcher(free_call_matcher, &make_static_match_callback);
	    mf.addMatcher(calloc_assign_matcher, &make_static_match_callback);
    }

    //// Remove pointer details
    RemovePointerMatchCallback remove_pointer_match_callback(&tool.getReplacements());
    if (RunRemovePointer) {
        StatementMatcher pointer_dereference_matcher = memberExpr(
            isArrow(),
            hasDescendant(declRefExpr( to(namedDecl(hasName("complete_system_io_M"))) ))
        ).bind("pointer_dereference");

        StatementMatcher pointer_use_matcher = declRefExpr(to(varDecl(
           hasGlobalStorage(),
           hasType(pointerType()),
           hasName("complete_system_io_M")
        )), unless(hasAncestor( memberExpr(isArrow()) ))
        ).bind("pointer_use");

        DeclarationMatcher global_pointer_matcher = varDecl(
            hasGlobalStorage(),
            hasType(pointerType()),
            isExpansionInMainFile(),
            hasName("complete_system_io_M")
        ).bind("global_pointer");

        mf.addMatcher(pointer_use_matcher, &remove_pointer_match_callback);
        mf.addMatcher(pointer_dereference_matcher, &remove_pointer_match_callback);
        mf.addMatcher(global_pointer_matcher, &remove_pointer_match_callback);
    }

	// Run the tool
	auto result = tool.runAndSave(newFrontendActionFactory(&mf).get());

	if (result != 0) {
		errs() << "Error in the Refactoring Tool: " << result << "\n";
		return result;
	}

    // Print diagnostic output.
    if (print_debug_output) {
        if (RunRemoveMemcpy) {
	        outs() << "Found " << remove_memcpy_match_callback.getNumMatchesFound() << " memcpy() matches found\n";
	        outs() << "Performed " << remove_memcpy_match_callback.getNumReplacements() << " memcpy() replacements\n";
        }
        if (RunMakeStatic) {
            outs() << "Found " << make_static_match_callback.num_free_calls() << " calls to free()\n";
	        outs() << "Found " << make_static_match_callback.num_calloc_calls() << " calls to calloc()\n";
        }
        if (RunRemovePointer) {
            outs() << "Removed " << remove_pointer_match_callback.getNumGlobalPointerRemovals() << " global pointers.\n";
            outs() << "Replaced " << remove_pointer_match_callback.getNumPointerUseReplacements() << " pointer uses.\n";
            outs() << "Replaced " << remove_pointer_match_callback.getNumPointerDereferenceReplacements() << " pointer dereferences.\n";
        }
    }

	return 0;
}
