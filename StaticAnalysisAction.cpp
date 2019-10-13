#include "StaticAnalysisAction.h"
#include "StaticAnalysisDiagnosticConsumer.h"
//#include "StaticAnalysisASTConsumer.h"

#include "clang/AST/ASTConsumer.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/Frontend/MultiplexConsumer.h"
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
using clang::MultiplexConsumer;
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
    }

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

    // For now, the feature of using the Static Analyzer for deadcode.DeadStores works well
    // using just the MultiplexConsumer. But in the future, I may have to use the custom
    // ASTConsumer again.
    // StaticAnalysisASTConsumer is derived from MultiplexConsumer.
    // It seems that MultiplexConsumer is the way to go if you want to use the same AST for custom
    // frontend action and Clang static analysis.
    // MultiplexConsumer itself derived from ASTConsumer, and I don't know why it requires a vector
    // of ASTConsumers as a data member.
    // However, returning just the unique_ptr<AnalysisASTConsumer> AnalysisConsumer from this method
    // will not work, as it fails to run the Static Analyzer.
    return llvm::make_unique<MultiplexConsumer>( std::move(Consumers) );

    // An instance of the StaticAnalysisASTConsumer is returned, which contains both a
    // MultiplexConsumer base class, and an additional unique_ptr<MatchFinder> data member.
    // It appears that for the time being this StaticAnalysisASTConsumer class is not needed,
    // and a unique_ptr to a MultiplexConsumer can be just returned.
    /*
    return llvm::make_unique<StaticAnalysisASTConsumer>(
        std::move(Consumers), std::move(Finder)
    );
    */
}
