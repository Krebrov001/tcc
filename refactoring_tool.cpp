/*
 * As part of LLVM coding standards, you should organize your include statements by putting local headers
 * first, followed by Clang and LLVM API headers. When two headers pertain to the same category,
 * order them alphabetically.
 */
// Header files for CallBack classes, each of which implements a single refactoring.
#include "FindVariablesMatchCallback.h"
#include "MakeStaticMatchCallback.h"
#include "RemoveHypotMatchCallback.h"
#include "RemoveMemcpyMatchCallback.h"
#include "RemovePointerMatchCallback.h"
#include "RemoveVariablesMatchCallback.h"

// Header files for Clang libraries.
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"
#include "llvm/Support/CommandLine.h"

using llvm::outs;
using llvm::errs;
using llvm::raw_ostream;
using llvm::report_fatal_error;

using llvm::cl::opt;
using llvm::cl::desc;
using llvm::cl::Positional;
using llvm::cl::OneOrMore;
using llvm::cl::extrahelp;
using llvm::cl::ValueRequired;
using llvm::cl::SetVersionPrinter;
using llvm::cl::ParseCommandLineOptions;

using clang::tooling::RefactoringTool;
using clang::tooling::newFrontendActionFactory;
using clang::tooling::CompilationDatabase;
using clang::tooling::FixedCompilationDatabase;
using clang::ast_matchers::MatchFinder;

/* Command line options description: */

// <bool> Says that this option takes no argument, and is to be treated as a bool value only.
// If this option is set, then the variable becomes true, otherwise it becomes false.
// This line of code has to be above the ParseCommandLineOptions function call, otherwise
// it will fail to parse the -debug option out, and the refactoring_tool executable will
// fail to recognize that command line option.
opt<bool> DebugOutput("debug", desc("This option enables diagnostic output."));

// Options to turn on various refactorings are optional.
opt<bool> RunAll("all", desc("This options turns on all supported refactorings."));
opt<bool> RunRemoveMemcpy("remove-memcpy", desc("This option turns on replacement of memcpy()."));
opt<bool> RunMakeStatic("make-static", desc("This option turns all dynamic memory allocations "
                                            "into stack ones, gets rid of calloc() and free()."));
opt<bool> RunRemovePointer("remove-pointer", desc("This option turns on removal of the global pointer."));
opt<bool> RunRemoveHypot("remove-hypot", desc("This option turns on replacement of hypot()."));
opt<bool> RunRemoveVariables("remove-variables", desc("This option removes unreferenced variables."));

// Option specifies the build path/directory.
opt<string> BuildPath(Positional, desc("[<build-path>]"));
// Options specifying the source files to refactor are one or more required.
opt<string> SourcePaths(Positional, desc("<source0> [... <sourceN>]"), OneOrMore, ValueRequired);

// Define an additional help message to be printed.
extrahelp CommonHelp(
    "\nArguments above mentioned in [ ] are optional (not required).\n"
    "<build-path> should be specified if specific compiler options\n"
    "are not provided on the command line.\n"
);

// Global variable is non static so that it can be externed into other translation units.
bool print_debug_output = false;


int main(int argc, const char **argv)
{
	// Format should be:
	// $ refactoring_tool tool_specific options -- clang_specific_options (not used)
    //  OR
    // $ refactoring_tool [options] [<build-path>] <source0> [... <sourceN>] --
	// By default, input file(s) are treated as positional arguments of the tool-specific part
    // of the options.

	/* Command line parsing: */

    // Define the information to be printed with the -version option.
    // Use a C++11 lambda function as the VersionPrinterTy func parameter to SetVersionPrinter().
    // Adjacent string literals are automatically concatenated in C and C++.
    SetVersionPrinter(
        [](raw_ostream& os) {
            const string version_information = "McLeod Refactoring Tool\n"
                                               "By Konstantin Rebrov\n"
                                               "development version 2.5\n";
            os << version_information;
        }
    );

	// Parses the command line arguments for you.
	ParseCommandLineOptions(argc, argv);
    string ErrorMessage;

    // Try to build a compilation datavase directly from the command-line.
    std::unique_ptr<CompilationDatabase> Compilations(
        FixedCompilationDatabase::loadFromCommandLine(argc, argv, ErrorMessage)
    );
    // If that failed.
    if (!Compilations) {
        // Load the compilation database using the given directory.
        // Destroys the old object pointed to by the unique_ptr (if it exists), and acquires
        // ownership of the rhs unique_ptr (or rather the underlying CompilationDatabase that it's
        // pointing to).
        Compilations = CompilationDatabase::loadFromDirectory(BuildPath, ErrorMessage);
        // And if that failed.
        if (!Compilations) {
            errs() << "ERROR: Could not build compilation database.\n";
            // Calls installed error handlers, prints a message generated by the llvm standard
            // library, and gracefully exits the program.
            report_fatal_error(ErrorMessage);
        }
    }

    // ParseCommandLineOptions has to be called before DebugOutput can be used.
    // It sets the value of the DebugOutput depending on the presence or absence of the
    // -debug flag in the command line arguments.
    // cl::opt<T> is a class which has an operator T() method, in this case it is used to convert
    // to bool. It's easier to work with build in data types than classes.
    print_debug_output = DebugOutput;

    // If the user specified -all option, then all refactorings should be enabled.
    if (RunAll) {
        RunRemoveMemcpy    = true;
        RunMakeStatic      = true;
        RunRemovePointer   = true;
        RunRemoveHypot     = true;
        RunRemoveVariables = true;
    }

	/* Run the Clang compiler for the each input file separately
     * (one input file - one output file).
     *	This is default ClangTool behaviour.
	 */
	// The first argument is a list of compilations.
	// The second argument is a list of source files to parse.
	RefactoringTool tool(*Compilations, SourcePaths);

    if (print_debug_output) {
	    outs() << "Starting match finder\n";
        outs() << "\n\n";
    }

    // This first MatchFinder is responsible for applying replacements in the first round.
	MatchFinder mf;

    /* Only add the AST matchers if the options enabling these refactorings are activated. */

	//// Remove memcpy details
	// Make the RemoveMemcpyMatchCallback class be able to recieve the match results.
	RemoveMemcpyMatchCallback remove_memcpy_match_callback(&tool.getReplacements());
    if (RunRemoveMemcpy) {
	    remove_memcpy_match_callback.getASTmatchers(mf);
    }

	//// Make static details
	MakeStaticMatchCallback make_static_match_callback(&tool.getReplacements());
    if (RunMakeStatic) {
	    make_static_match_callback.getASTmatchers(mf);
    }

    //// Remove pointer details
    RemovePointerMatchCallback remove_pointer_match_callback(&tool.getReplacements());
    if (RunRemovePointer) {
        remove_pointer_match_callback.getASTmatchers(mf);
    }

    //// Remove hypot details
    RemoveHypotMatchCallback remove_hypot_match_callback(&tool.getReplacements());
    if (RunRemoveHypot) {
        remove_hypot_match_callback.getASTmatchers(mf);
    }

    //// Remove variables details
    // NOTE: default constuctor takes no arguments.
    // FindVariablesMatchCallback does not do any replacements, it only counts the variables.
    FindVariablesMatchCallback find_variables_match_callback;
    if (RunRemoveVariables) {
        find_variables_match_callback.getASTmatchers(mf);
    }

	// Run the tool
	auto result = tool.runAndSave(newFrontendActionFactory(&mf).get());
	if (result != 0) {
		errs() << "Error in the Refactoring Tool: " << result << "\n";
		return result;
	}

    // Create a second RefactoringTool to run the second round of refactorings.
    // The first argument is a list of compilations.
	// The second argument is a list of source files to parse.
	RefactoringTool tool2(*Compilations, SourcePaths);
    // Create a second MatchFinder to run the new RefactoringTool through the source code again,
    // to apply replacements in the second round, mainly RemoveVariablesMatchCallback.
    MatchFinder mf2;

    //// Remove variables details
    // This one actually removes the variables.
    RemoveVariablesMatchCallback remove_variables_match_callback(&tool.getReplacements());
    if (RunRemoveVariables) {
        /* These Step 1 and Step 2 MUST be called in this order ALWAYS! */

        // Step 1: Get the list of variables to remove from the find_variables_match_callback.
        // Connect the remove_variables_match_callback with the find_variables_match_callback.
        find_variables_match_callback.collectResults(remove_variables_match_callback.getVector());

        // Step 2: Get the AST matchers describing them.
        remove_variables_match_callback.getASTmatchers(mf2);
    }

    // Run the new Refactoring Tool to apply replacements in the second round.
	auto result2 = tool2.runAndSave(newFrontendActionFactory(&mf2).get());
	if (result2 != 0) {
	    errs() << "Error in the Refactoring Tool: " << result2 << "\n";
	    return result2;
    }

    // Print diagnostic output.
    if (print_debug_output) {
        unsigned int num_refactorings = 0;

        if (RunRemoveMemcpy) {
            unsigned int num_matches_found = remove_memcpy_match_callback.getNumMatchesFound();
            unsigned int num_replacements = remove_memcpy_match_callback.getNumReplacements();
            num_refactorings += num_replacements;
	        outs() << "Found " << num_matches_found << " memcpy() matches\n";
	        outs() << "Performed " << num_replacements << " memcpy() replacements\n";
        }

        if (RunMakeStatic) {
            unsigned int num_free_calls = make_static_match_callback.num_free_calls();
            unsigned int num_calloc_calls = make_static_match_callback.num_calloc_calls();
            num_refactorings += num_free_calls;
            num_refactorings += num_calloc_calls;
            outs() << "Found " << num_free_calls << " calls to free()\n";
	        outs() << "Found " << num_free_calls << " calls to calloc()\n";
        }

        if (RunRemovePointer) {
            unsigned int num_global_pointers = remove_pointer_match_callback.getNumGlobalPointerRemovals();
            unsigned int num_pointer_uses = remove_pointer_match_callback.getNumPointerUseReplacements();
            unsigned int num_pointer_dereferences = remove_pointer_match_callback.getNumPointerDereferenceReplacements();
            num_refactorings += num_global_pointers;
            num_refactorings += num_pointer_uses;
            num_refactorings += num_pointer_dereferences;
            outs() << "Removed " << num_global_pointers << " global pointers.\n";
            outs() << "Replaced " << num_pointer_uses << " pointer uses.\n";
            outs() << "Replaced " << num_pointer_dereferences << " pointer dereferences.\n";
        }

        if (RunRemoveHypot) {
            unsigned int num_hypot_replacements = remove_hypot_match_callback.getNumHypotReplacements();
            num_refactorings += num_hypot_replacements;
            outs() << "Replaced " << num_hypot_replacements << " calls to hypot()\n";
        }

        if (RunRemoveVariables) {
            unsigned int num_unused_variables = remove_variables_match_callback.getNumUnusedVariableRemovals();
            num_refactorings += num_unused_variables;
            outs() << "Removed " << num_unused_variables << " unused variables.\n";
        }

        outs() << '\n' << "Performed " << num_refactorings << " total refactorings\n";
    }

	return 0;
}
