/*
 * rtwtypes.h
 *
 * Code generation for model "complete_system_io".
 *
 * Model version              : 1.309
 * Simulink Coder version : 8.5 (R2013b) 08-Aug-2013
 * C source code generated on : Tue Jun 20 11:55:30 2017
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Specified
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef __RTWTYPES_H__
#define __RTWTYPES_H__
#include "tmwtypes.h"
#include "simstruc_types.h"
#ifndef POINTER_T
# define POINTER_T

typedef void * pointer_T;

#endif

#ifndef TRUE
# define TRUE                          (1U)
#endif

#ifndef FALSE
# define FALSE                         (0U)
#endif

#ifndef INT64_T
#define INT64_T

typedef long long int64_T;

#endif

#ifndef UINT64_T
#define UINT64_T

typedef unsigned long long uint64_T;

#endif

/*===========================================================================*
 * Additional complex number type definitions                                           *
 *===========================================================================*/
#ifndef CINT64_T
#define CINT64_T

typedef struct {
  int64_T re;
  int64_T im;
} cint64_T;

#endif

#ifndef CUINT64_T
#define CUINT64_T

typedef struct {
  uint64_T re;
  uint64_T im;
} cuint64_T;

#endif
#endif                                 /* __RTWTYPES_H__ */
