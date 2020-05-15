/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_sm_control.c
 *
 * Code generated for Simulink model 'ee_sm_control'.
 *
 * Model version                  : 1.123
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 12:42:13 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "ee_sm_control.h"
#define NumBitsPerChar                 8U

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

/* Continuous states */
X rtX;

/* Block signals and states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* private model entry point functions */
extern void ee_sm_control_derivatives(void);
extern real_T rtGetInf(void);
extern real32_T rtGetInfF(void);
extern real_T rtGetMinusInf(void);
extern real32_T rtGetMinusInfF(void);

#ifndef INTERP
# define INTERP(x,x1,x2,y1,y2)         ( (y1)+(((y2) - (y1))/((x2) - (x1)))*((x)-(x1)) )
#endif

#ifndef ZEROTECHNIQUE
#define ZEROTECHNIQUE

typedef enum {
  NORMAL_INTERP,
  AVERAGE_VALUE,
  MIDDLE_VALUE
} ZeroTechnique;

#endif

extern int_T rt_GetLookupIndex(const real_T *x, int_T xlen, real_T u) ;
extern real_T rt_Lookup(const real_T *x, int_T xlen, real_T u, const real_T *y);
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
extern real_T rtGetNaN(void);
extern real32_T rtGetNaNF(void);

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
 * Routine to get the index of the input from a table using binary or
 * interpolation search.
 *
 * Inputs:
 *   *x   : Pointer to table, x[0] ....x[xlen-1]
 *   xlen : Number of values in xtable
 *   u    : input value to look up
 *
 * Output:
 *   idx  : the index into the table such that:
 *         if u is negative
 *            x[idx] <= u < x[idx+1]
 *         else
 *            x[idx] < u <= x[idx+1]
 *
 * Interpolation Search: If the table contains a large number of nearly
 * uniformly spaced entries, i.e., x[n] vs n is linear then the index
 * corresponding to the input can be found in one shot using the linear
 * interpolation formula. Therefore if you have a look-up table block with
 * many data points, using interpolation search might speed up the code.
 * Compile the generated code with the following flag:
 *
 *            make_rtw OPTS=-DDOINTERPSEARCH
 *
 * to enable interpolation search.
 */
int_T rt_GetLookupIndex(const real_T *x, int_T xlen, real_T u)
{
  int_T idx = 0;
  int_T bottom = 0;
  int_T top = xlen-1;
  int_T retValue = 0;
  boolean_T returnStatus = 0U;

#ifdef DOINTERPSEARCH

  real_T offset = 0;

#endif

  /*
   * Deal with the extreme cases first:
   *   if u <= x[bottom] then return idx = bottom
   *   if u >= x[top]    then return idx = top-1
   */
  if (u <= x[bottom]) {
    retValue = bottom;
    returnStatus = 1U;
  } else if (u >= x[top]) {
    retValue = top-1;
    returnStatus = 1U;
  } else {
    /* else required to ensure safe programming, even *
     * if it's expected that it will never be reached */
  }

  if (returnStatus == 0U) {
    if (u < 0) {
      /* For negative input find index such that: x[idx] <= u < x[idx+1] */
      for (;;) {

#ifdef DOINTERPSEARCH

        offset = (u-x[bottom])/(x[top]-x[bottom]);
        idx = bottom + (int_T)((top-bottom)*(offset-DBL_EPSILON));

#else

        idx = (bottom + top)/2;

#endif

        if (u < x[idx]) {
          top = idx - 1;
        } else if (u >= x[idx+1]) {
          bottom = idx + 1;
        } else {
          /* we have x[idx] <= u < x[idx+1], return idx */
          retValue = idx;
          break;
        }
      }
    } else {
      /* For non-negative input find index such that: x[idx] < u <= x[idx+1] */
      for (;;) {

#ifdef DOINTERPSEARCH

        offset = (u-x[bottom])/(x[top]-x[bottom]);
        idx = bottom + (int_T)((top-bottom)*(offset-DBL_EPSILON));

#else

        idx = (bottom + top)/2;

#endif

        if (u <= x[idx]) {
          top = idx - 1;
        } else if (u > x[idx+1]) {
          bottom = idx + 1;
        } else {
          /* we have x[idx] < u <= x[idx+1], return idx */
          retValue = idx;
          break;
        }
      }
    }
  }

  return retValue;
}

/* 1D lookup routine for data type of real_T. */
real_T rt_Lookup(const real_T *x, int_T xlen, real_T u, const real_T *y)
{
  int_T idx = rt_GetLookupIndex(x, xlen, u);
  real_T num = y[idx+1] - y[idx];
  real_T den = x[idx+1] - x[idx];

  /* Due to the way the binary search is implemented
     in rt_look.c (rt_GetLookupIndex), den cannot be
     0.  Equivalently, m cannot be inf or nan. */
  real_T m = num/den;
  return (y[idx] + (m * (u - x[idx])));
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
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 2;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  ee_sm_control_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  ee_sm_control_step();
  ee_sm_control_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  ee_sm_control_step();
  ee_sm_control_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void ee_sm_control_step(void)
{
  /* local block i/o variables */
  real_T rtb_OUTPUT_1_0[6];
  real_T rtb_uT;
  real_T rtb_uT_f;
  real_T rtb_Gain_f;
  real_T rtb_uT1;
  real_T rtb_uT_d;
  boolean_T rtb_Compare;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_Compare_b;
  if (rtmIsMajorTimeStep(rtM)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&rtM->solverInfo,((rtM->Timing.clockTick0+1)*
      rtM->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(rtM)) {
    rtM->Timing.t[0] = rtsiGetT(&rtM->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    real_T tmp_0[16];
    int_T tmp_1[5];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
    char *msg;
    real_T time_0;
    real_T tmp_3[156];
    int_T tmp_4[6];
    real_T rtb_T1T2;
    real_T rtb_MinMax2;
    real_T rtb_MinMax1;
    real_T rtb_I_N;
    real_T rtb_UnitDelay;
    real_T rtb_Integrator_m;
    real_T rtb_Gain1_idx_0;
    real_T rtb_Gain1_idx_1;
    if (rtmIsMajorTimeStep(rtM)) {
      /* DiscreteIntegrator: '<S31>/Integrator' */
      if (rtDW.Integrator_PrevResetState != 0) {
        rtDW.Integrator_DSTATE = 1.4829393536737527;
        if (rtDW.Integrator_DSTATE >= (rtInf)) {
          rtDW.Integrator_DSTATE = (rtInf);
        } else {
          if (rtDW.Integrator_DSTATE <= 0.0) {
            rtDW.Integrator_DSTATE = 0.0;
          }
        }
      }

      if (rtDW.Integrator_DSTATE >= (rtInf)) {
        rtDW.Integrator_DSTATE = (rtInf);
      } else {
        if (rtDW.Integrator_DSTATE <= 0.0) {
          rtDW.Integrator_DSTATE = 0.0;
        }
      }

      rtb_Integrator_m = rtDW.Integrator_DSTATE;

      /* UnitDelay: '<S1>/Unit Delay' */
      rtb_UnitDelay = rtDW.UnitDelay_DSTATE;

      /* Gain: '<S27>/Gain' incorporates:
       *  DiscreteIntegrator: '<S31>/Integrator'
       *  Fcn: '<S27>/Prevent divide by zero'
       *  Product: '<S27>/Divide'
       *  UnitDelay: '<S1>/Unit Delay'
       */
      rtb_I_N = rtDW.UnitDelay_DSTATE / ((real_T)(rtDW.Integrator_DSTATE == 0.0)
        * 2.2204460492503131e-16 + rtDW.Integrator_DSTATE) * 0.2;

      /* MATLAB Function: '<S27>/fex' */
      if (rtb_I_N <= 0.43301270189221935) {
        rtb_I_N = -0.57735026918962584 * rtb_I_N + 1.0;
      } else if (rtb_I_N <= 0.75) {
        rtb_I_N = sqrt(0.75 - rtb_I_N * rtb_I_N);
      } else if (rtb_I_N <= 1.0) {
        rtb_I_N = -1.7320508075688772 * rtb_I_N + 1.7320508075688772;
      } else {
        rtb_I_N = 0.0;
      }

      /* End of MATLAB Function: '<S27>/fex' */

      /* SimscapeInputBlock: '<S55>/INPUT_1_1_1' incorporates:
       *  DiscreteIntegrator: '<S31>/Integrator'
       *  Product: '<S16>/Product'
       */
      if (rtmIsMajorTimeStep(rtM)) {
        rtDW.INPUT_1_1_1[0] = rtDW.Integrator_DSTATE * rtb_I_N;
        rtDW.INPUT_1_1_1[1] = 0.0;
        rtDW.INPUT_1_1_1[2] = 0.0;
        rtDW.INPUT_1_1_1_Discrete[0] = !(rtDW.INPUT_1_1_1[0] ==
          rtDW.INPUT_1_1_1_Discrete[1]);
        rtDW.INPUT_1_1_1_Discrete[1] = rtDW.INPUT_1_1_1[0];
        rtDW.INPUT_1_1_1[0] = rtDW.INPUT_1_1_1_Discrete[1];
        rtDW.INPUT_1_1_1[3] = rtDW.INPUT_1_1_1_Discrete[0];
      }

      /* End of SimscapeInputBlock: '<S55>/INPUT_1_1_1' */
    }

    /* Step: '<Root>/Step off' incorporates:
     *  Step: '<Root>/Step on'
     */
    rtb_I_N = rtM->Timing.t[0];

    /* SimscapeInputBlock: '<S55>/INPUT_3_1_1' incorporates:
     *  Step: '<Root>/Step off'
     */
    rtDW.INPUT_3_1_1[0] = !(rtb_I_N < 3.0);
    rtDW.INPUT_3_1_1[1] = 0.0;
    rtDW.INPUT_3_1_1[2] = 0.0;
    rtDW.INPUT_3_1_1[3] = 0.0;

    /* SimscapeInputBlock: '<S55>/INPUT_4_1_1' incorporates:
     *  Step: '<Root>/Step on'
     */
    rtDW.INPUT_4_1_1[0] = (rtb_I_N < 9.0);
    rtDW.INPUT_4_1_1[1] = 0.0;
    rtDW.INPUT_4_1_1[2] = 0.0;
    rtDW.INPUT_4_1_1[3] = 0.0;

    /* Integrator: '<S46>/Integrator' */
    rtb_I_N = rtX.Integrator_CSTATE;

    /* SimscapeInputBlock: '<S55>/INPUT_2_1_1' incorporates:
     *  Gain: '<S2>/scale by base_torque'
     *  Integrator: '<S46>/Integrator'
     */
    rtDW.INPUT_2_1_1[0] = 1.47218E+6 * rtX.Integrator_CSTATE;
    rtDW.INPUT_2_1_1[1] = 0.0;
    rtDW.INPUT_2_1_1[2] = 0.0;
    rtDW.INPUT_2_1_1[3] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      /* SimscapeExecutionBlock: '<S55>/STATE_1' incorporates:
       *  SimscapeExecutionBlock: '<S55>/OUTPUT_1_0'
       */
      simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
      rtb_MinMax1 = rtM->Timing.t[0];
      time = rtb_MinMax1;
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &time;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 140;
      simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
      simulationData->mData->mModeVector.mN = 42;
      simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      tmp_1[0] = 0;
      tmp_0[0] = rtDW.INPUT_1_1_1[0];
      tmp_0[1] = rtDW.INPUT_1_1_1[1];
      tmp_0[2] = rtDW.INPUT_1_1_1[2];
      tmp_0[3] = rtDW.INPUT_1_1_1[3];
      tmp_1[1] = 4;
      tmp_0[4] = rtDW.INPUT_3_1_1[0];
      tmp_0[5] = rtDW.INPUT_3_1_1[1];
      tmp_0[6] = rtDW.INPUT_3_1_1[2];
      tmp_0[7] = rtDW.INPUT_3_1_1[3];
      tmp_1[2] = 8;
      tmp_0[8] = rtDW.INPUT_4_1_1[0];
      tmp_0[9] = rtDW.INPUT_4_1_1[1];
      tmp_0[10] = rtDW.INPUT_4_1_1[2];
      tmp_0[11] = rtDW.INPUT_4_1_1[3];
      tmp_1[3] = 12;
      tmp_0[12] = rtDW.INPUT_2_1_1[0];
      tmp_0[13] = rtDW.INPUT_2_1_1[1];
      tmp_0[14] = rtDW.INPUT_2_1_1[2];
      tmp_0[15] = rtDW.INPUT_2_1_1[3];
      tmp_1[4] = 16;
      simulationData->mData->mInputValues.mN = 16;
      simulationData->mData->mInputValues.mX = &tmp_0[0];
      simulationData->mData->mInputOffsets.mN = 5;
      simulationData->mData->mInputOffsets.mX = &tmp_1[0];
      simulationData->mData->mOutputs.mN = 140;
      simulationData->mData->mOutputs.mX = &rtDW.STATE_1[0];
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      tmp = rtmIsMajorTimeStep(rtM);
      simulationData->mData->mIsFundamentalSampleHit = tmp;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      simulationData->mData->mCstateHasChanged = false;
      diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
        NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
      if (tmp_2 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
        if (tmp) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(rtM, msg);
        }
      }

      /* End of SimscapeExecutionBlock: '<S55>/STATE_1' */

      /* SimscapeExecutionBlock: '<S55>/OUTPUT_1_0' */
      simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
      time_0 = rtb_MinMax1;
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &time_0;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 0;
      simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_1_0_Discrete;
      simulationData->mData->mModeVector.mN = 0;
      simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_1_0_Modes;
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
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
      tmp_3[4] = rtDW.INPUT_3_1_1[0];
      tmp_3[5] = rtDW.INPUT_3_1_1[1];
      tmp_3[6] = rtDW.INPUT_3_1_1[2];
      tmp_3[7] = rtDW.INPUT_3_1_1[3];
      tmp_4[2] = 8;
      tmp_3[8] = rtDW.INPUT_4_1_1[0];
      tmp_3[9] = rtDW.INPUT_4_1_1[1];
      tmp_3[10] = rtDW.INPUT_4_1_1[2];
      tmp_3[11] = rtDW.INPUT_4_1_1[3];
      tmp_4[3] = 12;
      tmp_3[12] = rtDW.INPUT_2_1_1[0];
      tmp_3[13] = rtDW.INPUT_2_1_1[1];
      tmp_3[14] = rtDW.INPUT_2_1_1[2];
      tmp_3[15] = rtDW.INPUT_2_1_1[3];
      tmp_4[4] = 16;
      memcpy(&tmp_3[16], &rtDW.STATE_1[0], 140U * sizeof(real_T));
      tmp_4[5] = 156;
      simulationData->mData->mInputValues.mN = 156;
      simulationData->mData->mInputValues.mX = &tmp_3[0];
      simulationData->mData->mInputOffsets.mN = 6;
      simulationData->mData->mInputOffsets.mX = &tmp_4[0];
      simulationData->mData->mOutputs.mN = 6;
      simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      tmp = rtmIsMajorTimeStep(rtM);
      simulationData->mData->mIsFundamentalSampleHit = tmp;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      simulationData->mData->mCstateHasChanged = false;
      diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
        NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
      if (tmp_2 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
        if (tmp) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(rtM, msg);
        }
      }

      /* Outport: '<Root>/Out1' */
      rtY.Terminal_Voltage = rtb_OUTPUT_1_0[4];

      /* Outport: '<Root>/Out2' */
      rtY.Rotor_Velocity = rtb_OUTPUT_1_0[5];

      /* Gain: '<S10>/Gain1' */
      rtb_Gain1_idx_0 = 0.0 * rtb_OUTPUT_1_0[1];
      rtb_Gain1_idx_1 = 0.0 * rtb_OUTPUT_1_0[1];

      /* Math: '<S10>/Math Function' */
      rtb_Gain1_idx_0 *= rtb_Gain1_idx_0;

      /* RelationalOperator: '<S37>/Compare' incorporates:
       *  Constant: '<S35>/Time constant'
       *  Constant: '<S37>/Constant'
       *  Sum: '<S35>/Sum1'
       */
      rtb_Compare = (0.02 - rtDW.Probe_e[0] <= 0.0);

      /* Logic: '<S22>/Logical Operator' incorporates:
       *  Constant: '<S22>/Lag time constant'
       *  Constant: '<S24>/Constant'
       *  RelationalOperator: '<S24>/Compare'
       *  Sum: '<S22>/Sum1'
       */
      rtb_LogicalOperator = (0.0 - rtDW.Probe[0] <= 0.0);

      /* MinMax: '<S22>/MinMax1' */
      if (rtDW.Probe[0] > 0.0) {
        rtb_MinMax1 = rtDW.Probe[0];
      } else {
        rtb_MinMax1 = 0.0;
      }

      /* End of MinMax: '<S22>/MinMax1' */

      /* MinMax: '<S22>/MinMax2' */
      if ((0.0 > rtDW.Probe[0]) || rtIsNaN(rtDW.Probe[0])) {
        rtb_MinMax2 = 0.0;
      } else {
        rtb_MinMax2 = rtDW.Probe[0];
      }

      /* End of MinMax: '<S22>/MinMax2' */

      /* Switch: '<S22>/Switch' incorporates:
       *  Constant: '<S22>/Constant'
       *  Fcn: '<S22>/Avoid Divide by Zero2'
       *  Product: '<S22>/product2'
       */
      if (rtb_LogicalOperator) {
        rtb_T1T2 = 1.0;
      } else {
        rtb_T1T2 = rtb_MinMax1 / ((real_T)(rtb_MinMax2 == 0.0) *
          2.2204460492503131e-16 + rtb_MinMax2);
      }

      /* End of Switch: '<S22>/Switch' */

      /* RelationalOperator: '<S41>/Compare' incorporates:
       *  Constant: '<S39>/Time constant'
       *  Constant: '<S41>/Constant'
       *  Sum: '<S39>/Sum1'
       */
      rtb_Compare_b = (0.0 - rtDW.Probe_i[0] <= 0.0);

      /* Sum: '<S10>/Sum3' incorporates:
       *  Math: '<S10>/Math Function'
       *  Sqrt: '<S10>/Sqrt'
       *  Sum: '<S10>/Sum5'
       */
      rtb_Gain1_idx_0 = sqrt(rtb_Gain1_idx_1 * rtb_Gain1_idx_1 + rtb_Gain1_idx_0)
        + rtb_OUTPUT_1_0[2];

      /* DiscreteIntegrator: '<S42>/Integrator' */
      if (rtDW.Integrator_IC_LOADING != 0) {
        rtDW.Integrator_DSTATE_d = rtb_Gain1_idx_0;
      }

      if (rtb_Compare_b || (rtDW.Integrator_PrevResetState_h != 0)) {
        rtDW.Integrator_DSTATE_d = rtb_Gain1_idx_0;
      }

      /* Gain: '<S32>/Minimum sampling to time constant ratio' */
      rtb_Gain1_idx_1 = 10.0 * rtDW.Probe_o[0];

      /* Sum: '<S16>/Sum2' incorporates:
       *  Gain: '<S16>/Gain2'
       *  Lookup: '<S29>/Saturation'
       *  Product: '<S29>/Product'
       */
      rtb_Integrator_m = (rtb_Integrator_m * rt_Lookup(rtConstP.Saturation_XData,
        3, rtb_Integrator_m, rtConstP.Saturation_YData) + rtb_Integrator_m) +
        0.38 * rtb_UnitDelay;

      /* DiscreteIntegrator: '<S34>/Integrator' */
      if (rtDW.Integrator_IC_LOADING_g != 0) {
        rtDW.Integrator_DSTATE_b = rtb_Integrator_m;
      }

      if (rtDW.Integrator_PrevResetState_b != 0) {
        rtDW.Integrator_DSTATE_b = rtb_Integrator_m;
      }

      /* MinMax: '<S32>/MinMax' */
      if (!(rtb_Gain1_idx_1 > 1.0)) {
        rtb_Gain1_idx_1 = 1.0;
      }

      /* End of MinMax: '<S32>/MinMax' */

      /* Product: '<S17>/1//T' incorporates:
       *  DiscreteIntegrator: '<S34>/Integrator'
       *  Sum: '<S17>/Sum1'
       */
      rtb_uT = 1.0 / rtb_Gain1_idx_1 * (rtb_Integrator_m -
        rtDW.Integrator_DSTATE_b);

      /* Sum: '<S10>/Sum1' incorporates:
       *  Constant: '<S10>/Constant'
       *  Constant: '<S1>/Constant4'
       *  DiscreteIntegrator: '<S42>/Integrator'
       *  Gain: '<S17>/Gain'
       *  Sum: '<S10>/Sum'
       */
      rtb_UnitDelay = ((1.0 - rtDW.Integrator_DSTATE_d) + 0.0050228333760635457)
        - 0.03 * rtb_uT;

      /* DiscreteIntegrator: '<S26>/Integrator' */
      if (rtDW.Integrator_IC_LOADING_j != 0) {
        rtDW.Integrator_DSTATE_dj = rtb_UnitDelay;
      }

      if (rtb_LogicalOperator || (rtDW.Integrator_PrevResetState_m != 0)) {
        rtDW.Integrator_DSTATE_dj = rtb_UnitDelay;
      }

      /* Switch: '<S22>/Switch1' incorporates:
       *  Bias: '<S22>/Bias'
       *  Constant: '<S22>/Constant1'
       *  Fcn: '<S22>/Avoid Divide by Zero1'
       *  Product: '<S22>/product1'
       */
      if (rtb_LogicalOperator) {
        rtb_MinMax2 = 0.0;
      } else {
        rtb_MinMax2 = rtb_MinMax2 / ((real_T)(rtb_MinMax1 == 0.0) *
          2.2204460492503131e-16 + rtb_MinMax1) + -1.0;
      }

      /* End of Switch: '<S22>/Switch1' */

      /* Product: '<S15>/T1//T2' incorporates:
       *  DiscreteIntegrator: '<S26>/Integrator'
       *  Product: '<S15>/T2//T1-1'
       *  Sum: '<S15>/Sum2'
       */
      rtb_T1T2 *= rtDW.Integrator_DSTATE_dj * rtb_MinMax2 + rtb_UnitDelay;

      /* Gain: '<S20>/K' */
      rtb_UnitDelay = 400.0 * rtb_T1T2;

      /* DiscreteIntegrator: '<S38>/Integrator' */
      if (rtDW.Integrator_IC_LOADING_b != 0) {
        rtDW.Integrator_DSTATE_m = rtb_UnitDelay;
        if (rtDW.Integrator_DSTATE_m >= 14.5) {
          rtDW.Integrator_DSTATE_m = 14.5;
        } else {
          if (rtDW.Integrator_DSTATE_m <= -14.5) {
            rtDW.Integrator_DSTATE_m = -14.5;
          }
        }
      }

      if (rtb_Compare || (rtDW.Integrator_PrevResetState_e != 0)) {
        rtDW.Integrator_DSTATE_m = rtb_UnitDelay;
        if (rtDW.Integrator_DSTATE_m >= 14.5) {
          rtDW.Integrator_DSTATE_m = 14.5;
        } else {
          if (rtDW.Integrator_DSTATE_m <= -14.5) {
            rtDW.Integrator_DSTATE_m = -14.5;
          }
        }
      }

      if (rtDW.Integrator_DSTATE_m >= 14.5) {
        rtDW.Integrator_DSTATE_m = 14.5;
      } else {
        if (rtDW.Integrator_DSTATE_m <= -14.5) {
          rtDW.Integrator_DSTATE_m = -14.5;
        }
      }

      /* MinMax: '<S35>/Max' */
      if (rtDW.Probe_e[0] > 0.02) {
        rtb_MinMax2 = rtDW.Probe_e[0];
      } else {
        rtb_MinMax2 = 0.02;
      }

      /* End of MinMax: '<S35>/Max' */

      /* Product: '<S20>/1//T' incorporates:
       *  DiscreteIntegrator: '<S38>/Integrator'
       *  Sum: '<S20>/Sum1'
       */
      rtb_uT_f = 1.0 / rtb_MinMax2 * (rtb_UnitDelay - rtDW.Integrator_DSTATE_m);

      /* MinMax: '<S19>/HV Gate' incorporates:
       *  DiscreteIntegrator: '<S38>/Integrator'
       */
      rtb_MinMax2 = rtDW.Integrator_DSTATE_m;
      if ((!(rtb_MinMax2 > rtDW.Integrator_DSTATE_m)) && (!rtIsNaN
           (rtDW.Integrator_DSTATE_m))) {
        rtb_MinMax2 = rtDW.Integrator_DSTATE_m;
      }

      /* End of MinMax: '<S19>/HV Gate' */

      /* Saturate: '<S10>/E_FE maxmin' */
      if (rtb_MinMax2 > 6.03) {
        rtb_MinMax2 = 6.03;
      } else {
        if (rtb_MinMax2 < -5.43) {
          rtb_MinMax2 = -5.43;
        }
      }

      /* End of Saturate: '<S10>/E_FE maxmin' */

      /* Gain: '<S16>/Gain' incorporates:
       *  Sum: '<S16>/Sum4'
       */
      rtb_Gain_f = (rtb_MinMax2 - rtb_Integrator_m) * 1.25;

      /* Product: '<S15>/1//T1' incorporates:
       *  DiscreteIntegrator: '<S26>/Integrator'
       *  Fcn: '<S22>/Avoid Divide by Zero'
       *  Sum: '<S15>/Sum1'
       */
      rtb_uT1 = 1.0 / ((real_T)(rtb_MinMax1 == 0.0) * 2.2204460492503131e-16 +
                       rtb_MinMax1) * (rtb_T1T2 - rtDW.Integrator_DSTATE_dj);

      /* MinMax: '<S39>/Max' */
      if (rtDW.Probe_i[0] > 0.0) {
        rtb_MinMax2 = rtDW.Probe_i[0];
      } else {
        rtb_MinMax2 = 0.0;
      }

      /* End of MinMax: '<S39>/Max' */

      /* Product: '<S21>/1//T' incorporates:
       *  DiscreteIntegrator: '<S42>/Integrator'
       *  Fcn: '<S39>/Avoid Divide by Zero'
       *  Sum: '<S21>/Sum1'
       */
      rtb_uT_d = 1.0 / ((real_T)(rtb_MinMax2 == 0.0) * 2.2204460492503131e-16 +
                        rtb_MinMax2) * (rtb_Gain1_idx_0 -
        rtDW.Integrator_DSTATE_d);

      /* Sum: '<S45>/Delta speed' incorporates:
       *  Constant: '<S45>/Speed_ref'
       */
      rtb_MinMax2 = rtb_OUTPUT_1_0[3] - 0.998;

      /* Sum: '<S45>/Delta load setpoint' incorporates:
       *  Constant: '<S45>/Load_setpoint'
       *  Gain: '<S45>/1//droop'
       */
      rtDW.Deltaloadsetpoint = 0.5 - 20.0 * rtb_MinMax2;
    }

    /* Gain: '<S45>/1//T_G' incorporates:
     *  Integrator: '<S45>/Integrator'
     *  Sum: '<S45>/Subtract'
     */
    rtDW.uT_G = (rtDW.Deltaloadsetpoint - rtX.Integrator_CSTATE_k) * 5.0;

    /* Gain: '<S46>/1//T_CH' incorporates:
     *  Integrator: '<S45>/Integrator'
     *  Sum: '<S46>/Sum'
     */
    rtDW.uT_CH = (rtX.Integrator_CSTATE_k - rtb_I_N) * 3.3333333333333335;
  }

  if (rtmIsMajorTimeStep(rtM)) {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    real_T tmp_0[16];
    int_T tmp_1[5];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
    char *msg;
    if (rtmIsMajorTimeStep(rtM)) {
      /* Update for DiscreteIntegrator: '<S31>/Integrator' */
      rtDW.Integrator_DSTATE += 0.001 * rtb_Gain_f;
      if (rtDW.Integrator_DSTATE >= (rtInf)) {
        rtDW.Integrator_DSTATE = (rtInf);
      } else {
        if (rtDW.Integrator_DSTATE <= 0.0) {
          rtDW.Integrator_DSTATE = 0.0;
        }
      }

      rtDW.Integrator_PrevResetState = 0;

      /* End of Update for DiscreteIntegrator: '<S31>/Integrator' */

      /* Update for UnitDelay: '<S1>/Unit Delay' */
      rtDW.UnitDelay_DSTATE = rtb_OUTPUT_1_0[0];

      /* Update for SimscapeExecutionBlock: '<S55>/STATE_1' */
      simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
      time = rtM->Timing.t[0];
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &time;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 140;
      simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
      simulationData->mData->mModeVector.mN = 42;
      simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      tmp_1[0] = 0;
      tmp_0[0] = rtDW.INPUT_1_1_1[0];
      tmp_0[1] = rtDW.INPUT_1_1_1[1];
      tmp_0[2] = rtDW.INPUT_1_1_1[2];
      tmp_0[3] = rtDW.INPUT_1_1_1[3];
      tmp_1[1] = 4;
      tmp_0[4] = rtDW.INPUT_3_1_1[0];
      tmp_0[5] = rtDW.INPUT_3_1_1[1];
      tmp_0[6] = rtDW.INPUT_3_1_1[2];
      tmp_0[7] = rtDW.INPUT_3_1_1[3];
      tmp_1[2] = 8;
      tmp_0[8] = rtDW.INPUT_4_1_1[0];
      tmp_0[9] = rtDW.INPUT_4_1_1[1];
      tmp_0[10] = rtDW.INPUT_4_1_1[2];
      tmp_0[11] = rtDW.INPUT_4_1_1[3];
      tmp_1[3] = 12;
      tmp_0[12] = rtDW.INPUT_2_1_1[0];
      tmp_0[13] = rtDW.INPUT_2_1_1[1];
      tmp_0[14] = rtDW.INPUT_2_1_1[2];
      tmp_0[15] = rtDW.INPUT_2_1_1[3];
      tmp_1[4] = 16;
      simulationData->mData->mInputValues.mN = 16;
      simulationData->mData->mInputValues.mX = &tmp_0[0];
      simulationData->mData->mInputOffsets.mN = 5;
      simulationData->mData->mInputOffsets.mX = &tmp_1[0];
      diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
        NESL_SIM_UPDATE, simulationData, diagnosticManager);
      if (tmp_2 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
        if (tmp) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(rtM, msg);
        }
      }

      /* End of Update for SimscapeExecutionBlock: '<S55>/STATE_1' */

      /* Update for DiscreteIntegrator: '<S42>/Integrator' */
      rtDW.Integrator_IC_LOADING = 0U;
      if (!rtb_Compare_b) {
        rtDW.Integrator_DSTATE_d += 0.001 * rtb_uT_d;
      }

      rtDW.Integrator_PrevResetState_h = (int8_T)rtb_Compare_b;

      /* End of Update for DiscreteIntegrator: '<S42>/Integrator' */

      /* Update for DiscreteIntegrator: '<S34>/Integrator' */
      rtDW.Integrator_IC_LOADING_g = 0U;
      rtDW.Integrator_DSTATE_b += 0.001 * rtb_uT;
      rtDW.Integrator_PrevResetState_b = 0;

      /* Update for DiscreteIntegrator: '<S26>/Integrator' */
      rtDW.Integrator_IC_LOADING_j = 0U;
      if (!rtb_LogicalOperator) {
        rtDW.Integrator_DSTATE_dj += 0.001 * rtb_uT1;
      }

      rtDW.Integrator_PrevResetState_m = (int8_T)rtb_LogicalOperator;

      /* End of Update for DiscreteIntegrator: '<S26>/Integrator' */

      /* Update for DiscreteIntegrator: '<S38>/Integrator' */
      rtDW.Integrator_IC_LOADING_b = 0U;
      if (!rtb_Compare) {
        rtDW.Integrator_DSTATE_m += 0.001 * rtb_uT_f;
        if (rtDW.Integrator_DSTATE_m >= 14.5) {
          rtDW.Integrator_DSTATE_m = 14.5;
        } else {
          if (rtDW.Integrator_DSTATE_m <= -14.5) {
            rtDW.Integrator_DSTATE_m = -14.5;
          }
        }
      }

      rtDW.Integrator_PrevResetState_e = (int8_T)rtb_Compare;

      /* End of Update for DiscreteIntegrator: '<S38>/Integrator' */
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(rtM)) {
    rt_ertODEUpdateContinuousStates(&rtM->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++rtM->Timing.clockTick0;
    rtM->Timing.t[0] = rtsiGetSolverStopTime(&rtM->solverInfo);

    {
      /* Update absolute timer for sample time: [0.001s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.001, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      rtM->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void ee_sm_control_derivatives(void)
{
  XDot *_rtXdot;
  _rtXdot = ((XDot *) rtM->derivs);

  /* Derivatives for Integrator: '<S46>/Integrator' */
  _rtXdot->Integrator_CSTATE = rtDW.uT_CH;

  /* Derivatives for Integrator: '<S45>/Integrator' */
  _rtXdot->Integrator_CSTATE_k = rtDW.uT_G;
}

/* Model initialize function */
void ee_sm_control_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&rtM->solverInfo, &rtM->Timing.simTimeStep);
    rtsiSetTPtr(&rtM->solverInfo, &rtmGetTPtr(rtM));
    rtsiSetStepSizePtr(&rtM->solverInfo, &rtM->Timing.stepSize0);
    rtsiSetdXPtr(&rtM->solverInfo, &rtM->derivs);
    rtsiSetContStatesPtr(&rtM->solverInfo, (real_T **) &rtM->contStates);
    rtsiSetNumContStatesPtr(&rtM->solverInfo, &rtM->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&rtM->solverInfo,
      &rtM->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&rtM->solverInfo,
      &rtM->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&rtM->solverInfo,
      &rtM->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&rtM->solverInfo, (&rtmGetErrorStatus(rtM)));
    rtsiSetRTModelPtr(&rtM->solverInfo, rtM);
  }

  rtsiSetSimTimeStep(&rtM->solverInfo, MAJOR_TIME_STEP);
  rtM->intgData.y = rtM->odeY;
  rtM->intgData.f[0] = rtM->odeF[0];
  rtM->intgData.f[1] = rtM->odeF[1];
  rtM->intgData.f[2] = rtM->odeF[2];
  rtM->contStates = ((X *) &rtX);
  rtsiSetSolverData(&rtM->solverInfo, (void *)&rtM->intgData);
  rtsiSetSolverName(&rtM->solverInfo,"ode3");
  rtmSetTPtr(rtM, &rtM->Timing.tArray[0]);
  rtM->Timing.stepSize0 = 0.001;

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

    /* Start for SimscapeExecutionBlock: '<S55>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S55>/OUTPUT_1_0'
     */
    tmp = nesl_lease_simulator("ee_sm_control/Solver Configuration_1", 0, 0);
    rtDW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_1_Simulator);
    if (tmp_0) {
      ee_sm_control_fab709d2_1_gateway();
      tmp = nesl_lease_simulator("ee_sm_control/Solver Configuration_1", 0, 0);
      rtDW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    rtDW.STATE_1_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters.mRTWModifiedTimeStamp = 4.89588079E+8;
    tmp_1 = 0.001;
    modelParameters.mSolverTolerance = tmp_1;
    tmp_1 = 0.001;
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
    time_tmp = rtM->Timing.t[0];
    time = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 140;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 42;
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

    /* End of Start for SimscapeExecutionBlock: '<S55>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S55>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("ee_sm_control/Solver Configuration_1", 1, 0);
    rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      ee_sm_control_fab709d2_1_gateway();
      tmp = nesl_lease_simulator("ee_sm_control/Solver Configuration_1", 1, 0);
      rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    rtDW.OUTPUT_1_0_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_0.mRTWModifiedTimeStamp = 4.89588079E+8;
    tmp_1 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_1;
    tmp_1 = 0.001;
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

    /* Start for Probe: '<S22>/Probe' */
    rtDW.Probe[0] = 0.001;
    rtDW.Probe[1] = 0.0;

    /* Start for Probe: '<S39>/Probe' */
    rtDW.Probe_i[0] = 0.001;
    rtDW.Probe_i[1] = 0.0;

    /* Start for Probe: '<S32>/Probe' */
    rtDW.Probe_o[0] = 0.001;
    rtDW.Probe_o[1] = 0.0;

    /* Start for Probe: '<S35>/Probe' */
    rtDW.Probe_e[0] = 0.001;
    rtDW.Probe_e[1] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S31>/Integrator' */
    rtDW.Integrator_DSTATE = 1.4829393536737527;
    if (rtDW.Integrator_DSTATE >= (rtInf)) {
      rtDW.Integrator_DSTATE = (rtInf);
    } else {
      if (rtDW.Integrator_DSTATE <= 0.0) {
        rtDW.Integrator_DSTATE = 0.0;
      }
    }

    /* End of InitializeConditions for DiscreteIntegrator: '<S31>/Integrator' */

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
    rtDW.UnitDelay_DSTATE = 1.32943;

    /* InitializeConditions for Integrator: '<S46>/Integrator' */
    rtX.Integrator_CSTATE = 0.451061;

    /* InitializeConditions for DiscreteIntegrator: '<S42>/Integrator' */
    rtDW.Integrator_IC_LOADING = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S34>/Integrator' */
    rtDW.Integrator_IC_LOADING_g = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S26>/Integrator' */
    rtDW.Integrator_IC_LOADING_j = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S38>/Integrator' */
    rtDW.Integrator_IC_LOADING_b = 1U;

    /* InitializeConditions for Integrator: '<S45>/Integrator' */
    rtX.Integrator_CSTATE_k = 0.451061;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
