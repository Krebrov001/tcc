#ifndef REMOVE_POINTER_MATCH_CALLBACK_H
#define REMOVE_POINTER_MATCH_CALLBACK_H

#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <cstring>
#include <map>
#include <string>

using std::string;
using std::map;

using llvm::raw_ostream;

using clang::Expr;
using clang::Decl;
using clang::MemberExpr;
using clang::SourceManager;
using clang::SourceLocation;
using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;

class RemovePointerMatchCallback : public BaseMatchCallback
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
    explicit RemovePointerMatchCallback(map<string, Replacements> * replacements)
      : replacements(replacements), BaseMatchCallback() {}

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
     * in the AST. It then performs a refactoring on that expression.
     * However this method does not do the actual refactoring, rather it determines what type of
     * expresssion was matched and then it calls helper methods to perform the actual refactoring.
     *
     * @param const MatchResult& result - The matched result returned from the AST matcher.
     */
    void run(const MatchFinder::MatchResult& result) override;

    /**
	 * Returns the number of successful global pointer removals.
	 */
	unsigned int getNumGlobalPointerRemovals() const { return num_global_pointers; }

    /**
	 * Returns the number of successful pointer use replacements.
	 */
	unsigned int getNumPointerUseReplacements() const { return num_pointer_uses; }

    /**
	 * Returns the number of successful pointer dereference replacements.
	 */
	unsigned int getNumPointerDereferenceReplacements() const { return num_pointer_dereferences; }

  private:
    /**
     * This is a first level helper method called by run().
     * Being given a declaration of a global pointer to structure,
     * this method deletes that declaration from the source code.
     * If that refactoring is successful, it increments num_global_pointers.
     *
     * @param const Decl* decl - The declaration of the global pointer.
     */
    void remove_global_pointer(const Decl* decl);

    /**
     * This is a first level helper method called by run().
     * Being given an Expr* that can be cast to a DeclRefExpr*, representing a use case of
     * that global pointer, where it is used as an address value without being dereferenced,
     * this method replaces that pointer use with the address of the structure to which that
     * pointer points.
     * If that refactoring is successful, it increments num_pointer_uses.
     *
     * @param const Expr* expr - An aexpression representing that global pointer being used as
     *                           an address value.
     */
    void replace_pointer_use(const Expr* expr);

    /**
     * This is a first level helper method called by run().
     * Being given a MemberExpr representing dereferencing a global pointer to obtain a field in
     * the structure, this method replaces that expression in the source code with just that struct
     * that the pointer is pointing to, using the dot operator to access that same field.
     * Example:
     * complete_system_io_M->Timing  to  complete_system_io_M_.Timing
     *
     * But there's a catch: The -> operator MemberExpr can be of two kinds, explicit and implicit.
     * "Explicit" here means that you typed the -> operator in your source code:  pointer->field
     * "Implicit" here means that the -> operator was the result of a macro expansion where that
     * pointer was passed into a macro which dereferenced that pointer:  macro(pointer)
     * In the implicit case these is one more thing: that the -> operator can be explicitly written
     * inside an argument to a macro: macro(pointer->field).
     *
     * These three cases are handled by other functions. replace_pointer_arrow() determines what
     * scenario we have in the code, and then it calls helper functions to do the actual
     * replacements.
     *
     * @param cosnt MemberExpr* expr - A member expression, specifically an arrow expression.
     */
    void replace_pointer_arrow(const MemberExpr* expr);

    /**
     * This is a second level helper method called by replace_pointer_arrow().
     * It performs the replacement only inside a macro.
     * Being given a Expr* representing a base expression, the pointer which is used,
     * and a SourceLocation, representing that base expression's starting location,
     * this method handles the above mentioned implicit case.
     * If the global pointer is the argument to a macro,
     * macro(pointer)
     * Then this function replaces that pointer with the address of the structure to which the
     * pointer points.
     * macro(&structure)
     * If that refactoring is successful, it increments num_pointer_uses.
     *
     * @param const Expr* baseExp - Represents a base expression, the global pointer which is
     *                    passed into the macro, and dereferenced by it.
     *
     * @param SourceLocation loc1 - Represents the starting location of the base expression.
     */
    void replace_pointer_use_macro(const Expr* baseExp, SourceLocation loc1);

    /**
     * This is a second helper method called by replace_pointer_arrow().
     * It replaces a pointer dereference such as pointer->field with a direct dot member access
     * using the structure to which that pointer points:  structure.field
     * If that refactoring is successful, it increments num_pointer_dereferences.
     *
     * @param const Expr* baseExpr - Represents the base expression of the arrow expression,
     *                               the pointer itself which is dereferenced.
     */
    void replace_pointer_dereference(const Expr* baseExp);

    /**
     * This method prints the full expression, the filename where this expression originated,
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
     *
     * @param const int numchars = -1 - This parameter is optional. If it is omitted, it gets the
     *                                  default value -1.
     *                  A string representation of an expression is comprised of a SourceLocation
     *                  and some number of characters following that location.
     *             *  If numbers < 0, which may occur if that argument is not provided, or a
     *                negative value is intentionally passed in,
     *                  The program tries to estimate the number of characters comprising that
     *                  expression. This is the default setting.
     *             *  If numbers >= 0, which is only if that argument is explicitly passed in,
     *                  Then a string starting at the SourceLocation with numchars following
     *                  characters is printed to the specified LLVM raw output stream.
     */
    void outputExpression(const Expr* expr, raw_ostream& output, const SourceLocation& loc_start, int numchars = -1) const;

    /**
     * This method was overridden in the MakeStaticMatchCallback class.
     * The implementation was better updated to handle macros.
     *
     * @param const Expr* expression - A pointer to an instance of clang::Expr,
     *        or one of it's derived types.
     *
     * @return string - A string representation of the passed in expression,
     *         the exact string text of that expression.
     */

    string getExprAsString(const Expr* expression) const override;
    /* Private member variables. */

    map<string, Replacements>* replacements;

    unsigned int num_global_pointers{0};
    unsigned int num_pointer_uses{0};
    unsigned int num_pointer_dereferences{0};
	// Add other variables here as needed.
};

#endif /* REMOVE_POINTER_MATCH_CALLBACK_H */
