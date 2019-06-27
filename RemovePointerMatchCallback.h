#ifndef REMOVE_POINTER_MATCH_CALLBACK_H
#define REMOVE_POINTER_MATCH_CALLBACK_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <cstring>

#include <string>
#include <map>

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

class RemovePointerMatchCallback : public MatchFinder::MatchCallback
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
      : replacements(replacements), SM(nullptr) {}

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
    void replace_global_pointer(const Decl* decl);

    void replace_pointer_use(const Expr* expr);

    void replace_pointer_dereference(const MemberExpr* expr);

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
     * This function prints the full declaration, the filename where this expression originated,
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
     * @param const Expr* expression - A pointer to an instance of clang::Expr,
     *        or one of it's derived types.
     *
     * @return string - A string representation of the passed in expression,
     *         the exact string text of that expression.
     */
    string getExprAsString(const Expr* expression) const;

    /**
     * @param const Decl* declaration - A pointer to an instance of clang::Decl,
     *        or one of it's derived types.
     *
     * @return string - A string representation of the passed in declaration,
     *         the exact string text of that declaration.
     */
    string getDeclAsString(const Decl* declaration) const;

    /* Private member variables. */

    map<string, Replacements>* replacements;
    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. This enables us to do source code replacements.
    SourceManager* SM;
    unsigned int num_global_pointers{0};
    unsigned int num_pointer_uses{0};
    unsigned int num_pointer_dereferences{0};
	// Add other variables here as needed.
};

#endif /* REMOVE_POINTER_MATCH_CALLBACK_H */
