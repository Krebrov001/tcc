/*
 * As part of LLVM coding standards, you should organize your include statements by putting local headers
 * first, followed by Clang and LLVM API headers. When ytwo headers pertain to the same category,
 * order them alphabetically.
 */
#include "data_types.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"
#include "llvm/ADT/APInt.h"

#include <cstring>
#include <cstdint>
#include <exception>
#include <stdexcept>
#include <string>

// using namespace x; should be replaced with
// using x::a;
// using x::b;
// That way we know what we are using, and where it comes from,
// and we don't have to include the whole library.
// Please watch the following videos:
// https://www.youtube.com/watch?v=4NYC-VU-svE
// https://www.youtube.com/watch?v=hKZjOKYZZFs
using std::string;
using std::to_string;
using std::map;

// TODO: replace these also.
using namespace llvm;
using namespace llvm::cl;
using namespace clang;
using namespace clang::tooling;
using namespace clang::ast_matchers;


class BadOperator : public std::exception {
  public:
    BadOperator(const char* reason) : exception(), reason(reason) {}

    const char* what() const throw()
    {
        return reason;
    }
  private:
    const char* reason;
};


class NonMatchingTypes : public std::exception {
  public:
    NonMatchingTypes(const string& data_type1, const string& data_type2)
    : exception(), reason() {
        reason = "ERROR: Data types don't match: " + data_type1 + " and " + data_type2;
    }

    const char* what() const throw()
    {
        return reason.c_str();
    }
  private:
    string reason;
};


// TODO: Rearrange the public and private functions inside the class logically.
class MemcpyMatchCallback : public MatchFinder::MatchCallback
{
  private:
    /**
     * @param const Expr* expression - A pointer to an instance of clang::Expr,
     *        or one of it's derived types.
     *
     * @return string - A string representation of the passed in expression,
     *         the exact string text of that expression.
     */
    string getExprAsString(const Expr* expression) const
    {
        // References are easier to work with than pointers.
        const SourceManager &sm = *SM;
        // Source:
        // https://stackoverflow.com/a/37963981/5500589
        clang::LangOptions lopt;
        // Get the source range and manager.
        SourceLocation startLoc = expression->getLocStart();
        SourceLocation _endLoc = expression->getLocEnd();
        SourceLocation endLoc = clang::Lexer::getLocForEndOfToken(_endLoc, 0, sm, lopt);

        // Use LLVM's lexer to get source text.
        return std::string(sm.getCharacterData(startLoc), sm.getCharacterData(endLoc) - sm.getCharacterData(startLoc));
    }

    /**
     * This function takes an expression holding a numberical value, and returns an APInt
     * holding that value, which can then be manipulated in the C++ code as an integral data type.
     *
     * @param const Expr* expression - Usually this is an IntegerLiteral or a
     *                    UnaryExprOrTypeTraitExpr AKA sizeof() expression.
     *
     * @return llvm::APInt - An APInt (Arbitrary integer data type) holding the numberical value of
     *         the passed in expression.
     *         If an IntegerLiteral is passed in, the APInt holds the value of that IntegerLiteral.
     *         If a sizeof() expression is passed in, the APInt holds 1U.
     *
     * @throw string if The type trait is not a sizeof() expression.
     *
     * @throw std::invalid_argument if the expr is something other than an IntegerLiteral or a
     *        sizeof() expression.
     */
    llvm::APInt getVal(const Expr *expr) const
    {
        // The expr is a sizeof() expression.
        if ( const UnaryExprOrTypeTraitExpr *ttexp = dyn_cast<UnaryExprOrTypeTraitExpr>(expr) ) {
			if (UETT_SizeOf == ttexp->getKind()) {
                // Before returning the APInt, we need to check that the sieof() type and the
                // original declaration type match.
                string this_data_type = ttexp->getTypeOfArgument().getAsString();
                // Distinguish if the type_string is empty as a separete error.
                if (type_string.empty()) {
                    throw string("ERROR: type_string is empty.");
                // If the data types don't match.
                } else if (type_string != this_data_type) {
                    throw NonMatchingTypes(type_string, this_data_type);
                }

                return llvm::APInt(32U, 1U, false);  // uint32_t, value is 1
			} else {
				throw string("ERROR: Type trait not sizeof");
			}
        // The expr is a simple integer literal.
        } else if ( const IntegerLiteral *intexp = dyn_cast<IntegerLiteral>(expr) ) {
			  return intexp->getValue();
		} else {
			throw std::invalid_argument("ERROR: Unable to determine size expression.");
		}
    }

    /**
     * @param const Expr* expr - If the passed in expr is of the form &x or x[0],
     *                    then this function peels of these layers, along with any casts and
     *                    parenthesis to yield an expression of the form x.
     *
     * @return const Expr* - The same as the input expr, just with the outer layers pulled away.
     */
    const Expr* peelAwayLayers(const Expr* expr) const
    {
        while (true) {
            if (auto unaryop = dyn_cast<UnaryOperator>(expr))
                expr = unaryop->getSubExpr()->IgnoreParenCasts();
            else if (auto asubexp = dyn_cast<ArraySubscriptExpr>(expr))
                expr = asubexp->getBase()->IgnoreParenCasts();
            else
                break;
        }

        return expr;
    }

    /**
     * This function takes an expression, which is similar to an onion in that it has multiple
     * layers of casts, implicit conversions, array subscript expressions, and etc.
     * It peels away these layers, constructs a string representing the argument, and returns it.
     *
     * @param const Expr* expr - An expression containing within itself the argument to memcpy().
     *        All top level casts and parenthesis expressions have since been peeled away.
     *        The pointer is not const but the underlying object to which it points is const.
     *         This allows us to reassign the pointer.
     *
     * @return string - A string representing the full argument to memcpy(), with added
     *         array subscript operator [var] if this argument is an array or pointer type.
     *
     * @throw std::range_error if during peeling away layers of expr, it finds an expression
     *        that it cannot parse.
     *
     * @throw std::invalid_argument if it was not able to find a value declaration.
     *
     * @throw NonMatchingTypes if the data type of this particular argument to memcpy()
     *        doesn't match the data types to other processed arguments.
     */
    string getArgString(const Expr* expr, const string& var) {
        // default constructed to empty string ""
		string arg_string;
        // This variable holds a pointer to the lvalue which is the argument of memcpy(),
        // which could be a variable, an array, or a field of an object.
		const ValueDecl *valdecl = nullptr;

		// Parse tree until entire type string is determined.
        // The loop is read as while expr is not null.
        // This loop peels away outer layers of the AST, in order to get to the DeclRefExpr.
        // It stops when it gets to a DeclRefExpr, which represents the exact argument to memcpy().
		while (expr) {
            // If the expression is the member of an object.
            // The MemberExpr is almost always the outside layer,
            // then the DeclRefExpr to the actual object is on the inside.
			if ( auto memexp = dyn_cast<MemberExpr>(expr) ) {
                // Get the member of the object.
                // This is the actual argument to memcpy().
				valdecl = dyn_cast<ValueDecl>(memexp->getMemberDecl());
                // The object will the prepended to the arg_string in the next step/iteration.
				arg_string = "." + valdecl->getNameAsString();
                // Get the object to which that member belongs, and iteratively parse that expression.
				expr = memexp->getBase();
            // If the expression is a reference to a declaration of a variable, array, or object.
			} else if ( auto varexp = dyn_cast<DeclRefExpr>(expr) ) {
                // Get the actual declaration of the variable, array, or object.
				const ValueDecl *tmpdecl = dyn_cast<ValueDecl>(varexp->getDecl());
                // If valdecl != nullptr, it means that this pointer is pointing to the actual argument
                // to memcpy(), it was found in an outer layer, so we do not overwrite the valdecl.
                // This is the case if the actual argument to memcpy() is a member of an object.
                // However if valdecl == nullptr, then it means that we have not yet found the actual
                // argument to memcpy() in some outer layer, so we just save it into the valdecl.
                // This is the case if the actual argument to memcpy() is a stand alone variable.
				if (valdecl == nullptr) {
					valdecl = tmpdecl;
				}
                // If arg_string was previously empty, then it is just set to tmpdecl->getNameAsString().
                // If arg_string previously contained the member of the object, .array then the object
                // itself gets prepended to the arg_string, so it becomes object.array
				arg_string = tmpdecl->getNameAsString() + arg_string;
                // We reached the innermost layer, which is a DeclRefExpr.
                // Break the loop.
				expr = nullptr;
            // If the expression is of the form &x.
			} else if ( auto unaryop = dyn_cast<UnaryOperator>(expr) ) {
                // expr becomes just x, peels away the &
				expr = unaryop->getSubExpr();
            // If the expression is of the form x[0].
			} else if ( auto asubexp = dyn_cast<ArraySubscriptExpr>(expr) ) {
                // getBase() returns the x, IgnoreParenCasts() is necessary to go past the ImplicitCastExpr
                // expr becomes just x, peels away the [0] and any cast and parenthesis expressions
				expr = asubexp->getBase()->IgnoreParenCasts();
            /*
            // If the expression is a binary operator for pointer arithmetic, such as array + 2.
            } else if ( auto ptropexp = dyn_cast<BinaryOperator>(expr)) {
                // The only two supported operators are + and -
                string oper_string = binop->getOpcodeStr();
                // Get the expressions to the left and right of the binary operator.
    			const Expr *lhs = binop->getLHS()->IgnoreParenCasts();
    			const Expr *rhs = binop->getRHS()->IgnoreParenCasts();
                // If these expressions have & or [0] before and after them, these laywers get
                // peeled away.
                lhs = peelAwayLayers(lhs);
                rhs = peelAwayLayers(rhs);

                bool lhs_expr = isa<MemberExp>(lhs) || isa<DeclRefExpr>(lhs);
                bool rhs_expr = isa<MemberExp>(rhs) || isa<DeclRefExpr>(rhs);

                if (oper_string == "+") {
                    // x + 2
                    if (lhs_expr && !rhs_expr) {
                        expr = lhs;
                    // 2 + x
                    } else if (!lhs_expr && rhs_expr) {
                        expr = rhs;
                    } else {
                        throw BadOperator("ERROR: Invalid pointer arithmetic expression.");
                    }
                } else if (oper_string == '-') {
                    // x - 2
                    if (lhs_expr && !rhs_expr) {
                        expr = lhs;
                    } else {
                        throw BadOperator("ERROR: Invalid pointer arithmetic expression.");
                    }
                } else {
                    throw BadOperator("ERROR: Unrecognized BinaryOperator.");
                }
            */
			} else {
				throw std::range_error("ERROR: Unable to further iteratively parse expression.");
			}
		}

        // If we failed to point valdecl to a vald ValueDecl for some reason.
		if (!valdecl) {
			throw std::invalid_argument("ERROR: Member expression not a value declaration.");
		}

        string this_data_type;

        // If the ValueDecl represents a pointer type or an array type,
        // then we add the array subscript operator to it: x[i]
		if ( auto ptrtype = dyn_cast<clang::PointerType>(valdecl->getType().getTypePtr()) ) {
			arg_string += "[" + var + "]";
            // If the data type is int*, get the pointee type which is int.
            this_data_type = ptrtype->getPointeeType().getAsString();
		} else if ( auto arraytype = dyn_cast<clang::ConstantArrayType>(valdecl->getType().getTypePtr()) ) {
			arg_string += "[" + var + "]";
            // If the data type is int [4], get the element type which is int.
            this_data_type = arraytype->getElementType().getAsString();
		} else {
            // Get the regular data type.
            this_data_type = valdecl->getType().getAsString();
        }

        // If type_string is empty, it means that we're processing the first argument to
        // memcpy(), so save the data type.
        if (type_string.empty()) {
            type_string = this_data_type;
        // If type_string is not empty, it means that we're processing the second argument to
        // memcpy(), so we need to compare the data types.
        } else {
            // If the data types don't match.
            if (type_string != this_data_type) {
                throw NonMatchingTypes(type_string, this_data_type);
            }
        }

		return arg_string;
	}

    /**
     * This function, being given "data type" as a string, returns sizeof(data type).
     *
     * @param const string& type_string - A data type encoded in a string, such as "int"
     *
     * @returns the sizeof() that data type in bytes.
     *
     * @throw std::string if type_string is empty or it holds an unrecognized data type.
     */
    unsigned int getSizeof(const string& type_string) const {
        if (type_string.empty()) {
            throw string("ERROR: type_string is empty.");
        #define X(data_type) } else if (type_string == #data_type) { \
            return sizeof(data_type);
        DATA_TYPES
        #undef X
        } else {
            throw string("ERROR: unrecognized data type (" + type_string + ").");
        }
    }

	string getSizeString(const Expr *expr) const {
        // Case 1: If the size is like something * something,
        // if there are two expressions and a binary operator combining them.
        //
        // A variable defined inside the condition of an if statement has scope only within that
        // if statement. The advantage of declaring it like this is that we can do initialization and
        // evaluation of the conditional statement practically in one step, it's an optimization.
		if (const BinaryOperator *binop = dyn_cast<BinaryOperator>(expr)) {
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
                llvm::APInt lhs_val = getVal(lhs);
                llvm::APInt rhs_val = getVal(rhs);
                if (oper_string == "*") {
                    llvm::APInt result = lhs_val * rhs_val;
                    return result.toString(10, false); // Args are base = 10, signed = false
                } else if (oper_string == "<<") {
                    llvm::APInt result = lhs_val << rhs_val;
                    return result.toString(10, false); // Args are base = 10, signed = false
                // Other BinaryOperators are not yet supported.
                } else {
                    throw BadOperator("ERROR: Unrecognized BinaryOperator.");
                }
            // literal OP variable
            } else if (lhs_literal && !rhs_literal) {
                llvm::APInt lhs_val = getVal(lhs);
                // 0 << var == 0
                // 0 *  var == 0
                if (lhs_val == 0U) {
                    return "0";
                } else if (lhs_val == 1U) {
                    // 1 * var == var
                    if (oper_string == "*") {
                        return getExprAsString(rhs);
                    // 1 << var
                    } else if (oper_string == "<<") {
                        return getExprAsString(binop);
                    // Other BinaryOperators are not yet supported.
                    } else {
                        throw BadOperator("ERROR: Unrecognized BinaryOperator.");
                    }
                // For any other literal OP variable
                } else {
                    return getExprAsString(binop);
                }
            // variable OP literal
            } else if (!lhs_literal && rhs_literal) {
                llvm::APInt rhs_val = getVal(rhs);
                if (rhs_val == 0U) {
                    // var * 0 == 0
                    if (oper_string == "*") {
                        return "0";
                    // var << 0 == var
                    } else if (oper_string == "<<") {
                        return getExprAsString(lhs);
                    // Other BinaryOperators are not yet supported.
                    } else {
                        throw BadOperator("ERROR: Unrecognized BinaryOperator.");
                    }
                } else if (rhs_val == 1U) {
                    // var * 1 == var
                    if (oper_string == "*") {
                        return getExprAsString(lhs);
                    // var << 1
                    } else if (oper_string == "<<") {
                        return getExprAsString(binop);
                    // Other BinaryOperators are not yet supported.
                    } else {
                        throw BadOperator("ERROR: Unrecognized BinaryOperator.");
                    }
                // For any other variable OP literal
                } else {
                    return getExprAsString(binop);
                }
            // variable OP variable
            } else if (!lhs_literal && !rhs_literal) {
                // The third operand to memcpy() is the number of bytes, so if the size expression
                // is a variable OP variable, then we need to divide that result by the
                // sizeof(element).
                // We didn't have this problem above because we assumed that one of the literals
                // is a sizeof() expression.
                string size_string = "(" + getExprAsString(binop) + ") / " + to_string( getSizeof(type_string) );
                return size_string;
            }

        // Case 2: If the size is single variable.
		} else if ( const DeclRefExpr *varexp = dyn_cast<DeclRefExpr>(expr) ) {
            // Get the variable itself.
			const ValueDecl *vardecl = dyn_cast<ValueDecl>(varexp->getDecl());
			if (vardecl) {
                if (type_string.empty()) {
                    throw string("ERROR: Data type of elements is not determined!");
                }
                // The third operand to memcpy() is the number of bytes, so if it's a single
                // variable, we have to divide that number of bytes by the sizeof(element).
				string size_string = vardecl->getNameAsString() + "/" + to_string( getSizeof(type_string) );
                return size_string;
			} else {
				throw std::invalid_argument("ERROR: DeclRefExpr without ValueDecl");
			}
        // Case 3: If the size is a sizeof() expression, always return "1".
		} else if ( const UnaryExprOrTypeTraitExpr *ttexp = dyn_cast<UnaryExprOrTypeTraitExpr>(expr) ) {
			if (UETT_SizeOf == ttexp->getKind()) {
                // Check that the sizeof() type and original declaration type match.
                string this_data_type = ttexp->getTypeOfArgument().getAsString();
                // Distinguish if the type_string is empty as a separete error.
                if (type_string.empty()) {
                    throw string("ERROR: type_string is empty.");
                // If the data types don't match.
                } else if (type_string != this_data_type) {
                    throw NonMatchingTypes(type_string, this_data_type);
                }

				return string("1");
			} else {
				throw string("ERROR: Type trait not sizeof");
			}
        // Case 4: The size is a simple integer literal.
		} else if ( const IntegerLiteral *intexp = dyn_cast<IntegerLiteral>(expr) ) {
            if (type_string.empty()) {
                throw string("ERROR: Data type of elements is not determined!");
            }
            // The third operand to memcpy() is the number of bytes, so if it's an IntegerLiteral,
            // it should be divided by sizeof(element).
            // -> and . operators have left to right associativity.
            // getValue() returns APInt, then on that APInt we call the function
            // APInt APInt::udiv( uint64_t RHS ) const
            // which returns a new APInt that we assign to result.
            llvm::APInt result = intexp->getValue().udiv( getSizeof(type_string) );
            // If result < getSizeof(type_string), then it will become 0.
            // If the number of bytes to copy is < the sizeof(element), then don't do a memcpy().
            return result.toString(10, false); // Args are base = 10, signed = false
        // Default: Something else which is an error.
		} else {
			throw std::invalid_argument("ERROR: Unable to determine size expression.");
		}

        // The llvm_unreachable function can be used to document areas of control flow that
        // should never be entered if the program invariants hold:
        // In this case expr has to go into one of the above if () {} statements or it will
        // go into the else {}.
        // Marks that the current location is not supposed to be reachable.
        // Use this instead of assert(0). It conveys intent more clearly and allows compilers
        // to omit some unnecessary code.
        // This gets rid of the warning.
        // warning: control may reach end of non-void function [-Wreturn-type]
        llvm_unreachable("expr should be one of the above expressions.");
	}

  public:
    // TODO: Maybe std::map should be replaced by the LLVM map data structure?
    MemcpyMatchCallback(map<string, Replacements> * replacements)
		: replacements(replacements), SM(nullptr), type_string() {}

    /**
     * The destructor gets called when the Call Back object gets destroyed,
     * when all the replacements have either been applied successfully or failed.
     * The number of memcpy() replacements.
     */
    ~MemcpyMatchCallback()
    {
        outs() << num_matches_found << " matches found\n";
        outs() << "Number of memcpy() replacements: " << num_replacements << "\n";
    }

    /* Callback method for the MatchFinder.
	 * @param result - Found matching results.
	 */
	virtual void run(const MatchFinder::MatchResult& result)
	{
        ++num_matches_found;
        // The value of the pointer itself can be modified,
        // but the underlying object which it points to is const.
		const CallExpr* call_expr = nullptr;
        // Since this SourceLocation is used multiple times in below code, bring it up.
		SourceLocation loc_start;

        SM = result.SourceManager;

		// Remove the C-style cast operator before some memcpy calls.
		// (void) memcpy(dst, src, size) a common pattern.
        // First check that the result is a CStyleCastExpr, if so, then get the CallExpr out of it.
        // Else, then the result is CallExpr.
		const CStyleCastExpr *cast_expr = result.Nodes.getNodeAs<CStyleCastExpr>("cast_memcpy_call");
		if (cast_expr) {
            // clang::CastExpr::getSubExpr() returns an Expr*
            // dynamic_cast it into a const CallExpr*
            // The sub expression of a cast expression is the expression that you're trying to cast.
			call_expr = dyn_cast<const CallExpr>(cast_expr->getSubExpr());
			loc_start = cast_expr->getLocStart();
		} else {
			call_expr = result.Nodes.getNodeAs<CallExpr>("memcpy_call");
			loc_start = call_expr->getLocStart();
		}

        // if we succeeded getting a CallExpr out of the result.
		if (call_expr) {
            outs() << getExprAsString(call_expr) << '\n';
            outs() << "in "<< SM->getFilename(loc_start) << ':';
            outs() << SM->getPresumedLineNumber(loc_start) << ':';
            outs() << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';

            string dst, src, size;  // strings are default constructed to ""

            // Never assume that your functions will return successfully.
            try {
			    dst = getArgString(call_expr->getArg(0)->IgnoreParenCasts(), "i");
            } catch (const std::exception& exp) {
                errs() << exp.what() << '\n';
                outs() << "\n\n";
                return;  // Don't do the replacement upon failure to retrieve an argument.
            } catch(const string& exp) {
                errs() << exp << '\n';
                outs() << "\n\n";
                return;
            } catch (...) {
                errs() << "An unexpected exception was raised.\n";
                outs() << "\n\n";
                return;
            }

            try {
			    src = getArgString(call_expr->getArg(1)->IgnoreParenCasts(), "i");
            } catch (const std::exception& exp) {
                errs() << exp.what() << '\n';
                outs() << "\n\n";
                return;  // Don't do the replacement upon failure to retrieve an argument.
            } catch(const string& exp) {
                errs() << exp << '\n';
                outs() << "\n\n";
                return;
            } catch (...) {
                errs() << "An unexpected exception was raised.\n";
                outs() << "\n\n";
                return;
            }

            try {
			    size = getSizeString(call_expr->getArg(2)->IgnoreParenCasts());
            } catch (const std::exception& exp) {
                errs() << exp.what() << '\n';
                outs() << "\n\n";
                return;  // Don't do the replacement upon failure to retrieve an argument.
            } catch(const string& exp) {
                errs() << exp << '\n';
                outs() << "\n\n";
                return;
            } catch (...) {
                errs() << "An unexpected exception was raised.\n";
                outs() << "\n\n";
                return;
            }

			unsigned indent = SM->getPresumedLoc(loc_start).getColumn();
			// Decrement, but don't let it go negative.
            // Conditional operator is more efficient in that there is no branch instruction.
            // NOTE: Why do we need this anyway?
            indent = (indent > 0) ? (indent - 1) : indent;

            // This is a particular replacement, whereas replacements is a map of all of them.
            string replacement;
            bool size_is_zero = size == "0"   || size == "0U"  || size == "0L" ||
                                size == "0UL" || size == "0LL" || size == "0ULL";
            // If the size argument == 0, then don't do a memcpy(), just get rid of the
            // function call.
            if (size_is_zero) {
                replacement = "";
            } else {
                replacement.append(indent, ' ');
			    replacement.append("{\r\n");
			    replacement.append(indent+2, ' ');
			    replacement.append("for (int i = 0; i < " + size + "; ++i) {\r\n");
			    replacement.append(indent+4, ' ');
			    replacement.append(dst + " = " + src + ";\r\n");
			    replacement.append(indent+2, ' ');
			    replacement.append("}\r\n");
			    replacement.append(indent, ' ');
			    replacement.append("}");
            }

			// Get the location after the semicolon following the memcpy() call
            SourceLocation after_semi_loc = Lexer::findLocationAfterToken(call_expr->getLocEnd(), tok::semi, *SM, LangOptions(), false);
            if (!after_semi_loc.isValid()) {
                errs() << "ERROR: Unable to find semicolon location after memcpy() call.\n";
                return;
            }
	        CharSourceRange range = CharSourceRange::getTokenRange(loc_start, after_semi_loc);
            Replacement memcpy_rep(*SM, range, replacement);

		    if (Error err = (*replacements)[memcpy_rep.getFilePath()].add(memcpy_rep)) {
                errs() << "ERROR: Error adding replacement that removes memcpy() call.\n";
                return;
            } else {
                outs() << "replaced with:\n" << replacement << '\n';
                outs() << "\n\n";
                // No error, increment the number of memcpy() replacements to print to the user.
                ++num_replacements;
            }
	    }
	}

  private:
    map<string, Replacements>* replacements;
    SourceManager* SM;
    // This is a string representation of the elements we're copying.
    // Used for checking if the data types of the arguments match.
    string type_string;
    // The number of successful memcpy() replacements.
    static unsigned int num_replacements;
    // The number of matches found, the number of times run() function got called.
    static unsigned int num_matches_found;
	// Add other variables here as needed.
};

unsigned int MemcpyMatchCallback::num_replacements  = 0;
unsigned int MemcpyMatchCallback::num_matches_found = 0;


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
