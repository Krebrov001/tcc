#include "RemoveHypotMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"

#include <string>

using std::string;

using llvm::outs;
using llvm::errs;
using llvm::raw_ostream;
using llvm::Error;

using clang::tooling::Replacement;
using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::StatementMatcher;
using clang::ast_matchers::callExpr;
using clang::ast_matchers::functionDecl;
using clang::ast_matchers::callee;
using clang::ast_matchers::hasName;

using clang::Expr;
using clang::CallExpr;
using clang::SourceLocation;
using clang::CharSourceRange;

extern bool print_debug_output;  // defined in refactoring_tool.cpp

void RemoveHypotMatchCallback::getASTmatchers(MatchFinder& mf)
{
    StatementMatcher hypot_matcher = callExpr(
        callee(functionDecl(hasName("hypot")))
    ).bind("hypot_call");

    // &remove_hypot_match_callback, is the address of the calling object == this
    mf.addMatcher(hypot_matcher, this);
}


void RemoveHypotMatchCallback::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;

    // This pointer should hold a representation of a valid hypot() call.
    if (const auto* hypot_call = result.Nodes.getNodeAs<CallExpr>("hypot_call")) {

        // Get the first argument, which is named x in the man page,
        // both as an expression and as a string.
        const Expr* x = hypot_call->getArg(0);
        SourceLocation string_x_begin = x->getBeginLoc();
        SourceLocation string_x_end = getCharOffsetLoc(string_x_begin, ',', true);
        string string_x = getAsString(string_x_begin, string_x_end);

        // Get the second argument, which is named y in the man page,
        // both as an expression and as a string.
        const Expr* y = hypot_call->getArg(1);
        SourceLocation string_y_begin = y->getBeginLoc();
        SourceLocation string_y_end = getCharOffsetLoc(string_y_begin, ')', true);
        string string_y = getAsString(string_y_begin, string_y_end);

        string replacement = "sqrt( (" + string_x + ") * (" + string_x + ") + (" +
                             string_y + ") * (" + string_y + ") )";

        SourceLocation startLoc = hypot_call->getBeginLoc();
        SourceLocation endLoc = hypot_call->getEndLoc();
        CharSourceRange range = CharSourceRange::getTokenRange(startLoc, endLoc);

        /* Performing the actual replacement, replacing the source code text. */

        Replacement hypot_call_rep(*SM, range, replacement);
        if (Error err = (*replacements)[hypot_call_rep.getFilePath()].add(hypot_call_rep)) {
            outputSource(hypot_call, errs());
            errs() << "ERROR: Error adding replacement that replaces hypot() with a manual calculation.\n";
            errs() << "\n\n";
            return;
        }
        if (print_debug_output) {
            outputSource(hypot_call, outs());
            outs() << "replaced with:\n" << replacement << '\n';
            outs() << "\n\n";
        }
        ++num_hypot_replacements;

    } else {
        errs() << "ERROR: The expression bound to \"hypot_call\" is not a valid hypot() call.\n";
        errs() << "\n\n";
    }
}
