/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_asm_dtc_svm.c
 *
 * Code generated for Simulink model 'ee_asm_dtc_svm'.
 *
 * Model version                  : 1.792
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 11:50:34 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "ee_asm_dtc_svm.h"
#define NumBitsPerChar                 8U

/* Block signals and states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern real_T rtGetNaN(void);
extern real32_T rtGetNaNF(void);

/*===========*
 * Constants *
 *===========*/
#define RT_PI                          3.14159265358979323846
#define RT_PIF                         3.1415927F
#define RT_LN_10                       2.30258509299404568402
#define RT_LN_10F                      2.3025851F
#define RT_LOG10E                      0.43429448190325182765
#define RT_LOG10EF                     0.43429449F
#define RT_E                           2.7182818284590452354
#define RT_EF                          2.7182817F

/*
 * UNUSED_PARAMETER(x)
 *   Used to specify that a function parameter (argument) is required but not
 *   accessed by the function body.
 */
#ifndef UNUSED_PARAMETER
# if defined(__LCC__)
#   define UNUSED_PARAMETER(x)                                   /* do nothing */
# else

/*
 * This is the semi-ANSI standard way of indicating that an
 * unused function parameter is required.
 */
#   define UNUSED_PARAMETER(x)         (void) (x)
# endif
#endif

extern real_T rtInf;
extern real_T rtMinusInf;
extern real_T rtNaN;
extern real32_T rtInfF;
extern real32_T rtMinusInfF;
extern real32_T rtNaNF;
extern void rt_InitInfAndNaN(size_t realSize);
extern boolean_T rtIsInf(real_T value);
extern boolean_T rtIsInfF(real32_T value);
extern boolean_T rtIsNaN(real_T value);
extern boolean_T rtIsNaNF(real32_T value);
typedef struct {
  struct {
    uint32_T wordH;
    uint32_T wordL;
  } words;
} BigEndianIEEEDouble;

typedef struct {
  struct {
    uint32_T wordL;
    uint32_T wordH;
  } words;
} LittleEndianIEEEDouble;

typedef struct {
  union {
    real32_T wordLreal;
    uint32_T wordLuint;
  } wordL;
} IEEESingle;

real_T rtInf;
real_T rtMinusInf;
real_T rtNaN;
real32_T rtInfF;
real32_T rtMinusInfF;
real32_T rtNaNF;
extern real_T rtGetInf(void);
extern real32_T rtGetInfF(void);
extern real_T rtGetMinusInf(void);
extern real32_T rtGetMinusInfF(void);

/*
 * Initialize rtNaN needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
real_T rtGetNaN(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T nan = 0.0;
  if (bitsPerReal == 32U) {
    nan = rtGetNaNF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF80000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    nan = tmpVal.fltVal;
  }

  return nan;
}

/*
 * Initialize rtNaNF needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
real32_T rtGetNaNF(void)
{
  IEEESingle nanF = { { 0 } };

  nanF.wordL.wordLuint = 0xFFC00000U;
  return nanF.wordL.wordLreal;
}

/*
 * Initialize the rtInf, rtMinusInf, and rtNaN needed by the
 * generated code. NaN is initialized as non-signaling. Assumes IEEE.
 */
void rt_InitInfAndNaN(size_t realSize)
{
  (void) (realSize);
  rtNaN = rtGetNaN();
  rtNaNF = rtGetNaNF();
  rtInf = rtGetInf();
  rtInfF = rtGetInfF();
  rtMinusInf = rtGetMinusInf();
  rtMinusInfF = rtGetMinusInfF();
}

/* Test if value is infinite */
boolean_T rtIsInf(real_T value)
{
  return (boolean_T)((value==rtInf || value==rtMinusInf) ? 1U : 0U);
}

/* Test if single-precision value is infinite */
boolean_T rtIsInfF(real32_T value)
{
  return (boolean_T)(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U);
}

/* Test if value is not a number */
boolean_T rtIsNaN(real_T value)
{
  boolean_T result = (boolean_T) 0;
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  if (bitsPerReal == 32U) {
    result = rtIsNaNF((real32_T)value);
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.fltVal = value;
    result = (boolean_T)((tmpVal.bitVal.words.wordH & 0x7FF00000) == 0x7FF00000 &&
                         ( (tmpVal.bitVal.words.wordH & 0x000FFFFF) != 0 ||
                          (tmpVal.bitVal.words.wordL != 0) ));
  }

  return result;
}

/* Test if single-precision value is not a number */
boolean_T rtIsNaNF(real32_T value)
{
  IEEESingle tmp;
  tmp.wordL.wordLreal = value;
  return (boolean_T)( (tmp.wordL.wordLuint & 0x7F800000) == 0x7F800000 &&
                     (tmp.wordL.wordLuint & 0x007FFFFF) != 0 );
}

/*
 * Initialize rtInf needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
real_T rtGetInf(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T inf = 0.0;
  if (bitsPerReal == 32U) {
    inf = rtGetInfF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0x7FF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    inf = tmpVal.fltVal;
  }

  return inf;
}

/*
 * Initialize rtInfF needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
real32_T rtGetInfF(void)
{
  IEEESingle infF;
  infF.wordL.wordLuint = 0x7F800000U;
  return infF.wordL.wordLreal;
}

/*
 * Initialize rtMinusInf needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
real_T rtGetMinusInf(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T minf = 0.0;
  if (bitsPerReal == 32U) {
    minf = rtGetMinusInfF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    minf = tmpVal.fltVal;
  }

  return minf;
}

/*
 * Initialize rtMinusInfF needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
real32_T rtGetMinusInfF(void)
{
  IEEESingle minfF;
  minfF.wordL.wordLuint = 0xFF800000U;
  return minfF.wordL.wordLreal;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(u0_0, u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T a;
  a = fabs(u0);
  y = fabs(u1);
  if (a < y) {
    a /= y;
    y *= sqrt(a * a + 1.0);
  } else if (a > y) {
    y /= a;
    y = sqrt(y * y + 1.0) * a;
  } else {
    if (!rtIsNaN(y)) {
      y = a * 1.4142135623730951;
    }
  }

  return y;
}

/* Model step function for TID0 */
void ee_asm_dtc_svm_step0(void)        /* Sample time: [5.0E-6s, 0.0s] */
{
  int_T tid = 0;
  NeslSimulationData *simulationData;
  real_T time;
  real_T tmp[16];
  int_T tmp_0[5];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  real_T time_0;
  real_T tmp_1[94];
  int_T tmp_2[6];
  real_T Tas;
  real_T Tbs;
  real_T Tmax;
  real_T Tmin;
  real_T Toffset;
  int32_T idx;
  int32_T k;
  real_T time_1;
  real_T tmp_3[16];
  int_T tmp_4[5];
  real_T rtb_OUTPUT_1_0[8];
  real_T rtb_avoiddivisionby0;
  real_T ModWave[3];
  boolean_T tmp_5;
  boolean_T exitg1;

  /* Update the flag to indicate when data transfers from
   *  Sample time: [5.0E-6s, 0.0s] to Sample time: [5.0E-5s, 0.0s]  */
  (rtM->Timing.RateInteraction.TID0_1)++;
  if ((rtM->Timing.RateInteraction.TID0_1) > 9) {
    rtM->Timing.RateInteraction.TID0_1 = 0;
  }

  /* ZeroOrderHold: '<S1>/Zero-Order Hold2' incorporates:
   *  UnitDelay: '<S1>/Unit Delay1'
   *  UnitDelay: '<S1>/Unit Delay4'
   *  UnitDelay: '<S1>/Unit Delay5'
   *  ZeroOrderHold: '<S1>/Zero-Order Hold1'
   *  ZeroOrderHold: '<S1>/Zero-Order Hold3'
   */
  if (rtM->Timing.RateInteraction.TID0_1 == 1) {
    rtDW.ZeroOrderHold3 = rtDW.UnitDelay1_DSTATE;
    rtDW.ZeroOrderHold2[0] = rtDW.UnitDelay4_DSTATE[0];
    rtDW.ZeroOrderHold1[0] = rtDW.UnitDelay5_DSTATE[0];

    /* RateTransition: '<S28>/RTabc' incorporates:
     *  UnitDelay: '<S1>/Unit Delay1'
     *  UnitDelay: '<S1>/Unit Delay4'
     *  UnitDelay: '<S1>/Unit Delay5'
     */
    rtDW.RTabc[0] = rtDW.RTabc_Buffer0[0];
    rtDW.ZeroOrderHold2[1] = rtDW.UnitDelay4_DSTATE[1];
    rtDW.ZeroOrderHold1[1] = rtDW.UnitDelay5_DSTATE[1];

    /* RateTransition: '<S28>/RTabc' incorporates:
     *  UnitDelay: '<S1>/Unit Delay4'
     *  UnitDelay: '<S1>/Unit Delay5'
     */
    rtDW.RTabc[1] = rtDW.RTabc_Buffer0[1];
    rtDW.ZeroOrderHold2[2] = rtDW.UnitDelay4_DSTATE[2];
    rtDW.ZeroOrderHold1[2] = rtDW.UnitDelay5_DSTATE[2];

    /* RateTransition: '<S28>/RTabc' incorporates:
     *  UnitDelay: '<S1>/Unit Delay4'
     *  UnitDelay: '<S1>/Unit Delay5'
     */
    rtDW.RTabc[2] = rtDW.RTabc_Buffer0[2];

    /* RateTransition: '<S28>/RTdc' */
    rtDW.RTdc = rtDW.RTdc_Buffer0;
  }

  /* End of ZeroOrderHold: '<S1>/Zero-Order Hold2' */

  /* Saturate: '<S28>/avoid division by 0' */
  if (rtDW.RTdc <= 2.2204460492503131E-16) {
    rtb_avoiddivisionby0 = 2.2204460492503131E-16;
  } else {
    rtb_avoiddivisionby0 = rtDW.RTdc;
  }

  /* End of Saturate: '<S28>/avoid division by 0' */

  /* MATLAB Function: '<S28>/Switching Time Calculation' */
  Tas = rtDW.RTabc[0] * 0.00025 / rtb_avoiddivisionby0;
  Tbs = rtDW.RTabc[1] * 0.00025 / rtb_avoiddivisionby0;
  rtb_avoiddivisionby0 = rtDW.RTabc[2] * 0.00025 / rtb_avoiddivisionby0;
  ModWave[0] = Tas;
  ModWave[1] = Tbs;
  ModWave[2] = rtb_avoiddivisionby0;
  tmp_5 = rtIsNaN(Tas);
  if (!tmp_5) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!rtIsNaN(ModWave[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    Tmax = Tas;
  } else {
    Tmax = ModWave[idx - 1];
    while (idx + 1 < 4) {
      if (Tmax < ModWave[idx]) {
        Tmax = ModWave[idx];
      }

      idx++;
    }
  }

  if (!tmp_5) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!rtIsNaN(ModWave[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    Tmin = Tas;
  } else {
    Tmin = ModWave[idx - 1];
    while (idx + 1 < 4) {
      if (Tmin > ModWave[idx]) {
        Tmin = ModWave[idx];
      }

      idx++;
    }
  }

  Toffset = (0.00025 - (Tmax - Tmin)) / 2.0 - Tmin;
  Tas += Toffset;
  Tbs += Toffset;
  Tmin = rtb_avoiddivisionby0 + Toffset;
  Toffset = 0.00025 - Tas;
  if (0.00025 - Tas < 0.0) {
    Toffset = 0.0;
  } else {
    if (0.00025 - Tas > 0.00025) {
      Toffset = 0.00025;
    }
  }

  rtb_avoiddivisionby0 = 0.00025 - Tbs;
  if (0.00025 - Tbs < 0.0) {
    rtb_avoiddivisionby0 = 0.0;
  } else {
    if (0.00025 - Tbs > 0.00025) {
      rtb_avoiddivisionby0 = 0.00025;
    }
  }

  Tmax = 0.00025 - Tmin;
  if (0.00025 - Tmin < 0.0) {
    Tmax = 0.0;
  } else {
    if (0.00025 - Tmin > 0.00025) {
      Tmax = 0.00025;
    }
  }

  Tas += 0.00025;
  if (Tas < 0.00025) {
    Tas = 0.00025;
  } else {
    if (Tas > 0.0005) {
      Tas = 0.0005;
    }
  }

  Tbs += 0.00025;
  if (Tbs < 0.00025) {
    Tbs = 0.00025;
  } else {
    if (Tbs > 0.0005) {
      Tbs = 0.0005;
    }
  }

  Tmin += 0.00025;
  if (Tmin < 0.00025) {
    Tmin = 0.00025;
  } else {
    if (Tmin > 0.0005) {
      Tmin = 0.0005;
    }
  }

  /* SimscapeInputBlock: '<S86>/INPUT_2_1_1' incorporates:
   *  MATLAB Function: '<S28>/Switching Time Calculation'
   */
  rtDW.INPUT_2_1_1[0] = (Tas - Toffset) / 0.0005 * 2.0 - 1.0;
  rtDW.INPUT_2_1_1[1] = 0.0;
  rtDW.INPUT_2_1_1[2] = 0.0;
  rtDW.INPUT_2_1_1_Discrete[0] = !(rtDW.INPUT_2_1_1[0] ==
    rtDW.INPUT_2_1_1_Discrete[1]);
  rtDW.INPUT_2_1_1_Discrete[1] = rtDW.INPUT_2_1_1[0];
  rtDW.INPUT_2_1_1[0] = rtDW.INPUT_2_1_1_Discrete[1];
  rtDW.INPUT_2_1_1[3] = rtDW.INPUT_2_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S86>/INPUT_2_1_2' incorporates:
   *  MATLAB Function: '<S28>/Switching Time Calculation'
   */
  rtDW.INPUT_2_1_2[0] = (Tbs - rtb_avoiddivisionby0) / 0.0005 * 2.0 - 1.0;
  rtDW.INPUT_2_1_2[1] = 0.0;
  rtDW.INPUT_2_1_2[2] = 0.0;
  rtDW.INPUT_2_1_2_Discrete[0] = !(rtDW.INPUT_2_1_2[0] ==
    rtDW.INPUT_2_1_2_Discrete[1]);
  rtDW.INPUT_2_1_2_Discrete[1] = rtDW.INPUT_2_1_2[0];
  rtDW.INPUT_2_1_2[0] = rtDW.INPUT_2_1_2_Discrete[1];
  rtDW.INPUT_2_1_2[3] = rtDW.INPUT_2_1_2_Discrete[0];

  /* SimscapeInputBlock: '<S86>/INPUT_2_1_3' incorporates:
   *  MATLAB Function: '<S28>/Switching Time Calculation'
   */
  rtDW.INPUT_2_1_3[0] = (Tmin - Tmax) / 0.0005 * 2.0 - 1.0;
  rtDW.INPUT_2_1_3[1] = 0.0;
  rtDW.INPUT_2_1_3[2] = 0.0;
  rtDW.INPUT_2_1_3_Discrete[0] = !(rtDW.INPUT_2_1_3[0] ==
    rtDW.INPUT_2_1_3_Discrete[1]);
  rtDW.INPUT_2_1_3_Discrete[1] = rtDW.INPUT_2_1_3[0];
  rtDW.INPUT_2_1_3[0] = rtDW.INPUT_2_1_3_Discrete[1];
  rtDW.INPUT_2_1_3[3] = rtDW.INPUT_2_1_3_Discrete[0];

  /* Step: '<Root>/Step1' incorporates:
   *  Step: '<Root>/Tbase'
   */
  rtb_avoiddivisionby0 = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0*
    4294967296.0)) * 5.0E-6);

  /* Switch: '<S2>/>= 0.5 ' incorporates:
   *  Constant: '<Root>/-Tbase'
   *  Step: '<Root>/Step1'
   *  Step: '<Root>/Tbase'
   */
  if ((!(rtb_avoiddivisionby0 < 2.1)) >= 0.5) {
    rtb_avoiddivisionby0 = -1.0;
  } else {
    rtb_avoiddivisionby0 = !(rtb_avoiddivisionby0 < 1.6);
  }

  /* End of Switch: '<S2>/>= 0.5 ' */

  /* SimscapeInputBlock: '<S86>/INPUT_1_1_1' incorporates:
   *  Gain: '<S2>/Gain'
   */
  rtDW.INPUT_1_1_1[0] = -870.04702223569461 * rtb_avoiddivisionby0;
  rtDW.INPUT_1_1_1[1] = 0.0;
  rtDW.INPUT_1_1_1[2] = 0.0;
  rtDW.INPUT_1_1_1_Discrete[0] = !(rtDW.INPUT_1_1_1[0] ==
    rtDW.INPUT_1_1_1_Discrete[1]);
  rtDW.INPUT_1_1_1_Discrete[1] = rtDW.INPUT_1_1_1[0];
  rtDW.INPUT_1_1_1[0] = rtDW.INPUT_1_1_1_Discrete[1];
  rtDW.INPUT_1_1_1[3] = rtDW.INPUT_1_1_1_Discrete[0];

  /* SimscapeExecutionBlock: '<S86>/STATE_1' incorporates:
   *  SimscapeExecutionBlock: '<S86>/OUTPUT_1_0'
   */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  Tas = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0* 4294967296.0)) *
         5.0E-6);
  time = Tas;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 54;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 24;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
  tmp_5 = false;
  simulationData->mData->mFoundZcEvents = tmp_5;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp_5 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_5;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0[0] = 0;
  tmp[0] = rtDW.INPUT_2_1_1[0];
  tmp[1] = rtDW.INPUT_2_1_1[1];
  tmp[2] = rtDW.INPUT_2_1_1[2];
  tmp[3] = rtDW.INPUT_2_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = rtDW.INPUT_2_1_2[0];
  tmp[5] = rtDW.INPUT_2_1_2[1];
  tmp[6] = rtDW.INPUT_2_1_2[2];
  tmp[7] = rtDW.INPUT_2_1_2[3];
  tmp_0[2] = 8;
  tmp[8] = rtDW.INPUT_2_1_3[0];
  tmp[9] = rtDW.INPUT_2_1_3[1];
  tmp[10] = rtDW.INPUT_2_1_3[2];
  tmp[11] = rtDW.INPUT_2_1_3[3];
  tmp_0[3] = 12;
  tmp[12] = rtDW.INPUT_1_1_1[0];
  tmp[13] = rtDW.INPUT_1_1_1[1];
  tmp[14] = rtDW.INPUT_1_1_1[2];
  tmp[15] = rtDW.INPUT_1_1_1[3];
  tmp_0[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mOutputs.mN = 78;
  simulationData->mData->mOutputs.mX = &rtDW.STATE_1[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  tmp_5 = tid == 0;
  simulationData->mData->mIsFundamentalSampleHit = tmp_5;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  idx = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (idx != 0) {
    tmp_5 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_5) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S86>/STATE_1' */

  /* SimscapeExecutionBlock: '<S86>/OUTPUT_1_0' */
  simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
  time_0 = Tas;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_1_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_1_0_Modes;
  tmp_5 = false;
  simulationData->mData->mFoundZcEvents = tmp_5;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp_5 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_5;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_2[0] = 0;
  tmp_1[0] = rtDW.INPUT_2_1_1[0];
  tmp_1[1] = rtDW.INPUT_2_1_1[1];
  tmp_1[2] = rtDW.INPUT_2_1_1[2];
  tmp_1[3] = rtDW.INPUT_2_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = rtDW.INPUT_2_1_2[0];
  tmp_1[5] = rtDW.INPUT_2_1_2[1];
  tmp_1[6] = rtDW.INPUT_2_1_2[2];
  tmp_1[7] = rtDW.INPUT_2_1_2[3];
  tmp_2[2] = 8;
  tmp_1[8] = rtDW.INPUT_2_1_3[0];
  tmp_1[9] = rtDW.INPUT_2_1_3[1];
  tmp_1[10] = rtDW.INPUT_2_1_3[2];
  tmp_1[11] = rtDW.INPUT_2_1_3[3];
  tmp_2[3] = 12;
  tmp_1[12] = rtDW.INPUT_1_1_1[0];
  tmp_1[13] = rtDW.INPUT_1_1_1[1];
  tmp_1[14] = rtDW.INPUT_1_1_1[2];
  tmp_1[15] = rtDW.INPUT_1_1_1[3];
  tmp_2[4] = 16;
  memcpy(&tmp_1[16], &rtDW.STATE_1[0], 78U * sizeof(real_T));
  tmp_2[5] = 94;
  simulationData->mData->mInputValues.mN = 94;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 6;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  simulationData->mData->mOutputs.mN = 8;
  simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  tmp_5 = tid == 0;
  simulationData->mData->mIsFundamentalSampleHit = tmp_5;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  idx = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (idx != 0) {
    tmp_5 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_5) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* Outport: '<Root>/Out1' */
  rtY.I_ABC[0] = rtb_OUTPUT_1_0[2];
  rtY.I_ABC[1] = rtb_OUTPUT_1_0[3];
  rtY.I_ABC[2] = rtb_OUTPUT_1_0[4];

  /* Outport: '<Root>/Out2' incorporates:
   *  Gain: '<S5>/Gain1'
   */
  rtY.Trq[0] = 870.04702223569461 * rtb_OUTPUT_1_0[0];
  rtY.Trq[1] = 870.04702223569461 * rtb_avoiddivisionby0;

  /* Outport: '<Root>/Out3' incorporates:
   *  Gain: '<S5>/p.u. -> rpm'
   */
  rtY.Spd[0] = 1800.0 * rtb_OUTPUT_1_0[1];

  /* RateTransition: '<S5>/Rate Transition' */
  if (rtM->Timing.RateInteraction.TID0_1 == 1) {
    rtDW.RateTransition = rtDW.RateTransition_Buffer0;
  }

  /* End of RateTransition: '<S5>/Rate Transition' */

  /* Outport: '<Root>/Out3' */
  rtY.Spd[1] = rtDW.RateTransition;

  /* Update for UnitDelay: '<S1>/Unit Delay4' */
  rtDW.UnitDelay4_DSTATE[0] = rtb_OUTPUT_1_0[5];
  rtDW.UnitDelay4_DSTATE[1] = rtb_OUTPUT_1_0[6];
  rtDW.UnitDelay4_DSTATE[2] = rtb_OUTPUT_1_0[7];

  /* Update for UnitDelay: '<S1>/Unit Delay5' */
  rtDW.UnitDelay5_DSTATE[0] = rtb_OUTPUT_1_0[2];
  rtDW.UnitDelay5_DSTATE[1] = rtb_OUTPUT_1_0[3];
  rtDW.UnitDelay5_DSTATE[2] = rtb_OUTPUT_1_0[4];

  /* Update for UnitDelay: '<S1>/Unit Delay1' */
  rtDW.UnitDelay1_DSTATE = rtb_OUTPUT_1_0[1];

  /* Update for SimscapeExecutionBlock: '<S86>/STATE_1' */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  time_1 = Tas;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 54;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 24;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
  tmp_5 = false;
  simulationData->mData->mFoundZcEvents = tmp_5;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp_5 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_5;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_4[0] = 0;
  tmp_3[0] = rtDW.INPUT_2_1_1[0];
  tmp_3[1] = rtDW.INPUT_2_1_1[1];
  tmp_3[2] = rtDW.INPUT_2_1_1[2];
  tmp_3[3] = rtDW.INPUT_2_1_1[3];
  tmp_4[1] = 4;
  tmp_3[4] = rtDW.INPUT_2_1_2[0];
  tmp_3[5] = rtDW.INPUT_2_1_2[1];
  tmp_3[6] = rtDW.INPUT_2_1_2[2];
  tmp_3[7] = rtDW.INPUT_2_1_2[3];
  tmp_4[2] = 8;
  tmp_3[8] = rtDW.INPUT_2_1_3[0];
  tmp_3[9] = rtDW.INPUT_2_1_3[1];
  tmp_3[10] = rtDW.INPUT_2_1_3[2];
  tmp_3[11] = rtDW.INPUT_2_1_3[3];
  tmp_4[3] = 12;
  tmp_3[12] = rtDW.INPUT_1_1_1[0];
  tmp_3[13] = rtDW.INPUT_1_1_1[1];
  tmp_3[14] = rtDW.INPUT_1_1_1[2];
  tmp_3[15] = rtDW.INPUT_1_1_1[3];
  tmp_4[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_3[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_4[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  idx = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_UPDATE, simulationData, diagnosticManager);
  if (idx != 0) {
    tmp_5 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_5) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 5.0E-6, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  rtM->Timing.clockTick0++;
  if (!rtM->Timing.clockTick0) {
    rtM->Timing.clockTickH0++;
  }

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as a local variable.
   * As result, some Output functions may have unused tid.
   */
  UNUSED_PARAMETER(tid);
}

/* Model step function for TID1 */
void ee_asm_dtc_svm_step1(void)        /* Sample time: [5.0E-5s, 0.0s] */
{
  int_T tid = 1;
  real_T rtb_Bias1;
  real_T rtb_Sum_o;
  real_T rtb_Gain;
  real_T localProduct;
  real_T rtb_RateLimiter;
  real_T rtb_Saturation;
  real_T rtb_Switch;
  real_T DiscreteTimeIntegrator_a;
  real_T DiscreteTimeIntegrator_n;
  real_T DiscreteTimeIntegrator_idx_1;
  real_T DiscreteTimeIntegrator_idx_0;
  real_T rtb_K_g_idx_0;
  real_T rtb_K_g_idx_1;

  /* Gain: '<S14>/K' incorporates:
   *  Fcn: '<S14>/alpha'
   *  Fcn: '<S14>/beta'
   */
  rtb_K_g_idx_0 = ((rtDW.ZeroOrderHold1[0] - 0.5 * rtDW.ZeroOrderHold1[1]) - 0.5
                   * rtDW.ZeroOrderHold1[2]) * 0.66666666666666663;
  rtb_K_g_idx_1 = (rtDW.ZeroOrderHold1[1] - rtDW.ZeroOrderHold1[2]) *
    1.7320508075688772 / 2.0 * 0.66666666666666663;

  /* DiscreteIntegrator: '<S10>/Discrete-Time Integrator' incorporates:
   *  Fcn: '<S13>/alpha'
   *  Fcn: '<S13>/beta'
   *  Gain: '<S10>/Gain'
   *  Gain: '<S13>/K'
   *  Sum: '<S10>/Sum'
   */
  DiscreteTimeIntegrator_idx_0 = (((rtDW.ZeroOrderHold2[0] - 0.5 *
    rtDW.ZeroOrderHold2[1]) - 0.5 * rtDW.ZeroOrderHold2[2]) *
    0.66666666666666663 - 0.0256 * rtb_K_g_idx_0) * 5.0E-5 +
    rtDW.DiscreteTimeIntegrator_DSTATE[0];
  DiscreteTimeIntegrator_idx_1 = ((rtDW.ZeroOrderHold2[1] - rtDW.ZeroOrderHold2
    [2]) * 1.7320508075688772 / 2.0 * 0.66666666666666663 - 0.0256 *
    rtb_K_g_idx_1) * 5.0E-5 + rtDW.DiscreteTimeIntegrator_DSTATE[1];

  /* Bias: '<S10>/Bias1' incorporates:
   *  ComplexToMagnitudeAngle: '<S10>/Complex to Magnitude-Angle'
   *  Gain: '<S10>/Gain3'
   */
  rtb_Bias1 = rt_atan2d_snf(-DiscreteTimeIntegrator_idx_0,
    DiscreteTimeIntegrator_idx_1) + 3.1415926535897931;

  /* Step: '<S1>/Reference Flux' incorporates:
   *  Step: '<Root>/Reference Speed'
   */
  localProduct = ((rtM->Timing.clockTick1) * 5.0E-5);
  rtb_RateLimiter = localProduct;
  if (rtb_RateLimiter < 0.1) {
    rtb_RateLimiter = 0.0;
  } else {
    rtb_RateLimiter = 1.3;
  }

  /* End of Step: '<S1>/Reference Flux' */

  /* Sum: '<S11>/Sum' incorporates:
   *  ComplexToMagnitudeAngle: '<S10>/Complex to Magnitude-Angle'
   *  Gain: '<S10>/Gain3'
   */
  rtb_RateLimiter -= rt_hypotd_snf(DiscreteTimeIntegrator_idx_1,
    -DiscreteTimeIntegrator_idx_0);

  /* DiscreteIntegrator: '<S15>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S15>/Gain1'
   *  Sum: '<S15>/Sum1'
   *  UnitDelay: '<S15>/Unit Delay'
   */
  DiscreteTimeIntegrator_a = (3000.0 * rtb_RateLimiter + rtDW.UnitDelay_DSTATE) *
    5.0E-5 + rtDW.DiscreteTimeIntegrator_DSTATE_i;

  /* Sum: '<S15>/Sum' incorporates:
   *  Gain: '<S15>/Gain'
   */
  rtb_Sum_o = 150.0 * rtb_RateLimiter + DiscreteTimeIntegrator_a;

  /* Product: '<S10>/Product' */
  rtb_RateLimiter = DiscreteTimeIntegrator_idx_0 * rtb_K_g_idx_1;

  /* Sum: '<S10>/Sum1' incorporates:
   *  Product: '<S10>/Product1'
   */
  rtb_K_g_idx_0 = rtb_RateLimiter - DiscreteTimeIntegrator_idx_1 * rtb_K_g_idx_0;

  /* Step: '<Root>/Reference Speed' */
  rtb_RateLimiter = localProduct;
  if (rtb_RateLimiter < 0.1) {
    localProduct = 0.0;
  } else {
    localProduct = 1000.0;
  }

  /* RateLimiter: '<S1>/Rate Limiter' */
  rtb_RateLimiter = localProduct - rtDW.PrevY;
  if (rtb_RateLimiter > 0.1) {
    rtb_RateLimiter = rtDW.PrevY + 0.1;
  } else if (rtb_RateLimiter < -0.1) {
    rtb_RateLimiter = rtDW.PrevY + -0.1;
  } else {
    rtb_RateLimiter = localProduct;
  }

  rtDW.PrevY = rtb_RateLimiter;

  /* End of RateLimiter: '<S1>/Rate Limiter' */

  /* Sum: '<S1>/Sum9' incorporates:
   *  Gain: '<S1>/rpm -> p.u.'
   */
  localProduct = 0.00055555555555555556 * rtb_RateLimiter - rtDW.ZeroOrderHold3;

  /* Sum: '<S69>/Sum' incorporates:
   *  DiscreteIntegrator: '<S60>/Integrator'
   *  Gain: '<S65>/Proportional Gain'
   */
  rtb_K_g_idx_1 = 65.47 * localProduct + rtDW.Integrator_DSTATE;

  /* Saturate: '<S67>/Saturation' */
  if (rtb_K_g_idx_1 > 2.0) {
    rtb_Saturation = 2.0;
  } else if (rtb_K_g_idx_1 < -2.0) {
    rtb_Saturation = -2.0;
  } else {
    rtb_Saturation = rtb_K_g_idx_1;
  }

  /* End of Saturate: '<S67>/Saturation' */

  /* Sum: '<S11>/Sum1' incorporates:
   *  Gain: '<S10>/Gain1'
   *  Gain: '<S1>/Gain2'
   */
  rtb_K_g_idx_0 = 870.047 * rtb_Saturation - 3.0 * rtb_K_g_idx_0;

  /* DiscreteIntegrator: '<S16>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S16>/Gain1'
   *  Sum: '<S16>/Sum1'
   *  UnitDelay: '<S16>/Unit Delay'
   */
  DiscreteTimeIntegrator_n = (50.0 * rtb_K_g_idx_0 + rtDW.UnitDelay_DSTATE_n) *
    5.0E-5 + rtDW.DiscreteTimeIntegrator_DSTATE_g;

  /* Sum: '<S16>/Sum' */
  rtb_K_g_idx_0 += DiscreteTimeIntegrator_n;

  /* Switch: '<S18>/Switch' */
  rtb_Switch = rtb_K_g_idx_0;

  /* Switch: '<S21>/Switch2' incorporates:
   *  RelationalOperator: '<S21>/LowerRelop1'
   *  RelationalOperator: '<S21>/UpperRelop'
   *  Switch: '<S18>/Switch'
   *  Switch: '<S21>/Switch'
   */
  if (rtb_K_g_idx_0 > 577.35026918962581) {
    rtb_Switch = 577.35026918962581;
  } else {
    if (rtb_K_g_idx_0 < -577.35026918962581) {
      /* Switch: '<S21>/Switch' */
      rtb_Switch = -577.35026918962581;
    }
  }

  /* End of Switch: '<S21>/Switch2' */

  /* Sqrt: '<S17>/Sqrt' incorporates:
   *  Math: '<S17>/Math Function'
   *  Math: '<S17>/Math Function1'
   *  Sum: '<S17>/Sum4'
   */
  rtb_Gain = sqrt(333333.33333333337 - rtb_Switch * rtb_Switch);

  /* Switch: '<S22>/Switch2' incorporates:
   *  RelationalOperator: '<S22>/LowerRelop1'
   *  Switch: '<S19>/Switch'
   */
  if (!(rtb_Sum_o > rtb_Gain)) {
    /* Gain: '<S17>/Sign Change ' */
    rtb_Gain = -rtb_Gain;

    /* Switch: '<S22>/Switch' incorporates:
     *  RelationalOperator: '<S22>/UpperRelop'
     */
    if (!(rtb_Sum_o < rtb_Gain)) {
      rtb_Gain = rtb_Sum_o;
    }

    /* End of Switch: '<S22>/Switch' */
  }

  /* End of Switch: '<S22>/Switch2' */

  /* Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' */
  rtDW.DiscreteTimeIntegrator_DSTATE[0] = DiscreteTimeIntegrator_idx_0;
  rtDW.DiscreteTimeIntegrator_DSTATE[1] = DiscreteTimeIntegrator_idx_1;

  /* Update for UnitDelay: '<S15>/Unit Delay' incorporates:
   *  Sum: '<S11>/Sum5'
   */
  rtDW.UnitDelay_DSTATE = rtb_Gain - rtb_Sum_o;

  /* Update for DiscreteIntegrator: '<S15>/Discrete-Time Integrator' */
  rtDW.DiscreteTimeIntegrator_DSTATE_i = DiscreteTimeIntegrator_a;
  rtDW.DiscreteTimeIntegrator_PrevRese = 0;

  /* Update for DiscreteIntegrator: '<S60>/Integrator' incorporates:
   *  Gain: '<S53>/Kb'
   *  Gain: '<S57>/Integral Gain'
   *  Sum: '<S53>/SumI2'
   *  Sum: '<S53>/SumI4'
   */
  rtDW.Integrator_DSTATE += ((rtb_Saturation - rtb_K_g_idx_1) * 1000.0 + 3134.24
    * localProduct) * 5.0E-5;

  /* Update for UnitDelay: '<S16>/Unit Delay' incorporates:
   *  Sum: '<S11>/Sum4'
   */
  rtDW.UnitDelay_DSTATE_n = rtb_Switch - rtb_K_g_idx_0;

  /* Update for DiscreteIntegrator: '<S16>/Discrete-Time Integrator' */
  rtDW.DiscreteTimeIntegrator_DSTATE_g = DiscreteTimeIntegrator_n;
  rtDW.DiscreteTimeIntegrator_PrevRe_i = 0;

  /* Update for RateTransition: '<S28>/RTabc' incorporates:
   *  Fcn: '<S27>/a'
   *  Fcn: '<S27>/b'
   *  Fcn: '<S27>/c'
   */
  rtDW.RTabc_Buffer0[0] = sin(rtb_Bias1) * rtb_Gain + cos(rtb_Bias1) *
    rtb_Switch;
  rtDW.RTabc_Buffer0[1] = sin(rtb_Bias1 - 2.0943951023931953) * rtb_Gain + cos
    (rtb_Bias1 - 2.0943951023931953) * rtb_Switch;
  rtDW.RTabc_Buffer0[2] = sin(rtb_Bias1 + 2.0943951023931953) * rtb_Gain + cos
    (rtb_Bias1 + 2.0943951023931953) * rtb_Switch;

  /* Update for RateTransition: '<S28>/RTdc' */
  rtDW.RTdc_Buffer0 = 1000.0;

  /* Update for RateTransition: '<S5>/Rate Transition' */
  rtDW.RateTransition_Buffer0 = rtb_RateLimiter;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 5.0E-5, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  rtM->Timing.clockTick1++;

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as a local variable.
   * As result, some Output functions may have unused tid.
   */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void ee_asm_dtc_svm_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    NeslSimulator *tmp;
    boolean_T tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeModelParameters modelParameters;
    real_T tmp_1;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
    char *msg;
    NeslSimulationData *simulationData;
    real_T time;
    NeModelParameters modelParameters_0;
    real_T time_0;
    NeParameterBundle expl_temp;
    real_T time_tmp;

    /* Start for SimscapeExecutionBlock: '<S86>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S86>/OUTPUT_1_0'
     */
    tmp = nesl_lease_simulator("ee_asm_dtc_svm/Solver Configuration_1", 0, 0);
    rtDW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_1_Simulator);
    if (tmp_0) {
      ee_asm_dtc_svm_1a8cf8b4_1_gateway();
      tmp = nesl_lease_simulator("ee_asm_dtc_svm/Solver Configuration_1", 0, 0);
      rtDW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    rtDW.STATE_1_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DISCRETE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mFixedStepSize = 5.0E-6;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters.mRTWModifiedTimeStamp = 4.89585027E+8;
    tmp_1 = 0.001;
    modelParameters.mSolverTolerance = tmp_1;
    tmp_1 = 5.0E-6;
    modelParameters.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_1_Simulator,
      &modelParameters, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    expl_temp.mRealParameters.mN = 0;
    expl_temp.mRealParameters.mX = NULL;
    expl_temp.mLogicalParameters.mN = 0;
    expl_temp.mLogicalParameters.mX = NULL;
    expl_temp.mIntegerParameters.mN = 0;
    expl_temp.mIntegerParameters.mX = NULL;
    expl_temp.mIndexParameters.mN = 0;
    expl_temp.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)rtDW.STATE_1_Simulator, expl_temp);
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    time_tmp = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0* 4294967296.0))
                * 5.0E-6);
    time = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 54;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 24;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S86>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S86>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("ee_asm_dtc_svm/Solver Configuration_1", 1, 0);
    rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      ee_asm_dtc_svm_1a8cf8b4_1_gateway();
      tmp = nesl_lease_simulator("ee_asm_dtc_svm/Solver Configuration_1", 1, 0);
      rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    rtDW.OUTPUT_1_0_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DISCRETE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mFixedStepSize = 5.0E-6;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_0.mRTWModifiedTimeStamp = 4.89585027E+8;
    tmp_1 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_1;
    tmp_1 = 5.0E-6;
    modelParameters_0.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
      &modelParameters_0, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
    time_0 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_1_0_Modes;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* InitializeConditions for DiscreteIntegrator: '<S15>/Discrete-Time Integrator' */
    rtDW.DiscreteTimeIntegrator_PrevRese = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S16>/Discrete-Time Integrator' */
    rtDW.DiscreteTimeIntegrator_PrevRe_i = 2;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
