#include "FindVariablesMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"

#include <string>
#include <vector>
#include <set>

using std::string;
using std::vector;
using std::set;
using std::size_t;

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
using clang::ast_matchers::hasAncestor;
using clang::ast_matchers::isArrow;
using clang::ast_matchers::isExpansionInMainFile;
using clang::ast_matchers::to;
using clang::ast_matchers::unless;

using clang::dyn_cast;
using clang::isa;
using clang::Decl;
using clang::Expr;
using clang::DeclRefExpr;
using clang::VarDecl;
using clang::LangOptions;
using clang::SourceLocation;
using clang::CharSourceRange;
using clang::Lexer;

extern bool print_debug_output;  // defined in refactoring_tool.cpp

FindVariablesMatchCallback::~FindVariablesMatchCallback()
{
    /*
    auto it = variable_declarations.begin();
    auto endp = variable_declarations.end();
    for (; it != endp; ++it) {
        outs() << "variable declaration\n";
        VarDecl* variable_declaration = *it;
        outputDeclaration(variable_declaration, outs(), variable_declaration->getLocStart());
        outs() << "\n\n";
    }
    */
}


void FindVariablesMatchCallback::getASTmatchers(MatchFinder& mf) const
{
    // isExpansionInMainFile() is needed to grab only the variables that are declared in the main
    // file that we're processing (the *.c file). This ignores variables in header files, such as
    // those in the standard library.

    DeclarationMatcher variable_declaration_matcher = varDecl(
        isExpansionInMainFile()
    ).bind("variable_declaration");

    /*
    StatementMatcher variable_use_matcher = declRefExpr(to(varDecl(
        isExpansionInMainFile()
    )), unless(hasAncestor( memberExpr(isArrow()) ))
    ).bind("variable_use");
    */

    StatementMatcher variable_use_matcher = declRefExpr(to(varDecl(
        isExpansionInMainFile()
    ))).bind("variable_use");

    // &find_variables_match_callback, is the address of the calling object == this
    // The second argument should be of type (MatchFinder::MatchCallback *)
    mf.addMatcher(variable_declaration_matcher, (MatchFinder::MatchCallback *) this);
    mf.addMatcher(variable_use_matcher, (MatchFinder::MatchCallback *) this);
}


void FindVariablesMatchCallback::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;

    if (auto* variable_declaration = result.Nodes.getNodeAs<VarDecl>("variable_declaration")) {
        // Add the variable to the variable_declarations list.
        //variable_declarations[variable_declaration->getName()] = variable_declaration;
        variable_declarations.insert(variable_declaration->getName());
        //variable_declarations[variable_declaration->getName()];
    } else if (auto* variable_use = result.Nodes.getNodeAs<DeclRefExpr>("variable_use")) {
        // Add the variable to the variable_uses list.
        const VarDecl* vardecl = dyn_cast<VarDecl>(variable_use->getDecl());
        //variable_uses[vardecl->getName()] = vardecl;
        //variable_uses[vardecl->getName()];
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
    for (; decl_it != decl_endp; ++decl_it) {
        if (variable_uses.find(*decl_it) == uses_endp) {
            variables.push_back(*decl_it);
        }
    }




    /*
    //errs() << "Num elements in variable_declarations: " << variable_declarations_p->size() << '\n';
    //errs() << "Num elements in variable_uses: " << variable_uses_p->size() << '\n';

    auto decl_it = variable_declarations_p->begin();
    auto decl_endp = variable_declarations_p->end();
    auto uses_endp = variable_uses_p->end();
    for (; decl_it != decl_endp; ++decl_it) {
        if (variable_uses_p->find(decl_it->first) == uses_endp) {
            //outs() << decl_it->first << " not used\n";
            variables.push_back(decl_it->first);
            //const VarDecl* vardecl = decl_it->second;
            //SourceLocation loc_start = SM->getFileLoc(vardecl->getLocStart());
            //const char* start = SM->getCharacterData(loc_start);
            //outs() << start;
            //SourceLocation _endLoc = SM->getFileLoc(vardecl->getLocEnd());
            //SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, *SM, lopt);
        }
    }
    */
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

    SourceLocation startLoc = declaration->getLocStart();
    SourceLocation _endLoc = declaration->getLocEnd();
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
    SourceLocation startLoc = sm.getFileLoc(expression->getLocStart());
    SourceLocation _endLoc = sm.getFileLoc(expression->getLocEnd());
    SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, sm, lopt);
    size_t string_length = sm.getCharacterData(endLoc) - sm.getCharacterData(startLoc);

    return string(sm.getCharacterData(startLoc), string_length);
}
