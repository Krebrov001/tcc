#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"

#include "RemovePointerMatchCallback.h"

using llvm::outs;
using llvm::errs;
using llvm::raw_ostream;
using llvm::Error;

using clang::tooling::Replacement;
using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::StatementMatcher;
using clang::ast_matchers::DeclarationMatcher;

using clang::ast_matchers::declRefExpr;
using clang::ast_matchers::varDecl;
using clang::ast_matchers::memberExpr;
using clang::ast_matchers::pointerType;
using clang::ast_matchers::hasGlobalStorage;
using clang::ast_matchers::hasType;
using clang::ast_matchers::hasAncestor;
using clang::ast_matchers::hasDescendant;
using clang::ast_matchers::isArrow;
using clang::ast_matchers::isExpansionInMainFile;
using clang::ast_matchers::to;
using clang::ast_matchers::unless;

using clang::dyn_cast;
using clang::Decl;
using clang::Expr;
using clang::DeclRefExpr;
using clang::MemberExpr;
using clang::VarDecl;
using clang::UnaryOperator;
using clang::MemberExpr;
using clang::QualType;
using clang::PointerType;
using clang::LangOptions;
using clang::SourceManager;
using clang::SourceLocation;
using clang::CharSourceRange;
using clang::Lexer;

using clang::tok::semi;
using clang::tok::l_paren;

extern bool print_debug_output;  // defined in refactoring_tool.cpp

void RemovePointerMatchCallback::getASTmatchers(MatchFinder& mf)
{
    StatementMatcher pointer_dereference_matcher = memberExpr(
        isArrow(),
        hasDescendant(declRefExpr(to( varDecl(
            hasGlobalStorage(),
            hasType(pointerType()),
            isExpansionInMainFile()
        ) ))),
        unless(hasDescendant(memberExpr(isArrow())))
    ).bind("pointer_dereference");

    StatementMatcher pointer_use_matcher = declRefExpr(to(varDecl(
        hasGlobalStorage(),
        hasType(pointerType()),
        isExpansionInMainFile()
    )), unless(hasAncestor( memberExpr(isArrow()) ))
    ).bind("pointer_use");

    DeclarationMatcher global_pointer_matcher = varDecl(
        hasGlobalStorage(),
        hasType(pointerType()),
        isExpansionInMainFile()
    ).bind("global_pointer");

    // &remove_pointer_match_callback, is the address of the calling object == this
    mf.addMatcher(pointer_use_matcher, this);
    mf.addMatcher(pointer_dereference_matcher, this);
    mf.addMatcher(global_pointer_matcher, this);
}


void RemovePointerMatchCallback::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;

    if (const auto *decl = result.Nodes.getNodeAs<Decl>("global_pointer")) {
        remove_global_pointer(decl);
    } else if (const auto *expr = result.Nodes.getNodeAs<MemberExpr>("pointer_dereference")) {
        replace_pointer_arrow(expr);
    } else if (const auto *expr = result.Nodes.getNodeAs<Expr>("pointer_use")) {
        replace_pointer_use(expr);
    }
}


void RemovePointerMatchCallback::remove_global_pointer(const Decl* decl)
{
    string replacement;

    SourceLocation loc_start = decl->getBeginLoc();
    // Get the location after the semicolon following the declaration of complete_system_io_M.
    SourceLocation after_semi_loc = Lexer::findLocationAfterToken(decl->getEndLoc(), semi, *SM, LangOptions(), false);
    if (!after_semi_loc.isValid()) {
        outputDeclaration(decl, errs(), loc_start);
        errs() << "ERROR: Unable to find source location of the declaration of complete_system_io_M.\n";
        errs() << "\n\n";
        return;
    }
    CharSourceRange range = CharSourceRange::getTokenRange(loc_start, after_semi_loc);
    Replacement global_pointer_rep(*SM, range, replacement);

    if (Error err = (*replacements)[global_pointer_rep.getFilePath()].add(global_pointer_rep)) {
        outputDeclaration(decl, errs(), loc_start);
        errs() << "ERROR: Error adding replacement that removes the declaration of complete_system_io_M.\n";
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        outputDeclaration(decl, outs(), loc_start);
        outs() << "replaced with:\n" << replacement << '\n';
        outs() << "\n\n";
    }
    // No error, increment the number of global pointer removals to print to the user.
    ++num_global_pointers;
}


void RemovePointerMatchCallback::replace_pointer_use(const Expr* expr)
{
    SourceLocation loc_start = expr->getBeginLoc();

    string replacement = "&";
    if ( auto varexp = dyn_cast<DeclRefExpr>(expr) ) {
        /* Calculating the string replacement. */

        // Get the actual declaration of the global pointer.
        const auto *vardecl = dyn_cast<VarDecl>(varexp->getDecl());
        // Get the right hand side of the operator =, which is &complete_system_io_M_
        const auto *init = dyn_cast<UnaryOperator>(vardecl->getInit());
        // Get the global struct, which is complete_system_io_M_
        const auto *global_struct = init->getSubExpr();
        replacement += getExprAsString(global_struct);
        //init->dump();

        /* Performing the actual replacement, replacing the source code text. */

        LangOptions lopt;
        SourceLocation startLoc = SM->getFileLoc(varexp->getBeginLoc());
        SourceLocation _endLoc = SM->getFileLoc(varexp->getEndLoc());
        if (startLoc.isMacroID()) {
            startLoc = SM->getSpellingLoc(startLoc);
        }
        if (_endLoc.isMacroID()) {
            _endLoc = SM->getSpellingLoc(_endLoc);
        }
        SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, *SM, lopt);
        // endLoc points to the character one after the end of the expression to be replaced.
        // (void) memset((void *)complete_system_io_M, 0,
        //                                           ^
        // The problem is, that it also replaces the comma. So the solution to this problem is to
        // Make endLoc2 point to one character before endLoc.
        // (void) memset((void *)complete_system_io_M, 0,
        //                                          ^
        SourceLocation endLoc2 = endLoc.getLocWithOffset(-1);

        if (!endLoc2.isValid()) {
            outputExpression(varexp, errs(), startLoc);
            errs() << "ERROR: Unable to find ending source location of the pointer use.\n";
            errs() << "\n\n";
            return;
        }
        CharSourceRange range = CharSourceRange::getTokenRange(startLoc, endLoc2);
        Replacement pointer_use_rep(*SM, range, replacement);

        if (Error err = (*replacements)[pointer_use_rep.getFilePath()].add(pointer_use_rep)) {
            outputExpression(varexp, errs(), startLoc);
            errs() << "ERROR: Error adding replacement that replaces the pointer use with address of structure.\n";
            errs() << "\n\n";
            return;
        }
        if (print_debug_output) {
            outputExpression(varexp, outs(), startLoc);
            outs() << "replaced with:\n" << replacement << '\n';
            outs() << "\n\n";
        }
        // No error, increment the number of pointer use replacements to print to the user.
        ++num_pointer_uses;

    } else {
        outputExpression(expr, errs(), loc_start);
        errs() << "ERROR: replace pointer use says, \"The passed in Expr is not a DeclRefExpr.\"\n";
        errs() << "\n\n";
        return;
    }
}


void RemovePointerMatchCallback::replace_pointer_arrow(const MemberExpr* expr)
{
    // The base expression of the member expression is the calling object,
    // in this case baseExp->something.
    const auto* baseExp = expr->getBase();
    SourceLocation loc_start = baseExp->getBeginLoc();

    // Get the type of the base expression, a pointer type.
    const QualType qualtype = baseExp->getType();
    const auto* type = dyn_cast<PointerType>(qualtype.getTypePtr());
    // Get the type to which that pointer points to.
    const QualType pointeeType = type->getPointeeType();
    string type_string = pointeeType.getAsString();

    // Returns true if the expression is inside of a macro, is part of an argument to a macro.
    // This could be of two possibilites:
    // 1. The expression is itself the argument to a macro:
    // rtmIsMajorTimeStep(complete_system_io_M)
    // So we need to replace it with &complete_system_io_M_
    // 2. The result of the expression is used to compute the argument to a macro,
    //    but the expression is not the argument itself.
    // rtsiSetSolverName(&complete_system_io_M->solverInfo,"ode3");
    // In that case we need to replace it with complete_system_io_M_.
    // It is an arrow expression, and we need to replace it with a dot.
    if (loc_start.isMacroID()) {

        // This line of code will get where the macro is defined,
        // in complete_system_io_private.h
        //loc_start = baseExp->getBeginLoc();
        //
        // This should be used for replacing the macro expansion location with the literal
        // text of the macro definition, like performing your own macro expansion immediately
        // with the new data. No macro call happens because the refactoring tool expands it
        // in this situation. The refactoring tool does the preprocessor's job.

        // This line of code will get to where the macro is expanded to, without the expansion.
        loc_start = SM->getFileLoc(baseExp->getBeginLoc());
        // The above code will either return the start of a macro call,
        // rtmIsMajorTimeStep(complete_system_io_M)
        // or it will return the start of an arrow expression,
        // complete_system_io_M->Timing
        //
        // This should be used for replacing the argument to the macro call with the new data.
        // The macro call is still expanded by the preprocessor because it is left untouched.

        // This code gets the end of the above expression.
        SourceLocation loc_end = SM->getFileLoc(baseExp->getEndLoc());

        // loc1 is the location directly following the '(' after the end of the token.
        // So if we have:
        // rtmIsMajorTimeStep(complete_system_io_M)
        //                    ^
        // Otherwise if we have:
        // complete_system_io_M->Timing
        // the loc1 would be invalid.
        SourceLocation loc1 = Lexer::findLocationAfterToken(loc_end, l_paren, *SM, LangOptions(), false);
        // If the loc1 is not valid, then we have an arrow expression inside a macro call:
        // complete_system_io_M->Timing
        if (!loc1.isValid()) {
            replace_pointer_dereference(baseExp);

        // If the loc1 is valid, then we have the expression as an argument to the macro call,
        // rtmIsMajorTimeStep(complete_system_io_M)
        //                    ^
        } else {
            replace_pointer_use_macro(baseExp, loc1);
        }

    } else {
        replace_pointer_dereference(baseExp);
    }
}


void RemovePointerMatchCallback::replace_pointer_use_macro(const Expr* baseExp, SourceLocation loc1)
{
    // const char* start is a pointer to the character at that location of the '('.
    // So if we have:
    // rtmIsMajorTimeStep(complete_system_io_M)
    //                    ^
    // it points to the 'c'.
    const char* start = SM->getCharacterData(loc1);
    /* We need to get the text between the '(' and ')', the text to replace:
     * complete_system_io_M
     * This loop goes from the starting position and increments the pointer until it
     * reaches a delimiting character which marks the end of the token.
     * When this loop ends, the pointer start will be pointing to that exact character.
     * rtmIsMajorTimeStep(complete_system_io_M)
     *                                        ^
     * The ',' can also be a such delimiter:
     * rtmSetTPtr(complete_system_io_M,
     *                                ^
     *
     * unsigned int num_chars counts how many characters away is that delimiter char
     * from the '(', how many characters is the text to replace.
     */
    unsigned int num_chars = 0;
    while (*start != ')' && *start != ',') {
        ++num_chars;
        ++start;
    }
    // (start + num_chars) points to the delimiter character.
    // (start + num_chars - 1) points to the char preceding the delimiter character,
    // not including the delimiter character.
    // loc2 now is a SourceLocation that points to (num_chars - 1) away from the '('
    SourceLocation loc2 = loc1.getLocWithOffset(num_chars - 1);
    //SourceLocation loc2 = Lexer::findLocationAfterToken(loc_end, r_paren, *SM, LangOptions(), false);

    /* Calculating the string replacement. */

    string replacement = "&";
    // Go past the parenthesis and implicit casts to get the DeclRefExpr.
    // This is the complete_system_io_M
    const auto *varexpr = dyn_cast<DeclRefExpr>(baseExp->IgnoreParenImpCasts());
    // These are temporary expressions that are only needed to compute the replacement string.
    // They are put in {} here, artificially scope delimited because after this point
    // we don't need them any more.
    {
        // Get the actual declaration of the global pointer.
        const auto *vardecl = dyn_cast<VarDecl>(varexpr->getDecl());
        // Get the right hand side of the operator =, which is &complete_system_io_M_
        const auto *init = dyn_cast<UnaryOperator>(vardecl->getInit());
        // Get the global struct, which is complete_system_io_M_
        const auto *global_struct = init->getSubExpr();
        replacement += getExprAsString(global_struct);
    }

    // Get the range of characters to be replaced, between '(' and the delimiter char,
    // either ')' or ','
    // Not including the delimiter character.
    // We do not want to replace the delimiter character.
    CharSourceRange range = CharSourceRange::getTokenRange(loc1, loc2);

    /* Performing the actual replacement, replacing the source code text. */

    Replacement pointer_use_macro_rep(*SM, range, replacement);
    if (Error err = (*replacements)[pointer_use_macro_rep.getFilePath()].add(pointer_use_macro_rep)) {
        outputExpression(varexpr, errs(), varexpr->getBeginLoc());
        errs() << "ERROR: Error adding replacement that replaces the pointer use with address of structure.\n";
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        //outputExpression(baseExp, outs(), loc_start);
        //outs() << '(';
        outputExpression(varexpr, outs(), varexpr->getBeginLoc());
        outs() << "replaced with:\n" << replacement << '\n';
        outs() << "\n\n";
    }

    // Even though this is technically a pointer dereference,
    // I'm treating it as a pointer use:
    // rtmIsMajorTimeStep(complete_system_io_M)
    // And the replacement that is prerformed in this situation is similar to the
    // replacement that is performed for a typical pointer use.
    ++num_pointer_uses;
}


void RemovePointerMatchCallback::replace_pointer_dereference(const Expr* baseExp)
{
    LangOptions langopt;
    // This DeclRefExpr is the pointer variable which is used,
    // complete_system_io_M
    const auto *varexpr = dyn_cast<DeclRefExpr>(baseExp->IgnoreParenImpCasts());
    // The SourceLocation startLoc, and it's char* representation, start, both point
    // to the first character in the expression.
    // complete_system_io_M->Timing
    // ^
    SourceLocation startLoc = varexpr->getBeginLoc();
    const char* start = SM->getCharacterData(startLoc);

    /* We need to get the text to replace:
     * complete_system_io_M->
     * This loop goes from the starting position and increments the pointer until it
     * reaches the '-' character which marks the end of the token.
     * When this loop ends, the pointer start will be pointing to that exact character.
     * complete_system_io_M->
     *                     ^
     *
     * unsigned int num_chars counts how many characters away the '-' is from the
     * original startLoc, how many characters in the text to replace.
     */
    unsigned int num_chars = 0;
    while (*start != '-') {
        ++num_chars;
        ++start;
    }
    // endLoc saves as a Sourcelocation, the position where to stop the replacement
    // character range.
    // complete_system_io_M->
    //                      ^
    // The replacement character range now includes the name of the pointer and
    // the -> operator.
    SourceLocation endLoc = startLoc.getLocWithOffset(num_chars + 1);
    CharSourceRange range = CharSourceRange::getTokenRange(startLoc, endLoc);

    string replacement;
    // These are temporary expressions that are only needed to compute the replacement string.
    // They are put in {} here, artificially scope delimited because after this point
    // we don't need them any more.
    {
        // Get the actual declaration of the global pointer.
        const auto *vardecl = dyn_cast<VarDecl>(varexpr->getDecl());
        // Get the right hand side of the operator =, which is &complete_system_io_M_
        const auto *init = dyn_cast<UnaryOperator>(vardecl->getInit());
        // Get the global struct, which is complete_system_io_M_
        const auto *global_struct = init->getSubExpr();
        replacement += getExprAsString(global_struct);
        replacement.push_back('.');
    }

    /* Performing the actual replacement, replacing the source code text. */

    Replacement pointer_dereference_rep(*SM, range, replacement);
    if (Error err = (*replacements)[pointer_dereference_rep.getFilePath()].add(pointer_dereference_rep)) {
        outputExpression(varexpr, errs(), startLoc, num_chars + 2);
        //errs() << string(SM->getCharacterData(startLoc), num_chars + 2) << '\n';
        errs() << "ERROR: Error adding replacement that replaces the pointer dereference arrow expression.\n";
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        outputExpression(varexpr, outs(), startLoc, num_chars + 2);
        //outs() << string(SM->getCharacterData(startLoc), num_chars + 2) << '\n';
        outs() << "replaced with:\n" << replacement << '\n';
        outs() << "\n\n";
    }
    ++num_pointer_dereferences;
}


void RemovePointerMatchCallback::outputExpression(const Expr* expr, raw_ostream& output, const SourceLocation& loc_start, const int numchars) const
{
    // If numchars are not provided as a function argument or if it is a negative value,
    // this branch is executed.
    if (numchars < 0) {
        output << getExprAsString(expr) << '\n';
    // numchars are provided as a function argument, manually compute the output string.
    } else {
        output << string(SM->getCharacterData(loc_start), numchars) << '\n';
    }

    // If the loc_start is inside a macro, then it's possible that SM->getFileName() would
    // not be able to read the file name information from it.
    // In that case we want to make sure to pass in the spelling location to that function,
    // because it expects a spelling location, and in case of a macro expansion, that may not
    // be the case for loc_start.
    if (loc_start.isMacroID()) {
        SourceLocation spelling_loc_start = SM->getSpellingLoc(loc_start);
        output << "in "<< SM->getFilename(spelling_loc_start) << ':';
        output << SM->getPresumedLineNumber(spelling_loc_start) << ':';
        output << SM->getPresumedColumnNumber(spelling_loc_start) << ':' << '\n';
    } else {
        output << "in "<< SM->getFilename(loc_start) << ':';
        output << SM->getPresumedLineNumber(loc_start) << ':';
        output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
    }
}


string RemovePointerMatchCallback::getExprAsString(const Expr* expression) const
{
    // Sources:
    // https://stackoverflow.com/a/37963981/5500589
    // https://stackoverflow.com/a/32118182/5500589
    // https://stackoverflow.com/a/39598930/5500589
    LangOptions lopt;
    // Get the source range and manager.
    //SourceLocation startLoc = expression->getBeginLoc();
    //SourceLocation _endLoc = expression->getEndLoc();

    SourceLocation startLoc = SM->getFileLoc(expression->getBeginLoc());
    SourceLocation _endLoc = SM->getFileLoc(expression->getEndLoc());
    if (startLoc.isMacroID()) {
        startLoc = SM->getSpellingLoc(startLoc);
    }
    if (_endLoc.isMacroID()) {
        _endLoc = SM->getSpellingLoc(_endLoc);
    }
    SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, *SM, lopt);

    size_t num_chars = SM->getCharacterData(endLoc) - SM->getCharacterData(startLoc);

    // Use LLVM's lexer to get source text.
    return string(SM->getCharacterData(startLoc), num_chars);
}
