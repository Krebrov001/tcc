#ifndef MAKE_STATIC_MATCH_CALLBACK_H
#define MAKE_STATIC_MATCH_CALLBACK_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"
#include <map>
#include <string>

using std::map;
using std::string;
using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::hasOperatorName;
using clang::ast_matchers::has;
using clang::ast_matchers::ignoringParenImpCasts;
using clang::ast_matchers::hasRHS;
using clang::ast_matchers::binaryOperator;
using clang::tooling::Replacements;

class MakeStaticMatchCallback : public MatchFinder::MatchCallback {
  public:
	/**
	 * Constructor
	 *
	 * @param map<string, Replacements> * replacements - A pointer to a std::map of strings and
	 *                                    Replacements objects, which is what we will use to
	 *                                    actually perform the source code replacements in the
	 *                                    refactoring process.
	 */
	explicit MakeStaticMatchCallback(map<string, Replacements> *replacements) : replacements(replacements) {}

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

	/**
	 * Callback method for the MatchFinder, this function gets called whenever a matching
	 * expression is found. This is either a CallExpr (call to free) or a BinaryOperator
	 * (a call to calloc on the RHS of an assignment operator).
	 *
	 * If successful, several replacements are performed:
	 *  1) calls to free are removed
	 *  2) calls to calloc (and the assignment operator) are removed
	 *  3) variable declarations for LHS of calloc assignemnts are changed to a concrete type
	 *     determined from the argument to sizeof() in the second calloc argument
	 *  4) variable declarations for LHS of calloc assignments are changed to a fixed size
	 *     based on the first calloc argument
	 *
	 * @param const MatchFinder::MatchResult result - Found matching results.
	 */
	void run(const MatchFinder::MatchResult &Result) override;

	/**
	 * Number of calls to free processed by the class.
	 */
	unsigned int num_free_calls() const { return _num_free_calls; }

	/**
	 * Number of calls to calloc processed by the class.
	 */
	unsigned int num_calloc_calls() const { return _num_calloc_calls; }

	/**
	 * Code modification occurs by removing the code. Default operation.
	 */
	void remove_code() { _remove_code = true; }

	/**
	 * Code modification occurs by commenting out the code.
	 */
	void comment_code() { _remove_code = false; }

  private:
	map<string, Replacements> *replacements;
	int _num_free_calls = 0;
	int _num_calloc_calls = 0;
	bool _remove_code = true;
};

#endif  /* MAKE_STATIC_MATCH_CALLBACK_H */
