#ifndef CUSTOM_EXCEPTIONS_H
#define CUSTOM_EXCEPTIONS_H

/**
 * @file     custom_exceptions.h
 * @author   Konstantin Rebrov <krebrov@mail.csuchico.edu>
 * @created  06/12/2019
 * @modified 06/12/2019
 * @version  2.0
 *
 * @section DESCRIPTION
 *
 * In this file are contained custom exception classes. They are inherited from std::excpetion.
 * We need to have custom exception classes as a kind of self-documenting code.
 * Having distinctive names of the classes, it's easy to distinguish under what conditions the
 * exception arose and what it's true nature is.
 * We can also do different things inside the catch () {} blocks for instances of custom
 * exception classes vs other kinds of exceptions.
 * On the other hand, we can catch instances of all types derived from std::exception and treat
 * them the same as std::exception. For all intents and purposes, instances of the
 * custom exception types are treated just like standard C++ exceptions. See also:
 * https://stackoverflow.com/questions/53037273/how-to-catch-any-c-standard-exception
 */
#include <exception>
#include <string>

using std::exception;
using std::string;

// If classes defnintions are relatively small, then it's OK to put them in the header file.

/**
 * @brief Throwable class for exception handling.
 *
 * @details Thrown by RemoveMemcpyMatchCallback::getSizeString() upon unsupported operator.
 */
class BadOperator : public exception {
  public:
    explicit BadOperator(const char* reason) : reason(reason) {}

    const char* what() const noexcept override
    {
        return reason;
    }
  private:
    const char* reason;
};


/**
 * @brief Throwable class for exception handling.
 *
 * @details Thrown by various methods in RemoveMemcpyMatchCallback if the data type of the argument and the sizeof() data type don't match.
 */
class NonMatchingTypes : public exception {
  public:
    NonMatchingTypes(const string& data_type1, const string& data_type2) {
        reason = "ERROR: Data types don't match: " + data_type1 + " and " + data_type2;
    }

    const char* what() const noexcept override
    {
        return reason.c_str();
    }
  private:
    string reason;
};

#endif /* CUSTOM_EXCEPTIONS_H */
