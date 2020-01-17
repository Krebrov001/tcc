#ifndef CREATE_MINOR_STEP_FUNCTION_H
#define CREATE_MINOR_STEP_FUNCTION_H

#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <map>
#include <string>

using std::map;
using std::string;

using clang::FunctionDecl;
using clang::CallExpr;

using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;


class CreateMinorStepFunction : public BaseMatchCallback
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
     *
     * @param string filename - The name of the file that is currently being processed.
     */
    explicit CreateMinorStepFunction(map<string, Replacements> * replacements, string filename)
     : BaseMatchCallback(), replacements{replacements}
    {
        // Find the start of the .extension in the filename.extension, starting searching from the end
        // of the file.
        string::const_reverse_iterator it = filename.crbegin();
        for (; (*it) != '.'; ++it)
            ;  // empty loop body

        // Calling .base() on a reverse iterator converts it into a forward iterator.
        // https://stackoverflow.com/a/2037917/5500589
        this->step_function_name = string(filename.cbegin(), it.base() - 1).append("_step");
    }

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
     * This method is the entry point to any refactorings that are performed.
     * Depending on the matched result, one of three refactorings is performed:
     * - The prototype declaration of the step_minor() function is inserted into the source code.
     * - The definition of the step_minor() function is inserted into the source code.
     * - A call to the step() function is replaced with a call to the step_minor() function.
     *
     * @param const MatchFinder::MatchResult result - Found matching results.
     */
    void run(const MatchFinder::MatchResult& result) override;

    /**
     * Returns the number of minor_step() functions inserted into the source code.
     */
    unsigned int getNumMinorStepFunctions() const { return num_minor_step_functions; }

    /**
     * Returns the number of minor_step() prototype declarations inserted into the source code.
     */
    unsigned int getNumInsertedDeclarations() const { return num_inserted_declarations; }

    /**
     * Returns the number of calls to step() that were renamed to step_minor().
     */
    unsigned int getNumCallRenames() const { return num_call_renames; }

  private:
    /**
     * This method inserts the definition of step_minor() function directly after the definition of
     * the corresponding step() function into the source code.
     *
     * @param const FunctionDecl* step_function - The AST node representing the definition of the
     *                                            step() function.
     */
    void insert_function_body(const FunctionDecl* step_function);

    /**
     * This method inserts the prototype declaration of step_minor() function directly after the
     * prototype declaration of the corresponding step() function into the source code.
     * The prototype declaration of the step_minor() function is inserted not into the *.c file but
     * into the *.h file.
     *
     * @param const FunctionDecl* step_declaration - The AST node representing the prototype declaration
     *                                               of the step() function.
     */
    void insert_function_declaration(const FunctionDecl* step_declaration);

    /**
     * This method renames the call to the step() function, into a call to the step_minor() function.
     *
     * @param const CallExpr* function_call - The AST node representing the call to the step()
     *                                        function, to be renamed into a call to the step_minor()
     *                                        function.
     */
    void rename_step_call(const CallExpr* function_call);

    /* Private member variables. */

    map<string, Replacements>* replacements;
    // This string is the name of the step function of the model.
    string step_function_name;
    unsigned int num_minor_step_functions{0};
    unsigned int num_call_renames{0};
    unsigned int num_inserted_declarations{0};
};

#endif  /* CREATE_MINOR_STEP_FUNCTION_H */
