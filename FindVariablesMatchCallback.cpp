#include "FindVariablesMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"

#include <set>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::size_t;

using llvm::errs;
using llvm::raw_ostream;

using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::StatementMatcher;
using clang::ast_matchers::DeclarationMatcher;

using clang::ast_matchers::declRefExpr;
using clang::ast_matchers::varDecl;
using clang::ast_matchers::isExpansionInMainFile;
using clang::ast_matchers::to;

using clang::dyn_cast;
using clang::Decl;
using clang::Expr;
using clang::DeclRefExpr;
using clang::VarDecl;
using clang::LangOptions;
using clang::SourceLocation;
using clang::Lexer;

extern bool print_debug_output;  // defined in refactoring_tool.cpp

void FindVariablesMatchCallback::getASTmatchers(MatchFinder& mf)
{
    // isExpansionInMainFile() is needed to grab only the variables that are declared in the main
    // file that we're processing (the *.c file). This ignores variables in header files, such as
    // those in the standard library.

    DeclarationMatcher variable_declaration_matcher = varDecl(
        isExpansionInMainFile()
    ).bind("variable_declaration");

    StatementMatcher variable_use_matcher = declRefExpr(to(varDecl(
        isExpansionInMainFile()
    ))).bind("variable_use");

    // &find_variables_match_callback, is the address of the calling object == this
    mf.addMatcher(variable_declaration_matcher, this);
    mf.addMatcher(variable_use_matcher, this);
}


void FindVariablesMatchCallback::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;

    if (auto* variable_declaration = result.Nodes.getNodeAs<VarDecl>("variable_declaration")) {
        // Add the variable to the variable_declarations list.
        variable_declarations.insert(variable_declaration->getName());
    } else if (auto* variable_use = result.Nodes.getNodeAs<DeclRefExpr>("variable_use")) {
        // Add the variable to the variable_uses list.
        auto vardecl = dyn_cast<VarDecl>(variable_use->getDecl());
        variable_uses.insert(vardecl->getName());
    } else {
        errs() << "ERROR: The matched expression is neither a VarDecl nor a DeclRefExpr.\n";
        errs() << "\n\n";
    }
}


void FindVariablesMatchCallback::collectResults(vector<string>& variables)
{
    auto decl_it = variable_declarations.begin();
    auto decl_endp = variable_declarations.end();
    auto uses_endp = variable_uses.end();
    // Iterate through the variable_declarations list.
    // For each variable in the declarations list, try to find it in the variable_uses list.
    // If this variable is not in the varible_uses (it is not used), then set::find() returns
    // set::end(). In this case, save this variable to the vector of all unused variables.
    for (; decl_it != decl_endp; ++decl_it) {
        if (variable_uses.find(*decl_it) == uses_endp) {
            variables.push_back(*decl_it);
        }
    }
}


void FindVariablesMatchCallback::outputDeclaration(const Decl* decl, raw_ostream& output, const SourceLocation& loc_start) const
{
    output << getDeclAsString(decl) << '\n';
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}


void FindVariablesMatchCallback::outputExpression(const Expr* expr, raw_ostream& output, const SourceLocation& loc_start) const
{
    output << getExprAsString(expr) << '\n';
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}


string FindVariablesMatchCallback::getDeclAsString(const Decl* declaration) const
{
    // References are easier to work with than pointers.
    const SourceManager &sm = *SM;
    // Source:
    // https://stackoverflow.com/a/11154162/5500589
    LangOptions lopt;

    SourceLocation startLoc = declaration->getBeginLoc();
    SourceLocation _endLoc = declaration->getEndLoc();
    SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, sm, lopt);

    return string(sm.getCharacterData(startLoc), sm.getCharacterData(endLoc) - sm.getCharacterData(startLoc));
}


string FindVariablesMatchCallback::getExprAsString(const Expr* expression) const
{
    // References are easier to work with than pointers.
    const SourceManager &sm = *SM;
    // Source:
    // https://stackoverflow.com/a/11154162/5500589
    LangOptions lopt;

    // sm.getFileLoc( ) is apparently needed to stop the bug:
    // terminate called after throwing an instance of 'std::length_error'
    // what():  basic_string::_M_create
    // Aborted (core dumped)
    // Apparently, without this construct, for some expressions, the SourceLocations will be
    // invalid, which will in turn create an invalid length of string, causing
    // std::length_error to be thrown. Perhaps this is due to the passed in expression
    // being inside of a macro expansion.
    SourceLocation startLoc = sm.getFileLoc(expression->getBeginLoc());
    SourceLocation _endLoc = sm.getFileLoc(expression->getEndLoc());
    SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, sm, lopt);
    size_t string_length = sm.getCharacterData(endLoc) - sm.getCharacterData(startLoc);

    return string(sm.getCharacterData(startLoc), string_length);
}
