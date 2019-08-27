#ifndef BASE_MATCH_CALLBACK_H
#define BASE_MATCH_CALLBACK_H

#include "clang/ASTMatchers/ASTMatchFinder.h"

#include <string>

using std::string;

using llvm::raw_ostream;

using clang::Expr;
using clang::Decl;
using clang::SourceManager;
using clang::SourceLocation;
using clang::ast_matchers::MatchFinder;

class BaseMatchCallback : public MatchFinder::MatchCallback
{
  public:
    /**
     * The explicit default constructor just initializes the SM data member.
     */
    explicit BaseMatchCallback() : SM(nullptr) {}

    /**
     * This method is called every time the AST matcher matches a corresponding expression
     * in the AST. This method overrides MatchFinder::MatchCallback::run() and itself should
     * be overridden by inherited classes.
     *
     * This method just assigns the SourceManager SM protected data member.
     *
     * @param const MatchResult& result - The matched result returned from the AST matcher.
     */
    void run(const MatchFinder::MatchResult& result) override;

  protected:
    /**
     * This method prints the full expression, the filename where this expression originated,
     * the row number (line number), and the column number. It is used for diagnostic purposes.
     *
     * This method is marked as virtual because it maybe overridden by a derived class.
     * The derived class can change the behavior of this method.
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
    virtual void outputExpression(const Expr* expr, raw_ostream& output, const SourceLocation& loc_start) const;

    /**
     * This method prints the full declaration, the filename where this declaration originated,
     * the row number (line number), and the column number. It is used for diagnostic purposes.
     *
     * This method is marked as virtual because it maybe overridden by a derived class.
     * The derived class can change the behavior of this method.
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
    virtual void outputDeclaration(const Decl* decl, raw_ostream& output, const SourceLocation& loc_start) const;

    /**
     * Given two SourceLocations delimiting a source code text, This method prints that text,
     * the filename where this code text originated, the row number (line number), and the column
     * number. It is used for diagnostic purposes.
     *
     * This method is marked as virtual because it maybe overridden by a derived class.
     * The derived class can change the behavior of this method.
     *
     * @param const SourceLocation* loc_start - The starting location of the code text.
     *
     * @param const SourceLocation* loc_end - The end location of the code text.
     *
     * @param raw_ostream& output - A reference to an LLVM raw output stream, which is
     *                     an extremely fast bulk output stream that can only output to a stream.
     *                     Data can be written to a different destination depending on the value of
     *                     this parameter. It can be llvm::outs(), llvm::errs(), or llvm::nulls().
     *                     The reference is non-const because writing output to an instance of a
     *                     stream class causes that object to be modified.
     */
    virtual void outputExpression(const SourceLocation& loc_start, const SourceLocation& loc_end, raw_ostream& output) const;

    /**
     * @param const Expr* expression - A pointer to an instance of clang::Expr,
     *        or one of it's derived types.
     *
     * @return string - A string representation of the passed in expression,
     *         the exact string text of that expression.
     */
    virtual string getExprAsString(const Expr* expression) const;

    /**
     * @param const Decl* declaration - A pointer to an instance of clang::Decl,
     *        or one of it's derived types.
     *
     * @return string - A string representation of the passed in declaration,
     *         the exact string text of that declaration.
     */
    virtual string getDeclAsString(const Decl* declaration) const;

    /**
     * @param const SourceLocation* loc_start - The starting location of the code text.
     *
     * @param const SourceLocation* loc_end - The end location of the code text.
     *
     * @return string - A string representation of the code text between these two SourceLocations.
     */
    virtual string getLocationsAsString(const SourceLocation& loc_start, const SourceLocation& loc_end) const;

    /// The SourceManager is protected because I want other classes that inherit from this one
    /// to be able to access this variable.
    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. This enables us to do source code replacements.
    SourceManager* SM;
};

#endif /* BASE_MATCH_CALLBACK_H */
