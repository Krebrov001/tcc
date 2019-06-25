#include "RemovePointerMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"

using llvm::outs;
using llvm::errs;
using llvm::Error;
using llvm::StringRef;

using clang::dyn_cast;
using clang::isa;
using clang::Decl;
using clang::Expr;
using clang::DeclRefExpr;
using clang::MemberExpr;
using clang::ValueDecl;
using clang::VarDecl;
using clang::UnaryOperator;
using clang::LangOptions;
using clang::SourceManager;
using clang::SourceLocation;
using clang::SourceRange;
using clang::CharSourceRange;
using clang::Lexer;
using clang::tok::semi;
using clang::tooling::Replacement;

extern bool print_debug_output;  // defined in refactoring_tool.cpp

void RemovePointerMatchCallback::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;
    // Since this SourceLocation is used multiple times in below code, bring it up.
    SourceLocation loc_start;

    if (const auto *decl = result.Nodes.getNodeAs<Decl>("global_pointer")) {
        replace_global_pointer(decl);
        /*
        outs() << "global_pointer" << '\n';
        decl->dump();
        loc_start = decl->getLocStart();
        outputDeclaration(decl, outs(), loc_start);
        outs() << "\n\n";
        */
    } else if (const auto *expr = result.Nodes.getNodeAs<Expr>("pointer_dereference")) {
        //replace_pointer_dereference(expr);
        /*
        outs() << "pointer_dereference" << '\n';
        expr->dump();
        loc_start = expr->getLocStart();
        outputExpression(expr, outs(), loc_start);
        outs() << "\n\n";
        */
    } else if (const auto *expr = result.Nodes.getNodeAs<Expr>("pointer_use")) {
        replace_pointer_use(expr);
        /*
        outs() << "pointer_use" << '\n';
        expr->dump();
        loc_start = expr->getLocStart();
        outputExpression(expr, outs(), loc_start);
        outs() << "\n\n";
        */
    }

    //decl->dump();
}


void RemovePointerMatchCallback::replace_pointer_use(const Expr* expr)
{
    // References are easier to work with than pointers.
    const SourceManager &sm = *SM;

    SourceLocation loc_start = expr->getLocStart();

    string replacement = "&";
    if ( auto varexp = dyn_cast<DeclRefExpr>(expr) ) {
        /* Calculating the string replacement. */

        // Get the actual declaration of the global pointer.
        const auto *vardecl = dyn_cast<VarDecl>(varexp->getDecl());
        // Get the right hand side of the operator =, which is &complete_system_io_M_
        const UnaryOperator *init = dyn_cast<UnaryOperator>(vardecl->getInit());
        // Get the global struct, which is complete_system_io_M_
        const auto *global_struct = init->getSubExpr();
        replacement += getExprAsString(global_struct);
        //init->dump();

        /* Performing the actual replacement, replacing the source code text. */

        LangOptions lopt;
        SourceLocation startLoc = SM->getFileLoc(varexp->getLocStart());
        SourceLocation _endLoc = SM->getFileLoc(varexp->getLocEnd());
        if (startLoc.isMacroID()) {
            startLoc = SM->getSpellingLoc(startLoc);
        }
        if (_endLoc.isMacroID()) {
            _endLoc = SM->getSpellingLoc(_endLoc);
        }
        SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, *SM, lopt);

        if (!endLoc.isValid()) {
            outputExpression(varexp, errs(), startLoc);
            errs() << "ERROR: Unable to find source location of the pointer use.\n";
            errs() << "\n\n";
            return;
        }
        CharSourceRange range = CharSourceRange::getTokenRange(startLoc, endLoc);
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


void RemovePointerMatchCallback::replace_global_pointer(const Decl* decl)
{
    string replacement = "";

    SourceLocation loc_start = decl->getLocStart();
    // Get the location after the semicolon following the declaration of complete_system_io_M.
    SourceLocation after_semi_loc = Lexer::findLocationAfterToken(decl->getLocEnd(), semi, *SM, LangOptions(), false);
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


void RemovePointerMatchCallback::outputExpression(const Expr* expr, raw_ostream& output, const SourceLocation& loc_start) const
{
    output << getExprAsString(expr) << '\n';
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}


void RemovePointerMatchCallback::outputDeclaration(const Decl* decl, raw_ostream& output, const SourceLocation& loc_start) const
{
    output << getDeclAsString(decl) << '\n';
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}


string RemovePointerMatchCallback::getExprAsString(const Expr* expression) const
{
    // References are easier to work with than pointers.
    const SourceManager &sm = *SM;
    // Sources:
    // https://stackoverflow.com/a/37963981/5500589
    // https://stackoverflow.com/a/32118182/5500589
    // https://stackoverflow.com/a/39598930/5500589
    LangOptions lopt;
    // Get the source range and manager.
    //SourceLocation startLoc = expression->getLocStart();
    //SourceLocation _endLoc = expression->getLocEnd();

    SourceLocation startLoc = sm.getFileLoc(expression->getLocStart());
    SourceLocation _endLoc = sm.getFileLoc(expression->getLocEnd());
    if (startLoc.isMacroID()) {
        startLoc = sm.getSpellingLoc(startLoc);
    }
    if (_endLoc.isMacroID()) {
        _endLoc = sm.getSpellingLoc(_endLoc);
    }
    SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, sm, lopt);

    // Use LLVM's lexer to get source text.
    return string(sm.getCharacterData(startLoc), sm.getCharacterData(endLoc) - sm.getCharacterData(startLoc));
}


string RemovePointerMatchCallback::getDeclAsString(const Decl* declaration) const
{
    // References are easier to work with than pointers.
    const SourceManager &sm = *SM;
    // Source:
    // https://stackoverflow.com/a/11154162/5500589
    LangOptions lopt;

    SourceLocation startLoc = declaration->getLocStart();
    SourceLocation _endLoc = declaration->getLocEnd();
    SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, sm, lopt);

    return string(sm.getCharacterData(startLoc), sm.getCharacterData(endLoc) - sm.getCharacterData(startLoc));
}
