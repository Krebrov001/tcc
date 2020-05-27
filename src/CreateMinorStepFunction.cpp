#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"
#include "llvm/ADT/StringRef.h"

#include "CreateMinorStepFunction.h"

using llvm::outs;
using llvm::errs;
using llvm::Error;
using llvm::StringRef;

using clang::CallExpr;
using clang::FunctionDecl;
using clang::SourceLocation;
using clang::CharSourceRange;

using clang::tooling::Replacement;

using clang::ast_matchers::DeclarationMatcher;
using clang::ast_matchers::StatementMatcher;
using clang::ast_matchers::functionDecl;
using clang::ast_matchers::isDefinition;
using clang::ast_matchers::isExpansionInMainFile;
using clang::ast_matchers::hasDescendant;
using clang::ast_matchers::callExpr;
using clang::ast_matchers::callee;
using clang::ast_matchers::equalsBoundNode;
using clang::ast_matchers::hasName;
using clang::ast_matchers::unless;

extern bool print_debug_output;  // defined in refactoring_tool.cpp


void CreateMinorStepFunction::getASTmatchers(MatchFinder& mf)
{
    // This DeclarationMatcher matches the definition of the step() function.
    // it is a function that
    DeclarationMatcher step_function = functionDecl(
        isExpansionInMainFile(),
        hasName(step_function_name),
        // inside the body of which it calls an ort() function
        hasDescendant(callExpr(callee(functionDecl(
            isExpansionInMainFile(),
            // inside the body of which it calls the step() function
            hasDescendant(callExpr(callee(functionDecl(
            ))))
        ))))
    ).bind("step_function");

    DeclarationMatcher step_declaration = functionDecl(
        hasName(step_function_name),
        unless(isDefinition())
    ).bind("step_declaration");

    StatementMatcher step_call = callExpr(callee(functionDecl(
        hasName(step_function_name)
    ))).bind("step_call");

    mf.addMatcher(step_function, this);
    mf.addMatcher(step_declaration, this);
    mf.addMatcher(step_call, this);
}


void CreateMinorStepFunction::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;

    if (const FunctionDecl* step_function = result.Nodes.getNodeAs<FunctionDecl>("step_function")) {
        insert_function_body(step_function);
    } else if (const FunctionDecl* step_declaration = result.Nodes.getNodeAs<FunctionDecl>("step_declaration")) {
        insert_function_declaration(step_declaration);
    } else if (const CallExpr* function_call = result.Nodes.getNodeAs<CallExpr>("step_call")) {
        rename_step_call(function_call);
    }
}


void CreateMinorStepFunction::insert_function_body(const FunctionDecl* step_function)
{
    SourceLocation loc_start = step_function->getBeginLoc();
    SourceLocation loc_end = step_function->getEndLoc();
    SourceLocation insert_loc = loc_end.getLocWithOffset(1);

    string minor_step_function_header = "\n\nvoid " + step_function_name + "_minor(void)";

    Replacement insertion1(*SM, insert_loc, 0, minor_step_function_header);
    if (Error err = (*replacements)[insertion1.getFilePath()].add(insertion1)) {
        // outputSource() is used here to print the SourceLocation where the insertion
        // was added.
        outputSource(insert_loc, insert_loc, errs());
        errs() << "ERROR: Could not insert the header of the step_minor() function.\n";
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        outputSource(insert_loc, insert_loc, outs());
        outs() << "Successfully inserted the header of the step_minor() function:";
        outs() << minor_step_function_header << '\n';
        outs() << "\n\n";
    }

    SourceLocation body_start = getCharOffsetLoc(loc_start, '{', true);
    const char* loc1 = SM->getCharacterData(body_start);
    const char* loc2 = SM->getCharacterData(loc_end);
    // A StringRef is nothing but a char* and the number of characters.
    // Using StringRef instead of std::string avoids allocating a lot of memory
    // to store the source code text of the entire function definition.
    // The +1 is needed to capture the '}' at the end.
    StringRef minor_step_function_body(loc1, loc2 - loc1 + 1);

    SourceLocation insert_loc2 = insert_loc.getLocWithOffset(1);
    Replacement insertion2(*SM, insert_loc2, 0, minor_step_function_body);
    if (Error err = (*replacements)[insertion2.getFilePath()].add(insertion2)) {
        outputSource(insert_loc2, insert_loc2, errs());
        errs() << "ERROR: Could not insert the body of the step_minor() function.\n";
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        outputSource(insert_loc2, insert_loc2, outs());
        outs() << "Successfully inserted the body of the step_minor() function:";
        outs() << "\n{ ... }\n";
        outs() << "\n\n";
    }

    ++num_minor_step_functions;
}


void CreateMinorStepFunction::insert_function_declaration(const FunctionDecl* step_declaration)
{
    string step_declaration_text = getAsString(step_declaration);
    size_t function_name_len = step_function_name.length();
    size_t start_index = step_declaration_text.find(step_function_name, 0);
    step_declaration_text.insert(start_index + function_name_len, "_minor");
    step_declaration_text.push_back(';');

    SourceLocation insert_loc = step_declaration->getEndLoc().getLocWithOffset(2);
    Replacement insertion(*SM, insert_loc, 0, "\n" + step_declaration_text);
    if (Error err = (*replacements)[insertion.getFilePath()].add(insertion)) {
        outputSource(insert_loc, insert_loc, errs());
        errs() << "ERROR: Could not insert the prototype declaration of the step_minor() function.\n";
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        outputSource(insert_loc, insert_loc, outs());
        outs() << "Successfully inserted the prototype declaration of the step_minor() function:\n";
        outs() << step_declaration_text << '\n';
        outs() << "\n\n";
    }

    ++num_inserted_declarations;
}


void CreateMinorStepFunction::rename_step_call(const CallExpr* function_call)
{
    SourceLocation loc_start = function_call->getBeginLoc();
    SourceLocation loc_end   = function_call->getEndLoc();
    SourceLocation parameters_start = getCharOffsetLoc(loc_start, '(', true);
    SourceLocation parameters_end   = getCharOffsetLoc(loc_start, ')', true).getLocWithOffset(1);

    string parameters_list = getAsString(parameters_start, parameters_end);
    string minor_step_call = step_function_name + "_minor" + parameters_list;
    CharSourceRange range  = CharSourceRange::getTokenRange(loc_start, loc_end);

    Replacement call_rename(*SM, range, minor_step_call);
    if (Error err = (*replacements)[call_rename.getFilePath()].add(call_rename)) {
        outputSource(function_call, errs());
        errs() << "ERROR: Error replacing call to model step function with "
               << minor_step_call << '\n';
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        outputSource(function_call, outs());
        outs() << "replaced with:\n" << minor_step_call << '\n';
        outs() << "\n\n";
    }

    ++num_call_renames;
}
