#ifndef REMOVE_VARIABLES_MATCH_CALLBACK_H
#define REMOVE_VARIABLES_MATCH_CALLBACK_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <map>
#include <string>
#include <vector>

using std::map;
using std::string;
using std::vector;

using llvm::raw_ostream;

using clang::SourceManager;
using clang::SourceLocation;
using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;

using clang::Decl;
using clang::VarDecl;


class RemoveVariablesMatchCallback : public MatchFinder::MatchCallback
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
    explicit RemoveVariablesMatchCallback(map<string, Replacements> * replacements)
      : replacements(replacements), SM(nullptr) {}

    /**
     * This method creates and "returns" the AST matchers that match expressions specifically
     * handled by this CallBack class, through the pass by reference parameter.
     *
     * IMPORTANT: This method must be called specifically only after getVector() has been properly
     * called and filled the vector with data. This method depends on the vector being filled
     * with the names of variables to match and remove. If the vector happens to be empty, then
     * the AST matcher expressions will not be set.
     *
     * @param MatchFinder& mf - A non const reference to the MatchFinder in the main() function.
     *                     When this object is passed into this method, it is modified, the AST
     *                     matchers are added to it. This is my solution for "returning" multiple
     *                     AST matchers of possibly different types.
     */
    void getASTmatchers(MatchFinder& mf);

    /**
     * This method is called every time the AST matcher matches a corresponding expression
     * in the AST. This expression, as defined in getASTmatchers, is the declaration of a variable
     * that is unused in the source code. This method removes that variable from the source code.
     *
     * @param const MatchResult& result - The matched result returned from the AST matcher.
     */
    void run(const MatchFinder::MatchResult& result) override;

    /**
     * This method returns a reference to the private data member vector<string> variables.
     * This reference to the vector must then be passed into
     * FindVariablesMatchCallback::collectResults(), which fills this vector with the names of
     * variables that are declared but never used.
     * Example of correct use:
     *   find_variables_match_callback.collectResults(remove_variables_match_callback.getVector());
     *
     * Functions defined inside the class { }; are automatically inlined by default.
     */
    vector<string>& getVector() { return variables; }

    /**
	 * Returns the number of successful removals of unused variables.
	 */
	unsigned int getNumUnusedVariableRemovals() const { return num_unused_variables; }

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

    vector<string> variables;
    unsigned int num_unused_variables{0};
    // Add other variables here as needed.
};

#endif /* REMOVE_VARIABLES_MATCH_CALLBACK_H */
