#include "BaseMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"

#include <string>

using std::string;
using std::size_t;

using llvm::raw_ostream;

using clang::Expr;
using clang::Decl;
using clang::SourceLocation;
using clang::ast_matchers::MatchFinder;


void BaseMatchCallback::run(const MatchFinder::MatchResult& result)
{
    SM = result.SourceManager;
}


void BaseMatchCallback::outputSource(const SourceLocation& loc_start, const SourceLocation& loc_end, raw_ostream& output) const
{
    output << getAsString(loc_start, loc_end) << '\n';
    output << "in ";
    loc_start.print(output, *SM);
    output << '\n';
}


string BaseMatchCallback::getAsString(const SourceLocation& loc_start, const SourceLocation& loc_end) const
{
    auto num_characters = SM->getCharacterData(loc_end) - SM->getCharacterData(loc_start);
    return string(SM->getCharacterData(loc_start), num_characters);
}
