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
    explicit RemoveAssignmentMatchCallback(map<string, Replacements> * replacements,
                                   const vector< pair<SourceLocation, SourceLocation> >& OtherPairs)
      : replacements(replacements), SM(nullptr), SourcePairs{}
    {
        for (auto SourcePair : OtherPairs) {
            SourcePairs.push_back(SourcePair);
        }
    }

    void getASTmatchers(MatchFinder& mf);

    void run(const MatchFinder::MatchResult& result);

    /**
	 * Returns the number of successful removals of unreferenced assignments.
	 */
	unsigned int getNumAssignmentRemovals() const { return num_unused_assignments; }

  private:
    string getLocationsAsString(const SourceLocation& loc_start, const SourceLocation& loc_end) const;

    void outputExpression(const SourceLocation& loc_start, const SourceLocation& loc_end, raw_ostream& output) const;

    /* Private member variables. */

    map<string, Replacements>* replacements;
    // This class handles loading and caching of source files into memory.
    // It is the middleman between the refactoring tool and the actual C source code which is
    // being analyzed. This enables us to do source code replacements.
    SourceManager* SM;
    vector< pair<SourceLocation, SourceLocation> > SourcePairs;
     unsigned int num_unused_assignments{0};
};

#endif /* REMOVE_ASSIGNMENT_MATCH_CALLBACK_H */
