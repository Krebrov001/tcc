#ifndef SEPARATE_STEP_FUNCTIONS_H
#define SEPARATE_STEP_FUNCTIONS_H

#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <map>
#include <string>

using std::map;
using std::string;

using clang::IfStmt;

using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;


class SeparateStepFunctions : public BaseMatchCallback
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
    explicit SeparateStepFunctions(map<string, Replacements> * replacements, string filename)
     : BaseMatchCallback(), replacements{replacements}
    {
        // Find the start of the .extension in the filename.extension, starting searching from the end
        // of the file.
        string::const_reverse_iterator it = filename.crbegin();
        for (; (*it) != '.'; ++it)
            ;  // empty loop body

        // Calling .base() on a reverse iterator converts it into a forward iterator.
        // https://stackoverflow.com/a/2037917/5500589
        step_function_name = string(filename.cbegin(), it.base() - 1).append("_step");
        step_minor_function_name = step_function_name + "_minor";
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
     * This method initiates a refactoring which removes all state major if () {} statements from
     * the function minor_step(), and it removes all state minor if () {} statements from the
     * function major_step(), also known as step();
     *
     * @param const MatchFinder::MatchResult result - Found matching results.
     *              This object is actually a reference to an object managed by the RefactoringTool
     *              which resides in the main() function of this application.
     */
    void run(const MatchFinder::MatchResult& result) override;

    /**
     * Returns the number of major if () {} statements that were removed from the step_minor() function.
     */
    unsigned int getNumMajorIfStatementsRemoved() const { return num_major_if_statements_removed; }

    /**
     * Return the number of minor if () {} statements that were removed from the step_major() function.
     */
    unsigned int getNumMinorIfStatementsRemoved() const { return num_minor_if_statements_removed; }

  private:
    /**
     * This function removes an if () {} statement marking a major or minor step, from the source code.
     *
     * @param const Expr* if_time_step - This expression points to an if () {} statement that is to
     *                    ve removed from the source code text.
     *
     * @param string type_of_step - This string indicates the type of step, either a majopr one or a minor one.
     *               Valid arguments are:  "major" or
     *                                     "minor"
     */
    void remove_time_step_function(const IfStmt* if_time_step, string type_of_step);

    /* Private member variables. */

    map<string, Replacements>* replacements;
    // This string is the name of the step function of the model.
    string step_function_name;
    string step_minor_function_name;

    unsigned int num_major_if_statements_removed{0};
    unsigned int num_minor_if_statements_removed{0};
};

#endif  /* SEPARATE_STEP_FUNCTIONS_H */
