#ifndef MAKE_STATIC_MATCH_CALLBACK_H
#define MAKE_STATIC_MATCH_CALLBACK_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <map>
#include <string>

using llvm::raw_ostream;

using std::map;
using std::string;

using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::hasOperatorName;
using clang::ast_matchers::has;
using clang::ast_matchers::ignoringParenImpCasts;
using clang::ast_matchers::hasRHS;
using clang::ast_matchers::binaryOperator;
using clang::tooling::Replacements;

using clang::Expr;
using clang::Decl;
using clang::SourceLocation;
using clang::SourceManager;


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
	explicit MakeStaticMatchCallback(map<string, Replacements> *replacements)
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
    void getASTmatchers(MatchFinder& mf);

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
    /**
     * This function prints the full declaration, the filename where this declaration originated,
     * the row number (line number), and the column number. It is used for diagnostic purposes.
     *
     * @param const Decl* decl - A declaration. This pointer can point to a Decl object or an
     *                    object of any data type derived from that class.
     *
     * @param raw_ostream& output - A reference to an LLVM raw output stream, which is
     *                     an extremely fast bulk output stream that can only output to a stream.
     *                     Data can be written to a different destination depending on the value of
     *                     this parameter. It can be llvm::outs(), llvm::errs(), or llvm::nulls().
     *                     The reference is non-const because writing output to an instance of a
     *                     stream class causes that object to be modified.
     *
     * @param const SourceLocation& loc_start - The starting location of the passed in declaration.
     *              Passing it in as a parameter means that we don't have to know precisely what
     *              type the declaration is, which we must know in order to determine the
     *              SourceLocation manually.
     */
    void outputDeclaration(const Decl* decl, raw_ostream& output, const SourceLocation& loc_start) const;

    /**
     * This function prints the full expression, the filename where this expression originated,
     * the row number (line number), and the column number. It is used for diagnostic purposes.
     *
     * @param const Expr* expr - An expression. This pointer can point to an Expr object or an
     *                    object of any data type derived from that class.
     *
     * @param raw_ostream& output - A reference to an LLVM raw output stream, which is
     *                     an extremely fast bulk output stream that can only output to a stream.
     *                     Data can be written to a different destination depending on the value of
     *                     this parameter. It can be llvm::outs(), llvm::errs(), or llvm::nulls().
     *                     The reference is non-const because writing output to an instance of a
     *                     stream class causes that object to be modified.
     *
     * @param const SourceLocation& loc_start - The starting location of the passed in expression.
     *              Passing it in as a parameter means that we don't have to know precisely what
     *              type the expression is, which we must know in order to determine the
     *              SourceLocation manually.
     */
    void outputExpression(const Expr* expr, raw_ostream& output, const SourceLocation& loc_start) const;

    /**
     * @param const Decl* declaration - A pointer to an instance of clang::Decl,
     *        or one of it's derived types.
     *
     * @return string - A string representation of the passed in declaration,
     *         the exact string text of that declaration.
     */
    string getDeclAsString(const Decl* declaration) const;

    /**
     * @param const Expr* expression - A pointer to an instance of clang::Expr,
     *        or one of it's derived types.
     *
     * @return string - A string representation of the passed in expression,
     *         the exact string text of that expression.
     */
    string getExprAsString(const Expr* expression) const;

    /* Private member variables. */

    map<string, Replacements> *replacements;
    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. This enables us to do source code replacements.
    SourceManager* SM;

	int _num_free_calls = 0;
	int _num_calloc_calls = 0;
	bool _remove_code = true;
};

#endif  /* MAKE_STATIC_MATCH_CALLBACK_H */
