/*
 * As part of LLVM coding standards, you should organize your include statements by putting local headers
 * first, followed by Clang and LLVM API headers. When ytwo headers pertain to the same category,
 * order them alphabetically.
 */
#include "custom_exceptions.h"

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"
#include "llvm/ADT/APInt.h"

#include <cstring>
#include <cstdint>
#include <exception>
#include <stdexcept>
#include <string>

using std::exception;
using std::range_error;
using std::invalid_argument;
using std::string;
using std::to_string;
using std::map;

/*
using namespace std;
using namespace llvm::cl;
using namespace clang;
using namespace clang::tooling;
using namespace clang::ast_matchers;
*/

using llvm::outs;
using llvm::errs;
using llvm::nulls;
using llvm::raw_ostream;
using llvm::APInt;
using llvm::Error;
using llvm::cl::opt;
using llvm::cl::desc;
using llvm::cl::OptionCategory;

using clang::dyn_cast;
using clang::isa;
using clang::Expr;
using clang::PointerType;
using clang::ConstantArrayType;
using clang::CastExpr;
using clang::CStyleCastExpr;
using clang::CallExpr;
using clang::UnaryExprOrTypeTraitExpr;
using clang::UETT_SizeOf;
using clang::IntegerLiteral;
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

// namespace clang::tok is small enough, and the names defined in it are relatively specific.
// Needed for tok::semi
using namespace clang::tok;

using clang::tooling::CommonOptionsParser;
using clang::tooling::RefactoringTool;
using clang::tooling::Replacement;
using clang::tooling::Replacements;
using clang::tooling::newFrontendActionFactory;
using clang::ast_matchers::MatchFinder;
using clang::ast_matchers::StatementMatcher;
using clang::ast_matchers::hasName;
using clang::ast_matchers::functionDecl;
using clang::ast_matchers::cStyleCastExpr;
using clang::ast_matchers::callee;
using clang::ast_matchers::callExpr;
using clang::ast_matchers::hasAncestor;
using clang::ast_matchers::unless;
using clang::ast_matchers::hasSourceExpression;

// Global variable is non static so that it can be externed into other translation units.
bool print_debug_output = false;


/**
 * This class is the CallBack class for removing memcpy.
 * Whenever a memcpy() function call instance is detected in the main() function, it uses
 * this class as a callback and it calls the run() method, which then replaces that memcpy()
 * function call with a functionally equivelent block of code.
 */
class RemoveMemcpyMatchCallback : public MatchFinder::MatchCallback
{
  private:
    /**
     * This function prints the full expression, the filename where this expression originated,
     * the row number (line number), and the column number. It is used for diagnostic purposes.
     *
     * @param const Expr* expr - An expression. This pointer can point to an Expr object or an
     *                    object of any data type derived from that class.
     *
     * @param raw_ostream& output - A reference to an LLVM raw output stream, which is
     *                     an extremely fast bulk output stream that can only output to a stream.
     *                     Data can be written to a different destination depending on the value of
     *                     this parameter. It can be llvm::outs(), llvm::errs(), or llvm::nulls().
     *                     The reference is non-const because writing output to an instance of a
     *                     stream class causes that object to be modified.
     *
     * @param const SourceLocation& loc_start - The starting location of the passed in expression.
     *              Passing it in as a parameter means that we don't have to know precisely what
     *              type the expression is, which we must know in order to determine the
     *              SourceLocation manually.
     */
    void outputExpression(const Expr* expr, raw_ostream& output, const SourceLocation& loc_start)
    {
        output << getExprAsString(expr) << '\n';
        output << "in "<< SM->getFilename(loc_start) << ':';
        output << SM->getPresumedLineNumber(loc_start) << ':';
        output << SM->getPresumedColumnNumber(loc_start) << ':' << '\n';
    }

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
        LangOptions lopt;
        // Get the source range and manager.
        SourceLocation startLoc = expression->getLocStart();
        SourceLocation _endLoc = expression->getLocEnd();
        SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, sm, lopt);

        // Use LLVM's lexer to get source text.
        return string(sm.getCharacterData(startLoc), sm.getCharacterData(endLoc) - sm.getCharacterData(startLoc));
    }

    /**
     * This function takes an expression holding a numberical value, and returns an APInt
     * holding that value, which can then be manipulated in the C++ code as an integral data type.
     * This helper function is called by RemoveMemcpyMatchCallback::getSizeString().
     *
     * @param const Expr* expression - Usually this is an IntegerLiteral or a
     *                    UnaryExprOrTypeTraitExpr AKA sizeof() expression.
     *
     * @return llvm::APInt - An APInt (Arbitrary integer data type) holding the numberical value of
     *         the passed in expression.
     *         If an IntegerLiteral is passed in, the APInt holds the value of that IntegerLiteral.
     *         If a sizeof() expression is passed in, the APInt holds 1U.
     *
     * @throw std::string if The type trait is not a sizeof() expression.
     *
     * @throw std::invalid_argument if the expr is something other than an IntegerLiteral or a
     *        sizeof() expression.
     *
     * @throw NonMatchingTypes if the data type of this particular argument to memcpy()
     *        doesn't match the data types to other processed arguments to memcpy().
     */
    APInt getVal(const Expr *expr) const
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

                return APInt(32U, 1U, false);  // uint32_t, value is 1
			} else {
				throw string("ERROR: Type trait not sizeof");
			}
        // The expr is a simple integer literal.
        } else if ( const IntegerLiteral *intexp = dyn_cast<IntegerLiteral>(expr) ) {
			  return intexp->getValue();
		} else {
			throw invalid_argument("ERROR: Unable to determine size expression.");
		}
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
			} else {
				throw range_error("ERROR: Unable to further iteratively parse expression.");
			}
		}

        // If we failed to point valdecl to a vald ValueDecl for some reason.
		if (!valdecl) {
			throw invalid_argument("ERROR: Member expression not a value declaration.");
		}

        string this_data_type;

        // If the ValueDecl represents a pointer type or an array type,
        // then we add the array subscript operator to it: x[i]
		if ( auto ptrtype = dyn_cast<PointerType>(valdecl->getType().getTypePtr()) ) {
			arg_string += "[" + var + "]";
            // If the data type is int*, get the pointee type which is int.
            this_data_type = ptrtype->getPointeeType().getAsString();
		} else if ( auto arraytype = dyn_cast<ConstantArrayType>(valdecl->getType().getTypePtr()) ) {
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
     * Being given an expression which is the third argumetn to memcpy() (size_T n),
     * which is the number of bytes to copy, this function returns a string which is the number
     * of elements to copy, since my current algorithm copies elements element by element
     * instead of byte by byte as memcpy() does.
     * NOTE: This function is not recursive.
     *
     * This algorithm recognizes the following types of expressions:
     * an integer literal, a sizeof() expression, a variable, and a binary operator.
     * sizeof() expressions always return 1 by convention. Integer literals and variables
     * return a string representation of themselves divided by the sizeof() the element.
     *
     * For binary operators, a variable OP variable expression is also divided by the sizeof() the
     * element. However if one or both sides of the binary operator are a literal, then the whole
     * expression is not divided by the sizeof() the element, because it is assumed that one of the
     * operands is a sizeof() expression.
     *
     * If an optimization can be achieved which is conformant to the C standards, it is done.
     * An example of such optimization would be evaluating the binary operator expression
     * and returning the result when both operands are literals.
     *
     * @param const Expr* expr - The size expression which is the third argumetn to memcpy().
     *                    Valid types are BinaryOperator, DeclRefExpr, UnaryExprOrTypeTraitExpr,
     *                    and IntegerLiteral.
     *
     * @return string - A string representing the number of elements to copy, necessary for
     *                  producing the same effect as memcpy().
     *
     * @throw BadOperator if the BinaryOperator is not recognized/supported by the function yet.
     *
     * @throw std::string if the type_string is empty or if the type trait associated with the
     *        UnaryExprOrTypeTraitExpr is not sizeof().
     *
     * @throw std::invalid_argument - This is due to an invalid const Expr *expr being passed in.
     *                                If the DeclRefExpr does not have an associated ValueDecl, or
     *                                if the Expr is not one of the recognized types
     *                                mentioned above.
     *
     * @throw NonMatchingTypes if the data type of this particular argument to memcpy()
     *        doesn't match the data types to other processed arguments.
     */
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
                APInt lhs_val = getVal(lhs);
                APInt rhs_val = getVal(rhs);
                if (oper_string == "*") {
                    APInt result = lhs_val * rhs_val;
                    return result.toString(10, false); // Args are base = 10, signed = false
                } else if (oper_string == "<<") {
                    APInt result = lhs_val << rhs_val;
                    return result.toString(10, false); // Args are base = 10, signed = false
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
                APInt rhs_val = getVal(rhs);
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
                string size_string = "(" + getExprAsString(binop) + ")";
                size_string.append(" / sizeof(" + type_string + ")");
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
				string size_string = vardecl->getNameAsString() + " / sizeof(" + type_string + ")";
                return size_string;
			} else {
				throw invalid_argument("ERROR: DeclRefExpr without ValueDecl");
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
            // getValue() returns APInt, then on that APInt we call the function toString().
            APInt result = intexp->getValue();
            string result_string = result.toString(10, false); // Args are base = 10, signed = false
            // operator +=() is an inline function, which internally calls append().
            result_string.append(" / sizeof(" + type_string + ")");
            return result_string;
        // Default: Something else which is an error.
		} else {
			throw invalid_argument("ERROR: Unable to determine size expression.");
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
    RemoveMemcpyMatchCallback(map<string, Replacements> * replacements)
		: replacements(replacements), SM(nullptr), type_string() {}

    /**
     * The destructor gets called when the Call Back object gets destroyed,
     * when all the replacements have either been applied successfully or failed.
     * If print_debug_output is set to true, it prints the number of matches found and the number
     * of successful memcpy() replacements. If the program successfully replaced all occurances
     * of memcpy(), then these two printed numbers will be equal.
     */
    ~RemoveMemcpyMatchCallback()
    {
        if (print_debug_output) {
            outs() << num_matches_found << " matches found\n";
            outs() << "Number of memcpy() replacements: " << num_replacements << "\n";
        }
    }

    /**
     * Callback method for the MatchFinder, this function gets called whenever a matching
     * expression is found. This is either a CallExpr or a CStyleCastExpr.
     * Either way, the call to memcpy() is extracted from this expression, it is analyzed,
     * and the program tries to evaluate the arguments to the memcpy() function call.
     *
     * If successful, then a functionally equivalent block of code as a replacement is
     * constructed, and the replacement is applied, and if print_debug_output is set to true,
     * then a diagnostic message is printed. You set it to true by specifying -debug on the
     * command line.
     * If unsuccessful, an error is raised, and that error always gets printed to the stderr
     * together with the expression which caused the error, regardless of whether the debug flag
     * is set or not.
     * This function catches all exceptions that the functions that it calls throw.
     *
	 * @param const MatchFinder::MatchResult result - Found matching results.
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
            string dst, src, size;  // strings are default constructed to ""

            // NOTE: Do not rearrange the order of these three chunks of code!
            // This is important, the arguments of memcpy() are processed from left to right.
            // First,  argument 0 (void *dest) is processed by getArgString().
            // Second, argument 1 (const void *src) is processed by getArgString().
            // Third,  argument 2 (size_t n) is processed by getSizeString().
            // This is necessary in order to properly determine the element type.
            // The class data member string type_string is set to the type of the element, and is
            // subsequently used for error checking.
            // Initiallly it gets constructed to the empty string.
            // Then when getArgString() is called for the first time and argument 0 is processed,
            // the type_string is set to the type of the element.
            // The next time getArgString() is called, and argument 1 is processed, the type of the
            // argument is verified to match the type string.
            // Then getSizeString() is called, and argument 2 is processed, and the type within the
            // sizeof() expression is once again verified to match the type string.
            // The functions should be called in this specific order.

            // Never assume that your functions will return successfully,
            // always catch any possible exceptions.

            // First,  argument 0 (void *dest) is processed by getArgString().
            try {
			    dst = getArgString(call_expr->getArg(0)->IgnoreParenCasts(), "i");
            } catch (const exception& exp) {
                outputExpression(call_expr, errs(), loc_start);
                errs() << exp.what() << '\n';
                errs() << "\n\n";
                return;  // Don't do the replacement upon failure to retrieve an argument.
            } catch(const string& exp) {
                outputExpression(call_expr, errs(), loc_start);
                errs() << exp << '\n';
                errs() << "\n\n";
                return;
            } catch (...) {
                outputExpression(call_expr, errs(), loc_start);
                errs() << "An unexpected exception was raised.\n";
                errs() << "\n\n";
                return;
            }

            // Second, argument 1 (const void *src) is processed by getArgString().
            try {
			    src = getArgString(call_expr->getArg(1)->IgnoreParenCasts(), "i");
            } catch (const exception& exp) {
                outputExpression(call_expr, errs(), loc_start);
                errs() << exp.what() << '\n';
                errs() << "\n\n";
                return;  // Don't do the replacement upon failure to retrieve an argument.
            } catch(const string& exp) {
                outputExpression(call_expr, errs(), loc_start);
                errs() << exp << '\n';
                errs() << "\n\n";
                return;
            } catch (...) {
                outputExpression(call_expr, errs(), loc_start);
                errs() << "An unexpected exception was raised.\n";
                errs() << "\n\n";
                return;
            }

            // Third, argument 2 (size_t n) is processed by getSizeString().
            try {
			    size = getSizeString(call_expr->getArg(2)->IgnoreParenCasts());
            } catch (const exception& exp) {
                outputExpression(call_expr, errs(), loc_start);
                errs() << exp.what() << '\n';
                errs() << "\n\n";
                return;  // Don't do the replacement upon failure to retrieve an argument.
            } catch(const string& exp) {
                outputExpression(call_expr, errs(), loc_start);
                errs() << exp << '\n';
                errs() << "\n\n";
                return;
            } catch (...) {
                outputExpression(call_expr, errs(), loc_start);
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
            SourceLocation after_semi_loc = findLocationAfterToken(call_expr->getLocEnd(), semi, *SM, LangOptions(), false);
            if (!after_semi_loc.isValid()) {
                outputExpression(call_expr, errs(), loc_start);
                errs() << "ERROR: Unable to find semicolon location after memcpy() call.\n";
                errs() << "\n\n";
                return;
            }
	        CharSourceRange range = CharSourceRange::getTokenRange(loc_start, after_semi_loc);
            Replacement memcpy_rep(*SM, range, replacement);

		    if (Error err = (*replacements)[memcpy_rep.getFilePath()].add(memcpy_rep)) {
                outputExpression(call_expr, errs(), loc_start);
                errs() << "ERROR: Error adding replacement that removes memcpy() call.\n";
                errs() << "\n\n";
                return;
            } else {
                if (print_debug_output) {
                    outputExpression(call_expr, outs(), loc_start);
                    outs() << "replaced with:\n" << replacement << '\n';
                    outs() << "\n\n";
                }
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

unsigned int RemoveMemcpyMatchCallback::num_replacements  = 0;
unsigned int RemoveMemcpyMatchCallback::num_matches_found = 0;

// <bool> Says that this option takes no argument, and is to be treated as a bool value only.
// If this option is set, then the variable becomes true, otherwise it becomes false.
opt<bool> DebugOutput("debug", desc("This option enables diagnostic output."));

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

    // CommonOptionsParser optionsParser has to be constructed before DebugOutput can be used.
    // Internally, it calls cl::ParseCommandLineOptions, which sets the value of the DebugOutput
    // depending on the presence or absence of the -debug flag in the command line arguments.
    // cl::opt<T> is a class which has an operator T() method, in this case it is used to convert
    // to bool. It's easier to work with build in data types than classes.
    print_debug_output = DebugOutput;

	/* Run the Clang compiler for the each input file separately
     * (one input file - one output file).
     *	This is default ClangTool behaviour.
	 */
	// The first argument is a list of compilations.
	// The second argument is a list of source files to parse.
	RefactoringTool remove_memcpy_tool(optionsParser.getCompilations(), optionsParser.getSourcePathList());

//	outs() << "Starting match finder\n";

	// Make the RemoveMemcpyMatchCallback class be able to recieve the match results.
	RemoveMemcpyMatchCallback matcher(&remove_memcpy_tool.getReplacements());

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
