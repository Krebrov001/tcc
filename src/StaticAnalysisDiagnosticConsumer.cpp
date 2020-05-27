#include "StaticAnalysisDiagnosticConsumer.h"

//#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/SourceManager.h"
#include "clang/StaticAnalyzer/Core/BugReporter/PathDiagnostic.h"

#include <utility>  // for std::pair, std::make_pair
#include <vector>

using std::vector;
using std::pair;
using std::make_pair;

using clang::SourceLocation;
using clang::SourceManager;

using clang::ento::PathDiagnostic;
using clang::ento::PathDiagnosticConsumer;


void StaticAnalysisDiagnosticConsumer::FlushDiagnosticsImpl(
    vector<const PathDiagnostic*>& Diags,
    PathDiagnosticConsumer::FilesMade *filesMade
) {
    for (const PathDiagnostic *PD : Diags) {
        SourceLocation loc_start = PD->getLocation().asLocation();
        SourceLocation loc_end = getRealEnd(loc_start);
        SourcePairs.push_back( std::make_pair(loc_start, loc_end) );
    }
}


SourceLocation StaticAnalysisDiagnosticConsumer::getRealEnd(const SourceLocation& loc_end) const
{
    const char* end = SM->getCharacterData(loc_end);

    int offset = 0;
    while (*end != ';') {
        ++offset;
        ++end;
    }

    return loc_end.getLocWithOffset(offset);
}
