#ifndef STATIC_ANALYSIS_ACTION_FACTORY_H
#define STATIC_ANALYSIS_ACTION_FACTORY_H

#include "StaticAnalysisAction.h"

#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/FileManager.h"
#include "clang/Basic/SourceLocation.h"
#include "clang/Serialization/PCHContainerOperations.h"
#include "clang/Frontend/CompilerInvocation.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/Tooling/Tooling.h"

#include <vector>
#include <utility>  // for std::pair
#include <memory>   // for std::shared_ptr

using std::vector;
using std::pair;
using std::shared_ptr;

using clang::SourceLocation;
using clang::DiagnosticConsumer;
using clang::PCHContainerOperations;
using clang::CompilerInvocation;
using clang::FileManager;
using clang::FrontendAction;

using clang::tooling::FrontendActionFactory;


/**
 * The StaticAnalysisActionFactory creates instances of class StaticAnalysisAction for each
 * translation unit that there is in order to process it. The StaticAnalysisAction in turn creates
 * instances of class StaticAnalysisDiagnosticConsumer in order to facilitate collecting diagnistics
 * from the Static Analyzer.
 */
class StaticAnalysisActionFactory : public FrontendActionFactory {
  public:
    /**
     * The constructor initializes all the data members of the class.
     *
     * @param vector< pair<SourceLocation, SourceLocation> >& SourcePairs - This is a vector
     *                of pairs of SourceLocations marking the start and end respectively of the
     *                unused assignments which are to be replaced. This vector is created and owned
     *                as a data member by the class RemoveAssignmentMatchCallback. The only valid
     *                argument for this parameter when calling the constructor is
     *                RemoveAssignmentMatchCallback::getVector()
     *                StaticAnalysisActionFactory creates StaticAnalysisAction objects, and it
     *                passes along the reference to the vector onto these newly created objects.
     */
    StaticAnalysisActionFactory(vector< pair<SourceLocation, SourceLocation> >& SourcePairs)
     : SourcePairs(SourcePairs) {}

    /**
     * Creates a new FrontendAction for each translation unit processed by the ClangTool.
     * The StaticAnalysisActionFactory creates multiple such actions, one for each tranlation unit,
     * and these Actions are used by the ClangTool for performing actions on the AST.
     *
     * @return FrontendAction - This is a new instance of a StaticAnalysisAction class.
     *         When that instance is created, the SourcePairs vector is passed along to it.
     */
    inline FrontendAction *create() override { return new StaticAnalysisAction(SourcePairs); }

    /**
     * Invokes the compiler with a FrontendAction created by create().
     * Implements clang::tooling::ToolAction.
     * This is a virtual member function of the base class, which should be overridden by derived
     * classes. I do not know what exactly this method does. It is required by the ClangTool API.
     */
    bool runInvocation(shared_ptr<CompilerInvocation> Invocation,
                       FileManager* Files,
                       shared_ptr<PCHContainerOperations> PCHContainerOps,
                       DiagnosticConsumer* DiagConsumer) override;

  private:
    // This is a reference to a vector of pairs of SourceLocations delimiting the starts and ends
    // respectively of code text which is to be removed from the source code.
    // This is a reference to a vector that is managed by the class RemoveAssignmentMatchCallback,
    // which actually removes the unused assignments.
    // This reference to the vector is passed onto the StaticAnalysisAction objects when they are
    // created, that in turn create StaticAnalysisDiagnosticConsumer objects and pass the
    // reference to the vector along to them as well. The StaticAnalysisDiagnosticConsumer is what
    // really uses this vector, and fills it up with data from running the Static Analyzer.
    vector< pair<SourceLocation, SourceLocation> >& SourcePairs;
};

#endif /* STATIC_ANALYSIS_ACTION_FACTORY_H */
