#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"
#include "clang/Tooling/Tooling.h"
#include <iostream>

using namespace std;
using namespace llvm;
using namespace llvm::cl;
using namespace clang;
using namespace clang::tooling;
using namespace clang::ast_matchers;

class MakeStaticMatcher : public MatchFinder::MatchCallback {
public:
  MakeStaticMatcher(map<string, Replacements> *replacements)
      : replacements(replacements) {}

  virtual void run(const MatchFinder::MatchResult &Result) {

    // Handle calls to free() by commenting out the call
    if (const CallExpr *call_expr =
            Result.Nodes.getNodeAs<CallExpr>("free_call")) {
      _num_free_calls++;

      // Get the location after the semicolon following the free call
      SourceLocation after_semi_loc = Lexer::findLocationAfterToken(
          call_expr->getLocEnd(), tok::semi, *Result.SourceManager,
          LangOptions(), false);
      if (!after_semi_loc.isValid()) {
        outs() << "ERROR: Unable to find semicolon location after free call.\n";
        return;
      }

      // Remove the unneeded code (as opposed to comment it out)
      if (_remove_code) {
        // "Replace" the free call with nothing
        CharSourceRange range = CharSourceRange::getTokenRange(
            call_expr->getLocStart(), after_semi_loc);
        Replacement free_rep(*Result.SourceManager, range, "");
        if (Error err = (*replacements)[free_rep.getFilePath()].add(free_rep)) {
          outs() << "ERROR: Error adding replacement that removes free call.\n";
          return;
        }
      }
      // Comment out the unneeded code (as opposed to remove it)
      else {
        Replacement free_start_rep(*(Result.SourceManager),
                                   call_expr->getLocStart(), 0, "/*");
        if (Error err = (*replacements)[free_start_rep.getFilePath()].add(
                free_start_rep)) {
          outs() << "ERROR: Error adding free start replacement.\n";
          return;
        }
        Replacement free_end_rep(*(Result.SourceManager), after_semi_loc, 0,
                                 "*/");
        if (Error err =
                (*replacements)[free_end_rep.getFilePath()].add(free_end_rep)) {
          outs() << "ERROR: Error adding free end replacement.\n";
          return;
        }
      }
    }
    // Handle cases of a calloc() call on right-hand size of assignment operator
    else if (const BinaryOperator *assign_expr =
                 Result.Nodes.getNodeAs<BinaryOperator>("calloc_assign")) {
      _num_calloc_calls++;

      // Expr for the actual calloc() call
      const CallExpr *ce =
          dyn_cast<CallExpr>(assign_expr->getRHS()->IgnoreParenCasts());
      if (!ce) {
        outs() << "ERROR: Unable to get CallExpr for calloc assignment.\n";
        return;
      }

      // Decl for the variable that stores calloc() return value
      const DeclaratorDecl *var_decl = nullptr;
      if (const MemberExpr *memexp =
              dyn_cast<MemberExpr>(assign_expr->getLHS())) {
        var_decl = dyn_cast<DeclaratorDecl>(memexp->getMemberDecl());
      } else if (const DeclRefExpr *varexp =
                     dyn_cast<DeclRefExpr>(assign_expr->getLHS())) {
        var_decl = dyn_cast<DeclaratorDecl>(varexp->getDecl());
      }
      if (!var_decl) {
        outs()
            << "ERROR: Unable to get declarator decl for assigned variable.\n";
        return;
      }

      // Get the data type used for 2nd argument to calloc and element count
      // from 1st argument. The data type is required since Matlab/Simulink
      // coder uses void pointers in declarations.
      const UnaryExprOrTypeTraitExpr *sizeof_expr =
          dyn_cast<UnaryExprOrTypeTraitExpr>(ce->getArg(1));
      if (!sizeof_expr || (sizeof_expr->getKind() != UETT_SizeOf)) {
        outs() << "ERROR: Unable to get Expr for sizeof or sizeof not in "
                  "calloc().\n";
        return;
      }
      const Expr *count_expr = ce->getArg(0);
      if (!count_expr) {
        outs() << "ERROR: Unable to get Expr for element count in calloc().\n";
        return;
      }
      string type = sizeof_expr->getTypeOfArgument().getAsString();

      // Get the source text to modify the variable definition
      bool count_invalid;
      string count_src =
          Lexer::getSourceText(
              CharSourceRange::getTokenRange(count_expr->getSourceRange()),
              *Result.SourceManager, LangOptions(), &count_invalid)
              .str();
      if (count_invalid) {
        outs() << "ERROR: Inavlid location in source text lookup.\n";
        return;
      }

      // Get the location after the semicolon following the calloc call
      SourceLocation after_semi_loc = Lexer::findLocationAfterToken(
          assign_expr->getLocEnd(), tok::semi, *Result.SourceManager,
          LangOptions(), false);
      if (!after_semi_loc.isValid()) {
        outs()
            << "ERROR: Unable to find semicolon location after calloc call.\n";
        return;
      }

      // Remove the unneeded code (as opposed to comment it out)
      if (_remove_code) {
        // "Replace" the calloc call and assignment with nothing
        CharSourceRange range = CharSourceRange::getTokenRange(
            assign_expr->getLocStart(), after_semi_loc);
        Replacement calloc_rep(*Result.SourceManager, range, "");
        if (Error err =
                (*replacements)[calloc_rep.getFilePath()].add(calloc_rep)) {
          outs() << "ERROR: Error adding replacement that removes calloc call "
                    "and assignment.\n";
          return;
        }
      }
      // Comment out the unneeded code (as opposed to remove it)
      else {
        // Comment out the entire calloc call and variable assignment
        Replacement calloc_start_rep(*(Result.SourceManager),
                                     assign_expr->getLocStart(), 0, "/*");
        if (Error err = (*replacements)[calloc_start_rep.getFilePath()].add(
                calloc_start_rep)) {
          outs() << "ERROR: Error adding calloc start replacement.\n";
          return;
        }
        Replacement calloc_end_rep(*(Result.SourceManager), after_semi_loc, 0,
                                   "*/");
        if (Error err = (*replacements)[calloc_end_rep.getFilePath()].add(
                calloc_end_rep)) {
          outs() << "ERROR: Error adding calloc end replacement.\n";
          return;
        }
      }

      // Change the variable type (typically void*) to type specified in call to
      // sizeof()
      Replacement type_rep(*(Result.SourceManager), var_decl->getLocStart(),
                           var_decl->getType().getAsString().length(),
                           type + " ");
      if (Error err = (*replacements)[type_rep.getFilePath()].add(type_rep)) {
        outs() << "ERROR: Error adding type declaration replacement.\n";
        return;
      }

      // Add the array and size to variable declaration (X to X[const]).
      // Size comes from arguments to calloc call.
      string array_src = "[" + count_src + "]";
      Replacement array_rep(*(Result.SourceManager), var_decl->getLocEnd(),
                            var_decl->getNameAsString().length(),
                            var_decl->getNameAsString() + array_src);
      if (Error err = (*replacements)[array_rep.getFilePath()].add(array_rep)) {
        outs() << "ERROR: Error adding array declaration replacement.\n";
        return;
      }
    } else {
      outs() << "ERROR: MatchCallback called with unexpected match type.\n";
      return;
    }
  }

  unsigned long num_free_calls(void) const { return _num_free_calls; }

  unsigned long num_calloc_calls(void) const { return _num_calloc_calls; }

  void remove_code(void) { _remove_code = true; }

  void comment_code(void) { _remove_code = false; }

private:
  map<string, Replacements> *replacements;
  int _num_free_calls = 0;
  int _num_calloc_calls = 0;
  bool _remove_code = true;
};

int main(int argc, const char **argv) {

  if ((strncmp(argv[argc - 1], "--", 2))) {
    cerr << "Usage: " << argv[0] << " <source files> --" << endl;
    return -1;
  }

  // Prints a tool-specific message about arguments when --help is used
  OptionCategory make_static_tool_category("find_free name",
                                           "find_free description");
  CommonOptionsParser opt_parser(argc, argv, make_static_tool_category);

  // Get source list
  vector<string> sources;
  for (int s = 1; s < argc; s++) {
    sources.push_back(argv[s]);
    cout << "Reading source file '" << sources[s - 1] << "'" << endl;
  }

  // Create tool and matching conditions
  RefactoringTool make_static_tool(opt_parser.getCompilations(), sources);
  MakeStaticMatcher matcher(&make_static_tool.getReplacements());
  // matcher.comment_code(); // Call to comment instead of remove code
  MatchFinder mf;
  StatementMatcher free_call_matcher =
      callExpr(callee(functionDecl(hasName("free")))).bind("free_call");
  StatementMatcher calloc_assign_matcher =
      binaryOperator(hasOperatorName("="),
                     hasRHS(ignoringParenImpCasts((has(
                         callExpr(callee(functionDecl(hasName("calloc")))))))))
          .bind("calloc_assign");
  mf.addMatcher(free_call_matcher, &matcher);
  mf.addMatcher(calloc_assign_matcher, &matcher);

  // Run tool
  if (int ret =
          make_static_tool.runAndSave(newFrontendActionFactory(&mf).get())) {
    return ret;
  }

  outs() << "Found " << matcher.num_free_calls() << " calls to free()\n";
  outs() << "Found " << matcher.num_calloc_calls() << " calls to calloc()\n";

  return 0;
}
