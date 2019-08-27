#include "RemoveVariablesMatchCallback.h"

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
using clang::ast_matchers::DeclarationMatcher;

using clang::ast_matchers::varDecl;
using clang::ast_matchers::hasName;
using clang::ast_matchers::isExpansionInMainFile;

using clang::LangOptions;
using clang::SourceLocation;
using clang::CharSourceRange;
using clang::Lexer;

using clang::tok::semi;

extern bool print_debug_output;  // defined in refactoring_tool.cpp

void RemoveVariablesMatchCallback::getASTmatchers(MatchFinder& mf)
{
    auto it = variables.cbegin();
    auto endp = variables.cend();
    // Variables/objects defined inside of loops are automatic variables, means that their lifetime
    // is per one iteration of the loop only. Each loop iteration, a new copy of that variable is
    // created. Automatic variables in loops are distinct objects in each iteration of the loop.
    // However static variables/objects defined inside loops persist, there is only one variable.
    for (; it != endp; ++it) {
        DeclarationMatcher variable_declaration_matcher = varDecl(
            hasName(*it),  // *it gets the name of the variable as a string.
            isExpansionInMainFile()
        ).bind("variable_declaration");
        // isExpansionInMainFile() is needed to grab only the variables that are declared in the
        // main file that we're processing (the *.c file). This ignores variables in header files,
        // such as those in the standard library.

        // &remove_variables_match_callback, is the address of the calling object == this
        // The variable_declaration_matcher which is added to the MatchFinder here is the local
        // one inside the body of the loop. Each loop iteration, a distinct one is created and it
        // is added to the MatchFinder.
        mf.addMatcher(variable_declaration_matcher, this);
    }
}


void RemoveVariablesMatchCallback::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;

    if (auto* variable_declaration = result.Nodes.getNodeAs<VarDecl>("variable_declaration")) {
        // By replacing the declaration with "" we are efrectively deleting it from the source code.
        string replacement;

        SourceLocation loc_start = variable_declaration->getBeginLoc();
        SourceLocation loc_end   = variable_declaration->getEndLoc();

        // Get the location after the semicolon following the declaration of the unused variable.
        SourceLocation after_semi_loc = Lexer::findLocationAfterToken(loc_end, semi, *SM, LangOptions(), false);
        if (!after_semi_loc.isValid()) {
            outputDeclaration(variable_declaration, errs(), loc_start);
            errs() << "ERROR: Unable to find source location of the unused variable declaration.\n";
            errs() << "\n\n";
            return;
        }
        CharSourceRange range = CharSourceRange::getTokenRange(loc_start, after_semi_loc);
        Replacement unused_variable_rep(*SM, range, replacement);

        if (Error err = (*replacements)[unused_variable_rep.getFilePath()].add(unused_variable_rep)) {
            outputDeclaration(variable_declaration, errs(), loc_start);
            errs() << "ERROR: Error adding replacement that removes the unused variable declaration.\n";
            errs() << "\n\n";
            return;
        }
        if (print_debug_output) {
            outputDeclaration(variable_declaration, outs(), loc_start);
            outs() << "replaced with:\n" << replacement << '\n';
            outs() << "\n\n";
        }
        // No error, increment the number of unused variable removals to print to the user.
        ++num_unused_variables;
    } else {
        errs() << "ERROR: The matched expression is not a VarDecl.\n";
        errs() << "\n\n";
    }
}
