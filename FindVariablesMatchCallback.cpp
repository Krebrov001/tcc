#include "FindVariablesMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"

#include <string>
#include <vector>
#include <utility>  // for std::pair, std::make_pair

using std::string;
using std::vector;
using std::size_t;
using std::pair;
using std::make_pair;

using llvm::errs;
using llvm::dyn_cast;

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
using clang::FunctionDecl;
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
        string function_name;
        string variable_name = variable_declaration->getName();

        // This if () {} statement will be entered only if the current variable is a local variable
        // inside a function. Global variables will cause the if () condition to be false.
        if (const auto* parent_function = variable_declaration->getParentFunctionOrMethod()) {
            if (const FunctionDecl* ancestor_function = dyn_cast<FunctionDecl>(parent_function)) {
                function_name = ancestor_function->getNameAsString();
            }
        }

        // Add the variable to the variable_declarations list.
        variable_declarations.insert(make_pair(variable_name, function_name));

    } else if (auto* variable_use = result.Nodes.getNodeAs<DeclRefExpr>("variable_use")) {
        if (auto vardecl = dyn_cast<VarDecl>(variable_use->getDecl())) {
            string function_name;
            string variable_name = vardecl->getName();

            if (const auto* parent_function = vardecl->getParentFunctionOrMethod()) {
                if (const FunctionDecl* ancestor_function = dyn_cast<FunctionDecl>(parent_function)) {
                    function_name = ancestor_function->getNameAsString();
                }
            }

            // Add the variable to the variable_uses list.
            auto key_pair = make_pair(variable_name, function_name);
            variable_uses.insert(key_pair);
        } else {
            errs() << "ERROR: Could not identify the variable use, VarDecl is null.\n";
            errs() << "\n\n";
        }

    } else {
        errs() << "ERROR: The matched expression is neither a VarDecl nor a DeclRefExpr.\n";
        errs() << "\n\n";
    }
}


void FindVariablesMatchCallback::collectResults(vector<key_type>& variables)
{
    // The vector variables should be resized to have enough space where to put the results of the
    // set_difference. It maybe possible that all of the declared variables are unused, so it's
    // maximum size must be big enough to fit all the variable declarations.
    variables.resize(variable_declarations.size());
    // The set_difference is computed as:
    // variables = variable_declarations - variable_uses;
    // The results of the set_difference are stored into the vector variables.
    set_difference(variable_declarations.begin(), variable_declarations.end(),
                   variable_uses.begin(), variable_uses.end(), variables.begin());
}
