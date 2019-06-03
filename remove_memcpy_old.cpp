/*
 * Add header comments here.
 */
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"

#include <cstring>
#include <string>
#include <exception>
#include <stdexcept>

#include "x_macros.h"

// using namespace x; should be replaced with
// using x::a;
// using x::b;
// That way we know what we are using, and where it comes from,
// and we don't have to include the whole library.
// Please watch the following videos:
// https://www.youtube.com/watch?v=4NYC-VU-svE
// https://www.youtube.com/watch?v=hKZjOKYZZFs
using std::string;
using std::stol;
using std::to_string;
using std::map;

// TODO: replace these also.
using namespace llvm;
using namespace llvm::cl;
using namespace clang;
using namespace clang::tooling;
using namespace clang::ast_matchers;


class MemcpyMatchCallback : public MatchFinder::MatchCallback
{
  private:
    bool string_is_integer(const string& str) const
    {
        if (str.empty())
            return false;

        string::const_iterator it;
        for (it = str.begin(); it != str.end() && isdigit(*it); ++it)
            ;  // empty loop body

        if (it == str.end())
            return true;
        else
            return false;
    }

    // Since clang::Expr inherits from clang::Stmt, this function can also be used to retrieve a string
    // representation of clang::Expr.
    string getStmtAsString(const Expr* expression, const SourceManager &sm) const
    {
        // Source:
        // https://stackoverflow.com/a/37963981/5500589
        clang::LangOptions lopt;
        // Get the source range and manager.
        SourceLocation startLoc = expression->getLocStart();
        SourceLocation _endLoc = expression->getLocEnd();
        SourceLocation endLoc = clang::Lexer::getLocForEndOfToken(_endLoc, 0, sm, lopt);
        //const SourceManager* SM = result.SourceManager;

        // Use LLVM's lexer to get source text.
       return std::string(sm.getCharacterData(startLoc), sm.getCharacterData(endLoc) - sm.getCharacterData(startLoc));
    }

    string getStringStatic(const string& lhs_string, const string& typeLhs,
                           const string& rhs_string, const string& typeRhs, const string& oper_string) const
    {
        void* lhs_value;
        void* rhs_value;
        // Malloc a size to hold any possible data type, long long is the largest.
        lhs_value = malloc( sizeof(long long) );
        if (lhs_value == nullptr) {
            throw std::bad_alloc();
        }
        memset(lhs_value, 0, sizeof(long long));

        rhs_value = malloc( sizeof(long long) );
        if (rhs_value == nullptr) {
            throw std::bad_alloc();
        }
        memset(rhs_value, 0, sizeof(long long));

        string lhs_signedness;
        string rhs_signedness;

        if (strncmp(typeLhs.c_str(), "unsigned", 8) == 0) {
            lhs_signedness = "unsigned";
            //memset(lhs_value, 0, sizeof(long long));
        } else {
            lhs_signedness = "signed";
            //memset(lhs_value, 0xff, sizeof(long long));
        }
        if (typeLhs == "") {
            throw std::invalid_argument("typeLhs is an empty string");
        } else if (typeLhs == "char") {
            sscanf(lhs_string.c_str, "%c", (char*) lhs_value);
        } else if (typeLhs == "signed char") {
            sscanf(lhs_string.c_str, "%hhi", (signed char*) lhs_value);
        } else if (typeLhs == "unsigned char") {
            sscanf(lhs_string.c_str, "%hhu", (unsigned char*) lhs_value);
        } else if (typeLhs == "short") {
            sscanf(lhs_string.c_str, "%hi", (short*) lhs_value);
        } else if (typeLhs == "unsigned short") {
            sscanf(lhs_string.c_str, "%hu", (unsigned short*) lhs_value);
        } else if (typeLhs == "int") {
            sscanf(lhs_string.c_str, "%i", (int*) lhs_value);
        } else if (typeLhs == "unsigned int") {
            sscanf(lhs_string.c_str, "%u", (unsigned int*) lhs_value);
        } else if (typeLhs == "long") {
            sscanf(lhs_string.c_str, "%li", (long*) lhs_value);
        } else if (typeLhs == "unsigned long") {
            sscanf(lhs_string.c_str, "%lu", (unsigned long*) lhs_value);
        } else if (typeLhs == "long long") {
            sscanf(lhs_string.c_str, "%lli", (long long*) lhs_value);
        } else if (typeLhs == "unsigned long long") {
            sscanf(lhs_string.c_str, "%llu", (unsigned long long*) lhs_value);
        } else if (typeLhs == "float") {
            sscanf(lhs_string.c_str, "%f", (float*) lhs_value);
        } else if (typeLhs == "double") {
            sscanf(lhs_string.c_str, "%lf", (double*) lhs_value);
        } else if (typeLhs == "long double") {
            sscanf(lhs_string.c_str, "%llf", (long double*) lhs_value);
        } else if (typeLhs == "_Bool") {
            lhs_signedness = "unsigned";
            memset(lhs_value, 0, sizeof(long long));

            if (lhs_string == "true") {
                *((bool*) lhs_value) = true;
            } else if (lhs_string == "false") {
                *((bool*) lhs_value) = false;
            } else {
                // We cannot scanf() into bool directly, must use unsigned char as a temporary variable.
                unsigned char temp;
                sscanf(lhs_string.c_str(), "%hhu", &temp);
                *((bool*) lhs_value) = temp & 0x1;
            }
        } else {
            throw std::invalid_argument("typeLhs is an unrecognized data type: " + typeLhs + "|");
        }

        if (strncmp(typeRhs.c_str(), "unsigned", 8) == 0) {
            rhs_signedness = "unsigned";
            //memset(rhs_value, 0, sizeof(long long));
        } else {
            rhs_signedness = "signed";
            //memset(rhs_value, 0xff, sizeof(long long));
        }
        if (typeRhs == "") {
            throw std::invalid_argument("typeRhs is an empty string");
        } else if (typeRhs == "char") {
            sscanf(rhs_string.c_str(), "%c", (char*) rhs_value);
        } else if (typeRhs == "signed char") {
            sscanf(rhs_string.c_str(), "%hhi", (signed char*) rhs_value);
        } else if (typeRhs == "unsigned char") {
            sscanf(rhs_string.c_str(), "%hhu", (unsigned char*) rhs_value);
        } else if (typeRhs == "short") {
            sscanf(rhs_string.c_str(), "%hi", (short*) rhs_value);
        } else if (typeRhs == "unsigned short") {
            sscanf(rhs_string.c_str(), "%hu", (unsigned short*) rhs_value);
        } else if (typeRhs == "int") {
            sscanf(rhs_string.c_str(), "%i", (int*) rhs_value);
        } else if (typeRhs == "unsigned int") {
            sscanf(rhs_string.c_str(), "%u", (unsigned int*) rhs_value);
        } else if (typeRhs == "long") {
            sscanf(rhs_string.c_str(), "%li", (long*) rhs_value);
        } else if (typeRhs == "unsigned long") {
            sscanf(rhs_string.c_str(), "%lu", (unsigned long*) rhs_value);
        } else if (typeRhs == "long long") {
            sscanf(rhs_string.c_str(), "%lli", (long long*) rhs_value);
        } else if (typeRhs == "unsigned long long") {
            sscanf(rhs_string.c_str(), "%llu", (unsigned long long*) rhs_value);
        } else if (typeRhs == "_Bool") {
            rhs_signedness = "unsigned";
            memset(rhs_value, 0, sizeof(long long));

            if (rhs_string == "true") {
                *((bool*) rhs_value) = true;
            } else if (rhs_string == "false") {
                *((bool*) rhs_value) = false;
            } else {
                // We cannot scanf() into bool directly, must use unsigned char as a temporary variable.
                unsigned char temp;
                sscanf(rhs_string.c_str(), "%hhu", &temp);
                *((bool*) rhs_value) = temp & 0x1;
            }
        } else {
            throw std::invalid_argument("typeRhs is an unrecognized data type: " + typeRhs + "|");
        }

        if (false) {
            throw std::runtime_error("C++ is broken!");
        } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "*") {
            string temp = to_string( *((unsigned long long*) lhs_value) * *((unsigned long long*) rhs_value) );
            free(lhs_value);
            free(rhs_value);
            return temp;
        } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "*") {
            string temp = to_string( *((unsigned long long*) lhs_value) * *((signed long long*) rhs_value) );
            free(lhs_value);
            free(rhs_value);
            return temp;
        } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "*") { string temp = to_string( *((signed long long*) lhs_value) * *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "*") { string temp = to_string( *((signed long long*) lhs_value) * *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "/") { string temp = to_string( *((unsigned long long*) lhs_value) / *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "/") { string temp = to_string( *((unsigned long long*) lhs_value) / *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "/") { string temp = to_string( *((signed long long*) lhs_value) / *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "/") { string temp = to_string( *((signed long long*) lhs_value) / *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "%") { string temp = to_string( *((unsigned long long*) lhs_value) % *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "%") { string temp = to_string( *((unsigned long long*) lhs_value) % *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "%") { string temp = to_string( *((signed long long*) lhs_value) % *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "%") { string temp = to_string( *((signed long long*) lhs_value) % *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "+") { string temp = to_string( *((unsigned long long*) lhs_value) + *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "+") { string temp = to_string( *((unsigned long long*) lhs_value) + *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "+") { string temp = to_string( *((signed long long*) lhs_value) + *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "+") { string temp = to_string( *((signed long long*) lhs_value) + *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "-") { string temp = to_string( *((unsigned long long*) lhs_value) - *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "-") { string temp = to_string( *((unsigned long long*) lhs_value) - *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "-") { string temp = to_string( *((signed long long*) lhs_value) - *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "-") { string temp = to_string( *((signed long long*) lhs_value) - *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "<<") { string temp = to_string( *((unsigned long long*) lhs_value) << *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "<<") { string temp = to_string( *((unsigned long long*) lhs_value) << *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "<<") { string temp = to_string( *((signed long long*) lhs_value) << *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "<<") { string temp = to_string( *((signed long long*) lhs_value) << *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == ">>") { string temp = to_string( *((unsigned long long*) lhs_value) >> *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == ">>") { string temp = to_string( *((unsigned long long*) lhs_value) >> *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == ">>") { string temp = to_string( *((signed long long*) lhs_value) >> *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == ">>") { string temp = to_string( *((signed long long*) lhs_value) >> *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "<") { string temp = to_string( *((unsigned long long*) lhs_value) < *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "<") { string temp = to_string( *((unsigned long long*) lhs_value) < *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "<") { string temp = to_string( *((signed long long*) lhs_value) < *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "<") { string temp = to_string( *((signed long long*) lhs_value) < *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == ">") { string temp = to_string( *((unsigned long long*) lhs_value) > *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == ">") { string temp = to_string( *((unsigned long long*) lhs_value) > *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == ">") { string temp = to_string( *((signed long long*) lhs_value) > *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == ">") { string temp = to_string( *((signed long long*) lhs_value) > *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "<=") { string temp = to_string( *((unsigned long long*) lhs_value) <= *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "<=") { string temp = to_string( *((unsigned long long*) lhs_value) <= *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "<=") { string temp = to_string( *((signed long long*) lhs_value) <= *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "<=") { string temp = to_string( *((signed long long*) lhs_value) <= *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == ">=") { string temp = to_string( *((unsigned long long*) lhs_value) >= *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == ">=") { string temp = to_string( *((unsigned long long*) lhs_value) >= *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == ">=") { string temp = to_string( *((signed long long*) lhs_value) >= *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == ">=") { string temp = to_string( *((signed long long*) lhs_value) >= *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "==") { string temp = to_string( *((unsigned long long*) lhs_value) == *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "==") { string temp = to_string( *((unsigned long long*) lhs_value) == *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "==") { string temp = to_string( *((signed long long*) lhs_value) == *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "==") { string temp = to_string( *((signed long long*) lhs_value) == *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "!=") { string temp = to_string( *((unsigned long long*) lhs_value) != *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "!=") { string temp = to_string( *((unsigned long long*) lhs_value) != *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "!=") { string temp = to_string( *((signed long long*) lhs_value) != *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "!=") { string temp = to_string( *((signed long long*) lhs_value) != *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "&") { string temp = to_string( *((unsigned long long*) lhs_value) & *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "&") { string temp = to_string( *((unsigned long long*) lhs_value) & *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "&") { string temp = to_string( *((signed long long*) lhs_value) & *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "&") { string temp = to_string( *((signed long long*) lhs_value) & *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "^") { string temp = to_string( *((unsigned long long*) lhs_value) ^ *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "^") { string temp = to_string( *((unsigned long long*) lhs_value) ^ *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "^") { string temp = to_string( *((signed long long*) lhs_value) ^ *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "^") { string temp = to_string( *((signed long long*) lhs_value) ^ *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "|") { string temp = to_string( *((unsigned long long*) lhs_value) | *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "|") { string temp = to_string( *((unsigned long long*) lhs_value) | *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "|") { string temp = to_string( *((signed long long*) lhs_value) | *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "|") { string temp = to_string( *((signed long long*) lhs_value) | *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "&&") { string temp = to_string( *((unsigned long long*) lhs_value) && *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "&&") { string temp = to_string( *((unsigned long long*) lhs_value) && *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "&&") { string temp = to_string( *((signed long long*) lhs_value) && *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "&&") { string temp = to_string( *((signed long long*) lhs_value) && *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "unsigned" && oper_string == "||") { string temp = to_string( *((unsigned long long*) lhs_value) || *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "unsigned" && rhs_signedness == "signed" && oper_string == "||") { string temp = to_string( *((unsigned long long*) lhs_value) || *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "unsigned" && oper_string == "||") { string temp = to_string( *((signed long long*) lhs_value) || *((unsigned long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp; } else if (lhs_signedness == "signed" && rhs_signedness == "signed" && oper_string == "||") { string temp = to_string( *((signed long long*) lhs_value) || *((signed long long*) rhs_value) ); free(lhs_value); free(rhs_value); return temp;
        }

         /*
         } else if (lhs_is_unsigned == true && rhs_is_unsigned == true && oper_string == "*") {
             string temp = to_string( *((unsigned long long) lhs_value) * *((unsigned long long) rhs_value) );
             free(lhs_value);
             free(rhs_value);
             return temp;
         }
         */

    }

    string getArgString(const Expr *expr, const string& var) const {
		string arg_string;
		const ValueDecl *valdecl = nullptr;

		// Parse tree until entire type string is determined
		while( expr ){
			if( auto memexp = dyn_cast<MemberExpr>(expr) ){
				valdecl = dyn_cast<ValueDecl>(memexp->getMemberDecl());
				arg_string = "." + valdecl->getNameAsString();
				expr = memexp->getBase();
			}
			else if( auto varexp = dyn_cast<DeclRefExpr>(expr) ){
				const ValueDecl *tmpdecl = dyn_cast<ValueDecl>(varexp->getDecl());
				// Don't erase declaration found with member expression
				if( !valdecl ) {
					valdecl = tmpdecl;
				}
				arg_string = tmpdecl->getNameAsString() + arg_string;
				expr = nullptr;
			}
			else if( auto unaryop = dyn_cast<UnaryOperator>(expr) ){
				expr = unaryop->getSubExpr();
			}
			else if( auto asubexp = dyn_cast<ArraySubscriptExpr>(expr) ){
				expr = asubexp->getBase()->IgnoreParenCasts();
			}
			else {
				throw std::range_error("ERROR: Unable to further iteratively parse expression.\n");
                break;
			}
		}

		if( !valdecl ){
			throw std::invalid_argument("ERROR: Member expression not a value declaration\n");
		}
		if( dyn_cast<clang::PointerType>(valdecl->getType().getTypePtr()) ){
			arg_string += "[" + var + "]";
		}
		else if( dyn_cast<clang::ConstantArrayType>(valdecl->getType().getTypePtr()) ){
			arg_string += "[" + var + "]";
		}

		return arg_string;
	}

	string getSizeString(const Expr *expr, const SourceManager &sm) const {
		string size_string;
        // If the size is like something * something,
        // if there are two expressions and a binary operator combining them.
        //
        // A variable defined inside the condition of an if statement has scope only within that
        // if statement. The advantage of declaring it like this is that we can do initialization and
        // evaluation of the conditional statement practically in one step, it's an optimization.
		if (const BinaryOperator *binop = dyn_cast<BinaryOperator>(expr)) {
            errs() << "BinaryOperator" << '\n';
            // Get the expressions to the left and right of the binary operator.
			const Expr *lhs = binop->getLHS()->IgnoreParenCasts();
			const Expr *rhs = binop->getRHS()->IgnoreParenCasts();

            string main_expression = binop->getType().getAsString();
            string typeLhs = lhs->getType().getAsString();
            string typeRhs = rhs->getType().getAsString();
            //string lhs_string = getStmtAsString(lhs, sm);
            //string rhs_string = getStmtAsString(rhs, sm);
            string lhs_string  = getSizeString(lhs, sm);
			string rhs_string  = getSizeString(rhs, sm);
            string oper_string = binop->getOpcodeStr();
            outs() << lhs_string << ' ' << oper_string << ' ' << rhs_string << '\n';
            outs() << typeLhs << ' ' << oper_string << ' ' << typeRhs << '\n';


            size_string = getStringStatic(lhs_string, typeLhs, rhs_string, typeRhs, oper_string);
            outs() << "size_string: = " << size_string << "\n\n";
		}
		else if( const DeclRefExpr *varexp = dyn_cast<DeclRefExpr>(expr) ){
			const ValueDecl *vardecl = dyn_cast<ValueDecl>(varexp->getDecl());
			if( vardecl ) {
				size_string = vardecl->getNameAsString();
			}
			else {
                // We should not return error strings upon a failure in the function, an exceptional condition.
                // Upon success the function returns a string representing an expression.
                // The presense of a string being returned implies that the function succeeded.
                // The program will then assume that the function worked and it will stick that error string
                // into the source code, which is horribly wrong.
                // Of course you could have if else statement to distinguish error strings from valid ones,
                // but as your application scales up and the number of possible errors increases,
                // it becomes a maintanability problem, prone to errors.
                //
                // Just throw that string as an exception, because having a failure in the Clang API is an
                // exceptional condition.
                // That way if the function returns a string, we can be sure that it's successful.
                //
                // TODO: It would be more professional to throw an instance of a custom class
                // derived from std::exception.
				throw string("ERROR: DeclRefExpr without ValueDecl");
			}
		}
        // The size is a
		else if( const UnaryExprOrTypeTraitExpr *ttexp = dyn_cast<UnaryExprOrTypeTraitExpr>(expr) ){
			if( UETT_SizeOf == ttexp->getKind() ){
				size_string = "2";
			}
			else {
				throw string("ERROR: Type trait not sizeof");
			}
		}
        // The size is a simple integer literal.
		else if( const IntegerLiteral *intexp = dyn_cast<IntegerLiteral>(expr) ){
            size_string = getStmtAsString(intexp, sm);
			//size_string = intexp->getValue().toString(10, false); // Args are base, signed
		}
		else {
			throw std::invalid_argument("ERROR: Unable to determine size expression.\n");
		}

		return size_string;
	}

  public:
    // TODO: Maybe std::map should be replaced by the LLVM map data structure?
    MemcpyMatchCallback(map<string, Replacements> * replacements)
		: replacements(replacements) {}
    /* Callback method for the MatchFinder.
	 * @param result - Found matching results.
	 */
	virtual void run(const MatchFinder::MatchResult& result)
	{
        // The value of the pointer itself can be modified,
        // but the underlying object which it points to is const.
		const CallExpr* call_expr = nullptr;
        // Since this SourceLocation is used multiple times in below code,
        // bring it up.
		SourceLocation loc_start;

        SM = result.SourceManager;

		// Remove the C-style cast operator before some memcpy calls.
		// (void) memcpy(dst, src, size) a common pattern.
		const CStyleCastExpr *cast_expr = result.Nodes.getNodeAs<CStyleCastExpr>("cast_memcpy_call");
		if ( cast_expr ){
            // clang::CastExpr::getSubExpr() returns an Expr*
            // dynamic_cast it into a const CallExpr*
            // The sub expression of a cast expression is the expression that you're trying to cast.
			call_expr = dyn_cast<const CallExpr>(cast_expr->getSubExpr());
			loc_start = cast_expr->getLocStart();
		}
		else {
			call_expr = result.Nodes.getNodeAs<CallExpr>("memcpy_call");
			loc_start = call_expr->getLocStart();
		}

		if ( call_expr ) {

            //call_expr->dump();

            // Never assume that your functions will return successfully.
            string dst, src, size;  // strings are default constructed to ""

            /*
            char number[] = "123";
            void* a = (void*) new int;
            sscanf(number, "%d", a);
            free(a);
            */
			//dst = getArgString(call_expr->getArg(0)->IgnoreParenCasts(), "i");
			//src = getArgString(call_expr->getArg(1)->IgnoreParenCasts(), "i");
            try {
			    size = getSizeString(call_expr->getArg(2)->IgnoreParenCasts(), *result.SourceManager);
            } catch(const string& exp) {
                errs() << exp << '\n';
                return;  // Don't do the replacement upon failure to retrieve an argument.
            } catch (const std::exception& exp) {
                errs() << exp.what() << '\n';
                return;
            } catch (...) {
                errs() << "An unexpected exception was raised.\n";
                return;
            }

            return;

			unsigned indent = (*result.SourceManager).getPresumedLoc(loc_start).getColumn();
			// Decrement, but don't let it go negative
			if( indent > 0 ){
				--indent;
			}
			string replacement = "{\r\n";
			replacement.append(indent+2, ' ');
			replacement.append("for(int i = 0; i < " + size + "; ++i) {\r\n");
			replacement.append(indent+4, ' ');
			replacement.append(dst + " = " + src + ";\r\n");
			replacement.append(indent+2, ' ');
			replacement.append("}\r\n");
			replacement.append(indent, ' ');
			replacement.append("}");

			// Get the location after the semicolon following the memcpy() call
            SourceLocation after_semi_loc = Lexer::findLocationAfterToken(call_expr->getLocEnd(), tok::semi, *result.SourceManager, LangOptions(), false);
            if (!after_semi_loc.isValid()) {
                outs() << "ERROR: Unable to find semicolon location after memcpy() call.\n";
                return;
            }
	        CharSourceRange range = CharSourceRange::getTokenRange(loc_start, after_semi_loc);
            Replacement memcpy_rep(*result.SourceManager, range, replacement);

		    if (Error err = (*replacements)[memcpy_rep.getFilePath()].add(memcpy_rep)) {
                outs() << "ERROR: Error adding replacement that removes memcpy() call.\n";
                return;
            }
	    }
	}

  private:
    map<string, Replacements>* replacements;
    SourceManager* SM;
	// Add other variables here as needed.
};


int main(int argc, const char **argv)
{
	// Format should be:
	// $ ./a.out tool_specific options -- clang_specific_options (not used)
	// By default, input file(s) treated as a positional arguments of the tool-specific part of the options

	// strncmp returns 0 if the strings match, and non-0 otherwise
	if (argc < 3 || strncmp(argv[argc - 1], "--", 2) != 0) {
	    errs() << "Usage:\n$ " << argv[0] << " <source files> --" << '\n';
	    return -1;  // error code
	}

	/* Command line options description: */

	// Define code generation tool option category.
	// Prints a tool-specific message about arguments when --help is used
	OptionCategory remove_memcpy_tool_category("remove_memcpy name", "remove_memcpy description");
    // Define option for output file name.
//    opt<string> OutputFilename("o", desc("Specify output filename"), value_desc("filename"));

	// Define comomn help message printer.
//    extrahelp common_help(CommonOptionsParser::HelpMessage);
    // Define specific help message printer.
 //   extrahelp more_help("This program replaces att instances of memcpy() in C/C++ code with a loop.");

	/* Command line parsing: */

	// Parses the command line arguments for you.
	// The third argument is a tool-specific options category.
	CommonOptionsParser optionsParser(argc, argv, remove_memcpy_tool_category);
	/* Run the Clang compiler for the each input file separately
     * (one input file - one output file).
     *	This is default ClangTool behaviour.
	 */
	// The first argument is a list of compilations.
	// The second argument is a list of source files to parse.
	RefactoringTool remove_memcpy_tool(optionsParser.getCompilations(), optionsParser.getSourcePathList());

//	outs() << "Starting match finder\n";

	// Make the MemcpyMatchCallback class be able to recieve the match results.
	MemcpyMatchCallback matcher(&remove_memcpy_tool.getReplacements());

	MatchFinder mf;
	// match all instances of:
    // (void) memcpy(/* ... */);
	StatementMatcher cast_memcpy_matcher = cStyleCastExpr(hasSourceExpression(callExpr(callee(functionDecl(hasName("memcpy")))))).bind("cast_memcpy_call");
    // match all instances of:
    // memcpy(/* ... */);
	StatementMatcher memcpy_matcher = callExpr(callee(functionDecl(hasName("memcpy"))), unless(hasAncestor(cStyleCastExpr()))).bind("memcpy_call");
	//StatementMatcher memcpy_matcher = callExpr(callee(functionDecl(hasName("memcpy")))).bind("memcpy_call");
//	StatementMatcher cast_matcher = cStyleCastExpr().bind("cast");
	mf.addMatcher(memcpy_matcher, &matcher);
	mf.addMatcher(cast_memcpy_matcher, &matcher);
//	mf.addMatcher(cast_matcher, &matcher);

	// Run the compiler.
	auto result = remove_memcpy_tool.runAndSave(newFrontendActionFactory(&mf).get());

	return result;
}
