#ifndef STATIC_ANALYSIS_DIAGNOSTIC_CONSUMER_H
#define STATIC_ANALYSIS_DIAGNOSTIC_CONSUMER_H

#include "clang-tidy/ClangTidy.h"

#include <string>
#include <vector>
#include <utility>

using llvm::raw_ostream;

using std::string;
using std::vector;
using std::pair;

using clang::Diagnostic;
using clang::DiagnosticConsumer;
using clang::DiagnosticsEngine;
using clang::SourceLocation;
using clang::SourceManager;

using clang::tidy::ClangTidyContext;

class StaticAnalysisDiagnosticConsumer : public DiagnosticConsumer {
  public:
    StaticAnalysisDiagnosticConsumer(ClangTidyContext &Ctx,
                                     DiagnosticsEngine *ExternalDiagEngine = nullptr);

    void HandleDiagnostic(DiagnosticsEngine::Level DiagLevel, const Diagnostic &Info);

    const vector< pair<SourceLocation, SourceLocation> >& getSourcePairs() const;

  private:
    SourceLocation getRealEnd(const SourceLocation& loc_end) const;

    string getLocationsAsString(const SourceLocation& loc_start, const SourceLocation& loc_end) const;

    void outputExpression(const SourceLocation& loc_start, const SourceLocation& loc_end, llvm::raw_ostream& output) const;

    ClangTidyContext &Context;
    DiagnosticsEngine *ExternalDiagEngine;

    vector< pair<SourceLocation, SourceLocation> > SourcePairs;
    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. This enables us to do source code replacements.
    SourceManager* SM;
};

#endif /* STATIC_ANALYSIS_DIAGNOSTIC_CONSUMER_H */
