#ifndef MAKE_STATIC_MATCH_CALLBACK_H
#define MAKE_STATIC_MATCH_CALLBACK_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"
#include "clang/Tooling/Tooling.h"
#include <iostream>

using namespace std;
using namespace llvm;
using namespace llvm::cl;
using namespace clang;
using namespace clang::tooling;
using namespace clang::ast_matchers;

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
	MakeStaticMatchCallback(map<string, Replacements> *replacements) : replacements(replacements) {}

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
	virtual void run(const MatchFinder::MatchResult &Result);

	/**
	 * Number of calls to free processed by the class.
	 */
	unsigned long num_free_calls(void) const { return _num_free_calls; }

	/**
	 * Number of calls to calloc processed by the class.
	 */
	unsigned long num_calloc_calls(void) const { return _num_calloc_calls; }

	/**
	 * Code modification occurs by removing the code. Default operation.
	 */
	void remove_code(void) { _remove_code = true; }

	/**
	 * Code modification occurs by commenting out the code.
	 */
	void comment_code(void) { _remove_code = false; }

  private:
	map<string, Replacements> *replacements;
	int _num_free_calls = 0;
	int _num_calloc_calls = 0;
	bool _remove_code = true;
};

#endif
