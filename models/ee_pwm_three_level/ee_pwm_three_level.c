/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_pwm_three_level.c
 *
 * Code generated for Simulink model 'ee_pwm_three_level'.
 *
 * Model version                  : 1.368
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 12:26:10 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "ee_pwm_three_level.h"
#define NumBitsPerChar                 8U

/* Block signals and states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
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

/* Model step function for TID0 */
void ee_pwm_three_level_step0(void)    /* Sample time: [5.0E-6s, 0.0s] */
{
  int_T tid = 0;
  NeslSimulationData *simulationData;
  real_T time;
  real_T tmp[48];
  int_T tmp_0[13];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  real_T time_0;
  real_T tmp_1[188];
  int_T tmp_2[14];
  int32_T a;
  int32_T b;
  real_T vdch;
  real_T va_new;
  real_T vb_new;
  real_T Tas;
  real_T Toffset;
  int32_T sa0;
  real_T time_1;
  real_T tmp_3[48];
  int_T tmp_4[13];
  real_T rtb_avoiddivisionby0;
  real_T rtb_OUTPUT_1_0[5];
  real_T rtb_TgabcON[3];
  boolean_T rtb_RelationalOperator1;
  real_T rtb_ModIndex;
  boolean_T tmp_5;
  boolean_T exitg1;

  /* Update the flag to indicate when data transfers from
   *  Sample time: [5.0E-6s, 0.0s] to Sample time: [0.0001s, 0.0s]  */
  (rtM->Timing.RateInteraction.TID0_1)++;
  if ((rtM->Timing.RateInteraction.TID0_1) > 19) {
    rtM->Timing.RateInteraction.TID0_1 = 0;
  }

  /* Sin: '<Root>/Unit Sine Wave' */
  if (rtDW.systemEnable != 0) {
    va_new = 376.99111843077515 * (((rtM->Timing.clockTick0+
      rtM->Timing.clockTickH0* 4294967296.0)) * 5.0E-6);
    vb_new = sin(va_new);
    va_new = cos(va_new);
    rtDW.lastSin[0] = vb_new;
    rtDW.lastCos[0] = va_new;
    rtDW.lastSin[1] = vb_new;
    rtDW.lastCos[1] = va_new;
    rtDW.lastSin[2] = vb_new;
    rtDW.lastCos[2] = va_new;
    rtDW.systemEnable = 0;
  }

  /* Outport: '<Root>/Out1' incorporates:
   *  Product: '<S5>/Product1'
   *  Sin: '<Root>/Unit Sine Wave'
   */
  rtY.Reference_Voltages[0] = ((rtDW.lastSin[0] * 0.0018849544759281464 +
    rtDW.lastCos[0] * 0.99999822347173384) * 0.99999822347173384 +
    (rtDW.lastCos[0] * 0.0018849544759281464 - rtDW.lastSin[0] *
     0.99999822347173384) * 0.0018849544759281136) * 831.38438763306112;
  rtY.Reference_Voltages[1] = ((rtDW.lastSin[1] * 0.86508138802786561 +
    rtDW.lastCos[1] * -0.50163153019699769) * 0.99999822347173384 +
    (rtDW.lastCos[1] * 0.86508138802786561 - rtDW.lastSin[1] *
     -0.50163153019699769) * 0.0018849544759281136) * 831.38438763306112;
  rtY.Reference_Voltages[2] = ((rtDW.lastSin[2] * -0.86696634250379379 +
    rtDW.lastCos[2] * -0.49836669327473576) * 0.99999822347173384 +
    (rtDW.lastCos[2] * -0.86696634250379379 - rtDW.lastSin[2] *
     -0.49836669327473576) * 0.0018849544759281136) * 831.38438763306112;

  /* RateTransition: '<S15>/RTabc' incorporates:
   *  RateTransition: '<S15>/RTneutral'
   */
  if (rtM->Timing.RateInteraction.TID0_1 == 1) {
    rtDW.RTabc[0] = rtDW.RTabc_Buffer0[0];
    rtDW.RTabc[1] = rtDW.RTabc_Buffer0[1];
    rtDW.RTabc[2] = rtDW.RTabc_Buffer0[2];

    /* RateTransition: '<S15>/RTdc' */
    rtDW.RTdc = rtDW.RTdc_Buffer0;
    rtDW.RTneutral = rtDW.RTneutral_Buffer0;
  }

  /* End of RateTransition: '<S15>/RTabc' */

  /* Saturate: '<S15>/avoid division by 0' */
  if (rtDW.RTdc <= 2.2204460492503131E-16) {
    rtb_avoiddivisionby0 = 2.2204460492503131E-16;
  } else {
    rtb_avoiddivisionby0 = rtDW.RTdc;
  }

  /* End of Saturate: '<S15>/avoid division by 0' */

  /* MATLAB Function: '<S15>/Switching Time Calculation' */
  if (rtDW.RTabc[0] * rtDW.RTabc[1] * rtDW.RTabc[2] >= 0.0) {
    if (rtDW.RTabc[0] >= 0.0) {
      sa0 = 1;
      a = 2;
      b = -1;
    } else if (rtDW.RTabc[1] >= 0.0) {
      sa0 = 3;
      a = -1;
      b = 2;
    } else {
      sa0 = 5;
      a = -1;
      b = -1;
    }
  } else if (rtDW.RTabc[0] < 0.0) {
    sa0 = 4;
    a = -2;
    b = 1;
  } else if (rtDW.RTabc[1] < 0.0) {
    sa0 = 6;
    a = 1;
    b = -2;
  } else {
    sa0 = 2;
    a = 1;
    b = 1;
  }

  vdch = rtb_avoiddivisionby0 * 0.5;
  va_new = rtDW.RTabc[0] - (real_T)a * rtb_avoiddivisionby0 / 6.0;
  vb_new = rtDW.RTabc[1] - (real_T)b * rtb_avoiddivisionby0 / 6.0;
  Tas = va_new * 0.0005 / vdch;
  rtb_avoiddivisionby0 = vb_new * 0.0005 / vdch;
  vdch = (-va_new - vb_new) * 0.0005 / vdch;
  rtb_TgabcON[0] = Tas;
  rtb_TgabcON[1] = rtb_avoiddivisionby0;
  rtb_TgabcON[2] = vdch;
  tmp_5 = rtIsNaN(Tas);
  if (!tmp_5) {
    a = 1;
  } else {
    a = 0;
    b = 2;
    exitg1 = false;
    while ((!exitg1) && (b < 4)) {
      if (!rtIsNaN(rtb_TgabcON[b - 1])) {
        a = b;
        exitg1 = true;
      } else {
        b++;
      }
    }
  }

  if (a == 0) {
    va_new = Tas;
  } else {
    va_new = rtb_TgabcON[a - 1];
    while (a + 1 < 4) {
      if (va_new < rtb_TgabcON[a]) {
        va_new = rtb_TgabcON[a];
      }

      a++;
    }
  }

  if (!tmp_5) {
    a = 1;
  } else {
    a = 0;
    b = 2;
    exitg1 = false;
    while ((!exitg1) && (b < 4)) {
      if (!rtIsNaN(rtb_TgabcON[b - 1])) {
        a = b;
        exitg1 = true;
      } else {
        b++;
      }
    }
  }

  if (a == 0) {
    vb_new = Tas;
  } else {
    vb_new = rtb_TgabcON[a - 1];
    while (a + 1 < 4) {
      if (vb_new > rtb_TgabcON[a]) {
        vb_new = rtb_TgabcON[a];
      }

      a++;
    }
  }

  Toffset = (0.0005 - (va_new - vb_new)) / 2.0 * (1.0 - rtDW.RTneutral) - vb_new;
  Tas += Toffset;
  rtb_avoiddivisionby0 += Toffset;
  vb_new = vdch + Toffset;
  Toffset = 0.0005 - Tas;
  if (0.0005 - Tas < 0.0) {
    Toffset = 0.0;
  } else {
    if (0.0005 - Tas > 0.0005) {
      Toffset = 0.0005;
    }
  }

  vdch = 0.0005 - rtb_avoiddivisionby0;
  if (0.0005 - rtb_avoiddivisionby0 < 0.0) {
    vdch = 0.0;
  } else {
    if (0.0005 - rtb_avoiddivisionby0 > 0.0005) {
      vdch = 0.0005;
    }
  }

  va_new = 0.0005 - vb_new;
  if (0.0005 - vb_new < 0.0) {
    va_new = 0.0;
  } else {
    if (0.0005 - vb_new > 0.0005) {
      va_new = 0.0005;
    }
  }

  Tas += 0.0005;
  if (Tas < 0.0005) {
    Tas = 0.0005;
  } else {
    if (Tas > 0.001) {
      Tas = 0.001;
    }
  }

  rtb_avoiddivisionby0 += 0.0005;
  if (rtb_avoiddivisionby0 < 0.0005) {
    rtb_avoiddivisionby0 = 0.0005;
  } else {
    if (rtb_avoiddivisionby0 > 0.001) {
      rtb_avoiddivisionby0 = 0.001;
    }
  }

  vb_new += 0.0005;
  if (vb_new < 0.0005) {
    vb_new = 0.0005;
  } else {
    if (vb_new > 0.001) {
      vb_new = 0.001;
    }
  }

  if ((sa0 == 6) || (sa0 == 1) || (sa0 == 2)) {
    /* Outport: '<Root>/Out2' */
    rtY.Modulation_Waveforms[0] = (Tas - Toffset) / 0.001;
  } else {
    /* Outport: '<Root>/Out2' */
    rtY.Modulation_Waveforms[0] = (Tas - Toffset) / 0.001 - 1.0;
  }

  if ((sa0 == 2) || (sa0 == 3) || (sa0 == 4)) {
    /* Outport: '<Root>/Out2' */
    rtY.Modulation_Waveforms[1] = (rtb_avoiddivisionby0 - vdch) / 0.001;
  } else {
    /* Outport: '<Root>/Out2' */
    rtY.Modulation_Waveforms[1] = (rtb_avoiddivisionby0 - vdch) / 0.001 - 1.0;
  }

  if ((sa0 == 4) || (sa0 == 5) || (sa0 == 6)) {
    /* Outport: '<Root>/Out2' */
    rtY.Modulation_Waveforms[2] = (vb_new - va_new) / 0.001;
  } else {
    /* Outport: '<Root>/Out2' */
    rtY.Modulation_Waveforms[2] = (vb_new - va_new) / 0.001 - 1.0;
  }

  /* RateTransition: '<S5>/Rate Transition' */
  if (rtM->Timing.RateInteraction.TID0_1 == 1) {
    /* Outport: '<Root>/Out3' */
    rtY.Neutral_Point = rtDW.RateTransition_Buffer0;
  }

  /* End of RateTransition: '<S5>/Rate Transition' */

  /* RelationalOperator: '<S84>/Relational Operator1' */
  rtb_RelationalOperator1 = (rtDW.DiscreteTimeIntegrator1_DSTATE > 0.0009995);

  /* InitialCondition: '<S84>/Initial' incorporates:
   *  Constant: '<S84>/Constant3'
   *  Sum: '<S84>/Add3'
   */
  if (rtDW.Initial_FirstOutputTime) {
    rtDW.Initial_FirstOutputTime = false;
    rtb_ModIndex = 0.0;
  } else {
    rtb_ModIndex = rtDW.DiscreteTimeIntegrator1_DSTATE - 0.001;
  }

  /* End of InitialCondition: '<S84>/Initial' */

  /* DiscreteIntegrator: '<S84>/Discrete-Time Integrator1' */
  if (rtb_RelationalOperator1 && (rtDW.DiscreteTimeIntegrator1_PrevRes <= 0)) {
    rtDW.DiscreteTimeIntegrator1_DSTATE = rtb_ModIndex;
  }

  /* MATLAB Function: '<S84>/Signal Correction' incorporates:
   *  MATLAB Function: '<S15>/Switching Time Calculation'
   */
  switch (sa0) {
   case 1:
    sa0 = 0;
    a = -1;
    b = -1;
    break;

   case 2:
    sa0 = 0;
    a = 0;
    b = -1;
    break;

   case 3:
    sa0 = -1;
    a = 0;
    b = -1;
    break;

   case 4:
    sa0 = -1;
    a = 0;
    b = 0;
    break;

   case 5:
    sa0 = -1;
    a = -1;
    b = 0;
    break;

   default:
    sa0 = 0;
    a = -1;
    b = 0;
    break;
  }

  /* Sum: '<S84>/Sum' incorporates:
   *  DiscreteIntegrator: '<S84>/Discrete-Time Integrator1'
   *  Logic: '<S84>/Logical Operator'
   *  MATLAB Function: '<S15>/Switching Time Calculation'
   *  MATLAB Function: '<S84>/Signal Correction'
   *  RelationalOperator: '<S84>/Relational Operator'
   *  RelationalOperator: '<S84>/Relational Operator3'
   */
  Tas = (real_T)(int8_T)((int8_T)(rtDW.DiscreteTimeIntegrator1_DSTATE >= Toffset)
    ^ (int8_T)(rtDW.DiscreteTimeIntegrator1_DSTATE >= Tas)) + (real_T)sa0;
  rtb_avoiddivisionby0 = (real_T)(int8_T)((int8_T)
    (rtDW.DiscreteTimeIntegrator1_DSTATE >= vdch) ^ (int8_T)
    (rtDW.DiscreteTimeIntegrator1_DSTATE >= rtb_avoiddivisionby0)) + (real_T)a;
  va_new = (real_T)(int8_T)((int8_T)(rtDW.DiscreteTimeIntegrator1_DSTATE >=
    va_new) ^ (int8_T)(rtDW.DiscreteTimeIntegrator1_DSTATE >= vb_new)) + (real_T)
    b;

  /* SimscapeInputBlock: '<S12>/INPUT_1_1_1' incorporates:
   *  Fcn: '<S86>/Fcn'
   */
  rtDW.INPUT_1_1_1[0] = (Tas >= 1.0);
  rtDW.INPUT_1_1_1[1] = 0.0;
  rtDW.INPUT_1_1_1[2] = 0.0;
  rtDW.INPUT_1_1_1_Discrete[0] = !(rtDW.INPUT_1_1_1[0] ==
    rtDW.INPUT_1_1_1_Discrete[1]);
  rtDW.INPUT_1_1_1_Discrete[1] = rtDW.INPUT_1_1_1[0];
  rtDW.INPUT_1_1_1[0] = rtDW.INPUT_1_1_1_Discrete[1];
  rtDW.INPUT_1_1_1[3] = rtDW.INPUT_1_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_2_1_1' incorporates:
   *  Fcn: '<S86>/Fcn1'
   */
  rtDW.INPUT_2_1_1[0] = (Tas >= 0.0);
  rtDW.INPUT_2_1_1[1] = 0.0;
  rtDW.INPUT_2_1_1[2] = 0.0;
  rtDW.INPUT_2_1_1_Discrete[0] = !(rtDW.INPUT_2_1_1[0] ==
    rtDW.INPUT_2_1_1_Discrete[1]);
  rtDW.INPUT_2_1_1_Discrete[1] = rtDW.INPUT_2_1_1[0];
  rtDW.INPUT_2_1_1[0] = rtDW.INPUT_2_1_1_Discrete[1];
  rtDW.INPUT_2_1_1[3] = rtDW.INPUT_2_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_5_1_1' incorporates:
   *  Fcn: '<S86>/Fcn2'
   */
  rtDW.INPUT_5_1_1[0] = (Tas <= 0.0);
  rtDW.INPUT_5_1_1[1] = 0.0;
  rtDW.INPUT_5_1_1[2] = 0.0;
  rtDW.INPUT_5_1_1_Discrete[0] = !(rtDW.INPUT_5_1_1[0] ==
    rtDW.INPUT_5_1_1_Discrete[1]);
  rtDW.INPUT_5_1_1_Discrete[1] = rtDW.INPUT_5_1_1[0];
  rtDW.INPUT_5_1_1[0] = rtDW.INPUT_5_1_1_Discrete[1];
  rtDW.INPUT_5_1_1[3] = rtDW.INPUT_5_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_6_1_1' incorporates:
   *  Fcn: '<S86>/Fcn3'
   */
  rtDW.INPUT_6_1_1[0] = (Tas <= -1.0);
  rtDW.INPUT_6_1_1[1] = 0.0;
  rtDW.INPUT_6_1_1[2] = 0.0;
  rtDW.INPUT_6_1_1_Discrete[0] = !(rtDW.INPUT_6_1_1[0] ==
    rtDW.INPUT_6_1_1_Discrete[1]);
  rtDW.INPUT_6_1_1_Discrete[1] = rtDW.INPUT_6_1_1[0];
  rtDW.INPUT_6_1_1[0] = rtDW.INPUT_6_1_1_Discrete[1];
  rtDW.INPUT_6_1_1[3] = rtDW.INPUT_6_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_7_1_1' incorporates:
   *  Fcn: '<S86>/Fcn4'
   */
  rtDW.INPUT_7_1_1[0] = (rtb_avoiddivisionby0 >= 1.0);
  rtDW.INPUT_7_1_1[1] = 0.0;
  rtDW.INPUT_7_1_1[2] = 0.0;
  rtDW.INPUT_7_1_1_Discrete[0] = !(rtDW.INPUT_7_1_1[0] ==
    rtDW.INPUT_7_1_1_Discrete[1]);
  rtDW.INPUT_7_1_1_Discrete[1] = rtDW.INPUT_7_1_1[0];
  rtDW.INPUT_7_1_1[0] = rtDW.INPUT_7_1_1_Discrete[1];
  rtDW.INPUT_7_1_1[3] = rtDW.INPUT_7_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_8_1_1' incorporates:
   *  Fcn: '<S86>/Fcn5'
   */
  rtDW.INPUT_8_1_1[0] = (rtb_avoiddivisionby0 >= 0.0);
  rtDW.INPUT_8_1_1[1] = 0.0;
  rtDW.INPUT_8_1_1[2] = 0.0;
  rtDW.INPUT_8_1_1_Discrete[0] = !(rtDW.INPUT_8_1_1[0] ==
    rtDW.INPUT_8_1_1_Discrete[1]);
  rtDW.INPUT_8_1_1_Discrete[1] = rtDW.INPUT_8_1_1[0];
  rtDW.INPUT_8_1_1[0] = rtDW.INPUT_8_1_1_Discrete[1];
  rtDW.INPUT_8_1_1[3] = rtDW.INPUT_8_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_9_1_1' incorporates:
   *  Fcn: '<S86>/Fcn6'
   */
  rtDW.INPUT_9_1_1[0] = (rtb_avoiddivisionby0 <= 0.0);
  rtDW.INPUT_9_1_1[1] = 0.0;
  rtDW.INPUT_9_1_1[2] = 0.0;
  rtDW.INPUT_9_1_1_Discrete[0] = !(rtDW.INPUT_9_1_1[0] ==
    rtDW.INPUT_9_1_1_Discrete[1]);
  rtDW.INPUT_9_1_1_Discrete[1] = rtDW.INPUT_9_1_1[0];
  rtDW.INPUT_9_1_1[0] = rtDW.INPUT_9_1_1_Discrete[1];
  rtDW.INPUT_9_1_1[3] = rtDW.INPUT_9_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_10_1_1' incorporates:
   *  Fcn: '<S86>/Fcn7'
   */
  rtDW.INPUT_10_1_1[0] = (rtb_avoiddivisionby0 <= -1.0);
  rtDW.INPUT_10_1_1[1] = 0.0;
  rtDW.INPUT_10_1_1[2] = 0.0;
  rtDW.INPUT_10_1_1_Discrete[0] = !(rtDW.INPUT_10_1_1[0] ==
    rtDW.INPUT_10_1_1_Discrete[1]);
  rtDW.INPUT_10_1_1_Discrete[1] = rtDW.INPUT_10_1_1[0];
  rtDW.INPUT_10_1_1[0] = rtDW.INPUT_10_1_1_Discrete[1];
  rtDW.INPUT_10_1_1[3] = rtDW.INPUT_10_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_11_1_1' incorporates:
   *  Fcn: '<S86>/Fcn8'
   */
  rtDW.INPUT_11_1_1[0] = (va_new >= 1.0);
  rtDW.INPUT_11_1_1[1] = 0.0;
  rtDW.INPUT_11_1_1[2] = 0.0;
  rtDW.INPUT_11_1_1_Discrete[0] = !(rtDW.INPUT_11_1_1[0] ==
    rtDW.INPUT_11_1_1_Discrete[1]);
  rtDW.INPUT_11_1_1_Discrete[1] = rtDW.INPUT_11_1_1[0];
  rtDW.INPUT_11_1_1[0] = rtDW.INPUT_11_1_1_Discrete[1];
  rtDW.INPUT_11_1_1[3] = rtDW.INPUT_11_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_12_1_1' incorporates:
   *  Fcn: '<S86>/Fcn9'
   */
  rtDW.INPUT_12_1_1[0] = (va_new >= 0.0);
  rtDW.INPUT_12_1_1[1] = 0.0;
  rtDW.INPUT_12_1_1[2] = 0.0;
  rtDW.INPUT_12_1_1_Discrete[0] = !(rtDW.INPUT_12_1_1[0] ==
    rtDW.INPUT_12_1_1_Discrete[1]);
  rtDW.INPUT_12_1_1_Discrete[1] = rtDW.INPUT_12_1_1[0];
  rtDW.INPUT_12_1_1[0] = rtDW.INPUT_12_1_1_Discrete[1];
  rtDW.INPUT_12_1_1[3] = rtDW.INPUT_12_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_3_1_1' incorporates:
   *  Fcn: '<S86>/Fcn10'
   */
  rtDW.INPUT_3_1_1[0] = (va_new <= 0.0);
  rtDW.INPUT_3_1_1[1] = 0.0;
  rtDW.INPUT_3_1_1[2] = 0.0;
  rtDW.INPUT_3_1_1_Discrete[0] = !(rtDW.INPUT_3_1_1[0] ==
    rtDW.INPUT_3_1_1_Discrete[1]);
  rtDW.INPUT_3_1_1_Discrete[1] = rtDW.INPUT_3_1_1[0];
  rtDW.INPUT_3_1_1[0] = rtDW.INPUT_3_1_1_Discrete[1];
  rtDW.INPUT_3_1_1[3] = rtDW.INPUT_3_1_1_Discrete[0];

  /* SimscapeInputBlock: '<S12>/INPUT_4_1_1' incorporates:
   *  Fcn: '<S86>/Fcn11'
   */
  rtDW.INPUT_4_1_1[0] = (va_new <= -1.0);
  rtDW.INPUT_4_1_1[1] = 0.0;
  rtDW.INPUT_4_1_1[2] = 0.0;
  rtDW.INPUT_4_1_1_Discrete[0] = !(rtDW.INPUT_4_1_1[0] ==
    rtDW.INPUT_4_1_1_Discrete[1]);
  rtDW.INPUT_4_1_1_Discrete[1] = rtDW.INPUT_4_1_1[0];
  rtDW.INPUT_4_1_1[0] = rtDW.INPUT_4_1_1_Discrete[1];
  rtDW.INPUT_4_1_1[3] = rtDW.INPUT_4_1_1_Discrete[0];

  /* SimscapeExecutionBlock: '<S12>/STATE_1' incorporates:
   *  SimscapeExecutionBlock: '<S12>/OUTPUT_1_0'
   */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  va_new = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0* 4294967296.0)) *
            5.0E-6);
  time = va_new;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 80;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 60;
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
  tmp[0] = rtDW.INPUT_1_1_1[0];
  tmp[1] = rtDW.INPUT_1_1_1[1];
  tmp[2] = rtDW.INPUT_1_1_1[2];
  tmp[3] = rtDW.INPUT_1_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = rtDW.INPUT_2_1_1[0];
  tmp[5] = rtDW.INPUT_2_1_1[1];
  tmp[6] = rtDW.INPUT_2_1_1[2];
  tmp[7] = rtDW.INPUT_2_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = rtDW.INPUT_5_1_1[0];
  tmp[9] = rtDW.INPUT_5_1_1[1];
  tmp[10] = rtDW.INPUT_5_1_1[2];
  tmp[11] = rtDW.INPUT_5_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = rtDW.INPUT_6_1_1[0];
  tmp[13] = rtDW.INPUT_6_1_1[1];
  tmp[14] = rtDW.INPUT_6_1_1[2];
  tmp[15] = rtDW.INPUT_6_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = rtDW.INPUT_7_1_1[0];
  tmp[17] = rtDW.INPUT_7_1_1[1];
  tmp[18] = rtDW.INPUT_7_1_1[2];
  tmp[19] = rtDW.INPUT_7_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = rtDW.INPUT_8_1_1[0];
  tmp[21] = rtDW.INPUT_8_1_1[1];
  tmp[22] = rtDW.INPUT_8_1_1[2];
  tmp[23] = rtDW.INPUT_8_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = rtDW.INPUT_9_1_1[0];
  tmp[25] = rtDW.INPUT_9_1_1[1];
  tmp[26] = rtDW.INPUT_9_1_1[2];
  tmp[27] = rtDW.INPUT_9_1_1[3];
  tmp_0[7] = 28;
  tmp[28] = rtDW.INPUT_10_1_1[0];
  tmp[29] = rtDW.INPUT_10_1_1[1];
  tmp[30] = rtDW.INPUT_10_1_1[2];
  tmp[31] = rtDW.INPUT_10_1_1[3];
  tmp_0[8] = 32;
  tmp[32] = rtDW.INPUT_11_1_1[0];
  tmp[33] = rtDW.INPUT_11_1_1[1];
  tmp[34] = rtDW.INPUT_11_1_1[2];
  tmp[35] = rtDW.INPUT_11_1_1[3];
  tmp_0[9] = 36;
  tmp[36] = rtDW.INPUT_12_1_1[0];
  tmp[37] = rtDW.INPUT_12_1_1[1];
  tmp[38] = rtDW.INPUT_12_1_1[2];
  tmp[39] = rtDW.INPUT_12_1_1[3];
  tmp_0[10] = 40;
  tmp[40] = rtDW.INPUT_3_1_1[0];
  tmp[41] = rtDW.INPUT_3_1_1[1];
  tmp[42] = rtDW.INPUT_3_1_1[2];
  tmp[43] = rtDW.INPUT_3_1_1[3];
  tmp_0[11] = 44;
  tmp[44] = rtDW.INPUT_4_1_1[0];
  tmp[45] = rtDW.INPUT_4_1_1[1];
  tmp[46] = rtDW.INPUT_4_1_1[2];
  tmp[47] = rtDW.INPUT_4_1_1[3];
  tmp_0[12] = 48;
  simulationData->mData->mInputValues.mN = 48;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 13;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mOutputs.mN = 140;
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
  sa0 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (sa0 != 0) {
    tmp_5 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_5) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S12>/STATE_1' */

  /* SimscapeExecutionBlock: '<S12>/OUTPUT_1_0' */
  simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
  time_0 = va_new;
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
  tmp_1[0] = rtDW.INPUT_1_1_1[0];
  tmp_1[1] = rtDW.INPUT_1_1_1[1];
  tmp_1[2] = rtDW.INPUT_1_1_1[2];
  tmp_1[3] = rtDW.INPUT_1_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = rtDW.INPUT_2_1_1[0];
  tmp_1[5] = rtDW.INPUT_2_1_1[1];
  tmp_1[6] = rtDW.INPUT_2_1_1[2];
  tmp_1[7] = rtDW.INPUT_2_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = rtDW.INPUT_5_1_1[0];
  tmp_1[9] = rtDW.INPUT_5_1_1[1];
  tmp_1[10] = rtDW.INPUT_5_1_1[2];
  tmp_1[11] = rtDW.INPUT_5_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = rtDW.INPUT_6_1_1[0];
  tmp_1[13] = rtDW.INPUT_6_1_1[1];
  tmp_1[14] = rtDW.INPUT_6_1_1[2];
  tmp_1[15] = rtDW.INPUT_6_1_1[3];
  tmp_2[4] = 16;
  tmp_1[16] = rtDW.INPUT_7_1_1[0];
  tmp_1[17] = rtDW.INPUT_7_1_1[1];
  tmp_1[18] = rtDW.INPUT_7_1_1[2];
  tmp_1[19] = rtDW.INPUT_7_1_1[3];
  tmp_2[5] = 20;
  tmp_1[20] = rtDW.INPUT_8_1_1[0];
  tmp_1[21] = rtDW.INPUT_8_1_1[1];
  tmp_1[22] = rtDW.INPUT_8_1_1[2];
  tmp_1[23] = rtDW.INPUT_8_1_1[3];
  tmp_2[6] = 24;
  tmp_1[24] = rtDW.INPUT_9_1_1[0];
  tmp_1[25] = rtDW.INPUT_9_1_1[1];
  tmp_1[26] = rtDW.INPUT_9_1_1[2];
  tmp_1[27] = rtDW.INPUT_9_1_1[3];
  tmp_2[7] = 28;
  tmp_1[28] = rtDW.INPUT_10_1_1[0];
  tmp_1[29] = rtDW.INPUT_10_1_1[1];
  tmp_1[30] = rtDW.INPUT_10_1_1[2];
  tmp_1[31] = rtDW.INPUT_10_1_1[3];
  tmp_2[8] = 32;
  tmp_1[32] = rtDW.INPUT_11_1_1[0];
  tmp_1[33] = rtDW.INPUT_11_1_1[1];
  tmp_1[34] = rtDW.INPUT_11_1_1[2];
  tmp_1[35] = rtDW.INPUT_11_1_1[3];
  tmp_2[9] = 36;
  tmp_1[36] = rtDW.INPUT_12_1_1[0];
  tmp_1[37] = rtDW.INPUT_12_1_1[1];
  tmp_1[38] = rtDW.INPUT_12_1_1[2];
  tmp_1[39] = rtDW.INPUT_12_1_1[3];
  tmp_2[10] = 40;
  tmp_1[40] = rtDW.INPUT_3_1_1[0];
  tmp_1[41] = rtDW.INPUT_3_1_1[1];
  tmp_1[42] = rtDW.INPUT_3_1_1[2];
  tmp_1[43] = rtDW.INPUT_3_1_1[3];
  tmp_2[11] = 44;
  tmp_1[44] = rtDW.INPUT_4_1_1[0];
  tmp_1[45] = rtDW.INPUT_4_1_1[1];
  tmp_1[46] = rtDW.INPUT_4_1_1[2];
  tmp_1[47] = rtDW.INPUT_4_1_1[3];
  tmp_2[12] = 48;
  memcpy(&tmp_1[48], &rtDW.STATE_1[0], 140U * sizeof(real_T));
  tmp_2[13] = 188;
  simulationData->mData->mInputValues.mN = 188;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 14;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  simulationData->mData->mOutputs.mN = 5;
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
  sa0 = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (sa0 != 0) {
    tmp_5 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_5) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* Outport: '<Root>/Out4' */
  rtY.Vc_Measured[0] = rtb_OUTPUT_1_0[3];
  rtY.Vc_Measured[1] = rtb_OUTPUT_1_0[4];

  /* ZeroOrderHold: '<S5>/Zero-Order Hold2' incorporates:
   *  UnitDelay: '<S5>/Unit Delay'
   *  UnitDelay: '<S5>/Unit Delay1'
   *  ZeroOrderHold: '<S5>/Zero-Order Hold3'
   */
  if (rtM->Timing.RateInteraction.TID0_1 == 1) {
    rtDW.ZeroOrderHold2 = rtDW.UnitDelay_DSTATE;
    rtDW.ZeroOrderHold3 = rtDW.UnitDelay1_DSTATE;

    /* ZeroOrderHold: '<S5>/Zero-Order Hold' incorporates:
     *  Outport: '<Root>/Out1'
     *  UnitDelay: '<S5>/Unit Delay'
     *  UnitDelay: '<S5>/Unit Delay1'
     */
    rtDW.ZeroOrderHold[0] = rtY.Reference_Voltages[0];
    rtDW.ZeroOrderHold[1] = rtY.Reference_Voltages[1];
    rtDW.ZeroOrderHold[2] = rtY.Reference_Voltages[2];
  }

  /* End of ZeroOrderHold: '<S5>/Zero-Order Hold2' */

  /* Outport: '<Root>/Out5' */
  rtY.ia = rtb_OUTPUT_1_0[0];

  /* Update for Sin: '<Root>/Unit Sine Wave' */
  vb_new = rtDW.lastSin[0];
  rtDW.lastSin[0] = rtDW.lastSin[0] * 0.99999822347173384 + rtDW.lastCos[0] *
    0.0018849544759281136;
  rtDW.lastCos[0] = rtDW.lastCos[0] * 0.99999822347173384 - vb_new *
    0.0018849544759281136;
  vb_new = rtDW.lastSin[1];
  rtDW.lastSin[1] = rtDW.lastSin[1] * 0.99999822347173384 + rtDW.lastCos[1] *
    0.0018849544759281136;
  rtDW.lastCos[1] = rtDW.lastCos[1] * 0.99999822347173384 - vb_new *
    0.0018849544759281136;
  vb_new = rtDW.lastSin[2];
  rtDW.lastSin[2] = rtDW.lastSin[2] * 0.99999822347173384 + rtDW.lastCos[2] *
    0.0018849544759281136;
  rtDW.lastCos[2] = rtDW.lastCos[2] * 0.99999822347173384 - vb_new *
    0.0018849544759281136;

  /* Update for DiscreteIntegrator: '<S84>/Discrete-Time Integrator1' */
  rtDW.DiscreteTimeIntegrator1_DSTATE += 5.0E-6;
  rtDW.DiscreteTimeIntegrator1_PrevRes = (int8_T)rtb_RelationalOperator1;

  /* Update for SimscapeExecutionBlock: '<S12>/STATE_1' */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  time_1 = va_new;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 80;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 60;
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
  tmp_3[0] = rtDW.INPUT_1_1_1[0];
  tmp_3[1] = rtDW.INPUT_1_1_1[1];
  tmp_3[2] = rtDW.INPUT_1_1_1[2];
  tmp_3[3] = rtDW.INPUT_1_1_1[3];
  tmp_4[1] = 4;
  tmp_3[4] = rtDW.INPUT_2_1_1[0];
  tmp_3[5] = rtDW.INPUT_2_1_1[1];
  tmp_3[6] = rtDW.INPUT_2_1_1[2];
  tmp_3[7] = rtDW.INPUT_2_1_1[3];
  tmp_4[2] = 8;
  tmp_3[8] = rtDW.INPUT_5_1_1[0];
  tmp_3[9] = rtDW.INPUT_5_1_1[1];
  tmp_3[10] = rtDW.INPUT_5_1_1[2];
  tmp_3[11] = rtDW.INPUT_5_1_1[3];
  tmp_4[3] = 12;
  tmp_3[12] = rtDW.INPUT_6_1_1[0];
  tmp_3[13] = rtDW.INPUT_6_1_1[1];
  tmp_3[14] = rtDW.INPUT_6_1_1[2];
  tmp_3[15] = rtDW.INPUT_6_1_1[3];
  tmp_4[4] = 16;
  tmp_3[16] = rtDW.INPUT_7_1_1[0];
  tmp_3[17] = rtDW.INPUT_7_1_1[1];
  tmp_3[18] = rtDW.INPUT_7_1_1[2];
  tmp_3[19] = rtDW.INPUT_7_1_1[3];
  tmp_4[5] = 20;
  tmp_3[20] = rtDW.INPUT_8_1_1[0];
  tmp_3[21] = rtDW.INPUT_8_1_1[1];
  tmp_3[22] = rtDW.INPUT_8_1_1[2];
  tmp_3[23] = rtDW.INPUT_8_1_1[3];
  tmp_4[6] = 24;
  tmp_3[24] = rtDW.INPUT_9_1_1[0];
  tmp_3[25] = rtDW.INPUT_9_1_1[1];
  tmp_3[26] = rtDW.INPUT_9_1_1[2];
  tmp_3[27] = rtDW.INPUT_9_1_1[3];
  tmp_4[7] = 28;
  tmp_3[28] = rtDW.INPUT_10_1_1[0];
  tmp_3[29] = rtDW.INPUT_10_1_1[1];
  tmp_3[30] = rtDW.INPUT_10_1_1[2];
  tmp_3[31] = rtDW.INPUT_10_1_1[3];
  tmp_4[8] = 32;
  tmp_3[32] = rtDW.INPUT_11_1_1[0];
  tmp_3[33] = rtDW.INPUT_11_1_1[1];
  tmp_3[34] = rtDW.INPUT_11_1_1[2];
  tmp_3[35] = rtDW.INPUT_11_1_1[3];
  tmp_4[9] = 36;
  tmp_3[36] = rtDW.INPUT_12_1_1[0];
  tmp_3[37] = rtDW.INPUT_12_1_1[1];
  tmp_3[38] = rtDW.INPUT_12_1_1[2];
  tmp_3[39] = rtDW.INPUT_12_1_1[3];
  tmp_4[10] = 40;
  tmp_3[40] = rtDW.INPUT_3_1_1[0];
  tmp_3[41] = rtDW.INPUT_3_1_1[1];
  tmp_3[42] = rtDW.INPUT_3_1_1[2];
  tmp_3[43] = rtDW.INPUT_3_1_1[3];
  tmp_4[11] = 44;
  tmp_3[44] = rtDW.INPUT_4_1_1[0];
  tmp_3[45] = rtDW.INPUT_4_1_1[1];
  tmp_3[46] = rtDW.INPUT_4_1_1[2];
  tmp_3[47] = rtDW.INPUT_4_1_1[3];
  tmp_4[12] = 48;
  simulationData->mData->mInputValues.mN = 48;
  simulationData->mData->mInputValues.mX = &tmp_3[0];
  simulationData->mData->mInputOffsets.mN = 13;
  simulationData->mData->mInputOffsets.mX = &tmp_4[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  sa0 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_UPDATE, simulationData, diagnosticManager);
  if (sa0 != 0) {
    tmp_5 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp_5) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* Update for UnitDelay: '<S5>/Unit Delay' */
  rtDW.UnitDelay_DSTATE = rtb_OUTPUT_1_0[4];

  /* Update for UnitDelay: '<S5>/Unit Delay1' */
  rtDW.UnitDelay1_DSTATE = rtb_OUTPUT_1_0[3];

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
void ee_pwm_three_level_step1(void)    /* Sample time: [0.0001s, 0.0s] */
{
  int_T tid = 1;
  real_T rtb_Product;
  real_T u0;

  /* Step: '<S5>/Step@1cycle' */
  rtb_Product = ((rtM->Timing.clockTick1) * 0.0001);

  /* Gain: '<S74>/Proportional Gain' incorporates:
   *  Sum: '<S5>/Sum'
   */
  u0 = (rtDW.ZeroOrderHold2 - rtDW.ZeroOrderHold3) * 0.04;

  /* Saturate: '<S76>/Saturation' */
  if (u0 > 1.0) {
    u0 = 1.0;
  } else {
    if (u0 < -1.0) {
      u0 = -1.0;
    }
  }

  /* End of Saturate: '<S76>/Saturation' */

  /* Product: '<S5>/Product' incorporates:
   *  Step: '<S5>/Step@1cycle'
   */
  rtb_Product = (real_T)!(rtb_Product < 0.016666666666666666) * u0;

  /* Update for RateTransition: '<S15>/RTabc' */
  rtDW.RTabc_Buffer0[0] = rtDW.ZeroOrderHold[0];
  rtDW.RTabc_Buffer0[1] = rtDW.ZeroOrderHold[1];
  rtDW.RTabc_Buffer0[2] = rtDW.ZeroOrderHold[2];

  /* Update for RateTransition: '<S15>/RTdc' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  rtDW.RTdc_Buffer0 = 1800.0;

  /* Update for RateTransition: '<S15>/RTneutral' */
  rtDW.RTneutral_Buffer0 = rtb_Product;

  /* Update for RateTransition: '<S5>/Rate Transition' */
  rtDW.RateTransition_Buffer0 = rtb_Product;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.0001, which is the step size
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
void ee_pwm_three_level_initialize(void)
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

    /* Start for InitialCondition: '<S84>/Initial' */
    rtDW.Initial_FirstOutputTime = true;

    /* Start for SimscapeExecutionBlock: '<S12>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S12>/OUTPUT_1_0'
     */
    tmp = nesl_lease_simulator("ee_pwm_three_level/Solver Configuration_1", 0, 0);
    rtDW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_1_Simulator);
    if (tmp_0) {
      ee_pwm_three_level_8ad899e3_1_gateway();
      tmp = nesl_lease_simulator("ee_pwm_three_level/Solver Configuration_1", 0,
        0);
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
    modelParameters.mRTWModifiedTimeStamp = 4.89587158E+8;
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
    simulationData->mData->mDiscStates.mN = 80;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 60;
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

    /* End of Start for SimscapeExecutionBlock: '<S12>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S12>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("ee_pwm_three_level/Solver Configuration_1", 1, 0);
    rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      ee_pwm_three_level_8ad899e3_1_gateway();
      tmp = nesl_lease_simulator("ee_pwm_three_level/Solver Configuration_1", 1,
        0);
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
    modelParameters_0.mRTWModifiedTimeStamp = 4.89587158E+8;
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

    /* InitializeConditions for DiscreteIntegrator: '<S84>/Discrete-Time Integrator1' */
    rtDW.DiscreteTimeIntegrator1_PrevRes = 2;

    /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
    rtDW.UnitDelay_DSTATE = 900.0;

    /* InitializeConditions for UnitDelay: '<S5>/Unit Delay1' */
    rtDW.UnitDelay1_DSTATE = 900.0;

    /* Enable for Sin: '<Root>/Unit Sine Wave' */
    rtDW.systemEnable = 1;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
