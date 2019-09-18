#ifndef STATIC_ANALYSIS_UTILS_H
#define STATIC_ANALYSIS_UTILS_H

#include "clang-tidy/ClangTidy.h"
#include "clang/Frontend/CompilerInvocation.h"
#include "llvm/Support/Process.h"

using llvm::IntrusiveRefCntPtr;
using llvm::StringRef;

using llvm::sys::Process;

using llvm::vfs::FileSystem;
using llvm::vfs::OverlayFileSystem;

using clang::DiagnosticConsumer;
using clang::FrontendAction;
using clang::CompilerInvocation;
using clang::FileManager;
using clang::PCHContainerOperations;
using clang::ASTFrontendAction;
using clang::ASTConsumer;
using clang::CompilerInstance;

using clang::tooling::FrontendActionFactory;

using clang::frontend::RunAnalysis;

using clang::tidy::ClangTidyASTConsumerFactory;
using clang::tidy::ClangTidyContext;
using clang::tidy::ClangTidyOptionsProvider;
using clang::tidy::ClangTidyGlobalOptions;
using clang::tidy::ClangTidyOptions;
using clang::tidy::FileOptionsProvider;

#define DEADCODE_CHECK "clang-analyzer-deadcode.DeadStores"

static std::unique_ptr<ClangTidyOptionsProvider> createOptionsProvider(llvm::IntrusiveRefCntPtr<FileSystem> FS)
{
    // This object is used for filtering warnings from certain line ranges of certain files only.
    // If empty (default constructed), no warnings will be filtered.
    ClangTidyGlobalOptions GlobalOptions;

    // This struct contains fields describing options for clang-tidy.
    // I am manually setting only the options that I am specifically using.
    ClangTidyOptions DefaultOptions;
    DefaultOptions.Checks = DEADCODE_CHECK;
    DefaultOptions.WarningsAsErrors = "";
    DefaultOptions.HeaderFilterRegex = "";
    DefaultOptions.SystemHeaders = false;
    DefaultOptions.FormatStyle = "none";
    DefaultOptions.User = Process::GetEnv("USER");
    // USERNAME is used on Windows.
    if (!DefaultOptions.User)
        DefaultOptions.User = Process::GetEnv("USERNAME");

    ClangTidyOptions OverrideOptions;
    OverrideOptions.Checks = DEADCODE_CHECK;
    OverrideOptions.WarningsAsErrors = "";
    OverrideOptions.HeaderFilterRegex = "";
    OverrideOptions.SystemHeaders = false;
    OverrideOptions.FormatStyle = "none";

    // GlobalOptions  are just stored and returned to the caller of getGlobalOptions.
    // DefaultOptions are used for all settings not specified in a configuration file.
    // OverrideOptions fields are set, they will override whatever options are read from the configuration file.
    // llvm::IntrusiveRefCntPtr< llvm::vfs::FileSystem > 	FS = nullptr
    return llvm::make_unique<FileOptionsProvider>(GlobalOptions, DefaultOptions, OverrideOptions, std::move(FS));
}


/* Start of ActionFactory class definition. */
class ActionFactory : public FrontendActionFactory {
  public:
    ActionFactory(ClangTidyContext &Context, IntrusiveRefCntPtr<OverlayFileSystem> BaseFS)
     : ConsumerFactory(Context, BaseFS) {}

    // Creates a new Action, which is the inner member class defined below.
    FrontendAction *create() override { return new Action(&ConsumerFactory); }

    bool runInvocation(std::shared_ptr<CompilerInvocation> Invocation,
                       FileManager *Files,
                       std::shared_ptr<PCHContainerOperations> PCHContainerOps,
                       DiagnosticConsumer *DiagConsumer) override
    {
        // Explicitly set ProgramAction to RunAnalysis to make the preprocessor
        // define __clang_analyzer__ macro. The frontend analyzer action will not
        // be called here.
        Invocation->getFrontendOpts().ProgramAction = RunAnalysis;
        return FrontendActionFactory::runInvocation(Invocation, Files, PCHContainerOps, DiagConsumer);
    }

  private:

    /* Inner member class Action begin. */
    class Action : public ASTFrontendAction {
      public:
        Action(ClangTidyASTConsumerFactory *Factory) : Factory(Factory) {}

        std::unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance &Compiler,
                                                       StringRef File) override
        {
            return Factory->CreateASTConsumer(Compiler, File);
        }

      private:
        ClangTidyASTConsumerFactory *Factory;
    };
    /* Inner member class Action end. */

    ClangTidyASTConsumerFactory ConsumerFactory;
};
/* End of ActionFactory class defition. */

#endif /* STATIC_ANALYSIS_UTILS_H */
