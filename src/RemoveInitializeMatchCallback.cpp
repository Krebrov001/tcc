#include "RemoveInitializeMatchCallback.h"

#include <string>

using std::string;

using llvm::outs;
using llvm::errs;
using llvm::Error;

using clang::tooling::Replacement;
using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::DeclarationMatcher;
using clang::ast_matchers::functionDecl;
using clang::ast_matchers::hasName;

using clang::SourceLocation;
using clang::CharSourceRange;
using clang::FunctionDecl;
using clang::SourceLocation;
using clang::CharSourceRange;
using clang::LangOptions;
using clang::Lexer;
using clang::tok::l_brace;
using clang::tok::r_paren;

extern bool print_debug_output;  // defined in refactoring_tool.cpp

void RemoveInitializeMatchCallback::getASTmatchers(MatchFinder& mf)
{
    // Find the start of the .extension in the filename.extension, starting searching from the end
    // of the file.
    string::const_reverse_iterator it = filename.crbegin();
    for (; (*it) != '.'; ++it)
        ;  // empty loop body

    // Calling .base() on a reverse iterator converts it into a forward iterator.
    // https://stackoverflow.com/a/2037917/5500589
    string initialize_function_name = string(filename.cbegin(), it.base() - 1).append("_initialize");

    // This matches both the declaration and the definition of the function.
    DeclarationMatcher initialize_declaration_matcher = functionDecl(
        hasName(initialize_function_name)
    ).bind("initialize_declaration");

    mf.addMatcher(initialize_declaration_matcher, this);
}


void RemoveInitializeMatchCallback::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;

    return;  /* CHANGE */

    // run() method is called two times.
    // First time it is called initialize_function represents the function declaration,
    // meaning it does not have a body.
    // Second time it is called initialize_function represents the function definition,
    // meaning that it has a body.
    if (const auto* initialize_function = result.Nodes.getNodeAs<FunctionDecl>("initialize_declaration")) {
        // The function definition was matched.
        if (initialize_function->isThisDeclarationADefinition()) {
            // startLoc points to the start of the signature of the function definition.
            SourceLocation startLoc = initialize_function->getBeginLoc();
            // middleLoc points to the start of the { function definition.
            SourceLocation middleLoc = getCharOffsetLoc(startLoc, '{', true);
            // endLoc points to the end of the } function definition.
            SourceLocation endLoc = initialize_function->getEndLoc().getLocWithOffset(-1);
            // The replacement is everything inside the function definition { }, but not including
            // the braces.
            CharSourceRange range = CharSourceRange::getTokenRange(middleLoc.getLocWithOffset(1), endLoc);

            string replacement = "";
            Replacement initialize_def_rep(*SM, range, replacement);
            if (Error err = (*replacements)[initialize_def_rep.getFilePath()].add(initialize_def_rep)) {
                outputSource(startLoc, middleLoc, errs(), "{ ... }");
                errs() << "ERROR: Error removing the body of the initialize function.\n";
                errs() << "\n\n";
                return;
            }
            if (print_debug_output) {
                outputSource(startLoc, middleLoc, outs(), "{ ... }");
                outs() << "replaced with:\n" << getAsString(startLoc, middleLoc) << "{}\n";
                outs() << "\n\n";
            }
            ++num_definition_removals;
        // The function declaration (prototype) was matched.
        } else {
            // Do not replace the declaration of the initialize function.
            /*
            SourceLocation startLoc = initialize_function->getBeginLoc();
            SourceLocation endLoc   = initialize_function->getEndLoc();
            CharSourceRange range = CharSourceRange::getTokenRange(startLoc, endLoc);

            string replacement = "";
            Replacement initialize_def_rep(*SM, range, replacement);
            if (Error err = (*replacements)[initialize_def_rep.getFilePath()].add(initialize_def_rep)) {
                outputSource(initialize_function, errs());
                errs() << "ERROR: Error removing the prototype of the initialize function.\n";
                errs() << "\n\n";
                return;
            }
            if (print_debug_output) {
                outputSource(initialize_function, outs());
                outs() << "replaced with:\n" << replacement << '\n';
                outs() << "\n\n";
            }
            ++num_prototype_removals;
            */
        }
    }
}
