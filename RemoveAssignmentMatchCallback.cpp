#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"

#include "RemoveAssignmentMatchCallback.h"

#include <string>

using std::string;

using llvm::outs;
using llvm::errs;
using llvm::Error;
using llvm::raw_ostream;

using clang::Decl;
using clang::LangOptions;
using clang::SourceManager;
using clang::SourceLocation;
using clang::Lexer;
using clang::CharSourceRange;

using clang::tooling::Replacement;

using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::translationUnitDecl;
using clang::ast_matchers::DeclarationMatcher;

extern bool print_debug_output;  // defined in refactoring_tool.cpp


void RemoveAssignmentMatchCallback::getASTmatchers(MatchFinder& mf)
{
    DeclarationMatcher entire_code = translationUnitDecl().bind("entire_code");
    mf.addMatcher(entire_code, this);
}


void RemoveAssignmentMatchCallback::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;

    if (const auto *decl = result.Nodes.getNodeAs<Decl>("entire_code")) {
        // Loops through each pair of SourceLocations and performs the replacements.
        for (auto SourcePair : SourcePairs) {
            SourceLocation loc_start = SourcePair.first;
            SourceLocation loc_end   = SourcePair.second;
            // + 1 because I do not want to return the location of the '\n', but the location right after
            // it, the start of the next line.
            loc_start = getCharOffsetLoc(loc_start, '\n', false).getLocWithOffset(1);
            //loc_start = Lexer::GetBeginningOfToken(loc_start, *SM, LangOptions());
            //CharSourceRange range = SM->getImmediateExpansionRange(loc_start);
            //loc_start = range.getBegin();
            //SourceLocation loc_end = range.getEnd();

            CharSourceRange range = CharSourceRange::getTokenRange(loc_start, loc_end);
            //string replacement("replace text");
            string replacement;

            /* Performing the actual replacement, replacing the source code text. */
            Replacement dead_code_rep(*SM, range, replacement);
            if (Error err = (*replacements)[dead_code_rep.getFilePath()].add(dead_code_rep)) {
                outputSource(loc_start, loc_end, errs());
                errs() << "ERROR: Error adding replacement that replaces the pointer use with address of structure.\n";
                errs() << "\n\n";
                return;
            }
            if (print_debug_output) {
                outputSource(loc_start, loc_end, outs());
                outs() << "replaced with:\n" << replacement << '\n';
                outs() << "\n\n";
            }
            ++num_unused_assignments;
        }  // for
    }  // if

}  // run()
