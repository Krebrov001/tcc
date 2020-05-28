#ifndef REMOVE_INITIALIZE_MATCH_CALLBACK_H
#define REMOVE_INITIALIZE_MATCH_CALLBACK_H

#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <map>
#include <string>

using std::map;
using std::string;

using clang::Expr;
using clang::SourceManager;
using clang::SourceLocation;

using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;


/**
 * @brief CallBack class : Remove Initialize Module
 *
 * @details This class is supposed to remove the initialize_function.
 *
 * @note This transformation was required in order to remove code constructs not currently handled
 * by RemoveMemsetMatchCallback, specifically using memset() on a struct (which only appears in
 * the initialize_function).
 *
 * @todo  This transformation is incomplete. It causes bugs to appear in the refactored source code.
 * Apparently, it removed some critical and very important code because when running the refactored
 * model it produces a Segmentation Fault.
 */
class RemoveInitializeMatchCallback : public BaseMatchCallback
{
  public:
    /*
     * This is the constructor, which initializes all the member variables of the class.
     *
     * @param replacements  A pointer to a std::map of strings and Replacements objects, which is
     * what we will use to actually perform the source code replacements in the refactoring process.
     *
     * @param filename  The name of the file that is currently being processed.
     */
    explicit RemoveInitializeMatchCallback(map<string, Replacements> * replacements, string filename)
     : BaseMatchCallback(), replacements{replacements}, filename{filename} {}

    /**
     * This method creates and "returns" the AST matchers that match expressions specifically
     * handled by this CallBack class, through the pass by reference parameter.
     *
     * @param mf  A non const reference to the MatchFinder in the main() function.
     *                     When this object is passed into this method, it is modified, the AST
     *                     matchers are added to it. This is my solution for "returning" multiple
     *                     AST matchers of possibly different types.
     */
    void getASTmatchers(MatchFinder& mf);

    /**
     * This method is called whenever a match is detected in the AST,
     * based on the matcher constructed in getASTmatchers().
     *
     * This method is called two times.
     * First time it is called to remove the declaration of the initialize_function.
     * Second time it is called to remove the definition of the initialize_function.
     *
     * @param result  Holds the AST node(s) that were matched.
     */
    void run(const MatchFinder::MatchResult& result) override;

    /**
	 * @return the number of successful removals of the initialize function's prototype.
     * It is supposed to be only one.
	 */
	unsigned int getNumPrototypeRemovals() const { return num_prototype_removals; }

    /**
	 * @return the number of successful removals of the initialize function's definition.
     * It is supposed to be only one.
	 */
	unsigned int getNumDefinitionRemovals() const { return num_definition_removals; }

  private:
    /* Private member variables. */

    map<string, Replacements>* replacements;
    /// This string is the name of the file that is currently being processed.
    string filename;
    /// The number of successful removals of the initialize function's prototype.
    unsigned int num_prototype_removals{0};
    /// The number of successful removals of the initialize function's definition.
    unsigned int num_definition_removals{0};
};

#endif  /* REMOVE_INITIALIZE_MATCH_CALLBACK_H */
