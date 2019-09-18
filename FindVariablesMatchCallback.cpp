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
        if (auto vardecl = dyn_cast<VarDecl>(variable_use->getDecl())) {
            variable_uses.insert(vardecl->getName());
        } else {
            errs() << "ERROR: Could not identigy the variable use, VarDecl is null.\n";
            errs() << "\n\n";
        }
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
