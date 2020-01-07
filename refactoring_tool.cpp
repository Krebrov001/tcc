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
#include "RemoveMemsetMatchCallback.h"
#include "RemovePointerMatchCallback.h"
#include "RemoveVariablesMatchCallback.h"
#include "RemoveAssignmentMatchCallback.h"
#include "StaticAnalysisActionFactory.h"
#include "RemoveInitializeMatchCallback.h"

// Header files for Clang and LLVM libraries.
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/CompilationDatabase.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"
#include "llvm/Support/CommandLine.h"
//#include "llvm/Support/ErrorHandling.h"

#include <string>
#include <map>
#include <utility>  // for std::pair
#include <vector>

using std::string;
using std::map;
using std::vector;
using std::pair;

using llvm::outs;
using llvm::errs;
using llvm::raw_ostream;
//using llvm::report_fatal_error;
using llvm::IntrusiveRefCntPtr;

using llvm::vfs::OverlayFileSystem;
using llvm::vfs::getRealFileSystem;

using llvm::cl::opt;
using llvm::cl::desc;
using llvm::cl::list;
using llvm::cl::Positional;
using llvm::cl::OneOrMore;
using llvm::cl::extrahelp;
using llvm::cl::ValueRequired;
using llvm::cl::SetVersionPrinter;
using llvm::cl::OptionCategory;

using clang::PCHContainerOperations;
using clang::DiagnosticIDs;
using clang::DiagnosticOptions;

using clang::tooling::ClangTool;
using clang::tooling::RefactoringTool;
using clang::tooling::newFrontendActionFactory;
using clang::tooling::CompilationDatabase;
using clang::tooling::FixedCompilationDatabase;
using clang::tooling::CommonOptionsParser;

using clang::ast_matchers::MatchFinder;


/* Command line options description: */

// Apply a custom category to all command-line options so that they are the
// only ones displayed.
// The category tells the CommonOptionsParser how to parse the argc and argv.
OptionCategory StarToolCategory("refactoring_tool options");

// <bool> Says that this option takes no argument, and is to be treated as a bool value only.
// If this option is set, then the variable becomes true, otherwise it becomes false.
// This line of code has to be above the ParseCommandLineOptions function call, otherwise
// it will fail to parse the -debug option out, and the refactoring_tool executable will
// fail to recognize that command line option.
opt<bool> DebugOutput("debug", desc("This option enables diagnostic output."));

// Define the list of tool specific command line options.
#define OPTIONS_LIST  \
    X(RunRemoveMemcpy, "remove-memcpy", "This option turns on replacement of memcpy().")  \
    X(RunRemoveMemset, "remove-memset", "This option turns on replacement of memset().")  \
    X(RunMakeStatic, "make-static", "This option turns all dynamic memory allocations "   \
                                    "into stack ones, gets rid of calloc() and free().")  \
    X(RunRemovePointer, "remove-pointer", "This option turns on removal of the global pointer.")  \
    X(RunRemoveHypot, "remove-hypot", "This option turns on replacement of hypot().")     \
    X(RunRemoveVariables, "remove-variables", "This option removes unreferenced variables.")  \
    X(RunRemoveAssignment, "remove-assignment", "This option removes unreferenced assignments.") \
    X(RunRemoveInitialize, "remove-initialize", "This option removes the initialize function.")

// Options to turn on various refactorings are optional.
opt<bool> RunAll("all", desc("This options turns on all supported refactorings."));
#define X(VariableName, command_argument, description)  \
opt<bool> VariableName(command_argument, desc(description));
OPTIONS_LIST
#undef X

// Option specifies the build path/directory.
//opt<string> BuildPath(Positional, desc("[<build-path>]"));
// Options specifying the source files to refactor are one or more required.
//list<string> SourcePaths(Positional, desc("<source0> [... <sourceN>]"), OneOrMore, ValueRequired);
//opt<string> SourcePaths(Positional, desc("<source0> [... <sourceN>]"), ValueRequired);

// Define an additional help message to be printed.
extrahelp CommonHelp(
    "\n"
    "  --" "debug" "\t" "This option enables diagnostic output." "\n"
    "  --" "all" "\t" "This options turns on all supported refactorings." "\n"
    #define X(VariableName, command_argument, description)  \
    "  --" command_argument "\t" description "\n"
    OPTIONS_LIST
    #undef X
    "\n"
    "\nArguments above mentioned in [ ] are optional (not required).\n"
    "<build-path> should be specified if specific compiler options\n"
    "are not provided on the command line.\n"
);

// Global variable is non static so that it can be externed into other translation units.
bool print_debug_output = false;


int main(int argc, const char **argv) {
    // Format should be:
    // $ refactoring_tool tool_specific_options -- clang_specific_options
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
            const string version_information = "ONR Project STAR Tool\n"
                                               "By Konstantin Rebrov\n"
                                               "development version Dec 2019\n";
            os << version_information;
        }
    );

    CommonOptionsParser OptionsParser(argc, argv, StarToolCategory);

    CompilationDatabase& Compilations = OptionsParser.getCompilations();
    const vector<string>& SourcePaths = OptionsParser.getSourcePathList();

    // CommonOptionsParser has to be constructed before DebugOutput can be used.
    // It sets the value of the DebugOutput depending on the presence or absence of the
    // -debug flag in the command line arguments.
    // cl::opt<T> is a class which has an operator T() method, in this case it is used to convert
    // to bool. It's easier to work with build in data types than classes.
    print_debug_output = DebugOutput;

    bool RunStaticAnalyzer = false;

    // If the user specified -all option, then all refactorings should be enabled.
    if (RunAll) {
        #define X(VariableName, command_argument, description)  \
        VariableName = true;
        OPTIONS_LIST
        #undef X
    }

    // Do not run the Static Analyzer unless you really need to.
    // Static Analysis is an exponential time algorithm, so it should not be run every time
    // the program runs.
    // Only the list of refactorings that depend on the Clang Static Analyzer should be in the
    // if ()
    if (RunRemoveAssignment /* || ... */) {
        RunStaticAnalyzer = true;
    }

    // The first argument is a list of compilations.
    // The second argument is a list of source files to parse.
    RefactoringTool tool1(Compilations, SourcePaths);

    //// Remove Assignment details
    // This CallBack class gets the SourceLocations from the StaticAnalysisDiagnosticConsumer,
    // and applies the replacements.
    RemoveAssignmentMatchCallback analysis_match_callback(&tool1.getReplacements());

    if (RunStaticAnalyzer) {
        /* Setup and run the Static Analyzer. */

        ClangTool Tool(Compilations, SourcePaths);

        // Create a custom ActionFactory.
        StaticAnalysisActionFactory Factory(analysis_match_callback.getVector());

        // Runs the Static Analyzer over all files specified in the command line (like RefactoringTool).
        // Fills up the StaticAnalysisDiagnosticConsumer with the information.
        auto result = Tool.run(&Factory);
        if (result != 0) {
		    errs() << "Error in running the Static Analyzer: " << result << "\n";
		    return result;
	    }
    //}

        /* Setup and run the first round of refactorings. */
        // The first round is only for applying the refactorings that are dependent on the
        // Static Analysis. AST-based refactorings should be put in the second and later rounds of
        // refactorings.

        // This first MatchFinder is responsible for applying refactorings in the first round.
	    MatchFinder mf1;

        if (RunRemoveAssignment) {
            analysis_match_callback.getASTmatchers(mf1);
        }

        // Run the RefactoringTool to perform the first round of refactorings.
        auto result1 = tool1.runAndSave(newFrontendActionFactory(&mf1).get());
        if (result1 != 0) {
            errs() << "Error in the first round of refactorings: " << result1 << "\n";
            return result1;
        }
    }  // if (RunStaticAnalyzer)

    /* Setup and run the second round of refactorings. */

    // Create a second RefactoringTool to run the second round of refactorings.
    // The first argument is a list of compilations.
	// The second argument is a list of source files to parse.
	RefactoringTool tool2(Compilations, SourcePaths);
    // Create a second MatchFinder to run the new RefactoringTool through the source code again,
    // to apply refactorings in the second round.
    MatchFinder mf2;

    //// Remove initialize details
    // It's constructor also takes the name of the current file being processed as an argument.
    // Remove initialize matchers should be added first, because they completely remove the
    // initialize function, and other Match Callbacks also apply refactorings in the initialize
    // function, so by removing that function first, we can save those other Match Callbacks some
    // work, making our code more efficient.
    RemoveInitializeMatchCallback remove_initialize_match_callback(&tool2.getReplacements(), SourcePaths[0]);
    if (RunRemoveInitialize) {
        remove_initialize_match_callback.getASTmatchers(mf2);
    }

    //// Remove memcpy details
	RemoveMemcpyMatchCallback remove_memcpy_match_callback(&tool2.getReplacements());
    if (RunRemoveMemcpy) {
	    remove_memcpy_match_callback.getASTmatchers(mf2);
    }

	//// Make static details
	MakeStaticMatchCallback make_static_match_callback(&tool2.getReplacements());
    if (RunMakeStatic) {
	    make_static_match_callback.getASTmatchers(mf2);
    }

    //// Remove pointer details
    RemovePointerMatchCallback remove_pointer_match_callback(&tool2.getReplacements());
    if (RunRemovePointer) {
        remove_pointer_match_callback.getASTmatchers(mf2);
    }

    //// Remove hypot details
    RemoveHypotMatchCallback remove_hypot_match_callback(&tool2.getReplacements());
    if (RunRemoveHypot) {
        remove_hypot_match_callback.getASTmatchers(mf2);
    }

    //// Remove variables details
    // NOTE: default constuctor takes no arguments.
    // FindVariablesMatchCallback does not do any replacements, it only counts the variables.
    FindVariablesMatchCallback find_variables_match_callback;
    if (RunRemoveVariables) {
        find_variables_match_callback.getASTmatchers(mf2);
    }

    // Run the RefactoringTool to perform the second round of refactorings.
    auto result2 = tool2.runAndSave(newFrontendActionFactory(&mf2).get());
    if (result2 != 0) {
        errs() << "Error in the second round of refactorings: " << result2 << "\n";
        return result2;
    }

    /* Setup and run the third round of refactorings. */

    // Create a third RefactoringTool to run the third round of refactorings.
    // The first argument is a list of compilations.
	// The second argument is a list of source files to parse.
	RefactoringTool tool3(Compilations, SourcePaths);
    // Create a third MatchFinder to run the new RefactoringTool through the source code again,
    // to apply refactorings in the second round.
    // IMPORTANT: RemoveVariablesMatchCallback and RemoveMemsetMatchCallback have to be run in the
    // third round of refactorings because they depend on other results that were run in the
    // second round of the refactorings.
    // RemoveMemsetMatchCallback needs RemovePointerMatchCallback to run first and remove the
    // global pointers before it runs.
    MatchFinder mf3;

    //// Remove variables details
    // This one actually removes the variables.
    RemoveVariablesMatchCallback remove_variables_match_callback(&tool3.getReplacements());
    if (RunRemoveVariables) {
        /* These Step 1 and Step 2 MUST be called in this order ALWAYS! */

        // Step 1: Get the list of variables to remove from the find_variables_match_callback.
        // Connect the remove_variables_match_callback with the find_variables_match_callback.
        find_variables_match_callback.collectResults(remove_variables_match_callback.getVector());

        // Step 2: Get the AST matchers describing them.
        remove_variables_match_callback.getASTmatchers(mf3);
    }

    //// Remove memset details
	RemoveMemsetMatchCallback remove_memset_match_callback(&tool3.getReplacements(), SourcePaths[0]);
    if (RunRemoveMemset) {
	    remove_memset_match_callback.getASTmatchers(mf3);
    }

    // Run the new Refactoring Tool to apply refactorings in the third round.
	auto result3 = tool3.runAndSave(newFrontendActionFactory(&mf3).get());
	if (result3 != 0) {
	    errs() << "Error in the second round of refactorings: " << result3 << "\n";
	    return result3;
    }

    /* Print diagnostic output and final statistics about the performed refactorings. */

    if (print_debug_output) {
        unsigned int num_refactorings = 0;

        if (RunRemoveMemcpy) {
            unsigned int num_matches_found = remove_memcpy_match_callback.getNumMatchesFound();
            unsigned int num_replacements = remove_memcpy_match_callback.getNumReplacements();
            num_refactorings += num_replacements;
	        outs() << "Found " << num_matches_found << " memcpy() matches\n";
	        outs() << "Performed " << num_replacements << " memcpy() replacements\n";
        }

        if (RunRemoveMemset) {
            unsigned int num_matches_found = remove_memset_match_callback.getNumMatchesFound();
            unsigned int num_replacements = remove_memset_match_callback.getNumReplacements();
            num_refactorings += num_replacements;
	        outs() << "Found " << num_matches_found << " memset() matches\n";
	        outs() << "Performed " << num_replacements << " memset() replacements\n";
        }

        if (RunMakeStatic) {
            unsigned int num_free_calls = make_static_match_callback.num_free_calls();
            unsigned int num_calloc_calls = make_static_match_callback.num_calloc_calls();
            unsigned int num_variable_replacements = make_static_match_callback.num_variable_replacements();
            num_refactorings += num_free_calls;
            num_refactorings += num_calloc_calls;
            num_refactorings += num_variable_replacements;
            outs() << "Found " << num_free_calls << " calls to free()\n";
	        outs() << "Found " << num_calloc_calls << " calls to calloc()\n";
            outs() << "Replaced " << num_variable_replacements << " pointers with arrays.\n";
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

        if (RunRemoveAssignment) {
            unsigned int num_unused_assignments = analysis_match_callback.getNumAssignmentRemovals();
            num_refactorings += num_unused_assignments;
            outs() << "Removed " << num_unused_assignments << " unused assignments.\n";
        }

        if (RunRemoveInitialize) {
            unsigned int num_prototype_removals = remove_initialize_match_callback.getNumPrototypeRemovals();
            unsigned int num_definition_removals = remove_initialize_match_callback.getNumDefinitionRemovals();
            num_refactorings += num_prototype_removals;
            num_refactorings += num_definition_removals;
            outs() << "Removed " << num_prototype_removals << " prototypes of initialize functions.\n";
            outs() << "Removed " << num_definition_removals << " definitions of initialize functions.\n";
        }

        outs() << '\n' << "Performed " << num_refactorings << " total refactorings\n";
    }

	return 0;
}
