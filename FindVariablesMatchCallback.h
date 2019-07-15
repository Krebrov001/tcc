#ifndef FIND_VARIABLES_MATCH_CALLBACK_H
#define FIND_VARIABLES_MATCH_CALLBACK_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <set>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::set;
using std::size_t;

using llvm::raw_ostream;

using clang::SourceManager;
using clang::SourceLocation;
using clang::ast_matchers::MatchFinder;

using clang::Decl;
using clang::Expr;

class FindVariablesMatchCallback : public MatchFinder::MatchCallback
{
  public:
    /**
     * This is the drfault constructor, which initializes all the member variables of the class.
     */
    explicit FindVariablesMatchCallback() : SM(nullptr) {}

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
     * @param vector<string>& variables - A reference to the vector of all unused variables.
     *                        Specifically this parameter must be a reference to the private vector
     *                        RemoveVariablesMatchCallback.variables
     *        The parameter should be what is returned by RemoveVariablesMatchCallback.getVector()
     *   find_variables_match_callback.collectResults(remove_variables_match_callback.getVector());
     */
    void collectResults(vector<string>& variables);

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

    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. This enables us to print sections of source code representing an
    // expression or declaration to the screen.
    SourceManager* SM{nullptr};
    // Stores as strings, names of all variables that are declared in the source code.
    set<string> variable_declarations;
    // Stores as strings, names of all variables that are used in the source code.
    set<string> variable_uses;
    // Add other variables here as needed.
};

#endif /* FIND_VARIABLES_MATCH_CALLBACK_H */
