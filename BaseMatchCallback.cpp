#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Lex/Lexer.h"

#include <string>

using std::string;

using llvm::raw_ostream;

using clang::Expr;
using clang::Decl;
using clang::Lexer;
using clang::LangOptions;
using clang::SourceLocation;
using clang::ast_matchers::MatchFinder;


void BaseMatchCallback::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;
}


void BaseMatchCallback::outputExpression(const Expr* expr, raw_ostream& output, const SourceLocation& loc_start) const
{
    output << getExprAsString(expr) << '\n';
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}


void BaseMatchCallback::outputDeclaration(const Decl* decl, raw_ostream& output, const SourceLocation& loc_start) const
{
    output << getDeclAsString(decl) << '\n';
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}


void BaseMatchCallback::outputExpression(const SourceLocation& loc_start, const SourceLocation& loc_end, raw_ostream& output) const
{
    output << getLocationsAsString(loc_start, loc_end) << '\n';
    output << "in "<< SM->getFilename(loc_start) << ':';
    output << SM->getPresumedLineNumber(loc_start) << ':';
    output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
}


string BaseMatchCallback::getExprAsString(const Expr* expression) const
{
    // Source:
    // https://stackoverflow.com/a/37963981/5500589
    LangOptions lopt;

    SourceLocation startLoc = expression->getBeginLoc();
    SourceLocation _endLoc = expression->getEndLoc();
    SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, *SM, lopt);

    unsigned int num_chars = SM->getCharacterData(endLoc) - SM->getCharacterData(startLoc);

    return string(SM->getCharacterData(startLoc), num_chars);
}


string BaseMatchCallback::getDeclAsString(const Decl* declaration) const
{
    // Source:
    // https://stackoverflow.com/a/11154162/5500589
    LangOptions lopt;

    SourceLocation startLoc = declaration->getBeginLoc();
    SourceLocation _endLoc = declaration->getEndLoc();
    SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, *SM, lopt);

    unsigned int num_chars = SM->getCharacterData(endLoc) - SM->getCharacterData(startLoc);

    return string(SM->getCharacterData(startLoc), num_chars);
}


string BaseMatchCallback::getLocationsAsString(const SourceLocation& loc_start, const SourceLocation& loc_end) const
{
    auto num_characters = SM->getCharacterData(loc_end) - SM->getCharacterData(loc_start);
    return string(SM->getCharacterData(loc_start), num_characters);
}
