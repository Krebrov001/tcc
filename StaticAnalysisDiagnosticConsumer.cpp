#include "StaticAnalysisDiagnosticConsumer.h"
#include "clang/Lex/Lexer.h"
#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/SourceManager.h"

#include <stdexcept>
#include <string>
#include <map>
#include <utility>  // for std::pair, std::make_pair
#include <vector>

using std::string;
using std::map;
using std::vector;
using std::pair;
using std::make_pair;

using llvm::errs;

using clang::Lexer;
using clang::LangOptions;
using clang::Diagnostic;
using clang::DiagnosticsEngine;
using clang::SourceLocation;
using clang::SourceManager;
using clang::tok::semi;


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

        // BUG: The below code has a problem:
        // terminate called after throwing an instance of 'std::length_error'
        //   what():  basic_string::_M_create
        //SourceLocation loc_end = Lexer::findLocationAfterToken(loc_start, semi, *SM, LangOptions(), false);

        // Now this code does the same thing but it does not throw an exception.
        // Now the bug is fixed.
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
