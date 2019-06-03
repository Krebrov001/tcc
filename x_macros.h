#ifndef X_MACROS_H
#define X_MACROS_H

// Source: What's a Creel? - C++ Tutorial 25: Mysterious X Macros
// https://www.youtube.com/watch?v=0haKL2eR41A&list=PL0C5825724605DB2A&index=24&t=0s

#define DATA_TYPES              \
    X(char, %c)                 \
    X(signed char, %hhi)        \
    X(unsigned char, %hhu)      \
    X(short, %hi)               \
    X(unsigned short, %hu)      \
    X(int, %i)                  \
    X(unsigned int, %u)         \
    X(long, %li)                \
    X(unsigned long, %lu)       \
    X(long long, %lli)          \
    X(unsigned long long, %llu)
    /*
    X(float, %f)                \
    X(double, %lf)              \
    X(long double, %llf)
    */

#define OPERATION_DETERMINANTS  \
    X(unsigned, unsigned, *)    \
    X(unsigned, signed, *)      \
    X(signed, unsigned, *)      \
    X(signed, signed, *)        \
    X(unsigned, unsigned, /)    \
    X(unsigned, signed, /)      \
    X(signed, unsigned, /)      \
    X(signed, signed, /)        \
    X(unsigned, unsigned, %)    \
    X(unsigned, signed, %)      \
    X(signed, unsigned, %)      \
    X(signed, signed, %)        \
    X(unsigned, unsigned, +)    \
    X(unsigned, signed, +)      \
    X(signed, unsigned, +)      \
    X(signed, signed, +)        \
    X(unsigned, unsigned, -)    \
    X(unsigned, signed, -)      \
    X(signed, unsigned, -)      \
    X(signed, signed, -)        \
    X(unsigned, unsigned, <<)   \
    X(unsigned, signed, <<)     \
    X(signed, unsigned, <<)     \
    X(signed, signed, <<)       \
    X(unsigned, unsigned, >>)   \
    X(unsigned, signed, >>)     \
    X(signed, unsigned, >>)     \
    X(signed, signed, >>)       \
    X(unsigned, unsigned, <)    \
    X(unsigned, signed, <)      \
    X(signed, unsigned, <)      \
    X(signed, signed, <)        \
    X(unsigned, unsigned, >)    \
    X(unsigned, signed, >)      \
    X(signed, unsigned, >)      \
    X(signed, signed, >)        \
    X(unsigned, unsigned, <=)   \
    X(unsigned, signed, <=)     \
    X(signed, unsigned, <=)     \
    X(signed, signed, <=)       \
    X(unsigned, unsigned, >=)   \
    X(unsigned, signed, >=)     \
    X(signed, unsigned, >=)     \
    X(signed, signed, >=)       \
    X(unsigned, unsigned, ==)   \
    X(unsigned, signed, ==)     \
    X(signed, unsigned, ==)     \
    X(signed, signed, ==)       \
    X(unsigned, unsigned, !=)   \
    X(unsigned, signed, !=)     \
    X(signed, unsigned, !=)     \
    X(signed, signed, !=)       \
    X(unsigned, unsigned, &)    \
    X(unsigned, signed, &)      \
    X(signed, unsigned, &)      \
    X(signed, signed, &)        \
    X(unsigned, unsigned, ^)    \
    X(unsigned, signed, ^)      \
    X(signed, unsigned, ^)      \
    X(signed, signed, ^)        \
    X(unsigned, unsigned, |)    \
    X(unsigned, signed, |)      \
    X(signed, unsigned, |)      \
    X(signed, signed, |)        \
    X(unsigned, unsigned, &&)   \
    X(unsigned, signed, &&)     \
    X(signed, unsigned, &&)     \
    X(signed, signed, &&)       \
    X(unsigned, unsigned, ||)   \
    X(unsigned, signed, ||)     \
    X(signed, unsigned, ||)     \
    X(signed, signed, ||)


#endif /* X_MACROS_H */
