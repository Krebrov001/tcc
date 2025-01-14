#ifndef REMOVE_MEMCPY_MATCH_CALLBACK_H
#define REMOVE_MEMCPY_MATCH_CALLBACK_H

#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"
#include "llvm/ADT/APInt.h"

#include <map>
#include <string>

using std::map;
using std::string;

using llvm::APInt;

using clang::Expr;
using clang::SourceManager;
using clang::SourceLocation;

using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;

/**
 * @brief CallBack class : Remove memcpy() Module
 *
 * @details  Replaces all memcpy() function calls with a functionally equivelent block of code
 *           (for loop which copies the elements one by one from the src array to the dest array.)
 */
class RemoveMemcpyMatchCallback : public BaseMatchCallback
{
  // Usually public member functions are put at the top, since the interface is the most
  // relevant thing for the user.
  public:
    // TODO: Maybe std::map should be replaced by the LLVM map data structure?
    /**
     * This is the constructor, which initializes all the member variables of the class.
     *
     * @param replacements  A pointer to a std::map of strings and Replacements objects, which is
     * what we will use to actually perform the source code replacements in the refactoring process.
     */
    explicit RemoveMemcpyMatchCallback(map<string, Replacements> * replacements)
		: BaseMatchCallback(), replacements(replacements) {}

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
     * Callback method for the MatchFinder, this function gets called whenever a matching
     * expression is found. This is either a CallExpr or a CStyleCastExpr.
     * Either way, the call to memcpy() is extracted from this expression, it is analyzed,
     * and the program tries to evaluate the arguments to the memcpy() function call.
     *
     * If successful, then a functionally equivalent block of code as a replacement is
     * constructed, and the replacement is applied, and if print_debug_output is set to true,
     * then a diagnostic message is printed. You set it to true by specifying --debug on the
     * command line.
     * If unsuccessful, an error is raised, and that error always gets printed to the stderr
     * together with the expression which caused the error, regardless of whether the debug flag
     * is set or not.
     * This function catches all exceptions that the functions that it calls throw.
     *
	 * @param result  Found matching results.
	 */
	void run(const MatchFinder::MatchResult& result) override;

	/**
	 * @return the number of successful memcpy() replacements.
	 */
	unsigned int getNumReplacements() const { return num_replacements; }

    /**
	 * @return the number of matches found, the number of times run() method got called.
	 */
	unsigned int getNumMatchesFound() const { return num_matches_found; }

  private:
    /* Private helper functions. */

    /**
     * This function takes an expression holding a numberical value, and returns an APInt
     * holding that value, which can then be manipulated in the C++ code as an integral data type.
     * This helper function is called by RemoveMemcpyMatchCallback::getSizeString().
     *
     * @param expr  Usually this is an IntegerLiteral or a UnaryExprOrTypeTraitExpr AKA sizeof() expression.
     *
     * @return llvm::APInt  An APInt (Arbitrary integer data type) holding the numerical value of
     *         the passed in expression.
     *         If an IntegerLiteral is passed in, the APInt holds the value of that IntegerLiteral.
     *         If a sizeof() expression is passed in, the APInt holds 1U.
     *
     * @throw std::string if The type trait is not a sizeof() expression.
     *
     * @throw std::invalid_argument if the expr is something other than an IntegerLiteral or a
     *        sizeof() expression.
     *
     * @throw NonMatchingTypes if the data type of this particular argument to memcpy()
     *        doesn't match the data types to other processed arguments to memcpy().
     */
    APInt getVal(const Expr *expr) const;

    /**
     * This function takes an expression, which is similar to an onion in that it has multiple
     * layers of casts, implicit conversions, array subscript expressions, and etc.
     * It peels away these layers, constructs a string representing the argument, and returns it.
     *
     * @param expr  An expression containing within itself the argument to memcpy().
     *        All top level casts and parenthesis expressions have since been peeled away.
     *        The pointer is not const but the underlying object to which it points is const.
     *         This allows us to reassign the pointer.
     *
     * @param var  If the expression is of an array or pointer type, then the
     *                      subscript operator [] is appended to the end of the expression string,
     *                      and var is used as the index variable in this case: x[var].
     *
     * @return string  A string representing the full argument to memcpy(), with added
     *         array subscript operator [var] if this argument is an array or pointer type.
     *
     * @throw std::range_error if during peeling away layers of expr, it finds an expression
     *        that it cannot parse.
     *
     * @throw std::invalid_argument if it was not able to find a value declaration.
     *
     * @throw NonMatchingTypes if the data type of this particular argument to memcpy()
     *        doesn't match the data types to other processed arguments.
     */
    string getArgString(const Expr* expr, const string& var);

    /**
     * Being given an expression which is the third argumetn to memcpy() (size_T n),
     * which is the number of bytes to copy, this function returns a string which is the number
     * of elements to copy, since my current algorithm copies elements element by element
     * instead of byte by byte as memcpy() does.
     *
     * @note This function is not recursive.
     *
     * This algorithm recognizes the following types of expressions:
     * an integer literal, a sizeof() expression, a variable, and a binary operator.
     * sizeof() expressions always return 1 by convention. Integer literals and variables
     * return a string representation of themselves divided by the sizeof() the element.
     *
     * For binary operators, a variable OP variable expression is also divided by the sizeof() the
     * element. However if one or both sides of the binary operator are a literal, then the whole
     * expression is not divided by the sizeof() the element, because it is assumed that one of the
     * operands is a sizeof() expression.
     *
     * If an optimization can be achieved which is conformant to the C standards, it is done.
     * An example of such optimization would be evaluating the binary operator expression
     * and returning the result when both operands are literals.
     *
     * @param expr  The size expression which is the third argumetn to memcpy().
     *                    Valid types are BinaryOperator, DeclRefExpr, UnaryExprOrTypeTraitExpr,
     *                    and IntegerLiteral.
     *
     * @return string  A string representing the number of elements to copy, necessary for
     *                 producing the same effect as memcpy().
     *
     * @throw BadOperator if the BinaryOperator is not recognized/supported by the function yet.
     *
     * @throw std::string if the type_string is empty or if the type trait associated with the
     *        UnaryExprOrTypeTraitExpr is not sizeof().
     *
     * @throw std::invalid_argument  This is due to an invalid const Expr *expr being passed in.
     *                               If the DeclRefExpr does not have an associated ValueDecl, or
     *                               if the Expr is not one of the recognized types
     *                               mentioned above.
     *
     * @throw NonMatchingTypes if the data type of this particular argument to memcpy()
     *        doesn't match the data types to other processed arguments.
     */
    string getSizeString(const Expr *expr) const;

    /* Private member variables. */

    map<string, Replacements>* replacements;

    /// This is a string representation of the elements we're copying.
    /// Used for checking if the data types of the arguments match.
    string type_string;
    /// The number of successful memcpy() replacements.
    unsigned int num_replacements{0};
    /// The number of matches found, the number of times run() function got called.
    unsigned int num_matches_found{0};
	// Add other variables here as needed.
};

#endif /* REMOVE_MEMCPY_MATCH_CALLBACK_H */
