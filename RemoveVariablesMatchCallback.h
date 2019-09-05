#ifndef REMOVE_VARIABLES_MATCH_CALLBACK_H
#define REMOVE_VARIABLES_MATCH_CALLBACK_H

#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <map>
#include <string>
#include <vector>

using std::map;
using std::string;
using std::vector;

using llvm::raw_ostream;

using clang::SourceManager;
using clang::SourceLocation;
using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;

using clang::Decl;
using clang::VarDecl;


class RemoveVariablesMatchCallback : public BaseMatchCallback
{
  public:
    /**
     * This is the constructor, which initializes all the member variables of the class.
     * The explicit keyword means that we cannot use the assignment = operator to initialize an
     * instance of this class.
     *
     * @param map<string, Replacements> * replacements - A pointer to a std::map of strings and
     *                                    Replacements objects, which is what we will use to
     *                                    actually perform the source code replacements in the
     *                                    refactoring process.
     */
    explicit RemoveVariablesMatchCallback(map<string, Replacements> * replacements)
      : BaseMatchCallback(), replacements(replacements) {}

    /**
     * This method creates and "returns" the AST matchers that match expressions specifically
     * handled by this CallBack class, through the pass by reference parameter.
     *
     * IMPORTANT: This method must be called specifically only after getVector() has been properly
     * called and filled the vector with data. This method depends on the vector being filled
     * with the names of variables to match and remove. If the vector happens to be empty, then
     * the AST matcher expressions will not be set.
     *
     * @param MatchFinder& mf - A non const reference to the MatchFinder in the main() function.
     *                     When this object is passed into this method, it is modified, the AST
     *                     matchers are added to it. This is my solution for "returning" multiple
     *                     AST matchers of possibly different types.
     */
    void getASTmatchers(MatchFinder& mf);

    /**
     * This method is called every time the AST matcher matches a corresponding expression
     * in the AST. This expression, as defined in getASTmatchers, is the declaration of a variable
     * that is unused in the source code. This method removes that variable from the source code.
     *
     * @param const MatchResult& result - The matched result returned from the AST matcher.
     */
    void run(const MatchFinder::MatchResult& result) override;

    /**
     * This method returns a reference to the private data member vector<string> variables.
     * This reference to the vector must then be passed into
     * FindVariablesMatchCallback::collectResults(), which fills this vector with the names of
     * variables that are declared but never used.
     * Example of correct use:
     *   find_variables_match_callback.collectResults(remove_variables_match_callback.getVector());
     *
     * Functions defined inside the class { }; are automatically inlined by default.
     */
    vector<string>& getVector() { return variables; }

    /**
	 * Returns the number of successful removals of unused variables.
	 */
	unsigned int getNumUnusedVariableRemovals() const { return num_unused_variables; }

  private:
    /* Private member variables. */

    map<string, Replacements>* replacements;

    vector<string> variables;
    unsigned int num_unused_variables{0};
    // Add other variables here as needed.
};

#endif /* REMOVE_VARIABLES_MATCH_CALLBACK_H */
