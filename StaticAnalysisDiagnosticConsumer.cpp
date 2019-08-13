#include "clang-tidy/ClangTidy.h"

#include "StaticAnalysisDiagnosticConsumer.h"
#include <string>
#include <map>
#include <utility>  // for std::pair, std::make_pair
#include <vector>

using std::string;
using std::map;
using std::vector;
using std::pair;
using std::make_pair;

using llvm::outs;
using llvm::errs;
using llvm::raw_ostream;

using clang::Diagnostic;
using clang::DiagnosticsEngine;
using clang::SourceLocation;
using clang::SourceManager;


void StaticAnalysisDiagnosticConsumer::HandleDiagnostic(DiagnosticsEngine::Level DiagLevel, const Diagnostic &Info)
{
    if (Info.getLocation().isValid() && Info.hasSourceManager()) {
        SourceLocation loc_start = Info.getLocation();
        SM = &Info.getSourceManager();
        const char* start = SM->getCharacterData(loc_start);

        if (DiagLevel != DiagnosticsEngine::Warning) {
            return;
        }

        // Preventing false positives: excludes the '*' as first char.
        if (!isalpha(*start)) {
            return;
        }

        SourceLocation loc_end = getRealEnd(loc_start);

        SourcePairs.push_back(make_pair(loc_start, loc_end));
    } else {
        errs() << "ERROR: The Diagnostic does not have a valid SourceLocation and/or SourceManager.\n";
        errs() << "\n\n";
    }
}

const vector< pair<SourceLocation, SourceLocation> >& StaticAnalysisDiagnosticConsumer::getSourcePairs() const
{
    return SourcePairs;
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

string StaticAnalysisDiagnosticConsumer::getLocationsAsString(const SourceLocation& loc_start, const SourceLocation& loc_end) const
{
    auto num_characters = SM->getCharacterData(loc_end) - SM->getCharacterData(loc_start);
    return string(SM->getCharacterData(loc_start), num_characters);
}

void StaticAnalysisDiagnosticConsumer::outputExpression(const SourceLocation& loc_start, const SourceLocation& loc_end, llvm::raw_ostream& output) const
{
    output << getLocationsAsString(loc_start, loc_end) << '\n';
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}
