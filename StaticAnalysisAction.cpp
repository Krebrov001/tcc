#include "StaticAnalysisAction.h"
#include "StaticAnalysisDiagnosticConsumer.h"
#include "StaticAnalysisASTConsumer.h"

#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/StaticAnalyzer/Frontend/AnalysisConsumer.h"

#include <vector>
#include <string>
#include <utility>  // for std::make_pair, std::move
#include <memory>   // for std::unique_ptr, std::make_unique

using std::vector;
using std::make_pair;
using std::unique_ptr;
using std::make_unique;
using std::move;

using clang::ASTConsumer;
using clang::CompilerInstance;
using clang::AnalyzerOptionsRef;
using clang::RegionStoreModel;
using clang::PD_NONE;

using clang::ast_matchers::MatchFinder;
using clang::ento::AnalysisASTConsumer;
using clang::ento::CreateAnalysisConsumer;

using llvm::StringRef;


CheckersList StaticAnalysisAction::getCheckersControlList() {
    CheckersList List;
    List.push_back( make_pair("deadcode.DeadStores", true) );
    //llvm::outs() << "The checker " << "deadcode.DeadStores" << " is enabled\n";
    return List;
}


unique_ptr<ASTConsumer> StaticAnalysisAction::CreateASTConsumer(
    CompilerInstance& Compiler, StringRef File
) {
    SM = &Compiler.getSourceManager();
    ast_context = &Compiler.getASTContext();

    unique_ptr<MatchFinder> Finder( make_unique<MatchFinder>() );

    vector< unique_ptr<ASTConsumer> > Consumers;
    Consumers.push_back(Finder->newASTConsumer());


    /* Sets up the prerequisite options for running the Static Analyzer. */
    AnalyzerOptionsRef AnalyzerOptions = Compiler.getAnalyzerOpts();
    // Gets the list of checkers by name that the Static Analyzer should run.
    AnalyzerOptions->CheckersControlList = getCheckersControlList();
    if (!AnalyzerOptions->CheckersControlList.empty()) {
        // Set various misc settings for the Static Analyzer.
        AnalyzerOptions->AnalysisStoreOpt = RegionStoreModel;
        AnalyzerOptions->AnalysisDiagOpt = PD_NONE;
        AnalyzerOptions->AnalyzeNestedBlocks = true;
        AnalyzerOptions->eagerlyAssumeBinOpBifurcation = false;

        // In order to run the Static Analyzer, an AnalysisASTConsumer must be created with a
        // diagnostic consumer which collects, or consumes the diagnostics that are found by the
        // Static Analyzer.
        // The reference to the SourcePairs vector is transferred from the StaticAnalysisAction
        // to the StaticAnalysisDiagnosticConsumer, which fills that vector with the diagnostic
        // information.
        unique_ptr<AnalysisASTConsumer> AnalysisConsumer = CreateAnalysisConsumer(Compiler);
        AnalysisConsumer->AddDiagnosticConsumer(
            new StaticAnalysisDiagnosticConsumer(SM, SourcePairs)
        );
        Consumers.push_back(std::move(AnalysisConsumer));
    }

    // An instance of the StaticAnalysisASTConsumer is returned, which contains both a
    return llvm::make_unique<StaticAnalysisASTConsumer>(
        std::move(Consumers), std::move(Finder)
    );
}
