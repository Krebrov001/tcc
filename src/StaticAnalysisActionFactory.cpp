#include "StaticAnalysisActionFactory.h"

#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/FileManager.h"
#include "clang/Serialization/PCHContainerOperations.h"
#include "clang/Frontend/CompilerInvocation.h"

using clang::DiagnosticConsumer;
using clang::PCHContainerOperations;
using clang::CompilerInvocation;
using clang::FileManager;

using clang::frontend::RunAnalysis;


bool StaticAnalysisActionFactory::runInvocation(
    shared_ptr<CompilerInvocation> Invocation,
    FileManager* Files,
    shared_ptr<PCHContainerOperations> PCHContainerOps,
    DiagnosticConsumer* DiagConsumer
) {
    // Explicitly set ProgramAction to RunAnalysis to make the preprocessor
    // define __clang_analyzer__ macro. The frontend analyzer action will not
    // be called here.
    Invocation->getFrontendOpts().ProgramAction = RunAnalysis;
    return FrontendActionFactory::runInvocation(Invocation, Files, PCHContainerOps, DiagConsumer);
}
