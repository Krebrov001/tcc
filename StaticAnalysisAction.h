#ifndef STATIC_ANALYSIS_ACTION_H
#define STATIC_ANALYSIS_ACTION_H

#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/AST/ASTConsumer.h"

#include "llvm/ADT/StringRef.h"

#include <vector>
#include <string>
#include <utility>  // for std::make_pair, std::move
#include <memory>   // for std::unique_ptr

using std::vector;
using std::string;
using std::pair;
using std::unique_ptr;

using llvm::StringRef;

using clang::ASTContext;
using clang::ASTFrontendAction;
using clang::ASTConsumer;
using clang::CompilerInstance;
using clang::SourceLocation;
using clang::SourceManager;


typedef vector< pair<string, bool> > CheckersList;

/**
 * Instances of the StaticAnalysisAction get created by the StaticAnalysisActionFactory. Each
 * such instance is responsible for processing a single translation unit. To do this, it creates a
 * StaticAnalysisDiagnosticConsumer to collect diagnostics from the Static Analyzer.
 * Because the class StaticAnalysisActionAction creates objects of type
 * StaticAnalysisDiagnosticConsumer, it needs to have a reference to the vector SourcePairs as a
 * private data member, in order to pass the vector onto that class.
 */
class StaticAnalysisAction : public ASTFrontendAction {
  public:
    /**
     * @param vector< pair<SourceLocation, SourceLocation> >& SourcePairs - This is a vector
     *                of pairs of SourceLocations marking the start and end respectively of the
     *                unused assignments which are to be replaced. This vector is created and owned
     *                as a data member by the class RemoveAssignmentMatchCallback.
     *                Theis reference to the vector is temporarily stored as a data member of the
     *                class, and when a StaticAnalysisDiagnosticConsumer is created, the reference
     *                to the vector is transferred to it.
     */
    StaticAnalysisAction(vector< pair<SourceLocation, SourceLocation> >& SourcePairs)
     : SourcePairs(SourcePairs) {}

    /**
     * @return CheckersList - A list of checkers to be enabled when running the Static Analyzer.
     *         It is a vector of pairs where the first element is the string name of that checker,
     *         and the second element is true if that checker is to be enabled.
     *         These are all the valid string names of the checkers that can be run:
     *         https://clang.llvm.org/docs/analyzer/checkers.html
     */
    CheckersList getCheckersControlList();

    /**
     * This overridden virtual method of clang::FrontendAction, returns an ASTConsumer, which is
     * used by the ClangTool to perform actions at various points in the AST.
     * Specifically, this ASTConsumer is used by the ClangTool to help it run the Static Analyzer
     * and collect diagnostics from it.
     * This method is called by the BeginSourceFile() method of the base class, which will fail if
     * the ASTConsumer cannot be created.
     *
     * @param CompilerInstance& Compiler - Helper class for managing a single instance of the Clang
     *                          compiler. It manages the various objects which are necessary to run
     *                          the compiler, and provides utility routines for constructing
     *                          and manipulating the common Clang objects.
     *
     * @param StringRef File - The current file that is being processed.
     *
     * @return unique_ptr<ASTConsumer> - A StaticAnalysisDiagnosticConsumer is attached to this
     *         ASTConsumer.
     */
    unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance& Compiler, StringRef File) override;

  private:
    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. It is the manager of the C source code.
    SourceManager* SM;
    // This is the ASTContext that is retrieved from the CompilerInstance.
    // After a source file has been compiled, an object holding the context of the AST is generated.
    // Holds long-lived AST nodes (such as types and decls) that can be referred to throughout the
    // semantic analysis of a file.
    ASTContext* ast_context;
    // This is a reference to a vector of pairs of SourceLocations delimiting the starts and ends
    // respectively of code text which is to be removed from the source code.
    // This is a reference to a vector that is managed by the class RemoveAssignmentMatchCallback,
    // which actually removes the unused assignments.
    // Because the class StaticAnalysisAction creates instances of StaticAnalysisDiagnosticConsumer,
    // it has to save a reference to this vector as a private data member, in order to pass on that
    // reference to the vector into the StaticAnalysisDiagnosticConsumer class when it creates them.
    vector< pair<SourceLocation, SourceLocation> >& SourcePairs;
    // Add veriables here as needed.
};

#endif  /* STATIC_ANALYSIS_ACTION_H */
