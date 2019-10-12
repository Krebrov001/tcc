#ifndef STATIC_ANALYSIS_DIAGNOSTIC_CONSUMER_H
#define STATIC_ANALYSIS_DIAGNOSTIC_CONSUMER_H

//#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/SourceManager.h"
#include "clang/StaticAnalyzer/Core/BugReporter/PathDiagnostic.h"

#include <vector>
#include <utility>  // for std::pair

using std::vector;
using std::pair;

using llvm::StringRef;

using clang::Diagnostic;
using clang::SourceLocation;
using clang::SourceManager;

using clang::ento::PathDiagnostic;
using clang::ento::PathDiagnosticConsumer;


/**
 * The class StaticAnalysisDiagnosticConsumer is created by the class StaticAnalysisAction.
 * It's primary functionality is collecting the diagnostics identified by the Clang Static Analyzer
 * during it's running, and saving their corresponding identifying SourceLocations into a vector
 * for performing refactorings on them.
 */
class StaticAnalysisDiagnosticConsumer : public clang::ento::PathDiagnosticConsumer {
public:
    /**
     * The constructor initializes all the data members of the class.
     *
     * @param SourceManager* SM - Used to initialize the private data member of the same name.
     *        The SourceManager is gotten from the StaticAnalysisAction class.
     *
     * @param vector< pair<SourceLocation, SourceLocation> >& SourcePairs - This is a vector
     *                of pairs of SourceLocations marking the start and end respectively of the
     *                unused assignments which are to be replaced. This vector is created and owned
     *                as a data member by the class RemoveAssignmentMatchCallback. It is passed from
     *                the class StaticAnalysisAction, when it creates the
     *                StaticAnalysisDiagnosticConsumer.
     */
    StaticAnalysisDiagnosticConsumer(
        SourceManager* SM,
        vector< pair<SourceLocation, SourceLocation> >& SourcePairs
    ) : SM(SM), SourcePairs(SourcePairs) {}

    /**
     * This is a call back method that gets called when the Clang Static Analyzer has finished
     * collecting all the Diagnostics. This method gets called at the end of running the Static
     * Analysis. This method loops through all the diagnostics, and for each valid diagnistic, it
     * saves the starting and ending SourceLocations of that diagnostic as a pair in the vector
     * reference SourcePairs.
     *
     * @param vector<const PathDiagnostic *>& Diags - This is the list of diagnostics that the Clang
     *               Static Analyzer found and returned. A reference to a vector, where each element
     *               is a pointer to a PathDiagnostic. PathDiagnostic objects represent a single
     *               path-sensitive diagnostic. The Static Analyzer uses path-sensitive diagnostics
     *               to identify all instances of unused assignments.
     *
     * @param FilesMade* filesMade - There is not that much documentation about this class or what
     *                   it's used for. I am not even using it in my implementation of this method.
     *                   Anyway, it's a required parameter in the virtual method of the base class,
     *                   so I have to include it in order to override the method.
     */
    void FlushDiagnosticsImpl(vector<const PathDiagnostic *>& Diags, PathDiagnosticConsumer::FilesMade* filesMade) override;

    /**
     * Given the starting location of an expression or some other code text, marked by the static
     * analyzer, this method returns the ending location delimiting this code text.
     * The ending location is considered as the location of the ';' at the end of the line.
     *
     * @param const SourceLocation& loc_end - The starting location of the code text.
     */
    SourceLocation getRealEnd(const SourceLocation& loc_end) const;

    /**
     * This is my override implementation of the pure virtual getName() method in the base class.
     * It returns a descriptive string which is the name of the derived class, or the name of the
     * "functional module" that you are building on top of that base class.
     *
     * @return StringRef - The StringRef class contains just a char* and a length of the number of
     *         characters in that C-string. The length field removes the need to call strlen() on
     *         the C-string. StringRef is just a simple reference to a C-string, it doesn't own that
     *         string, and it does not allow you to change that string.
     */
    inline StringRef getName() const override { return "StaticAnalysisDiagnosticConsumer"; }

    /**
     * Return true if the PathDiagnosticConsumer supports individual PathDiagnostics that span
     * multiple files.
     */
    inline bool supportsCrossFileDiagnostics() const override { return true; }

    /**
     * Return true if the PathDiagnosticConsumer supports Logical Operator Control Flow.
     */
    inline bool supportsLogicalOpControlFlow() const override { return true; }

private:
    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. It is the manager of the C source code.
    SourceManager* SM;
    // This is a reference to a vector of pairs of SourceLocations delimiting the starts and ends
    // respectively of code text which is to be removed from the source code.
    // This is a reference to a vector that is managed by the class RemoveAssignmentMatchCallback,
    // which actually removes the unused assignments.
    // The SourceLocations are recieved from the Clang Static Analyzer. After collecting all the
    // diagnostics, the Clang Static Analyzer calls FlushDiagnosticsImpl() with the results.
    // That method fills this vector with the pairs of SourceLocations.
    vector< pair<SourceLocation, SourceLocation> >& SourcePairs;
};


#endif /* STATIC_ANALYSIS_DIAGNOSTIC_CONSUMER_H */
