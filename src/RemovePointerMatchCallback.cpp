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


#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Constant.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/Instruction.h>
#include <llvm/IR/Instructions.h>
#include <llvm/ADT/APInt.h>
using llvm::ConstantInt;
using llvm::VectorType;
using llvm::APInt;

#define getIntLiteral(llvm_context, size, value) \
    ConstantInt::get(Type::getInt##size##Ty(##llvm_context##), APInt(##size##,##value##, /*isSigned =*/ true))

#define getVectorType(element_type, num_elements) \
    VectorType::get(##element_type##, (unsigned int)##num_elements##)

#define getVectorLiteral_1(llvm_context, size, num_elements) \
    ConstantVector::get(ArrayRef(vector<Constant*>(##num_elements##, getIntLiteral(##llvm_context##,##size##, 0))))

#define getVectorLiteral_2(llvm_context, IntegerType, num_elements) \
    ConstantVector::get(ArrayRef(vector<Constant*>(##num_elements##, ConstantInt::get(##IntegerType##, 0ull))))

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
        outputSource(decl, errs());
        errs() << "ERROR: Unable to find source location of the declaration of complete_system_io_M.\n";
        errs() << "\n\n";
        return;
    }
    CharSourceRange range = CharSourceRange::getTokenRange(loc_start, after_semi_loc);
    Replacement global_pointer_rep(*SM, range, replacement);

    if (Error err = (*replacements)[global_pointer_rep.getFilePath()].add(global_pointer_rep)) {
        outputSource(decl, errs());
        errs() << "ERROR: Error adding replacement that removes the declaration of complete_system_io_M.\n";
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        outputSource(decl, outs());
        outs() << "replaced with:\n" << replacement << '\n';
        outs() << "\n\n";
    }
    // No error, increment the number of global pointer removals to print to the user.
    ++num_global_pointers;
}


void RemovePointerMatchCallback::replace_pointer_use(const Expr* expr)
{
    string replacement = "&";
    if ( auto varexp = dyn_cast<DeclRefExpr>(expr) ) {
        /* Calculating the string replacement. */

        // Get the actual declaration of the global pointer.
        const auto *vardecl = dyn_cast<VarDecl>(varexp->getDecl());
        // Get the right hand side of the operator =, which is &complete_system_io_M_
        const auto *init = dyn_cast<UnaryOperator>(vardecl->getInit());
        // Get the global struct, which is complete_system_io_M_
        const auto *global_struct = init->getSubExpr();
        replacement += getAsString(global_struct);
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
            outputSource(varexp, errs());
            errs() << "ERROR: Unable to find ending source location of the pointer use.\n";
            errs() << "\n\n";
            return;
        }
        CharSourceRange range = CharSourceRange::getTokenRange(startLoc, endLoc2);
        Replacement pointer_use_rep(*SM, range, replacement);

        if (Error err = (*replacements)[pointer_use_rep.getFilePath()].add(pointer_use_rep)) {
            outputSource(varexp, errs());
            errs() << "ERROR: Error adding replacement that replaces the pointer use with address of structure.\n";
            errs() << "\n\n";
            return;
        }
        if (print_debug_output) {
            outputSource(varexp, outs());
            outs() << "replaced with:\n" << replacement << '\n';
            outs() << "\n\n";
        }
        // No error, increment the number of pointer use replacements to print to the user.
        ++num_pointer_uses;

    } else {
        outputSource(expr, errs());
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
        replacement += getAsString(global_struct);
    }

    // Get the range of characters to be replaced, between '(' and the delimiter char,
    // either ')' or ','
    // Not including the delimiter character.
    // We do not want to replace the delimiter character.
    CharSourceRange range = CharSourceRange::getTokenRange(loc1, loc2);

    /* Performing the actual replacement, replacing the source code text. */

    Replacement pointer_use_macro_rep(*SM, range, replacement);
    if (Error err = (*replacements)[pointer_use_macro_rep.getFilePath()].add(pointer_use_macro_rep)) {
        outputSource(varexpr, errs());
        errs() << "ERROR: Error adding replacement that replaces the pointer use with address of structure.\n";
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        outputSource(varexpr, outs());
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
    // The SourceLocation startLoc, points to the first character in the expression.
    // complete_system_io_M->Timing
    // ^
    SourceLocation startLoc = varexpr->getBeginLoc();
    // We need to get the text to replace:
    // complete_system_io_M->
    // endLoc saves as a Sourcelocation, the position where to stop the replacement
    // character range.
    // complete_system_io_M->
    //                      ^
    // The replacement character range now includes the name of the pointer and
    // the -> operator.
    SourceLocation endLoc = getCharOffsetLoc(startLoc, '>', true);
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
        replacement += getAsString(global_struct);
        replacement.push_back('.');
    }

    /* Performing the actual replacement, replacing the source code text. */

    Replacement pointer_dereference_rep(*SM, range, replacement);
    if (Error err = (*replacements)[pointer_dereference_rep.getFilePath()].add(pointer_dereference_rep)) {
        // endLoc.getLocWithOffset(1) is needed to print the last '>' character in
        // complete_system_io_M->
        outputSource(startLoc, endLoc.getLocWithOffset(1), errs());
        errs() << "ERROR: Error adding replacement that replaces the pointer dereference arrow expression.\n";
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        outputSource(startLoc, endLoc.getLocWithOffset(1), outs());
        outs() << "replaced with:\n" << replacement << '\n';
        outs() << "\n\n";
    }
    ++num_pointer_dereferences;
}
