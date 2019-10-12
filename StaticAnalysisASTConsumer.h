#ifndef STATIC_ANALYSIS_AST_CONSUMER_H
#define STATIC_ANALYSIS_AST_CONSUMER_H

#include "clang/AST/ASTConsumer.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Frontend/MultiplexConsumer.h"

#include <vector>
#include <memory>   // for std::unique_ptr
#include <utility>  // for std::move

using std::vector;
using std::unique_ptr;
using std::move;

using clang::ASTConsumer;
using clang::MultiplexConsumer;

using clang::ast_matchers::MatchFinder;


/**
 * This class is derived from MultiplexConsumer.
 * It seems that MultiplexConsumer is the way to go if you want to use the same AST for custom
 * frontend action and Clang static analysis.
 * The vector< unique_ptr<ASTConsumer> > Consumers
 * is a vector of ASTConsumers that is used by the ClangTool to perform actions ar various points
 * in the AST. This vector contains information about the
 * I do not know the reason why the unique_ptr<MatchFinder> Finder is required as a data member.
 * As far as I know, that is the design of the API which is required by the ClangTool.
 * It might not be required at all, in that case, the StaticAnalysisASTConsumer class can be
 * gotten rid of, and replaced by just MultiplexConsumer.
 */
class StaticAnalysisASTConsumer : public MultiplexConsumer {
  public:
    StaticAnalysisASTConsumer(
        vector< unique_ptr<ASTConsumer> > Consumers,
        unique_ptr<MatchFinder> Finder
    ) : MultiplexConsumer(move(Consumers)), Finder(move(Finder))
    {}

  private:
    unique_ptr<MatchFinder> Finder;
};

#endif  /* STATIC_ANALYSIS_AST_CONSUMER_H */
