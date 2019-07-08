#ifndef REMOVE_VARIABLES_MATCH_CALLBACK_H
#define REMOVE_VARIABLES_MATCH_CALLBACK_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <string>
#include <vector>
#include <map>

using std::string;
using std::vector;
using std::map;

using llvm::raw_ostream;

using clang::SourceManager;
using clang::SourceLocation;
using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;

using clang::Decl;
using clang::VarDecl;


class RemoveVariablesMatchCallback : public MatchFinder::MatchCallback
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
      : replacements(replacements), SM(nullptr) {}

    /**
     * This method creates and "returns" the AST matchers that match expressions specifically
     * handled by this CallBack class, through the pass by reference parameter.
     *
     * @param MatchFinder& mf - A non const reference to the MatchFinder in the main() function.
     *                     When this object is passed into this method, it is modified, the AST
     *                     matchers are added to it. This is my solution for "returning" multiple
     *                     AST matchers of possibly different types.
     */
    void getASTmatchers(MatchFinder& mf) const;

    void run(const MatchFinder::MatchResult& result) override;

    void outputDeclaration(const Decl* decl, raw_ostream& output, const SourceLocation& loc_start) const;

    string getDeclAsString(const Decl* declaration) const;

    /**
	 * Returns the number of successful removals of unused variables.
	 */
	unsigned int getNumUnusedVariableRemovals() const { return num_unused_variables; }

    vector<string>& getVector() { return variables; }
  private:
    /* Private member variables. */

    map<string, Replacements>* replacements;
    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. This enables us to do source code replacements.
    SourceManager* SM;

    vector<string> variables;
    unsigned int num_unused_variables{0};
    // Add other variables here as needed.
};

#endif /* REMOVE_VARIABLES_MATCH_CALLBACK_H */
