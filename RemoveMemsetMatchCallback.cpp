#include "custom_exceptions.h"
#include "RemoveMemsetMatchCallback.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Refactoring.h"

#include <string>

using std::exception;
using std::runtime_error;
using std::range_error;
using std::invalid_argument;
using std::string;

using llvm::outs;
using llvm::errs;
using llvm::APInt;
using llvm::Error;

using clang::tooling::Replacement;
using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::StatementMatcher;
using clang::ast_matchers::cStyleCastExpr;
using clang::ast_matchers::functionDecl;
using clang::ast_matchers::callExpr;
using clang::ast_matchers::callee;
using clang::ast_matchers::hasName;
using clang::ast_matchers::hasSourceExpression;
using clang::ast_matchers::hasAncestor;
using clang::ast_matchers::unless;

using clang::dyn_cast;
using clang::isa;
using clang::PointerType;
using clang::ConstantArrayType;
using clang::CStyleCastExpr;
using clang::CallExpr;
using clang::UnaryExprOrTypeTraitExpr;
using clang::UETT_SizeOf;
using clang::IntegerLiteral;
using clang::CharacterLiteral;
using clang::DeclRefExpr;
using clang::MemberExpr;
using clang::ValueDecl;
using clang::ArraySubscriptExpr;
using clang::UnaryOperator;
using clang::BinaryOperator;
using clang::LangOptions;
using clang::SourceManager;
using clang::SourceLocation;
using clang::Lexer;
using clang::CharSourceRange;
using clang::tok::semi;

extern bool print_debug_output;  // defined in refactoring_tool.cpp


void RemoveMemsetMatchCallback::getASTmatchers(MatchFinder& mf)
{
    // Find the start of the .extension in the filename.extension, starting searching from the end
    // of the file.
    string::const_reverse_iterator it = filename.crbegin();
    for (; (*it) != '.'; ++it)
        ;  // empty loop body

    // Calling .base() on a reverse iterator converts it into a forward iterator.
    // https://stackoverflow.com/a/2037917/5500589
    string initialize_function_name = string(filename.cbegin(), it.base() - 1).append("_initialize");

    // match all instances of:
    // (void) memset(/* ... */);
    StatementMatcher cast_memset_matcher = cStyleCastExpr(hasSourceExpression(
        callExpr(
            callee(functionDecl(hasName("memset"))),
            unless(hasAncestor(functionDecl(hasName(initialize_function_name))))
        )
    )).bind("cast_memset_call");

    // match all instances of:
    // memset(/* ... */);
    StatementMatcher memset_matcher = callExpr(
        callee(functionDecl(hasName("memset"))),
        unless(hasAncestor(cStyleCastExpr())),
        unless(hasAncestor(functionDecl(hasName(initialize_function_name))))
    ).bind("memset_call");

    // &remove_memset_match_callback, is the address of the calling object == this
    mf.addMatcher(memset_matcher, this);
    mf.addMatcher(cast_memset_matcher, this);
}


void RemoveMemsetMatchCallback::run(const MatchFinder::MatchResult& result)
{
    // run() method is called whenever a new match is found.
    // Each run() corresponds to a new match, and the data in between the matches should
    // not be stored, therefore the type_string should be cleared before staring to run each mach.
    // Inside getArgString() it is assumed that the type_string is initialized to the empty string,
    // and checking against the empty string is used to determine if this is the first argument
    // processed or if this is a subsequent argument processed.
    type_string = "";

    ++num_matches_found;
    // The value of the pointer itself can be modified,
    // but the underlying object which it points to is const.
    const CallExpr* call_expr = nullptr;
    // Since this SourceLocation is used multiple times in below code, bring it up.
    SourceLocation loc_start;

    SM = result.SourceManager;

    // Remove the C-style cast operator before some memset calls.
    // (void) memset(s, c, n) a common pattern.
    // First check that the result is a CStyleCastExpr, if so, then get the CallExpr out of it.
    // Else, then the result is CallExpr.
    const auto *cast_expr = result.Nodes.getNodeAs<CStyleCastExpr>("cast_memset_call");
    if (cast_expr != nullptr) {
        // clang::CastExpr::getSubExpr() returns an Expr*
        // dynamic_cast it into a const CallExpr*
        // The sub expression of a cast expression is the expression that you're trying to cast.
        call_expr = dyn_cast<const CallExpr>(cast_expr->getSubExpr());
        loc_start = cast_expr->getBeginLoc();
    } else {
        call_expr = result.Nodes.getNodeAs<CallExpr>("memset_call");
        loc_start = call_expr->getBeginLoc();
    }

    // if we succeeded getting a CallExpr out of the result.
    if (call_expr != nullptr) {
        // strings are default constructed to ""
        // They are repreenting the three arguments to memset().
        // void *memset(void *s, int c, size_t n);
        string s;
        string c;
        string size;

        // NOTE: Do not rearrange the order of these three chunks of code!
        // This is important, the arguments of memset() are processed from left to right.
        // First,  argument 0 (void *s) is processed by getArgString().
        // Second, argument 1 (int c) is processed by getFillString().
        // Third,  argument 2 (size_t n) is processed by getSizeString().
        // This is necessary in order to properly determine the element type.
        // The class data member string type_string is set to the type of the element, and is
        // subsequently used for error checking.
        // Initiallly it gets constructed to the empty string.
        // Then when getArgString() is called for the first time and argument 0 is processed,
        // the type_string is set to the type of the element.
        // Then getSizeString() is called, and argument 2 is processed, and the type within the
        // sizeof() expression is then checked to match the type string.
        // The functions should be called in this specific order.

        // Never assume that your functions will return successfully,
        // always catch any possible exceptions.

        // First, argument 0 (void *s) is processed by getArgString().
        try {
            s = getArgString(call_expr->getArg(0)->IgnoreParenCasts(), "i");
        } catch (const exception& exp) {
            outputSource(call_expr, errs());
            errs() << exp.what() << '\n';
            errs() << "\n\n";
            return;  // Don't do the replacement upon failure to retrieve an argument.
        } catch(const string& exp) {
            outputSource(call_expr, errs());
            errs() << exp << '\n';
            errs() << "\n\n";
            return;
        } catch (...) {
            outputSource(call_expr, errs());
            errs() << "An unexpected exception was raised.\n";
            errs() << "\n\n";
            return;
        }

        // Second, argument 1 (int c) is processed by getFillString().
        try {
            c = getFillString(call_expr->getArg(1)->IgnoreParenCasts());
        } catch (const exception& exp) {
            outputSource(call_expr, errs());
            errs() << exp.what() << '\n';
            errs() << "\n\n";
            return;  // Don't do the replacement upon failure to retrieve an argument.
        } catch(const string& exp) {
            outputSource(call_expr, errs());
            errs() << exp << '\n';
            errs() << "\n\n";
            return;
        } catch (...) {
            outputSource(call_expr, errs());
            errs() << "An unexpected exception was raised.\n";
            errs() << "\n\n";
            return;
        }

        // Third, argument 2 (size_t n) is processed by getSizeString().
        try {
            size = getSizeString(call_expr->getArg(2)->IgnoreParenCasts());
        } catch (const exception& exp) {
            outputSource(call_expr, errs());
            errs() << exp.what() << '\n';
            errs() << "\n\n";
            return;  // Don't do the replacement upon failure to retrieve an argument.
        } catch(const string& exp) {
            outputSource(call_expr, errs());
            errs() << exp << '\n';
            errs() << "\n\n";
            return;
        } catch (...) {
            outputSource(call_expr, errs());
            errs() << "An unexpected exception was raised.\n";
            errs() << "\n\n";
            return;
        }

        unsigned indent = SM->getPresumedLoc(loc_start).getColumn();
        // Decrement, but don't let it go "negative".
        // For unsigned numbers, (indent != 0) is a better condition, because there are no
        // negative numbers, but we don't want to decrement 0 and roll over to the largest
        // possible unsigned number.
        // NOTE: This is needed because initially the indent position is one character position
        // after the starting location. It needs to be at the exact character position of the
        // starting location.
        // If the indent is already 0, then we can't go any farther to the left.
        // Conditional operator is more efficient in that there is no branch instruction.
        indent = (indent != 0) ? (indent - 1) : indent;

        // This is a particular replacement, whereas replacements is a map of all of them.
        string replacement;
        bool size_is_zero = size == "0"   || size == "0U"  || size == "0L" ||
                            size == "0UL" || size == "0LL" || size == "0ULL";
        // If the size argument == 0, then don't do a memset(), just get rid of the
        // function call.
        if (size_is_zero) {
            replacement = "";
        } else {
            replacement.append("{\r\n");
            replacement.append(indent+2, ' ');
            replacement.append("for (int i = 0; i < " + size + "; ++i) {\r\n");
            replacement.append(indent+4, ' ');
            // s = c;
            replacement.append(s + " = " + c + ";\r\n");
            replacement.append(indent+2, ' ');
            replacement.append("}\r\n");
            replacement.append(indent, ' ');
            replacement.append("}");
        }

        // Get the location after the semicolon following the memset() call
        SourceLocation after_semi_loc = Lexer::findLocationAfterToken(call_expr->getEndLoc(), semi, *SM, LangOptions(), false);
        if (!after_semi_loc.isValid()) {
            outputSource(call_expr, errs());
            errs() << "ERROR: Unable to find semicolon location after memset() call.\n";
            errs() << "\n\n";
            return;
        }
        CharSourceRange range = CharSourceRange::getTokenRange(loc_start, after_semi_loc);
        Replacement memset_rep(*SM, range, replacement);

        // returns 0 upon success, and non-0 upon error condition.
        if (Error err = (*replacements)[memset_rep.getFilePath()].add(memset_rep)) {
            outputSource(loc_start, after_semi_loc, errs());
            errs() << "ERROR: Error adding replacement that removes memset() call.\n";
            errs() << "\n\n";
            return;
        }
        if (print_debug_output) {
            outputSource(loc_start, after_semi_loc, outs());
            outs() << "replaced with:\n" << replacement << '\n';
            outs() << "\n\n";
        }
        // No error, increment the number of memset() replacements to print to the user.
        ++num_replacements;
    }
}


APInt RemoveMemsetMatchCallback::getVal(const Expr* expr) const
{
    APInt ret;

    // The expr is a sizeof() expression.
    if ( const auto *ttexp = dyn_cast<UnaryExprOrTypeTraitExpr>(expr) ) {
        if (UETT_SizeOf == ttexp->getKind()) {

            // Before returning the APInt, we need to check that the sieof() type and the
            // original declaration type match.
            string this_data_type = ttexp->getTypeOfArgument().getAsString();
            // Distinguish if the type_string is empty as a separete error.
            if (type_string.empty()) {
                throw runtime_error("ERROR: type_string is empty.");
            }
            // If the data types don't match.
            if (type_string != this_data_type) {
                throw NonMatchingTypes(type_string, this_data_type);
            }
        } else {
            throw runtime_error("ERROR: Type trait not sizeof");
        }

        ret = APInt(32U, 1U, false);  // uint32_t, value is 1
    // The expr is a simple integer literal.
    } else if ( const auto *intexp = dyn_cast<IntegerLiteral>(expr) ) {
        ret = intexp->getValue();
    // The expr is a simple character literal, which can be converted into an integer literal.
    } else if ( const auto *charexp = dyn_cast<CharacterLiteral>(expr) ) {
        ret = charexp->getValue();
    } else {
        throw invalid_argument("ERROR: Unable to determine size expression.");
    }

    return ret;
}


string RemoveMemsetMatchCallback::getArgString(const Expr* expr, const string& var)
{
    // default constructed to empty string ""
    string arg_string;
    string idx_string;
    // This variable holds a pointer to the lvalue which is the actual argument of memset(),
    // which could be a variable, an array, or a field of an object.
    // It is the memory location into which the bytes are written to.
    const ValueDecl *valdecl = nullptr;

    // Parse tree until entire type string is determined.
    // The loop is read as while expr is not null.
    // This loop peels away outer layers of the AST, in order to get to the DeclRefExpr.
    // It stops when it gets to a DeclRefExpr, which represents the exact argument to memset().
    while (expr != nullptr) {
        // If the expression is the member of an object.
        // The MemberExpr is almost always the outside layer,
        // then the DeclRefExpr to the actual object is on the inside.
        if ( auto memexp = dyn_cast<MemberExpr>(expr) ) {
            // Get the member of the object.
            // This is the actual argument to memset().
            const auto* tmpdecl = dyn_cast<ValueDecl>(memexp->getMemberDecl());
            // In case you have a member of an object, which is in turn itself a member of an
            // object, this if () statement would be entered two times.
            // obj.a.b;
            // The expression is parsed from the outside to the inside, meaning that the outside
            // part would be hit first. In that case, valdecl == nullptr, so save the tempdecl into
            // the valdecl, marking it as the actual argument to memset().
            // Now upon processing the inside part, the a expression, the valdecl != nullptr, the
            // actual argument to memset() has already been found.
            if (valdecl == nullptr) {
                valdecl = tmpdecl;
            }
            // If the b is processed (see above), then arg_string before was the empty string.
            // If the a is processed, then arg_string before was ".b"
            // This ensures that the member accesses will be chained together.
            // The object will the prepended to the arg_string in the next step/iteration.
            arg_string = "." + tmpdecl->getNameAsString() + arg_string;
            // Get the object to which that member belongs, and iteratively parse that expression.
            expr = memexp->getBase()->IgnoreParenCasts();
        // If the expression is a reference to a declaration of a variable, array, or object.
        } else if ( auto varexp = dyn_cast<DeclRefExpr>(expr) ) {
            // Get the actual declaration of the variable, array, or object.
            const auto* tmpdecl = dyn_cast<ValueDecl>(varexp->getDecl());
            // If valdecl != nullptr, it means that this pointer is pointing to the actual argument
            // to memset(), it was found in an outer layer, so we do not overwrite the valdecl.
            // This is the case if the actual argument to memset() is a member of an object.
            // However if valdecl == nullptr, then it means that we have not yet found the actual
            // argument to memset() in some outer layer, so we just save it into the valdecl.
            // This is the case if the actual argument to memset() is a stand alone variable.
            if (valdecl == nullptr) {
                valdecl = tmpdecl;
            }
            // If arg_string was previously empty, then it is just set to tmpdecl->getNameAsString().
            // If arg_string previously contained the member of the object, .array then the object
            // itself gets prepended to the arg_string, so it becomes object.array
            arg_string = tmpdecl->getNameAsString().append(arg_string);
            // We reached the innermost layer, which is a DeclRefExpr.
            // Break the loop.
            expr = nullptr;
        // If the expression is of the form &x.
        } else if ( auto unaryop = dyn_cast<UnaryOperator>(expr) ) {
            // expr becomes just x, peels away the &
            expr = unaryop->getSubExpr()->IgnoreParenCasts();
        // If the expression is of the form x[0].
        } else if ( auto asubexp = dyn_cast<ArraySubscriptExpr>(expr) ) {
            // getBase() returns the x, IgnoreParenCasts() is necessary to go past the ImplicitCastExpr
            // expr becomes just x, peels away the [0] and any cast and parenthesis expressions
            expr = asubexp->getBase()->IgnoreParenCasts();
            const Expr* idx = asubexp->getIdx();
            if (isa<IntegerLiteral>(idx)) {
                APInt val = getVal(idx);
                if (val != 0) {
                    idx_string = val.toString(10, false); // Args are base = 10, signed = false
                }
            } else {
                idx_string = getAsString(idx);
            }
            //outputSource(idx, llvm::errs());
        } else {
            throw range_error("ERROR: Unable to further iteratively parse expression.");
        }
    }

    if (!idx_string.empty()) {
        idx_string.append(" + ");
    }

    // If we failed to point valdecl to a vald ValueDecl for some reason.
    if (valdecl == nullptr) {
        throw invalid_argument("ERROR: Member expression not a value declaration.");
    }

    string this_data_type;

    // If the ValueDecl represents a pointer type or an array type,
    // then we add the array subscript operator to it: x[i]
    if ( auto ptrtype = dyn_cast<PointerType>(valdecl->getType().getTypePtr()) ) {
        arg_string += "[" + idx_string + var + "]";
        // If the data type is int*, get the pointee type which is int.
        this_data_type = ptrtype->getPointeeType().getAsString();
    } else if ( auto arraytype = dyn_cast<ConstantArrayType>(valdecl->getType().getTypePtr()) ) {
        arg_string += "[" + idx_string + var + "]";
        // If the data type is int [4], get the element type which is int.
        this_data_type = arraytype->getElementType().getAsString();
    } else {
        // Get the regular data type.
        this_data_type = valdecl->getType().getAsString();
    }

    // If type_string is empty, it means that we're processing the first argument to
    // memset(), so save the data type. This data type will later be used for comparing the third
    // argument to memset(), if it is a sizeof() expression, are the data types the same.
    if (type_string.empty()) {
        type_string = this_data_type;
    // getArgString() is called only once during processing of the arguments of memset().
    // It is called when processing the first argument to memset(), the void *s.
    // Technically this function should never be called more than once, and the first time that this
    // function is called, the type_string is always empty. so this else branch should never be executed.
    } else {
        // If the data types don't match.
        if (type_string != this_data_type) {
            throw NonMatchingTypes(type_string, this_data_type);
        }
    }

    return arg_string;
}


string RemoveMemsetMatchCallback::getFillString(const Expr* expr)
{
    APInt result = getVal(expr);
    if (result != 0) {
        throw invalid_argument("ERROR: the second argument to memset(), int c != 0");
    }
    return result.toString(10, false); // Args are base = 10, signed = false
}


string RemoveMemsetMatchCallback::getSizeString(const Expr *expr) const
{
    string ret;

    // Case 1: If the size is like something * something,
    // if there are two expressions and a binary operator combining them.
    //
    // A variable defined inside the condition of an if statement has scope only within that
    // if statement. The advantage of declaring it like this is that we can do initialization and
    // evaluation of the conditional statement practically in one step, it's an optimization.
    if (const auto *binop = dyn_cast<BinaryOperator>(expr)) {
        string oper_string = binop->getOpcodeStr();
        // The only two supported operators are * and <<
        if (!(oper_string == "*" || oper_string == "<<")) {
            throw BadOperator("ERROR: Unrecognized BinaryOperator.");
        }

        // Get the expressions to the left and right of the binary operator.
        const Expr *lhs = binop->getLHS()->IgnoreParenCasts();
        const Expr *rhs = binop->getRHS()->IgnoreParenCasts();
        // These variables are true if the expressions are IntegerLiterals or sizeof() expressions.
        bool lhs_literal = isa<IntegerLiteral>(lhs) || isa<UnaryExprOrTypeTraitExpr>(lhs);
        bool rhs_literal = isa<IntegerLiteral>(rhs) || isa<UnaryExprOrTypeTraitExpr>(rhs);

        // literal OP literal
        if (lhs_literal && rhs_literal) {
            APInt lhs_val = getVal(lhs);
            APInt rhs_val = getVal(rhs);
            if (oper_string == "*") {
                APInt result = lhs_val * rhs_val;
                ret = result.toString(10, false); // Args are base = 10, signed = false
            } else if (oper_string == "<<") {
                APInt result = lhs_val << rhs_val;
                ret = result.toString(10, false); // Args are base = 10, signed = false
            // Other BinaryOperators are not yet supported.
            } else {
                throw BadOperator("ERROR: Unrecognized BinaryOperator.");
            }
        // literal OP variable
        } else if (lhs_literal && !rhs_literal) {
            APInt lhs_val = getVal(lhs);
            // 0 << var == 0
            // 0 *  var == 0
            if (lhs_val == 0U) {
                ret = "0";
            } else if (lhs_val == 1U) {
                // 1 * var == var
                if (oper_string == "*") {
                    ret = getAsString(rhs);
                // 1 << var
                } else if (oper_string == "<<") {
                    ret = getAsString(binop);
                // Other BinaryOperators are not yet supported.
                } else {
                    throw BadOperator("ERROR: Unrecognized BinaryOperator.");
                }
            // For any other literal OP variable
            } else {
                ret = getAsString(binop);
            }
        // variable OP literal
        } else if (!lhs_literal && rhs_literal) {
            APInt rhs_val = getVal(rhs);
            if (rhs_val == 0U) {
                // var * 0 == 0
                if (oper_string == "*") {
                    ret = "0";
                // var << 0 == var
                } else if (oper_string == "<<") {
                    ret = getAsString(lhs);
                // Other BinaryOperators are not yet supported.
                } else {
                    throw BadOperator("ERROR: Unrecognized BinaryOperator.");
                }
            } else if (rhs_val == 1U) {
                // var * 1 == var
                if (oper_string == "*") {
                    ret = getAsString(lhs);
                // var << 1
                } else if (oper_string == "<<") {
                    ret = getAsString(binop);
                // Other BinaryOperators are not yet supported.
                } else {
                    throw BadOperator("ERROR: Unrecognized BinaryOperator.");
                }
            // For any other variable OP literal
            } else {
                ret = getAsString(binop);
            }
        // variable OP variable
        } else if (!lhs_literal && !rhs_literal) {
            // The third operand to memset() is the number of bytes, so if the size expression
            // is a variable OP variable, then we need to divide that result by the
            // sizeof(element).
            // We didn't have this problem above because we assumed that one of the literals
            // is a sizeof() expression.
            string size_string = "(" + getAsString(binop) + ")";
            size_string.append(" / sizeof(" + type_string + ")");
            ret = size_string;
        }

    // Case 2: If the size is single variable.
    } else if ( const auto *varexp = dyn_cast<DeclRefExpr>(expr) ) {
        // Get the variable itself.
        const auto *vardecl = dyn_cast<ValueDecl>(varexp->getDecl());
        if (vardecl != nullptr) {
            if (type_string.empty()) {
                throw runtime_error("ERROR: Data type of elements is not determined!");
            }
            // The third operand to memset() is the number of bytes, so if it's a single
            // variable, we have to divide that number of bytes by the sizeof(element).
            string size_string = vardecl->getNameAsString() + " / sizeof(" + type_string + ")";
            ret = size_string;
        } else {
            throw invalid_argument("ERROR: DeclRefExpr without ValueDecl");
        }
    // Case 3: If the size is a sizeof() expression, always return "1".
    } else if ( const auto *ttexp = dyn_cast<UnaryExprOrTypeTraitExpr>(expr) ) {
        if (UETT_SizeOf == ttexp->getKind()) {
            // Check that the sizeof() type and original declaration type match.
            string this_data_type = ttexp->getTypeOfArgument().getAsString();
            // Distinguish if the type_string is empty as a separete error.
            if (type_string.empty()) {
                throw runtime_error("ERROR: type_string is empty.");
            }
            // If the data types don't match.
            if (type_string != this_data_type) {
                throw NonMatchingTypes(type_string, this_data_type);
            }

            ret = string("1");
        } else {
            throw runtime_error("ERROR: Type trait not sizeof");
        }
    // Case 4: The size is a simple integer literal.
    } else if ( const auto *intexp = dyn_cast<IntegerLiteral>(expr) ) {
        if (type_string.empty()) {
            throw runtime_error("ERROR: Data type of elements is not determined!");
        }
        // The third operand to memset() is the number of bytes, so if it's an IntegerLiteral,
        // it should be divided by sizeof(element).
        // getValue() returns APInt, then on that APInt we call the function toString().
        APInt result = intexp->getValue();
        string result_string = result.toString(10, false); // Args are base = 10, signed = false
        // operator +=() is an inline function, which internally calls append().
        result_string.append(" / sizeof(" + type_string + ")");
        ret = result_string;
    // Default: Something else which is an error.
    } else {
        throw invalid_argument("ERROR: Unable to determine size expression.");
    }

    return ret;
}
