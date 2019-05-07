//=- examples/rename-method/RenameMethod.cpp ------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// A small example tool that uses AST matchers to find calls to the Get() method
// in subclasses of ElementsBase and replaces them with calls to Front().
//
//===----------------------------------------------------------------------===//

#include "clang/ASTMatchers/ASTMatchers.h"      // for the AST matchers that we add to the finder.
#include "clang/ASTMatchers/ASTMatchFinder.h"   // for MatchFinder
#include "clang/Tooling/CompilationDatabase.h"  // for the Compilation Database
#include "clang/Tooling/Refactoring.h"          // for RefactoringTool
#include "llvm/Support/CommandLine.h"           // for command-line support

/*
  The way Clang parses source code:
  as it's lexing all the source code, it builds up a source location data structure.
  The source location data structure contians a very small key into an expansion tree
  where that particular piece of code came from.
  This keeps track of each layer of macro expansion.
  It keeps track of both where that macro was expanded to and where the text that made up
  that expansion was written in a file.
  And you can actually walk both directions of this, independently, iterativley.  **
  It even keeps track of how macro arguments are expanded, first into the macro definition,
  and then that's expanded back to where it's used.
  So you can reconstruct any of the various layers of information you want.
  And your replacer will actually replace the method call inside a macro definition.

  ** What is "this"? Is it the source location data structure and the expansion tree?
  Are these the both directions he was talking about?
*/

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;
using namespace llvm;

// Declare global command line flags.
// This is the command line parsing library.

// This is the build path.
cl::opt<std::string> BuildPath(
  cl::Positional,
  cl::desc("<build-path>"));

// These are the source paths.
cl::list<std::string> SourcePaths(
  cl::Positional,
  cl::desc("<source0> [... <sourceN>]"),
  cl::OneOrMore);

// Implements a callback that replaces the calls for the AST
// nodes we matched.
// The renamer is the callback.
class CallRenamer : public MatchFinder::MatchCallback {
public:
  // We pass the Replacements object into the callback.
  // The Replacements object is passed into the constructor,
  // in the main() function when a CallRenamer object is created.:
  //  > CallRenamer CallCallback( &Tool.getReplacements() );
  // &Tool.getReplacements() returns a Replacements
  // std::map<string, Replacements> & RefactoringTool::getReplacements() 	
  CallRenamer(Replacements *Replace) : Replace(Replace) {}

  // This method is called every time the registered matcher matches
  // on the AST.
      // This Result object contains information about the AST node which was matched.
    // The run() function gonna go through every single matched node and replace the text.
	virtual void run(const MatchFinder::MatchResult &Result) {
    
        // You pull that specific node out, get that bound node based on the name "member"
        const MemberExpr *M = Result.Nodes.getStmtAs<MemberExpr>("member");
        // We can assume M is non-null, because the ast matchers guarantee
        // that a node with this type was bound, as the matcher would otherwise
        // not match.
        // Since the function is called every single time a match happens,
        // if no maches are found, then this function never gets called.

        Replace->insert(
      // the insert() function takes a Replacement object.
      // so it constructs a remporary Replacement object and passes it along to the insert() function.
      // Replacements are a source manager independent way to express
      // transformation on the source.
      Replacement(*Result.SourceManager,
                  // Replace the range of the member name...
                  // This is  a block of code that gets the exact character range in the source code
                  // (hence CharSourceRange) that make up the name of that function.
                  CharSourceRange::getTokenRange( SourceRange(M->getMemberLoc()) ),
                  // ... with "Front".
                  "Front"));
  }

private:
  // Replacements are the RefactoringTool's way to keep track of code
  // transformations, deduplicate them and apply them to the code when
  // the tool has finished with all translation units.
  //
  // The tooling infrastructure provides the Replacements object.
  // This object aggregates together, edits the files, keeps track of them over time,
  // After all of the edits have been computed, it goes back over the files and applies the edits in one pass.
  // It detects conflicts.
  // The Replacements object has a lot of smart heuristics to reject any edits to the source code that have problems.
  Replacements *Replace;
};

// Implements a callback that replaces the decls for the AST
// nodes we matched.
class DeclRenamer : public MatchFinder::MatchCallback {
public:
  DeclRenamer(Replacements *Replace) : Replace(Replace) {}

  // This method is called every time the registered matcher matches
  // on the AST.
      // When it matches the declarations of the methods.
	virtual void run(const MatchFinder::MatchResult &Result) {
        // NOTE: here we have a different type coming out of the result.
    const CXXMethodDecl *D = Result.Nodes.getDeclAs<CXXMethodDecl>("method");
    // We can assume D is non-null, because the ast matchers guarantee
    // that a node with this type was bound, as the matcher would otherwise
    // not match.

        // All of this boilerplate code should clearly be abstracted away and factored out
        // in a professional development setting.
        
    Replace->insert(
      // Replacements are a source manager independent way to express
      // transformation on the source.
      Replacement(*Result.SourceManager,
                  // Replace the range of the declarator identifier...
                  CharSourceRange::getTokenRange(    // NOTE: here we have a different expression
                    SourceRange(D->getLocation())),  // to compute the actual range.
                  // ... with "Front".
                  "Front"));
  }

private:
  // Replacements are the RefactoringTool's way to keep track of code
  // transformations, deduplicate them and apply them to the code when
  // the tool has finished with all translation units.
  Replacements *Replace;
};

int main(int argc, const char **argv) {
    // Do normal command line handling from the rest of the arguments.
    // Parse out the command-line options.
    // Lets us configrue and setup our system.
  cl::ParseCommandLineOptions(argc, argv);
    
  // First see if we can create the compile command line from the
  // positional parameters after "--".
  // OwningPtr is a LLVM fake unique pointer.
  //
    // This is probably the most fundamental part of the Clang tooling infrastructure library.
    // We build up a compilation database.
    // First we try to load the compilations database directly from the command line,
    // and if that doesn't work, then we try to load the compilations database from the
    // directory (see code below).
  OwningPtr<CompilationDatabase> Compilations(
    FixedCompilationDatabase::loadFromCommandLine(argc, argv));

  // if it failed to load in the compilations database.
  if (!Compilations) {
    // If the caller didn't specify a compile command line to use, try to
    // load it from a build directory. For example when running cmake, use
    // CMAKE_EXPORT_COMPILE_COMMANDS=ON to prepare your build directory to
    // be useable with clang tools.
    //
    // Now we load the compilation database from the directory,
    // We're going to find the directory where you build your project,
    // the actual build tree of your project.
    // We're going to look in that directory for artifacts left over from the build system
    // that tell us how to compile your code.
    // Clang library needs to know how to compile your source code in order to analyze it,
    // construct an AST tree out of it, and in result refactor it, which is what we want.
    //
    // The compilation database lives inside a JSON file which tells Clang how to compile
    // and analyze the source code.
    std::string ErrorMessage;
      // Basically resets the Compilations, or tries to make a new state for that object.
    Compilations.reset(CompilationDatabase::loadFromDirectory(BuildPath,
                                                              ErrorMessage));
      // If it then failed to load the compilations from the directory, then error out.
    if (!Compilations)
      llvm::report_fatal_error(ErrorMessage);
  }

  // RefactoringTool is kind of the driver.
  // It does the following tasks:
  // - runs all Clang's infrastructure.
  // - compiles the source code as necessary
  // - builds the AST
  // - runs your tool over
  RefactoringTool Tool(*Compilations, SourcePaths);
  
  /* "Magic dots" */
  
  // A MatchFinder holds all the trees of matcher predicates that are active in the system.
  ast_matchers::MatchFinder Finder;
  
  /* The CallRenamer inherits from MatchFinder::MatchCallback by the way. */
  
  // The CallRenamer CallBack specifies what we do when we discover a match. This is the action.
  CallRenamer CallCallback(&Tool.getReplacements());
  // Nesting makes more specific predicate matching criterias.
  //
  // call, callee, etc are all functions, and they return objects which then build up
  // into a tree structure that we can optimize and hand to the matcher later.
  //
  // Add a matcher to the finder, you can add as many of you want.
  Finder.addMatcher(
    // Match calls...
    call(
      // Where the callee is a method called "Get"...
      callee(method(hasName("Get"))),
      // ... and the class on which the method is called is derived
      // from ElementsBase ...
      // thisPointerType grabs both objects before the . operator and the -> operator.
      thisPointerType(record(            // is there a difference between record and Class ?
        isDerivedFrom("ElementsBase"))),
        // By the way, isDerivedFrom grabs both the base class ElementsBase itself, AND
        // also any derived classes off of it.
        // "is derived from or is equal to"
        
      // ... and bind the member expression to the ID "member", under which
      // it can later be found in the callback.
      //
      // This extra predicate matchs everything that it's sub-matcher matches
      // but it associates it with a name, "member"
      // This allows us to really quickly build up the data structure of each individual
      // interesting part of the tree that we watched.
      //
      // Order matters here:
      // If you have an any-of matcher,if you're taking the first one of several different options,
      // only the first one that we actually take has it's nodes bound to the names,
      // so the Result of matched nodes would be different.
      callee(id("member", memberExpression()))),
    &CallCallback);

  // This DeclRenamer processes the below matcher.
  DeclRenamer DeclCallback(&Tool.getReplacements());
  // We don't just wanna match calls, we also want to match declarations of this method.
  // We need another matcher.
  // We want to match a method which has a name "Get",
  // and it's a method of a class derived from "ElementsBase".
  Finder.addMatcher(
    // Match declarations...
    id("method", method(hasName("Get"),
                        ofClass(isDerivedFrom("ElementsBase")))),
    &DeclCallback);  // the last (or third) parameter is the DeclRenamer, which specifies what we
                     // want to do when we get a match.

  // So we're adding this to the same Finder.
  // And we can add as many predicates as you want to the Finder,
  // Each one is matched independently and the callback fires independently.
  // You often are matching in separete domains, for example:
  // - one is a matcher over expressions
  // - this one is over declarations
  // they never gonna collide,
  // they all run at the same time, really big efficiency win!

  // Run the matchers specified in the finder (both of them) over the ASTs in all translation units
  // and collect the results.
  return Tool.run(newFrontendActionFactory(&Finder));
}
