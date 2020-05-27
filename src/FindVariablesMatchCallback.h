#ifndef FIND_VARIABLES_MATCH_CALLBACK_H
#define FIND_VARIABLES_MATCH_CALLBACK_H

#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <set>
#include <string>
#include <vector>
#include <utility>  // for std::pair

using std::string;
using std::vector;
using std::set;
using std::pair;
using std::size_t;

using clang::SourceManager;
using clang::SourceLocation;
using clang::ast_matchers::MatchFinder;

using clang::Decl;
using clang::Expr;


typedef std::pair<std::string, std::string> key_type;

class FindVariablesMatchCallback : public BaseMatchCallback
{
  public:
    /**
     * This is the drfault constructor, which initializes all the member variables of the class
     * and calls the base class constructor.
     */
    explicit FindVariablesMatchCallback() : BaseMatchCallback() {}

    /**
     * This method creates and "returns" the AST matchers that match expressions specifically
     * handled by this CallBack class, through the pass by reference parameter.
     *
     * @param MatchFinder& mf - A non const reference to the MatchFinder in the main() function.
     *                     When this object is passed into this method, it is modified, the AST
     *                     matchers are added to it. This is my solution for "returning" multiple
     *                     AST matchers of possibly different types.
     */
    void getASTmatchers(MatchFinder& mf);

    /**
     * This method is called every time the AST matcher matches a corresponding expression
     * in the AST. This expression, as defined in getASTmatchers, is either a variable declaration
     * or a variable use. This method computes all instances of variables declarations and uses,
     * and saves them into variable_declarations and variable_uses.
     * This method does not perform any refactorings or source code replacements.
     *
     * IMPORTANT:
     * This method has to be called before collectResults() ALWAYS, becuase collectResults() depends
     * on results computed by this method(), identifying the variable declarations and uses.
     *
     * @param const MatchResult& result - The matched result returned from the AST matcher.
     */
    void run(const MatchFinder::MatchResult& result) override;

    /**
     * This method has to be called after run() in refactoring_tool.cpp
     * Being given a reference to a destination vector, it will compute which variables are declared
     * and then unused in the program (using variable_declarations and variable_uses), and it will
     * save these variables into the vector.
     *
     * @param vector<key_type>& variables - A reference to the vector of all unused variables.
     *                          Specifically this parameter must be a reference to the private vector
     *                          RemoveVariablesMatchCallback.variables
     *        The parameter should be what is returned by RemoveVariablesMatchCallback.getVector()
     *   find_variables_match_callback.collectResults(remove_variables_match_callback.getVector());
     */
    void collectResults(vector<key_type>& variables);

  private:

    /* Private member variables. */

    // This map stores as keys, a pair representing the name of the variable, and the function inside
    // of which it is declared, of all variable declarations.
    set<key_type> variable_declarations;
    // This map stores as keys, a pair representing the name of the variable, and the function inside
    // of which it is declared, of all variables that are actually used.
    set<key_type> variable_uses;
    // Add other variables here as needed.
};

#endif /* FIND_VARIABLES_MATCH_CALLBACK_H */
