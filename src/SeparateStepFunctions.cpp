#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"

#include "SeparateStepFunctions.h"

using llvm::outs;
using llvm::errs;
using llvm::Error;

using clang::IfStmt;
using clang::SourceLocation;
using clang::CharSourceRange;

using clang::tooling::Replacement;

using clang::ast_matchers::StatementMatcher;
using clang::ast_matchers::ifStmt;
using clang::ast_matchers::hasCondition;
using clang::ast_matchers::binaryOperator;
using clang::ast_matchers::hasOperatorName;
using clang::ast_matchers::callExpr;
using clang::ast_matchers::parenExpr;
using clang::ast_matchers::hasAncestor;
using clang::ast_matchers::has;
using clang::ast_matchers::hasLHS;
using clang::ast_matchers::hasRHS;
using clang::ast_matchers::ignoringParenImpCasts;
using clang::ast_matchers::memberExpr;
using clang::ast_matchers::member;
using clang::ast_matchers::hasName;
using clang::ast_matchers::declRefExpr;
using clang::ast_matchers::to;
using clang::ast_matchers::enumConstantDecl;
using clang::ast_matchers::functionDecl;
using clang::ast_matchers::isDefinition;

extern bool print_debug_output;  // defined in refactoring_tool.cpp


void SeparateStepFunctions::getASTmatchers(MatchFinder& mf)
{
    // These two AST matchers match the if () {} statements for minor and major time steps respectively.
    // if (rtmIsMajorTimeStep(complete_system_io_M)) { ... }
    // rtmIsMajorTimeStep is actually a macro which gets defined as:
    // # define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
    // Because the preprocessor runs before the compiler runs, the AST expression that is being
    // matched here represents the expanded expression.
    /*
    IfStmt 0x3a996d0
    |-ParenExpr 0x3a97848 'int'
    | `-BinaryOperator 0x3a97828 'int' '=='
    |   |-ImplicitCastExpr 0x3a977f8 'unsigned int' <IntegralCast>
    |   | `-ImplicitCastExpr 0x3a977e0 'SimTimeStep':'SimTimeStep' <LValueToRValue>
    |   |   `-ParenExpr 0x3a977a0 'SimTimeStep':'SimTimeStep' lvalue
    |   |     `-MemberExpr 0x3a97770 'SimTimeStep':'SimTimeStep' lvalue .simTimeStep 0x37bcee0
    |   |       `-MemberExpr 0x3a97740 'struct (anonymous struct at ./tcc/models/navsses/complete_system_io.h:1165:3)':'struct tag_RTM_complete_system_io_T::(anonymous at ./tcc/models/navsses/complete_system_io.h:1165:3)' lvalue ->Timing 0x37bd138
    |   |         `-ImplicitCastExpr 0x3a97728 'RT_MODEL_complete_system_io_T *' <LValueToRValue>
    |   |           `-ParenExpr 0x3a97708 'RT_MODEL_complete_system_io_T *const' lvalue
    |   |             `-DeclRefExpr 0x3a976e8 'RT_MODEL_complete_system_io_T *const' lvalue Var 0x397cbb8 'complete_system_io_M' 'RT_MODEL_complete_system_io_T *const'
    |   `-ImplicitCastExpr 0x3a97810 'unsigned int' <IntegralCast>
    |     `-DeclRefExpr 0x3a977c0 'int' EnumConstant 0x3728460 'MAJOR_TIME_STEP' 'int'
    */

    // find all instances of if (MINOR_TIME_STEP) {} in the major time step function.
    StatementMatcher if_minor_time_step = ifStmt(
        hasCondition(parenExpr(
            has(binaryOperator(
                hasOperatorName("=="),
                hasLHS(ignoringParenImpCasts(memberExpr(member(hasName("simTimeStep"))))),
                hasRHS(ignoringParenImpCasts(declRefExpr(to(enumConstantDecl(hasName("MINOR_TIME_STEP"))))))
            ))
        )),
        hasAncestor(functionDecl(
            isDefinition(),
            hasName(step_function_name)
        ))
    ).bind("if_minor_time_step");

    // find all instances of if (MAJOR_TIME_STEP) {} in the minor time step function.
    StatementMatcher if_major_time_step = ifStmt(
        hasCondition(parenExpr(
            has(binaryOperator(
                hasOperatorName("=="),
                hasLHS(ignoringParenImpCasts(memberExpr(member(hasName("simTimeStep"))))),
                hasRHS(ignoringParenImpCasts(declRefExpr(to(enumConstantDecl(hasName("MAJOR_TIME_STEP"))))))
            ))
        )),
        hasAncestor(functionDecl(
            isDefinition(),
            hasName(step_minor_function_name)
        ))
    ).bind("if_major_time_step");

    mf.addMatcher(if_minor_time_step, this);
    mf.addMatcher(if_major_time_step, this);
}


void SeparateStepFunctions::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;

    if (const auto* if_major_time_step = result.Nodes.getNodeAs<IfStmt>("if_major_time_step")) {
        remove_time_step_function(if_major_time_step, "major");
    } else if (const auto* if_minor_time_step = result.Nodes.getNodeAs<IfStmt>("if_minor_time_step")) {
        remove_time_step_function(if_minor_time_step, "minor");
    }
}


void SeparateStepFunctions::remove_time_step_function(const IfStmt* if_time_step, string type_of_step)
{
    SourceLocation loc_start = if_time_step->getBeginLoc();
    SourceLocation loc_end   = if_time_step->getEndLoc();
    SourceLocation loc_print = getCharOffsetLoc(loc_start, '{', true);

    string empty;
    CharSourceRange range = CharSourceRange::getTokenRange(loc_start, loc_end);

    Replacement remove_if_statement(*SM, range, empty);
    if (Error err = (*replacements)[remove_if_statement.getFilePath()].add(remove_if_statement)) {
        outputSource(loc_start, loc_print, errs(), "\n{ ... }");
        errs() << "ERROR: failed to remove the entire " + type_of_step + " step if () {} statement\n";
        errs() << "\n\n";
        return;
    }
    if (print_debug_output) {
        outputSource(loc_start, loc_print, outs(), "\n{ ... }");
        outs() << "replaced with:\n" << empty << '\n';
        outs() << "\n\n";
    }

    if (type_of_step == "major") {
        ++num_major_if_statements_removed;
    } else if (type_of_step == "minor") {
        ++num_minor_if_statements_removed;
    }
}
