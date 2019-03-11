/*
 * A program that parses files to find calls to free and displays information
 * about the calls and matching calloc calls.
 *
 * Function calls are found and printed using MatchFinder and MatchPrinter
 * classes.
 *
 * To run the tool:
 *  1) COMPLE: clang++ -o find_free $(llvm-config --cxxflags) find_free.cpp -lclangTooling -lclangFrontend -lclangAST -lclangASTMatchers $(llvm-config --libs all)
 *  2) INSTALL: sudo cp -i find_free $(dirname $(which llvm-config))/
 *  3) RUN: find_free <sources> --
 *  4) CLEAN: sudo rm $(dirname $(which llvm-config))/find_free
 */

#include "clang/AST/ASTConsumer.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/ParentMap.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
#include <iostream>

void print_call(const clang::Expr *expr);
void print_expression(const clang::Expr *expr);
void print_expression(const clang::DeclRefExpr *declrefexpr);
void print_expression(const clang::MemberExpr *memberexpr);
void print_expression(const clang::IntegerLiteral *intlit);
void print_expression(const clang::BinaryOperator *binop);
void print_expression(const clang::UnaryExprOrTypeTraitExpr *sizeofexp);

void print_call(const clang::Expr *expr) {
  const clang::Expr *s_expr = expr->IgnoreParenCasts();
  clang::QualType T = s_expr->getType();
  llvm::outs() << "(" << T.getAsString() << ") ";
  print_expression(s_expr);
}

void print_expression(const clang::Expr *expr) {
  const clang::DeclRefExpr *declrefexpr =
      clang::dyn_cast<clang::DeclRefExpr>(expr);
  const clang::MemberExpr *memberexpr =
      clang::dyn_cast<clang::MemberExpr>(expr);
  const clang::IntegerLiteral *intlit =
      clang::dyn_cast<clang::IntegerLiteral>(expr);
  const clang::BinaryOperator *binop =
      clang::dyn_cast<clang::BinaryOperator>(expr);
  const clang::UnaryExprOrTypeTraitExpr *sizeofexpr =
      clang::dyn_cast<clang::UnaryExprOrTypeTraitExpr>(expr);
  if (declrefexpr)
    print_expression(declrefexpr);
  else if (memberexpr)
    print_expression(memberexpr);
  else if (intlit)
    print_expression(intlit);
  else if (binop)
    print_expression(binop);
  else if (sizeofexpr)
    print_expression(sizeofexpr);
  else
    llvm::outs() << "Unhandled Expr type";
}

void print_expression(const clang::DeclRefExpr *declrefexpr) {
  llvm::outs() << declrefexpr->getFoundDecl()->getNameAsString();
}

void print_expression(const clang::MemberExpr *memberexpr) {
  for (auto *c : memberexpr->children()) {
    const clang::Expr *expr = clang::dyn_cast<clang::Expr>(c);
    if (expr) {
      print_expression(expr);
    } else {
      llvm::outs() << "Unable to cast child to clang::Expr";
    }
  }
  llvm::outs() << "." << memberexpr->getMemberDecl()->getNameAsString();
}

void print_expression(const clang::IntegerLiteral *intlit) {
  llvm::outs() << intlit->getValue();
}

void print_expression(const clang::BinaryOperator *binop) {
  print_expression(binop->getLHS());
  llvm::outs() << binop->getOpcodeStr();
  print_expression(binop->getRHS());
}

void print_expression(const clang::UnaryExprOrTypeTraitExpr *sizeofexp) {
  if (sizeofexp->getKind() == clang::UETT_SizeOf) {
    llvm::outs() << "sizeof(" << sizeofexp->getArgumentType().getAsString()
                 << ")";
  } else {
    llvm::outs() << "Unsupported UnaryExprOrTypeTraitExpr";
  }
}

class FindFreeCallsVisitor
    : public clang::RecursiveASTVisitor<FindFreeCallsVisitor> {
public:
  explicit FindFreeCallsVisitor(clang::ASTContext *Context)
      : Context(Context) {}
  bool VisitCallExpr(const clang::CallExpr *expr) {
    const clang::NamedDecl *decl =
        clang::dyn_cast<clang::NamedDecl>(expr->getCalleeDecl());
    if (decl && (decl->getNameAsString() == "free")) {
      clang::FullSourceLoc loc = Context->getFullLoc(expr->getLocStart());
      if (loc.isValid()) {
        llvm::outs() << "Function call " << decl->getNameAsString() << " "
                     << loc.getSpellingLineNumber() << ":"
                     << loc.getSpellingColumnNumber() << "\n";
      }
      unsigned num_args = expr->getNumArgs();
      llvm::outs() << "  " << num_args << " arguments to call: ";
      const clang::Expr *const *args = expr->getArgs();
      for (unsigned arg = 0; arg < num_args; arg++) {
        print_call(args[arg]);
        llvm::outs() << "\n";
      }
    }
    return true;
  }

private:
  clang::ASTContext *Context;
};

class FindNamedClassVisitor
    : public clang::RecursiveASTVisitor<FindNamedClassVisitor> {
public:
  explicit FindNamedClassVisitor(clang::ASTContext *Context)
      : Context(Context) {}
  bool VisitDeclRefExpr(const clang::DeclRefExpr *Declaration) {
    const clang::NamedDecl *named_decl = Declaration->getFoundDecl();
    if (named_decl->getNameAsString() == "free") {
      clang::FullSourceLoc free_location =
          Context->getFullLoc(Declaration->getLocStart());
      // Check if a function reference
      if (clang::dyn_cast<clang::FunctionDecl>(named_decl)) {
        if (free_location.isValid()) {
          llvm::outs() << "Found function call at "
                       << free_location.getSpellingLineNumber() << ":"
                       << free_location.getSpellingColumnNumber() << "\n";
        } else {
          llvm::outs() << "Found function call at invalid location\n";
        }
      }
      // Reference to a non-function declaration named 'free'
      else {
        if (free_location.isValid()) {
          llvm::outs() << "Found non-function object 'free' at "
                       << free_location.getSpellingLineNumber() << ":"
                       << free_location.getSpellingColumnNumber() << "\n";
        } else {
          llvm::outs()
              << "Found non-function object 'free'  at invalid location\n";
        }
      }
    }
    return true;
  }

private:
  clang::ASTContext *Context;
};

class FindFreeCallsConsumer : public clang::ASTConsumer {
public:
  explicit FindFreeCallsConsumer(clang::ASTContext *Context)
      : Visitor(Context) {}
  virtual void HandleTranslationUnit(clang::ASTContext &Context) {
    Visitor.TraverseDecl(Context.getTranslationUnitDecl());
  }

private:
  FindFreeCallsVisitor Visitor;
};

class FindNamedClassConsumer : public clang::ASTConsumer {
public:
  explicit FindNamedClassConsumer(clang::ASTContext *Context)
      : Visitor(Context) {}
  virtual void HandleTranslationUnit(clang::ASTContext &Context) {
    Visitor.TraverseDecl(Context.getTranslationUnitDecl());
  }

private:
  FindNamedClassVisitor Visitor;
};

class FindFreeCallsAction : public clang::ASTFrontendAction {
public:
  virtual std::unique_ptr<clang::ASTConsumer>
  CreateASTConsumer(clang::CompilerInstance &Compiler, llvm::StringRef InFile) {
    return std::unique_ptr<clang::ASTConsumer>(
        new FindFreeCallsConsumer(&Compiler.getASTContext()));
  }
};

class FindNamedClassAction : public clang::ASTFrontendAction {
public:
  virtual std::unique_ptr<clang::ASTConsumer>
  CreateASTConsumer(clang::CompilerInstance &Compiler, llvm::StringRef InFile) {
    return std::unique_ptr<clang::ASTConsumer>(
        new FindNamedClassConsumer(&Compiler.getASTContext()));
  }
};

using namespace clang::ast_matchers;
clang::ast_matchers::StatementMatcher freeMatcher =
    clang::ast_matchers::callExpr(callee(functionDecl(hasName("free"))))
        .bind("free");
StatementMatcher calloceqMatcher =
    binaryOperator(hasOperatorName("="),
                   hasRHS(ignoringParenImpCasts((has(
                       callExpr(callee(functionDecl(hasName("calloc")))))))))
        .bind("calloceq");
clang::ast_matchers::StatementMatcher callocMatcher =
    clang::ast_matchers::callExpr(callee(functionDecl(hasName("calloc"))))
        .bind("calloc");

class matchPrinter : public clang::ast_matchers::MatchFinder::MatchCallback {
public:
  virtual void
  run(const clang::ast_matchers::MatchFinder::MatchResult &Result) {
    if (const clang::CallExpr *expr =
            Result.Nodes.getNodeAs<clang::CallExpr>("free")) {
      unsigned num_args = expr->getNumArgs();
      for (unsigned arg = 0; arg < num_args; arg++) {
        if (arg > 0)
          llvm::outs() << ", ";
      }
      const clang::MemberExpr *memexp = clang::dyn_cast<clang::MemberExpr>(
          expr->getArgs()[0]->IgnoreParenImpCasts());
      const clang::DeclRefExpr *varexp = clang::dyn_cast<clang::DeclRefExpr>(
          expr->getArgs()[0]->IgnoreParenImpCasts());
      if (memexp) {
        free_map[memexp->getMemberDecl()] = expr;
      } else if (varexp) {
        free_map[varexp->getDecl()] = expr;
      } else {
        llvm::outs()
            << "ERROR: Unexpcted Expr type for variable in free argument\n";
      }
    } else if (const clang::BinaryOperator *exp =
                   Result.Nodes.getNodeAs<clang::BinaryOperator>("calloceq")) {
      const clang::CallExpr *ce =
          clang::dyn_cast<clang::CallExpr>(exp->getRHS()->IgnoreParenCasts());
      if (ce) {
        const clang::MemberExpr *memexp =
            clang::dyn_cast<clang::MemberExpr>(exp->getLHS());
        const clang::DeclRefExpr *varexp =
            clang::dyn_cast<clang::DeclRefExpr>(exp->getLHS());
        if (memexp) {
          calloc_map[memexp->getMemberDecl()] = ce;
        } else if (varexp) {
          calloc_map[varexp->getDecl()] = ce;
        } else {
          llvm::outs() << "ERROR: Unexpcted Expr type for variable in calloc "
                          "assignment\n";
        }
      } else {
        llvm::outs() << "ERROR: Unable to get CallExp for calloceq\n";
      }
    } else {
      llvm::outs() << "Not matched";
    }
  }

  unsigned long num_free_calls(void) const { return free_map.size(); }

  unsigned long num_calloc_calls(void) const { return calloc_map.size(); }

  const clang::CallExpr *get_free(const clang::ValueDecl *decl) const {
    return free_map.at(decl);
  }
  const clang::CallExpr *get_calloc(const clang::ValueDecl *decl) const {
    return calloc_map.at(decl);
  }
  std::map<const clang::ValueDecl *, const clang::CallExpr *>::const_iterator
  free_begin(void) const {
    return free_map.begin();
  }
  std::map<const clang::ValueDecl *, const clang::CallExpr *>::const_iterator
  free_end(void) const {
    return free_map.end();
  }

private:
  std::map<const clang::ValueDecl *, const clang::CallExpr *> free_map;
  std::map<const clang::ValueDecl *, const clang::CallExpr *> calloc_map;
};

int main(int argc, const char **argv) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <source files>" << std::endl;
    return -1;
  }

  // Prints a tool-specific message about arguments when --help used
  llvm::cl::OptionCategory find_free_tool_category("find_free name",
                                                   "find_free description");
  llvm::cl::extrahelp common_help(
      clang::tooling::CommonOptionsParser::HelpMessage);

  clang::tooling::CommonOptionsParser opt_parser(argc, argv,
                                                 find_free_tool_category);

  std::vector<std::string> sources;
  for (int i = 1; i < argc; i++) {
    sources.push_back(argv[i]);
    printf("Adding source %d of %d: %s\n", i, argc - 1, argv[i]);
  }

  clang::tooling::ClangTool find_free_tool(opt_parser.getCompilations(),
                                           sources);

  llvm::outs() << "Starting match finder\n";
  matchPrinter mp;
  clang::ast_matchers::MatchFinder mf;
  mf.addMatcher(freeMatcher, &mp);
  mf.addMatcher(callocMatcher, &mp);
  mf.addMatcher(calloceqMatcher, &mp);

  find_free_tool.run(clang::tooling::newFrontendActionFactory(&mf).get());
  llvm::outs() << "Found " << mp.num_free_calls() << " calls to free()\n";
  llvm::outs() << "Found " << mp.num_calloc_calls() << " calls to calloc()\n";
  for (auto it = mp.free_begin(); it != mp.free_end(); it++) {
    llvm::outs() << "main: free(";
    print_call(it->second->getArgs()[0]);
    llvm::outs() << ")\n";

    const clang::CallExpr *callocexpr = mp.get_calloc(it->first);
    if (!callocexpr)
      llvm::outs() << "Bad CallExpr\n";
    llvm::outs() << "\tcalloc(";
    const clang::Expr *const *args = callocexpr->getArgs();
    unsigned num_args = callocexpr->getNumArgs();
    for (unsigned arg = 0; arg < num_args; arg++) {
      if (arg > 0)
        llvm::outs() << ", ";
      print_call(args[arg]);
    }
    llvm::outs() << ")\n";
  }
}
