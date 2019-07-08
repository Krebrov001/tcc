/*
 * As part of LLVM coding standards, you should organize your include statements by putting local headers
 * first, followed by Clang and LLVM API headers. When two headers pertain to the same category,
 * order them alphabetically.
 */
#include "RemoveMemcpyMatchCallback.h"
#include "RemovePointerMatchCallback.h"
#include "MakeStaticMatchCallback.h"
#include "RemoveHypotMatchCallback.h"
#include "FindVariablesMatchCallback.h"
#include "RemoveVariablesMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"


/* TODO: Remove these */
#include <string>
#include <vector>
using std::string;
using std::vector;

using llvm::outs;
using llvm::errs;
using llvm::ArrayRef;
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
using clang::ast_matchers::namedDecl;

using clang::tooling::CompilationDatabase;
using clang::LangOptions;
using clang::FrontendAction;
using clang::IntrusiveRefCntPtr;
using clang::DiagnosticOptions;
using clang::TextDiagnosticFormat;
using clang::DiagnosticsEngine;
using clang::DiagnosticIDs;
using clang::Rewriter;

// Global variable is non static so that it can be externed into other translation units.
bool print_debug_output = false;

/*
class CustomRefactoringTool : public RefactoringTool {
  public:
    CustomRefactoringTool(const CompilationDatabase& Compilations, ArrayRef<string> SourcePaths,
                          const FindVariablesMatchCallback& obj)
    : RefactoringTool(Compilations, SourcePaths), remove_variables_match_callback(&obj) {}

    int runAndSave(FrontendAction* ActionFactory) {
        // Run the first round of replacements. This activates the run() methods of all
        // CallBack classes that matched.
        // Result will be non-zero (true), if there is an error.
        // Stop running the function and immediately return.
        if (int Result = run(ActionFactory)) {
            return Result;
        }

        // Run the second round of replacements for all CallBack classes.
        //remove_variables_match_callback->runSecondRound();

        LangOptions DefaultLangOptions;
        IntrusiveRefCntPtr<DiagnosticOptions> DiagOpts = new DiagnosticOptions();
        // Why do you need &* ???
        TextDiagnosticFormat DiagnosticPrinter(errs(), &*DiagOpts);
        DiagnosticsEngine Diagnostics(
            IntrusiveRefCntPtr<DiagnosticIDs>(new DiagnosticIDs()),
            &*DiagOpts, &DiagnosticPrinter, false
        );

        // Get the sources of all the files in order to write the replacements to disk.
        SourceManager Sources(Diagnostics, getFiles());
        // Create a Rewriter which is responsible for rewriting the source files with the
        // new text replacements, and saving those files to the disk.
        Rewriter Rewrite(Sources, DefaultLangOptions);

        // Apply all replacements to the source files using the Rewriter, and check return code
        // for errors.
        if (!applyAllReplacements(Rewrite)) {
            errs() << "ERROR: Skipped some replacements.\n";
        }

        // Save the rewritten files to the disk, and return the code to the caller of this method.
        return saveRewrittenFiles(Rewrite);
    }
  private:
    const FindVariablesMatchCallback* remove_variables_match_callback;
};
*/

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

    opt<bool> RunRemoveMemcpy("remove-memcpy", desc("This option turns on replacement of memcpy()."));
    opt<bool> RunMakeStatic("make-static", desc("This option turns all dynamic memory allocations"
                                                "into stack ones, gets rid of calloc() and free()."));
    opt<bool> RunRemovePointer("remove-pointer", desc("This option turns on removal of the global pointer."));
    opt<bool> RunRemoveHypot("remove-hypot", desc("This option turns on replacement of hypot()."));
    opt<bool> RunRemoveVariables("remove-variables", desc("This option removes unused variables"));

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
    FindVariablesMatchCallback find_variables_match_callback(&tool.getReplacements());
    if (RunRemoveVariables) {
        find_variables_match_callback.getASTmatchers(mf);
    }

	// Run the tool
	auto result = tool.runAndSave(newFrontendActionFactory(&mf).get());

	if (result != 0) {
		errs() << "Error in the Refactoring Tool: " << result << "\n";
		return result;
	}

    MatchFinder mf2;

    //// Remove variables details
    RemoveVariablesMatchCallback remove_variables_match_callback(&tool.getReplacements());
    if (RunRemoveVariables) {
        // Get the list of variables to remove.
        find_variables_match_callback.collectResults(remove_variables_match_callback.getVector());
        // Get the AST matchers describing them.
        remove_variables_match_callback.getASTmatchers(mf2);
    }

    // Run the tool
	auto result2 = tool.runAndSave(newFrontendActionFactory(&mf2).get());

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
	        outs() << "Found " << num_matches_found << " memcpy() matches found\n";
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
