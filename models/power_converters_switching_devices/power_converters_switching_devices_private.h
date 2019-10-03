/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: power_converters_switching_devices_private.h
 *
 * Code generated for Simulink model 'power_converters_switching_devices'.
 *
 * Model version                  : 1.1238
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 13:33:37 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_power_converters_switching_devices_private_h_
#define RTW_HEADER_power_converters_switching_devices_private_h_
#include "rtwtypes.h"
#include <math.h>
#include <stdlib.h>
#include "power_converters_switching_devices.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef CodeFormat
#define CodeFormat                     S-Function
#else
#undef CodeFormat
#define CodeFormat                     S-Function
#endif

#ifndef S_FUNCTION_NAME
#define S_FUNCTION_NAME                simulink_only_sfcn
#else
#undef S_FUNCTION_NAME
#define S_FUNCTION_NAME                simulink_only_sfcn
#endif

#ifndef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL               2
#else
#undef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL               2
#endif

#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        NULL
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES
#ifndef _RTW_COMMON_DEFINES_
#define _RTW_COMMON_DEFINES_
#endif
#endif

extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_remd_snf(real_T u0, real_T u1);
extern real_T look1_pbinlx(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T prevIndex[], uint32_T maxIndex);
extern void sfun_discreteVariableDelay(SimStruct *rts);
extern void Subsystempi2delay(uint8_T rtu_Enable, const real_T rtu_alpha_beta[2],
  real_T rtu_wt, real_T *rty_dq, real_T *rty_dq_d);
extern void Subsystem1(uint8_T rtu_Enable, const real_T rtu_alpha_beta[2],
  real_T rtu_wt, real_T *rty_dq, real_T *rty_dq_h);
extern void Subsystempi2delay_l(uint8_T rtu_Enable, const real_T rtu_dq[2],
  real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_o);
extern void Subsystem1_i(uint8_T rtu_Enable, const real_T rtu_dq[2], real_T
  rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_m);
extern void NegSeqComputation(real_T rtu_Enable, creal_T rtu_In, creal_T
  rtu_In_o, creal_T rtu_In_j, creal_T *rty_Out);
extern void PosSeqComputation(real_T rtu_Enable, creal_T rtu_In, creal_T
  rtu_In_b, creal_T rtu_In_d, creal_T *rty_Out);
extern void ZeroSeqComputation(real_T rtu_Enable, creal_T rtu_In, creal_T
  rtu_In_d, creal_T rtu_In_o, creal_T *rty_Out);

#endif            /* RTW_HEADER_power_converters_switching_devices_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
