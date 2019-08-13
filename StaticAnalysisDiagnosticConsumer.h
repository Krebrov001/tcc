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
    /**
     * This is the constructor for the class.
     */
    StaticAnalysisDiagnosticConsumer() = default;

    /**
     * This is a call back method that gets called whenever a Diagnostic is recieved from the Clang
     * Static Analyzer. If the Diagnostic is proved to be valid, the starting and ending
     * SourceLocations of that Diagnostic are stored as a pair in the vector SourcePairs.
     *
     * @param DiagnosticsEngine::Level DiagLevel - The level of the Diagnostic, such as warning,
     *                                 error, remark, etc. For the Diagnostic to be considered
     *                                 valid, it has to be a warning.
     *
     * @param const Diagnostic& Info - The Diagnostic itself.
     */
    void HandleDiagnostic(DiagnosticsEngine::Level DiagLevel, const Diagnostic& Info);

    /**
     * This method plays a very important role. It passes the vector of SourcePairs to the class
     * RemoveAssignmentMatchCallback, which then performs the refactorings.
     *
     * @param const vector< pair<SourceLocation, SourceLocation> >& - The SourcePairs vector, passed
     *                                          by const reference. It sould not be modified.
     */
    const vector< pair<SourceLocation, SourceLocation> >& getSourcePairs() const;

  private:
    /**
     * Given the starting location of an expression or some other code text, marked by the static
     * analyzer, this method returns the ending location delimiting this code text.
     * The ending location is considered as the location of the ';' at the end of the line.
     *
     * @param const SourceLocation& loc_end - The starting location of the code text.
     */
    SourceLocation getRealEnd(const SourceLocation& loc_end) const;

    /**
     * @param const SourceLocation* loc_start - The starting location of the code text.
     *
     * @param const SourceLocation* loc_end - The end location of the code text.
     *
     * @return string - A string representation of the code text between these two SourceLocations.
     */
    string getLocationsAsString(const SourceLocation& loc_start, const SourceLocation& loc_end) const;

    /**
     * Given two SourceLocations delimiting a source code text, This method prints that text,
     * the filename where this code text originated, the row number (line number), and the column
     * number. It is used for diagnostic purposes.
     *
     * @param const SourceLocation* loc_start - The starting location of the code text.
     *
     * @param const SourceLocation* loc_end - The end location of the code text.
     *
     * @param raw_ostream& output - A reference to an LLVM raw output stream, which is
     *                     an extremely fast bulk output stream that can only output to a stream.
     *                     Data can be written to a different destination depending on the value of
     *                     this parameter. It can be llvm::outs(), llvm::errs(), or llvm::nulls().
     *                     The reference is non-const because writing output to an instance of a
     *                     stream class causes that object to be modified.
     */
    void outputExpression(const SourceLocation& loc_start, const SourceLocation& loc_end, raw_ostream& output) const;

    //ClangTidyContext &Context;
    //DiagnosticsEngine *ExternalDiagEngine;
    // This is a vector of pairs of SourceLocations delimiting the starts and ends respectively
    // of code text which is to be removed from the source code.
    // This vector is recieved from the Clang Static Analyzer. Each time that HandleDiagnostic is
    // called with a valid Diagnostic, it is added to the vector.
    // After collecting al the Diagnostics, this vector is then passed to the class
    // RemoveAssignmentMatchCallback, to remove the usused assignments.
    vector< pair<SourceLocation, SourceLocation> > SourcePairs;
    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. This enables us to do source code replacements.
    SourceManager* SM;
};

#endif /* STATIC_ANALYSIS_DIAGNOSTIC_CONSUMER_H */
