#ifndef REMOVE_MEMSET_MATCH_CALLBACK_H
#define REMOVE_MEMSET_MATCH_CALLBACK_H

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
using clang::CallExpr;
using clang::SourceManager;
using clang::SourceLocation;

using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;

/**
 * This class is the CallBack class for removing memset.
 * Whenever a memset() function call instance is detected in the main() function, it uses
 * this class as a callback and it calls the run() method, which then replaces that memset()
 * function call with a functionally equivelent block of code.
 */
class RemoveMemsetMatchCallback : public BaseMatchCallback
{
  // Usually public member functions are put at the top, since the interface is the most
  // relevant thing for the user.
  public:
    /**
     * This is the constructor, which initializes all the member variables of the class.
     *
     * @param map<string, Replacements> * replacements - A pointer to a std::map of strings and
     *                                    Replacements objects, which is what we will use to
     *                                    actually perform the source code replacements in the
     *                                    refactoring process.
     *
     * @param string filename - The name of the file that is currently being processed.
     */
    explicit RemoveMemsetMatchCallback(map<string, Replacements> * replacements, string filename)
     : BaseMatchCallback(), replacements{replacements}, filename{filename} {}

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
     * expression is found. This is either a CallExpr or a CStyleCastExpr.
     * Either way, the call to memset() is extracted from this expression.
     * This method calls either replace_memset_call() or remove_memset_call()
     * depending on whether this matched function call should be replaced with an equivalent
     * expression or removed entirely.
     *
	 * @param const MatchFinder::MatchResult result - Found matching results.
	 */
	void run(const MatchFinder::MatchResult& result) override;

    /**
	 * Returns the number of successful memset() replacements.
	 */
	unsigned int getNumReplacements() const { return num_replacements; }

    /**
     * Returns the number of successful memset() removals.
     */
    unsigned int getNumRemovals() const { return num_removals; }

    /**
	 * Returns the number of matches found, the number of times run() function got called.
	 */
	unsigned int getNumMatchesFound() const { return num_matches_found; }

  private:
    /* Private helper functions. */

    /**
     * This function recieves a call to memset() as an input parameter, which is analyzed,
     * and the program tries to evaluate the arguments to the memset() function call.
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
     * @param const CallExpr* call_expr - The call to the memset() function.
     *
     * @param SourceLocation loc_start - The start of the line from where to perform the replacement.
     */
    void replace_memset_call(const CallExpr* call_expr, SourceLocation loc_start);

    /**
     * This function recieves a call to memset() as an input parameter, which is simply deleted from
     * the source code.
     *
     * @param const CallExpr* call_expr - The call to the memset() function.
     *
     * @param SourceLocation loc_start - The start of the line from where to perform the removal.
     */
    void remove_memset_call(const CallExpr* call_expr, SourceLocation loc_start);

    /**
     * This function takes an expression holding a numberical value, and returns an APInt
     * holding that value, which can then be manipulated in the C++ code as an integral data type.
     * This helper function is called by RemoveMemsetMatchCallback::getSizeString()
     *                               and RemoveMemsetMatchCallback::getFillString().
     *
     * @param const Expr* expression - Usually this is an IntegerLiteral or CharacterLiteral or a
     *                    UnaryExprOrTypeTraitExpr AKA sizeof() expression.
     *
     * @return llvm::APInt - An APInt (Arbitrary integer data type) holding the numerical value of
     *         the passed in expression.
     *         If an IntegerLiteral is passed in, the APInt holds the value of that IntegerLiteral.
     *         If a CharacterLiteral is passed in, the APInt holds 0 if that char is a '\0' or '0'
     *         and 1 otherwise.
     *         If a sizeof() expression is passed in, the APInt holds 1U.
     *
     * @throw std::string - if The type trait is not a sizeof() expression.
     *
     * @throw std::invalid_argument - if the expr is something other than an IntegerLiteral or a
     *        CharacterLiteral or a sizeof() expression.
     *
     * @throw NonMatchingTypes - if the data type of this particular argument to memset()
     *        doesn't match the data types to other processed arguments to memset().
     */
    APInt getVal(const Expr *expr) const;

    /**
     * This function processes the first argument to memset().
     * This function takes an expression, which is similar to an onion in that it has multiple
     * layers of casts, implicit conversions, array subscript expressions, and etc.
     * It peels away these layers, constructs a string representing the argument, and returns it.
     *
     * @param const Expr* expr - An expression containing within itself the argument to memset().
     *        All top level casts and parenthesis expressions have since been peeled away.
     *        The pointer is not const but the underlying object to which it points is const.
     *         This allows us to reassign the pointer.
     *
     * @param const string& var - If the expression is of an array or pointer type, then the
     *                      subscript operator [] is appended to the end of the expression string,
     *                      and var is used as the index variable in this case: x[var].
     *
     * @return string - A string representing the full argument to memset(), with added
     *         array subscript operator [var] if this argument is an array or pointer type.
     *
     * @throw std::range_error - if during peeling away layers of expr, it finds an expression
     *        that it cannot parse.
     *
     * @throw std::invalid_argument - if it was not able to find a value declaration.
     *
     * @throw NonMatchingTypes - if the data type of this particular argument to memset()
     *        doesn't match the data types to other processed arguments.
     */
    string getArgString(const Expr* expr, const string& var);

    /**
     * This function processes the second argument to memset(), which represents the value with which
     * to fill all elements in the destination memory location or array.
     *
     * @param const Expr* expr - An expression representing the second argument to memset().
     *
     * @return string - A string representation of the argument.
     *
     * @throw std::invalid_argument - if the expr is a CharacterLiteral and it is != '\0'
     */
    string getFillString(const Expr* expr);

    /**
     * Being given an expression which is the third argument to memset() (size_T n),
     * which is the number of bytes to set, this function returns a string which is the number
     * of elements to set, since my current algorithm sets elements element by element to a value
     * instead of byte by byte as memset() does.
     * NOTE: This function is not recursive.
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
     * @param const Expr* expr - The size expression which is the third argumetn to memset().
     *                    Valid types are BinaryOperator, DeclRefExpr, UnaryExprOrTypeTraitExpr,
     *                    and IntegerLiteral.
     *
     * @return string - A string representing the number of elements to set, necessary for
     *                  producing the same effect as memset().
     *
     * @throw BadOperator - if the BinaryOperator is not recognized/supported by the function yet.
     *
     * @throw std::runtime_error - if the type_string is empty or if the type trait associated with the
     *        UnaryExprOrTypeTraitExpr is not sizeof().
     *
     * @throw std::invalid_argument - This is due to an invalid const Expr *expr being passed in.
     *                                If the DeclRefExpr does not have an associated ValueDecl, or
     *                                if the Expr is not one of the recognized types
     *                                mentioned above.
     *
     * @throw NonMatchingTypes if the data type of this particular argument to memset()
     *        doesn't match the data types to other processed arguments.
     */
    string getSizeString(const Expr *expr) const;

    /* Private member variables. */

    map<string, Replacements>* replacements;
    // This string is the name of the file that is currently being processed.
    string filename;

    // This is a string representation of the elements we're copying.
    // Used for checking if the data types of the arguments match.
    string type_string;
    // The number of successful memset() replacements.
    unsigned int num_replacements{0};
    // The number of successful memset() removals.
    unsigned int num_removals{0};
    // The number of matches found, the number of times run() function got called.
    unsigned int num_matches_found{0};
    // Add other variables here as needed.
};

#endif /* REMOVE_MEMCPY_MATCH_CALLBACK_H */