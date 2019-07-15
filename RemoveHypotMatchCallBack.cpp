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
        string string_x = getArgAsString(x, ',');

        // Get the second argument, which is named y in the man page,
        // both as an expression and as a string.
        const Expr* y = hypot_call->getArg(1);
        string string_y = getArgAsString(y, ')');

        string replacement = "sqrt( (" + string_x + ") * (" + string_x + ") + (" +
                             string_y + ") * (" + string_y + ") )";

        SourceLocation startLoc = hypot_call->getLocStart();
        SourceLocation endLoc = hypot_call->getLocEnd();
        CharSourceRange range = CharSourceRange::getTokenRange(startLoc, endLoc);

        /* Performing the actual replacement, replacing the source code text. */

        Replacement hypot_call_rep(*SM, range, replacement);
        if (Error err = (*replacements)[hypot_call_rep.getFilePath()].add(hypot_call_rep)) {
            outputExpression(hypot_call, errs());
            errs() << "ERROR: Error adding replacement that replaces hypot() with a manual calculation.\n";
            errs() << "\n\n";
            return;
        }
        if (print_debug_output) {
            outputExpression(hypot_call, outs());
            outs() << "replaced with:\n" << replacement << '\n';
            outs() << "\n\n";
        }
        ++num_hypot_replacements;

    } else {
        errs() << "ERROR: The expression bound to \"hypot_call\" is not a valid hypot() call.\n";
        errs() << "\n\n";
    }
}


string RemoveHypotMatchCallback::getArgAsString(const Expr* arg, char end) const
{
    // Now the SourceLocation loc_start, and it's underlying const char* are both pointing
    // to the start of the argument.
    SourceLocation loc_start = arg->getLocStart();
    const char* start = SM->getCharacterData(loc_start);
    // We need to calculate the length of the argument, the number of characters it has.
    // An argument ends either with ',' or ')' (if it is the last one).
    // This loop counts the number of characters from the starting position until the end
    // of that argument.
    unsigned int num_chars = 0;
    while (*start != end) {
        ++num_chars;
        ++start;
    }
    // No need for a separate another SourceLocation to mark the end,
    // because the string() constructor takes a char* and number of characters from there on.
    //SourceLocation loc_end = loc_start.getLocWithOffset(num_chars);
    return string(SM->getCharacterData(loc_start), num_chars);
}


void RemoveHypotMatchCallback::outputExpression(const CallExpr* expr, raw_ostream& output)
{
    SourceLocation loc_start = expr->getLocStart();
    SourceLocation loc_end = expr->getLocEnd();

    output << string(SM->getCharacterData(loc_start), SM->getCharacterData(loc_end) - SM->getCharacterData(loc_start));
    output << ")\n";
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}
