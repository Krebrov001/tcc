#ifndef DATA_TYPES_H
#define DATA_TYPES_H

#include "navsses_model/tmwtypes.h"
#include "navsses_model/rtwtypes.h"

#include <cstdint>

// Source: What's a Creel? - C++ Tutorial 25: Mysterious X Macros
// https://www.youtube.com/watch?v=0haKL2eR41A&list=PL0C5825724605DB2A&index=24&t=0s

// The DATA_TYPES are divided into four categories.
// The first category:  Regular C/C++ data types.
// The second category: C standard integer data types from <cstdint>
// The third category:  Simulink coder data types from "tmwtypes.h"
// The fourth category: Simulink coder data types from "rtwtypes.h" that are not already in "tmwtypes.h"
#define DATA_TYPES          \
    X(char)                 \
    X(signed char)          \
    X(unsigned char)        \
    X(short)                \
    X(unsigned short)       \
    X(int)                  \
    X(unsigned int)         \
    X(long)                 \
    X(unsigned long)        \
    X(long long)            \
    X(unsigned long long)   \
    X(float)                \
    X(double)               \
    X(long double)          \
    X(bool)                 \
    X(char16_t)             \
    X(char32_t)             \
    X(wchar_t)              \
                            \
    X(int8_t)               \
    X(uint8_t)              \
    X(int16_t)              \
    X(uint16_t)             \
    X(int32_t)              \
    X(uint32_t)             \
    X(int64_t)              \
    X(uint64_t)             \
                            \
    X(uchar_T)              \
    X(ushort_T)             \
    X(ulong_T)              \
    X(ulonglong_T)          \
    X(int8_T)               \
    X(uint8_T)              \
    X(int16_T)              \
    X(uint16_T)             \
    X(int32_T)              \
    X(uint32_T)             \
    X(int64_T)              \
    X(uint64_T)             \
    X(real32_T);            \
    X(real64_T);            \
    X(real_T);              \
    X(time_T);              \
    X(boolean_T);           \
    X(char_T);              \
    X(int_T);               \
    X(uint_T);              \
    X(byte_T);              \
    X(creal32_T)            \
    X(creal64_T)            \
    X(creal_T)              \
    X(cint8_T)              \
    X(cuint8_T)             \
    X(cint16_T)             \
    X(cuint16_T)            \
    X(cint32_T)             \
    X(cuint32_T)            \
    X(cint64_T)             \
    X(cuint64_T)            \
    X(mwSize)               \
    X(mwIndex)              \
    X(mwSignedIndex)        \
    X(CHAR16_T)             \
                            \
    X(pointer_T)
    // TODO: include Simulink coder data types from "multiword_types.h"

#endif /* DATA_TYPES_H */
