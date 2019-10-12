#ifndef REMOVE_ASSIGNMENT_MATCH_CALLBACK_H
#define REMOVE_ASSIGNMENT_MATCH_CALLBACK_H

#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Core/Replacement.h"

#include <string>
#include <map>
#include <utility>  // for std::pair
#include <vector>

using std::string;
using std::map;
using std::vector;
using std::pair;

using llvm::raw_ostream;

using clang::Decl;
using clang::SourceManager;
using clang::SourceLocation;
using clang::tooling::Replacements;
using clang::ast_matchers::MatchFinder;

class RemoveAssignmentMatchCallback : public BaseMatchCallback
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
    explicit RemoveAssignmentMatchCallback(map<string, Replacements> * replacements)
      : BaseMatchCallback(), replacements(replacements), SourcePairs{}
    {}

    /**
     * This method creates and "returns" the AST matchers that match expressions specifically
     * handled by this CallBack class, through the pass by reference parameter.
     *
     * The matched expression is only one, matching the TranslationUnitDecl, which represents
     * the entire source code file. This match happens only once.
     *
     * @param MatchFinder& mf - A non const reference to the MatchFinder in the main() function.
     *                     When this object is passed into this method, it is modified, the AST
     *                     matchers are added to it. This is my solution for "returning" multiple
     *                     AST matchers of possibly different types.
     */
    void getASTmatchers(MatchFinder& mf);

    /**
     * This method is only called once, when the TranslationUnitDecl is matched.
     * Then this method performs all the refactorings, it removes all the code, the usused
     * assignments which are stored as pairs of SourceLocations inside the vector SourcePairs.
     *
     * @param const MatchResult& result - The matched result returned from the AST matcher.
     */
    void run(const MatchFinder::MatchResult& result) override;

    /**
     * This method returns a reference to the private data member
     * vector< pair<SourceLocation, SourceLocation> > SourcePairs
     * This reference to the vector must then be passed into ActionFactory::ActionFactory(),
     * which passes the reference onto the class StaticAnalysisDiagnosticConsumer, which fills this
     * vector with the SourceLocations of unused assignments.
     */
    inline vector< pair<SourceLocation, SourceLocation> >& getVector() { return SourcePairs; }

    /**
	 * Returns the number of successful removals of unreferenced assignments.
	 */
	inline unsigned int getNumAssignmentRemovals() const { return num_unused_assignments; }

  private:

    /* Private member variables. */

    map<string, Replacements>* replacements;

    // This is a vector of pairs of SourceLocations delimiting the starts and ends respectively
    // of code text which is to be removed from the source code.
    // This vector is given as a reference to the class StaticAnalysisDiagnosticConsumer, which is
    // used to identify the portions of source code that are to be removed, and it fills up the
    // the vector with this information.
    // The given code text snippets are removed in the run() method by looping through this vector
    // and performing replacements.
    vector< pair<SourceLocation, SourceLocation> > SourcePairs;
    // The number of successful removals of unreferenced assignments.
    // If there are no errors, this number is usually equal to SourcePairs.length();
    // If two or more variables are declared in the same line in the source code text:
    //   int out, free = 5;
    // Then the whole line will count as only one replacement.
    unsigned int num_unused_assignments{0};
};

#endif /* REMOVE_ASSIGNMENT_MATCH_CALLBACK_H */
