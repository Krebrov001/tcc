/**
 * @file refactoring_tool.cpp
 * @author Konstantin Rebrov
 *
 * @brief This file contains the main() function, and is the entrance into the application.
 *
 * @details Processes command line arguments, includes all the other modules, and runs a series of passes
 * over the input source code files, making replacements in place, and prints final statistics about
 * it's completed tasks.
 *
 * @copyright
 * McLeod Institute of Simulation Sciences
 * California State University, Chico
 * Chico, CA 95929-0888
 * Contact: kkredo@csuchico.edu
 */

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
#include "CreateMinorStepFunction.h"
#include "SeparateStepFunctions.h"

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
// This line of code has to be above the CommonOptionsParser constructor call, otherwise
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
    X(RunRemoveInitialize, "remove-initialize", "This option removes the initialize function.")  \
    X(RunRemoveIndirectRecursion, "remove-indirect-recursion", "This option removes any indirect "  \
      "recursion in the step function by splitting it into major and minor step functions.")

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
                                               "development version May 2020\n";
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

    // If the user specified --all option, then all refactorings should be enabled.
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

    //=================================================//

    /* Setup and run the first round of refactorings. */
    // This first round of the refactorings is primarily for creating the minor_step() function,
    // if there is any. This is because the CreateMinorStepFunction class is the only one which
    // generates entirely new code, and that might also have some possible coding constructs to be
    // refactored by later modules.

    // Create a first RefactoringTool to run the first round of refactorings.
	RefactoringTool tool1(Compilations, SourcePaths);

    // This first MatchFinder is responsible for applying refactorings in the first round.
    MatchFinder mf1;

    //// Remove indirect recursion details
    CreateMinorStepFunction create_minor_step_funcion(&tool1.getReplacements(), SourcePaths[0]);
    if (RunRemoveIndirectRecursion) {
        create_minor_step_funcion.getASTmatchers(mf1);
    }

    // Run the new Refactoring Tool to apply refactorings in the first round.
	auto result1 = tool1.runAndSave(newFrontendActionFactory(&mf1).get());
	if (result1 != 0) {
	    errs() << "Error in the first round of refactorings: " << result1 << "\n";
	    return result1;
    }

    //=================================================//

    /* Setup and run the second round of refactorings. */
    // The second round is only for applying the refactorings that are dependent on the
    // Static Analysis. AST-based refactorings should be put in the third and later rounds of
    // refactorings.

    // Create a second RefactoringTool to run the second round of refactorings.
    RefactoringTool tool2(Compilations, SourcePaths);

    //// Remove Assignment details
    // This CallBack class gets the SourceLocations from the StaticAnalysisDiagnosticConsumer,
    // and applies the replacements.
    RemoveAssignmentMatchCallback analysis_match_callback(&tool2.getReplacements());

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

        // This second MatchFinder is responsible for applying refactorings in the second round.
	    MatchFinder mf2;

        if (RunRemoveAssignment) {
            analysis_match_callback.getASTmatchers(mf2);
        }

        // Run the RefactoringTool to perform the second round of refactorings.
        auto result2 = tool2.runAndSave(newFrontendActionFactory(&mf2).get());
        if (result2 != 0) {
            errs() << "Error in the second round of refactorings: " << result2 << "\n";
            return result2;
        }
    }  // if (RunStaticAnalyzer)

    //=================================================//

    /* Setup and run the third round of refactorings. */
    // The third round is for refactorings which remove significant large blocks of code, which
    // might have problematic code constructs that the future refactorings need to remove.
    // So run these refactorings first, and save the changes back out to the file, and only then
    // after that run the other refactorings in a different round so that these removed blocks of
    // code do not show up in matching the AST.

    // Create a third RefactoringTool to run the third round of refactorings.
	RefactoringTool tool3(Compilations, SourcePaths);

    // Create a third MatchFinder to run the new RefactoringTool through the source code again,
    // to apply refactorings in the third round.
    MatchFinder mf3;

    //// Remove initialize details
    // It's constructor also takes the name of the current file being processed as an argument.
    // Remove initialize matchers should be added first, because they completely remove the
    // initialize function, and other Match Callbacks also apply refactorings in the initialize
    // function, so by removing that function first, we can save those other Match Callbacks some
    // work, making our code more efficient.
    RemoveInitializeMatchCallback remove_initialize_match_callback(&tool3.getReplacements(), SourcePaths[0]);
    if (RunRemoveInitialize) {
        remove_initialize_match_callback.getASTmatchers(mf3);
    }

    //// Remove indirect recursion details
    // Separate step functions of the Remove Indirect Recursion module should be added second.
    // It removes the code of the major or minor if () {} statements in the step functions.
    // These statements also might contain a lot of code within themselves, so it is better to
    // delete those if () {} statements before moving onto the next refactorings.
    SeparateStepFunctions separate_step_functions(&tool3.getReplacements(), SourcePaths[0]);
    if (RunRemoveIndirectRecursion) {
        separate_step_functions.getASTmatchers(mf3);
    }

    // Run the RefactoringTool to perform the third round of refactorings.
    auto result3 = tool3.runAndSave(newFrontendActionFactory(&mf3).get());
    if (result3 != 0) {
        errs() << "Error in the third round of refactorings: " << result3 << "\n";
        return result3;
    }

    //=================================================//

    /* Setup and run the fourth round of refactorings. */
    // The fourth round is for simple refactorings that modify only the line on which they reside.
    // These are localized refactorings which do not need to take into account the source code file
    // as a whole.

    // Create a fourth RefactoringTool to run the fourth round of refactorings.
	RefactoringTool tool4(Compilations, SourcePaths);
    // Create a fourth MatchFinder to run the new RefactoringTool through the source code again,
    // to apply refactorings in the fourth round.
    MatchFinder mf4;

    //// Remove memcpy details
	RemoveMemcpyMatchCallback remove_memcpy_match_callback(&tool4.getReplacements());
    if (RunRemoveMemcpy) {
	    remove_memcpy_match_callback.getASTmatchers(mf4);
    }

	//// Make static details
	MakeStaticMatchCallback make_static_match_callback(&tool4.getReplacements());
    if (RunMakeStatic) {
	    make_static_match_callback.getASTmatchers(mf4);
    }

    //// Remove pointer details
    RemovePointerMatchCallback remove_pointer_match_callback(&tool4.getReplacements());
    if (RunRemovePointer) {
        remove_pointer_match_callback.getASTmatchers(mf4);
    }

    //// Remove hypot details
    RemoveHypotMatchCallback remove_hypot_match_callback(&tool4.getReplacements());
    if (RunRemoveHypot) {
        remove_hypot_match_callback.getASTmatchers(mf4);
    }

    //// Remove memset details
    // RemoveMemsetMatchCallback needs RemovePointerMatchCallback to run first and remove the
    // global pointers before it runs.
	RemoveMemsetMatchCallback remove_memset_match_callback(&tool4.getReplacements(), SourcePaths[0]);
    if (RunRemoveMemset) {
	    remove_memset_match_callback.getASTmatchers(mf4);
    }

    // Run the RefactoringTool to perform the fourth round of refactorings.
    auto result4 = tool4.runAndSave(newFrontendActionFactory(&mf4).get());
    if (result4 != 0) {
        errs() << "Error in the fourth round of refactorings: " << result4 << "\n";
        return result4;
    }

    //=================================================//

    /* Setup and run the fifth round of refactorings. */
    // The fifth round of the refactorings finds variables that were left
    // unreferenced after the refactorings in the previous rounds have been applied.

    // Create a fifth RefactoringTool to run the fifth round of refactorings.
	RefactoringTool tool5(Compilations, SourcePaths);

    MatchFinder mf5;

    //// Remove variables details
    // NOTE: default constuctor takes no arguments.
    // FindVariablesMatchCallback does not do any replacements, it only counts the variables.
    FindVariablesMatchCallback find_variables_match_callback;
    if (RunRemoveVariables) {
        find_variables_match_callback.getASTmatchers(mf5);
    }

    // Run the new Refactoring Tool to apply refactorings in the fifth round.
	auto result5 = tool5.runAndSave(newFrontendActionFactory(&mf5).get());
	if (result5 != 0) {
	    errs() << "Error in the fifth round of refactorings: " << result5 << "\n";
	    return result5;
    }

    //=================================================//

    /* Setup and run the sixth round of refactorings. */
    // The sixth round of the refactorings removes unreferenced variables that were identified in
    // the fifth round of the refactorings.

    // Create a sixth RefactoringTool to run the sixth round of refactorings.
    RefactoringTool tool6(Compilations, SourcePaths);
    MatchFinder mf6;

    //// Remove variables details
    // This one actually removes the variables.
    RemoveVariablesMatchCallback remove_variables_match_callback(&tool6.getReplacements());
    if (RunRemoveVariables) {
        /* These Step 1 and Step 2 MUST be called in this order ALWAYS! */

        // Step 1: Get the list of variables to remove from the find_variables_match_callback.
        // Connect the remove_variables_match_callback with the find_variables_match_callback.
        find_variables_match_callback.collectResults(remove_variables_match_callback.getVector());

        // Step 2: Get the AST matchers describing them.
        remove_variables_match_callback.getASTmatchers(mf6);
    }

    // Run the new Refactoring Tool to apply refactorings in the sixth round.
	auto result6 = tool6.runAndSave(newFrontendActionFactory(&mf6).get());
	if (result6 != 0) {
	    errs() << "Error in the sixth round of refactorings: " << result6 << "\n";
	    return result6;
    }

    //=================================================//

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
            unsigned int num_removals = remove_memset_match_callback.getNumRemovals();
            num_refactorings += num_replacements;
            num_refactorings += num_removals;
	        outs() << "Found " << num_matches_found << " memset() matches\n";
	        outs() << "Performed " << num_replacements << " memset() replacements\n";
            outs() << "Removed " << num_removals << " calls to memset()\n";
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

        if (RunRemoveIndirectRecursion) {
            unsigned int num_minor_step_functions = create_minor_step_funcion.getNumMinorStepFunctions();
            unsigned int num_inserted_declarations = create_minor_step_funcion.getNumInsertedDeclarations();
            unsigned int num_call_renames = create_minor_step_funcion.getNumCallRenames();
            unsigned int num_major_if_statements_removed = separate_step_functions.getNumMajorIfStatementsRemoved();
            unsigned int num_minor_if_statements_removed = separate_step_functions.getNumMinorIfStatementsRemoved();
            num_refactorings += num_minor_step_functions;
            num_refactorings += num_inserted_declarations;
            num_refactorings += num_call_renames;
            num_refactorings += num_major_if_statements_removed;
            num_refactorings += num_minor_if_statements_removed;
            outs() << "Inserted " << num_minor_step_functions << " step_minor() functions.\n";
            outs() << "Inserted " << num_inserted_declarations << " step_minor() prototype declarations.\n";
            outs() << "Replaced " << num_call_renames
                   << " calls to step() functions with calls to step_minor() functions\n";
            outs() << "Removed " << num_major_if_statements_removed << " if (MAJOR_TIME_STEP) {}"
                   << " statements in the step_minor() function.\n";
            outs() << "Removed " << num_minor_if_statements_removed << " if (MINOR_TIME_STEP) {}"
                   << " statements in the step() function, or also known as step major function.\n";
        }

        outs() << '\n' << "Performed " << num_refactorings << " total refactorings\n\n";
    }

	return 0;
}
