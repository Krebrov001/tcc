#ifndef REMOVE_HYPOT_MATCH_CALLBACK_H
#define REMOVE_HYPOT_MATCH_CALLBACK_H

#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <map>
#include <string>

using std::map;
using std::string;

using llvm::raw_ostream;

using clang::Expr;
using clang::CallExpr;
using clang::SourceManager;
using clang::SourceLocation;
using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;


class RemoveHypotMatchCallback : public BaseMatchCallback
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
    explicit RemoveHypotMatchCallback(map<string, Replacements> * replacements)
      : BaseMatchCallback(), replacements(replacements) {}

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
     * call to hypot() function is found. This is represented as a CallExpr in the code.
     * This method is called every time the AST matcher matches a corresponding expression
     * in the AST. It then performs a refactoring on that expression.
     *
     * If successful, then a functionally equivalent block of code, which calculates the
     * hypotenouse manually, as a replacement is constructed, and the replacement is applied.
     * And if print_debug_output is set to true, then a diagnostic message is printed.
     * You can set it to true by specifying -debug on the command line.
     * If unsuccessful an error is printed to the stderr together with the expression which caused
     * the error, regardless of whether the debug flag is set or not.
     *
	 * @param const MatchFinder::MatchResult result - Found matching results.
     */
    void run(const MatchFinder::MatchResult& result) override;

    /**
	 * Returns the number of successful hypot() replacements.
	 */
	unsigned int getNumHypotReplacements() const { return num_hypot_replacements; }

  private:
    /**
     * This method given an argument, and it's ending character, returns the full text of that
     * function argument as a string. It is used for finding the arguments of hypot() as strings
     * in order to construct the replacement string.
     *
     * @param cosnt Expr* expr - An argument to hypot(), any argument.
     *
     * @param char end - This character delimits the end of the argument. It is the ending char
     *             where that argument stops. char end must be either ',' or ')'.
     *             ',' must be specified if the argument is not the last one to the function.
     *             ')' must be specified if the argument is the last one to the function,
     *             in this case this is the closing ')' of the function call.
     *             NOTE: This method does not perform error checking if the passed in char end
     *             parameter really is either ',' or ')'.
     */
    string getArgAsString(const Expr* arg, char end) const;

    /* Private member variables. */

    map<string, Replacements>* replacements;
    unsigned int num_hypot_replacements{0};
	// Add other variables here as needed.
};

#endif  /* REMOVE_HYPOT_MATCH_CALLBACK_H */
