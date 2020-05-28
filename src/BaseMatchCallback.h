#ifndef BASE_MATCH_CALLBACK_H
#define BASE_MATCH_CALLBACK_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Lex/Lexer.h"

#include <string>

using std::string;
using std::size_t;

using llvm::raw_ostream;

using clang::Expr;
using clang::Decl;
using clang::Lexer;
using clang::LangOptions;
using clang::SourceManager;
using clang::SourceLocation;
using clang::ast_matchers::MatchFinder;

/**
 * @brief Base CallBack class of the inheritance hierarchy.
 *
 * @details This base class provides a certain set of standard facilities and methods for derived
 * CallBack classes, making development easier. This is a generic CallBack class containing some
 * common behaviors that all CallBack classes should have. It doesn't do anything by itself.
 * You have to inherit from this class instead of MatchFinder::MatchCallback for creating specific
 * CallBack classes.
 */
class BaseMatchCallback : public MatchFinder::MatchCallback
{
  public:
    /**
     * The explicit default constructor just initializes the SM data member.
     */
    explicit BaseMatchCallback() : SM(nullptr) {}

    /**
     * This method is called every time the AST matcher matches a corresponding expression
     * in the AST. This method overrides MatchFinder::MatchCallback::run() and itself should
     * be overridden by inherited classes.
     *
     * This method just assigns the SourceManager SM protected data member.
     *
     * @param result The matched result returned from the AST matcher.
     */
    void run(const MatchFinder::MatchResult& result) override;

  protected:
    /**
     * This method prints the full astElement, the filename where this astElement originated,
     * the row number (line number), and the column number. It is used for diagnostic purposes.
     *
     * The implementation of template methods must be inside the definition of a class.
     *
     * @param element  This is a template method, meaning that it can be called
     *              with an object of any type which implements the getBeginLoc() and getEndLoc()
     *              member methods inside itself, or with an object of a derived type.
     *              This is a template parameter simply because clang::Expr and clang::Decl have
     *              the same described above interface, however they are not inherited from each
     *              other. So this method can also accept as a parameter an object of any type that
     *              is inherited from either clang::Expr or clang::Decl. Hence it is an element in
     *              the Clang AST (an astElement).
     *
     * @param output  A reference to an LLVM raw output stream, which is
     *                     an extremely fast bulk output stream that can only output to a stream.
     *                     Data can be written to a different destination depending on the value of
     *                     this parameter. It can be llvm::outs(), llvm::errs(), or llvm::nulls().
     *                     The reference is non-const because writing output to an instance of a
     *                     stream class causes that object to be modified.
     *
     * @param extraString  An optional string that may be specified to be printed
     *               directly after the source code of the astElement. If this parameter would not
     *               be provided, it would by default evaluate to the empty string and just the
     *               astElement would be printed, without any extra text at the end.
     */
    template <typename astElement>
    void outputSource(const astElement* element, raw_ostream& output, string extraString = "") const
    {
        // Source:
        // https://stackoverflow.com/a/11154162/5500589
        // https://stackoverflow.com/a/32118182/5500589
        LangOptions lopt;

        SourceLocation startLoc = SM->getFileLoc(element->getBeginLoc());
        SourceLocation _endLoc = SM->getFileLoc(element->getEndLoc());
        SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, *SM, lopt);
        outputSource(startLoc, endLoc, output, extraString);
    }

    /**
     * Given two SourceLocations delimiting a source code text, This method prints that text,
     * the filename where this code text originated, the row number (line number), and the column
     * number. It is used for diagnostic purposes.
     *
     * This method is marked as virtual because it may be overridden by a derived class.
     * The derived class can change the behavior of this method.
     *
     * @param loc_start  The starting location of the code text.
     *
     * @param loc_end  The end location of the code text.
     *
     * @param output  A reference to an LLVM raw output stream, which is
     *                     an extremely fast bulk output stream that can only output to a stream.
     *                     Data can be written to a different destination depending on the value of
     *                     this parameter. It can be llvm::outs(), llvm::errs(), or llvm::nulls().
     *                     The reference is non-const because writing output to an instance of a
     *                     stream class causes that object to be modified.
     *
     * @param extraString  An optional string that may be specified to be printed
     *               directly after the source code of delimited by these two SourceLocations.
     *               If this parameter would not be provided, it would by default evaluate to the
     *               empty string and just the source code would be printed, without any extra text at the end.
     */
    virtual void outputSource(const SourceLocation& loc_start, const SourceLocation& loc_end, raw_ostream& output, string extraString = "") const;

    /**
     * Given a pointer to some element in the Clang's AST, this method returns a string
     * representation of that astElement as it appears in the source code file.
     *
     * The implementation of template methods must be inside the definition of a class.
     *
     * @param element  This is a template method, meaning that it can be called
     *              with an object of any type which implements the getBeginLoc() and getEndLoc()
     *              member methods inside itself, or with an object of a derived type.
     *              This is a template parameter simply because clang::Expr and clang::Decl have
     *              the same described above interface, however they are not inherited from each
     *              other. So this method can also accept as a parameter an object of any type that
     *              is inherited from either clang::Expr or clang::Decl. Hence it is an element in
     *              the Clang AST (an astElement).
     *
     * @return string  A string representation of the passed in astElement,
     *         the exact string text of that astElement.
     */
    template <typename astElement>
    string getAsString(const astElement* element) const
    {
        // Sources:
        // https://stackoverflow.com/a/11154162/5500589
        // https://stackoverflow.com/a/32118182/5500589

        LangOptions lopt;

        SourceLocation startLoc = SM->getFileLoc(element->getBeginLoc());
        SourceLocation _endLoc = SM->getFileLoc(element->getEndLoc());
        SourceLocation endLoc = Lexer::getLocForEndOfToken(_endLoc, 0, *SM, lopt);

        return getAsString(startLoc, endLoc);
    }

    /**
     * Given two SourceLocations delimiting a source code text, This method prints that text exactly
     * as it appears in the source code file.
     *
     * This method is marked as virtual because it may be overridden by a derived class.
     * The derived class can change the behavior of this method.
     *
     * @param loc_start  The starting location of the code text.
     *
     * @param loc_end  The end location of the code text.
     *
     * @return string  A string representation of the code text between these two SourceLocations.
     */
    virtual string getAsString(const SourceLocation& loc_start, const SourceLocation& loc_end) const;

    /**
     * This method, being given a starting SourceLocation and a char, searches either forwards or
     * backwards from the starting SourceLocation for that char, and returns the SourceLocation of
     * the first occurence, as an offset from the starting SourceLocation.
     *
     * @param loc_start  The starting location from which to start searching.
     *
     * @param character  The first occurence of this character is searched for.
     *
     * @param forwards  If true, the method searches for the char forwards from the loc_start.
     *                  If false, the method searches for the char backwards from the loc_start.
     *
     * @return SourceLocation  For the input SourceLocation, this function returns a SourceLocation
     *         that "points to" the first location of the found character.
     */
    SourceLocation getCharOffsetLoc(const SourceLocation& loc_start, char character, bool forwards) const;

    /* Protected member variables. */

    /// The SourceManager is protected because I want other classes that inherit from this one
    /// to be able to access this variable.
    /// This class handles loading and caching of source files into memory.
    /// It is the middleman between the refactoring tool and the actual C source code which is
    /// being analyzed. This enables us to do source code replacements.
    SourceManager* SM;
};

#endif /* BASE_MATCH_CALLBACK_H */
