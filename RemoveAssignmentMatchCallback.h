#ifndef REMOVE_ASSIGNMENT_MATCH_CALLBACK_H
#define REMOVE_ASSIGNMENT_MATCH_CALLBACK_H

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

class RemoveAssignmentMatchCallback : public MatchFinder::MatchCallback
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
     * @param const vector< pair<SourceLocation, SourceLocation> >& OtherPairs - This is a vector
     *              of pairs of SourceLocations marking the start and end respectively of the
     *              unused assignments which are to be replaced. This vector is created by the
     *              class StaticAnalysisDiagnosticConsumer. The only valid argument for this
     *              parameter when calling the constructor is DiagConsumer.getSourcePairs()
     *                The SourcePairs vector of this object is initalized as an empty vector.
     *                Then all elements from the OtherPairs vector are copied into the SourcePairs
     *                vector.
     */
    explicit RemoveAssignmentMatchCallback(map<string, Replacements> * replacements,
                                   const vector< pair<SourceLocation, SourceLocation> >& OtherPairs)
      : replacements(replacements), SM(nullptr), SourcePairs{}
    {
        for (auto SourcePair : OtherPairs) {
            SourcePairs.push_back(SourcePair);
        }
    }

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
    void run(const MatchFinder::MatchResult& result);

    /**
	 * Returns the number of successful removals of unreferenced assignments.
	 */
	unsigned int getNumAssignmentRemovals() const { return num_unused_assignments; }

  private:
    /**
     * @param const SourceLocation* loc_start - The starting location of the code text.
     *
     * @param const SourceLocation* loc_end - The end location of the code text.
     *
     * @return string - A string representation of the code text between these two SourceLocations.
     */
    string getLocationsAsString(const SourceLocation& loc_start, const SourceLocation& loc_end) const;

    /**
     * Given two SourceLocations delimiting a source code text, This method prints that text,
     * the filename where this code text originated, the row number (line number), and the column
     * number. It is used for diagnostic purposes.
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
    void outputExpression(const SourceLocation& loc_start, const SourceLocation& loc_end, raw_ostream& output) const;

    /* Private member variables. */

    map<string, Replacements>* replacements;
    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. This enables us to do source code replacements.
    SourceManager* SM;
    // This is a vector of pairs of SourceLocations delimiting the starts and ends respectively
    // of code text which is to be removed from the source code.
    // This vector is recieved from the class StaticAnalysisDiagnosticConsumer, and it is initlaized
    // and filled up in the constructor.
    // The given code text snippets are removed int he run() method by looping through this vector
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
