/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_marine_electrical_system.c
 *
 * Code generated for Simulink model 'ee_marine_electrical_system'.
 *
 * Model version                  : 1.302
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 13:05:49 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "ee_marine_electrical_system.h"
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

/* Block signals and states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
extern real_T rt_remd_snf(real_T u0, real_T u1);
static real_T look1_binlx(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
static void fex(real_T rtu_I_N, real_T *rty_F_EX);
extern real_T rtGetInf(void);
extern real32_T rtGetInfF(void);
extern real_T rtGetMinusInf(void);
extern real32_T rtGetMinusInfF(void);
extern real_T rtGetNaN(void);
extern real32_T rtGetNaNF(void);

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

static real_T look1_binlx(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

/*
 * Output and update for atomic system:
 *    '<S33>/fex'
 *    '<S75>/fex'
 */
static void fex(real_T rtu_I_N, real_T *rty_F_EX)
{
  if (rtu_I_N <= 0.43301270189221935) {
    *rty_F_EX = -0.57735026918962584 * rtu_I_N + 1.0;
  } else if (rtu_I_N <= 0.75) {
    *rty_F_EX = 0.75 - rtu_I_N * rtu_I_N;
    *rty_F_EX = sqrt(*rty_F_EX);
  } else if (rtu_I_N <= 1.0) {
    *rty_F_EX = -1.7320508075688772 * rtu_I_N + 1.7320508075688772;
  } else {
    *rty_F_EX = 0.0;
  }
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = fabs(u0 / u1);
      if (fabs(u1_0 - floor(u1_0 + 0.5)) <= DBL_EPSILON * u1_0) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void ee_marine_electrical_system_step(void)
{
  /* local block i/o variables */
  real_T rtb_OUTPUT_1_0[8];
  real_T rtb_uT;
  real_T rtb_uT_h;
  real_T rtb_Gain_b;
  real_T rtb_uT1;
  real_T rtb_uT_c;
  real_T rtb_uT_f;
  real_T rtb_uT_j;
  real_T rtb_Gain_jr;
  real_T rtb_uT1_a;
  real_T rtb_uT_a;
  boolean_T rtb_Compare;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_Compare_l;
  boolean_T rtb_Compare_f;
  boolean_T rtb_LogicalOperator_g;
  boolean_T rtb_Compare_o;

  {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    real_T tmp_0[20];
    int_T tmp_1[6];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
    char *msg;
    real_T time_0;
    real_T tmp_3[357];
    int_T tmp_4[7];
    real_T rtb_E_FEmaxmin;
    real_T rtb_MinMax2;
    real_T rtb_MinMax1;
    real_T rtb_UnitDelay_k;
    real_T rtb_UnitDelay;
    real_T rtb_Integrator_mm;
    real_T rtb_Integrator_p;
    real_T rtb_Max;
    real_T rtb_Gain1_idx_1;
    real_T rtb_MathFunction_idx_0;
    real_T rtb_MathFunction_idx_1;
    real_T u0;

    /* Clock: '<S5>/Clock' incorporates:
     *  Clock: '<S4>/Clock'
     *  SimscapeExecutionBlock: '<S98>/OUTPUT_1_0'
     *  SimscapeExecutionBlock: '<S98>/STATE_1'
     */
    rtb_MathFunction_idx_0 = rtM->Timing.t[0];

    /* SimscapeInputBlock: '<S98>/INPUT_5_1_1' incorporates:
     *  Clock: '<S5>/Clock'
     *  Constant: '<S5>/Constant'
     *  Lookup_n-D: '<S5>/Look-Up Table1'
     *  Math: '<S5>/Math Function'
     *  S-Function (sfun_tstart): '<S5>/startTime'
     *  Sum: '<S5>/Sum'
     */
    rtDW.INPUT_5_1_1[0] = look1_binlx(rt_remd_snf(rtb_MathFunction_idx_0 - (0.0),
      100.0), rtConstP.LookUpTable1_bp01Data, rtConstP.LookUpTable1_tableData,
      7U);
    rtDW.INPUT_5_1_1[1] = 0.0;
    rtDW.INPUT_5_1_1[2] = 0.0;
    rtDW.INPUT_5_1_1[3] = 0.0;

    /* Step: '<Root>/Bow Thrusters Starter ' */
    rtb_Max = rtM->Timing.t[0];

    /* SimscapeInputBlock: '<S98>/INPUT_4_1_1' incorporates:
     *  Step: '<Root>/Bow Thrusters Starter '
     */
    rtDW.INPUT_4_1_1[0] = (rtb_Max < 50.0);
    rtDW.INPUT_4_1_1[1] = 0.0;
    rtDW.INPUT_4_1_1[2] = 0.0;
    rtDW.INPUT_4_1_1[3] = 0.0;

    /* DiscreteIntegrator: '<S37>/Integrator' */
    if (rtDW.Integrator_PrevResetState != 0) {
      rtDW.Integrator_DSTATE = 1.2730301989425321;
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

    rtb_Integrator_mm = rtDW.Integrator_DSTATE;

    /* UnitDelay: '<S10>/Unit Delay' */
    rtb_UnitDelay = rtDW.UnitDelay_DSTATE;

    /* MATLAB Function: '<S33>/fex' incorporates:
     *  DiscreteIntegrator: '<S37>/Integrator'
     *  Fcn: '<S33>/Prevent divide by zero'
     *  Gain: '<S33>/Gain'
     *  Product: '<S33>/Divide'
     *  UnitDelay: '<S10>/Unit Delay'
     */
    fex(0.2 * (rtDW.UnitDelay_DSTATE / (rtDW.Integrator_DSTATE + (real_T)
          (rtDW.Integrator_DSTATE == 0.0) * 2.2204460492503131e-16)), &rtb_Max);

    /* SimscapeInputBlock: '<S98>/INPUT_1_1_1' incorporates:
     *  DiscreteIntegrator: '<S37>/Integrator'
     *  Product: '<S22>/Product'
     */
    rtDW.INPUT_1_1_1[0] = rtDW.Integrator_DSTATE * rtb_Max;
    rtDW.INPUT_1_1_1[1] = 0.0;
    rtDW.INPUT_1_1_1[2] = 0.0;
    rtDW.INPUT_1_1_1_Discrete[0] = !(rtDW.INPUT_1_1_1[0] ==
      rtDW.INPUT_1_1_1_Discrete[1]);
    rtDW.INPUT_1_1_1_Discrete[1] = rtDW.INPUT_1_1_1[0];
    rtDW.INPUT_1_1_1[0] = rtDW.INPUT_1_1_1_Discrete[1];
    rtDW.INPUT_1_1_1[3] = rtDW.INPUT_1_1_1_Discrete[0];

    /* DiscreteIntegrator: '<S79>/Integrator' */
    if (rtDW.Integrator_PrevResetState_b != 0) {
      rtDW.Integrator_DSTATE_f = 1.5357010872202868;
      if (rtDW.Integrator_DSTATE_f >= (rtInf)) {
        rtDW.Integrator_DSTATE_f = (rtInf);
      } else {
        if (rtDW.Integrator_DSTATE_f <= 0.0) {
          rtDW.Integrator_DSTATE_f = 0.0;
        }
      }
    }

    if (rtDW.Integrator_DSTATE_f >= (rtInf)) {
      rtDW.Integrator_DSTATE_f = (rtInf);
    } else {
      if (rtDW.Integrator_DSTATE_f <= 0.0) {
        rtDW.Integrator_DSTATE_f = 0.0;
      }
    }

    rtb_Integrator_p = rtDW.Integrator_DSTATE_f;

    /* UnitDelay: '<S52>/Unit Delay' */
    rtb_UnitDelay_k = rtDW.UnitDelay_DSTATE_j;

    /* MATLAB Function: '<S75>/fex' incorporates:
     *  DiscreteIntegrator: '<S79>/Integrator'
     *  Fcn: '<S75>/Prevent divide by zero'
     *  Gain: '<S75>/Gain'
     *  Product: '<S75>/Divide'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    fex(0.2 * (rtDW.UnitDelay_DSTATE_j / (rtDW.Integrator_DSTATE_f + (real_T)
          (rtDW.Integrator_DSTATE_f == 0.0) * 2.2204460492503131e-16)), &rtb_Max);

    /* SimscapeInputBlock: '<S98>/INPUT_2_1_1' incorporates:
     *  DiscreteIntegrator: '<S79>/Integrator'
     *  Product: '<S64>/Product'
     */
    rtDW.INPUT_2_1_1[0] = rtDW.Integrator_DSTATE_f * rtb_Max;
    rtDW.INPUT_2_1_1[1] = 0.0;
    rtDW.INPUT_2_1_1[2] = 0.0;
    rtDW.INPUT_2_1_1_Discrete[0] = !(rtDW.INPUT_2_1_1[0] ==
      rtDW.INPUT_2_1_1_Discrete[1]);
    rtDW.INPUT_2_1_1_Discrete[1] = rtDW.INPUT_2_1_1[0];
    rtDW.INPUT_2_1_1[0] = rtDW.INPUT_2_1_1_Discrete[1];
    rtDW.INPUT_2_1_1[3] = rtDW.INPUT_2_1_1_Discrete[0];

    /* SimscapeInputBlock: '<S98>/INPUT_3_1_1' incorporates:
     *  Constant: '<S4>/Constant'
     *  Lookup_n-D: '<S4>/Look-Up Table1'
     *  Math: '<S4>/Math Function'
     *  S-Function (sfun_tstart): '<S4>/startTime'
     *  Sum: '<S4>/Sum'
     */
    rtDW.INPUT_3_1_1[0] = look1_binlx(rt_remd_snf(rtb_MathFunction_idx_0 - (0.0),
      100.0), rtConstP.LookUpTable1_bp01Data_i,
      rtConstP.LookUpTable1_tableData_j, 5U);
    rtDW.INPUT_3_1_1[1] = 0.0;
    rtDW.INPUT_3_1_1[2] = 0.0;
    rtDW.INPUT_3_1_1[3] = 0.0;

    /* SimscapeExecutionBlock: '<S98>/STATE_1' */
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    time = rtb_MathFunction_idx_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 332;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 47;
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
    tmp_0[0] = rtDW.INPUT_5_1_1[0];
    tmp_0[1] = rtDW.INPUT_5_1_1[1];
    tmp_0[2] = rtDW.INPUT_5_1_1[2];
    tmp_0[3] = rtDW.INPUT_5_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = rtDW.INPUT_4_1_1[0];
    tmp_0[5] = rtDW.INPUT_4_1_1[1];
    tmp_0[6] = rtDW.INPUT_4_1_1[2];
    tmp_0[7] = rtDW.INPUT_4_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = rtDW.INPUT_1_1_1[0];
    tmp_0[9] = rtDW.INPUT_1_1_1[1];
    tmp_0[10] = rtDW.INPUT_1_1_1[2];
    tmp_0[11] = rtDW.INPUT_1_1_1[3];
    tmp_1[3] = 12;
    tmp_0[12] = rtDW.INPUT_2_1_1[0];
    tmp_0[13] = rtDW.INPUT_2_1_1[1];
    tmp_0[14] = rtDW.INPUT_2_1_1[2];
    tmp_0[15] = rtDW.INPUT_2_1_1[3];
    tmp_1[4] = 16;
    tmp_0[16] = rtDW.INPUT_3_1_1[0];
    tmp_0[17] = rtDW.INPUT_3_1_1[1];
    tmp_0[18] = rtDW.INPUT_3_1_1[2];
    tmp_0[19] = rtDW.INPUT_3_1_1[3];
    tmp_1[5] = 20;
    simulationData->mData->mInputValues.mN = 20;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulationData->mData->mOutputs.mN = 337;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    tmp = 1;
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

    /* SimscapeExecutionBlock: '<S98>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
    time_0 = rtb_MathFunction_idx_0;
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
    tmp_3[0] = rtDW.INPUT_5_1_1[0];
    tmp_3[1] = rtDW.INPUT_5_1_1[1];
    tmp_3[2] = rtDW.INPUT_5_1_1[2];
    tmp_3[3] = rtDW.INPUT_5_1_1[3];
    tmp_4[1] = 4;
    tmp_3[4] = rtDW.INPUT_4_1_1[0];
    tmp_3[5] = rtDW.INPUT_4_1_1[1];
    tmp_3[6] = rtDW.INPUT_4_1_1[2];
    tmp_3[7] = rtDW.INPUT_4_1_1[3];
    tmp_4[2] = 8;
    tmp_3[8] = rtDW.INPUT_1_1_1[0];
    tmp_3[9] = rtDW.INPUT_1_1_1[1];
    tmp_3[10] = rtDW.INPUT_1_1_1[2];
    tmp_3[11] = rtDW.INPUT_1_1_1[3];
    tmp_4[3] = 12;
    tmp_3[12] = rtDW.INPUT_2_1_1[0];
    tmp_3[13] = rtDW.INPUT_2_1_1[1];
    tmp_3[14] = rtDW.INPUT_2_1_1[2];
    tmp_3[15] = rtDW.INPUT_2_1_1[3];
    tmp_4[4] = 16;
    tmp_3[16] = rtDW.INPUT_3_1_1[0];
    tmp_3[17] = rtDW.INPUT_3_1_1[1];
    tmp_3[18] = rtDW.INPUT_3_1_1[2];
    tmp_3[19] = rtDW.INPUT_3_1_1[3];
    tmp_4[5] = 20;
    memcpy(&tmp_3[20], &rtDW.STATE_1[0], 337U * sizeof(real_T));
    tmp_4[6] = 357;
    simulationData->mData->mInputValues.mN = 357;
    simulationData->mData->mInputValues.mX = &tmp_3[0];
    simulationData->mData->mInputOffsets.mN = 7;
    simulationData->mData->mInputOffsets.mX = &tmp_4[0];
    simulationData->mData->mOutputs.mN = 8;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    tmp = 1;
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
    rtY.Generator_Power = rtb_OUTPUT_1_0[1];

    /* Outport: '<Root>/Out2' */
    rtY.Turbine_Power = rtb_OUTPUT_1_0[7];

    /* Gain: '<S15>/Gain1' */
    rtb_Max = 0.0 * rtb_OUTPUT_1_0[2];
    rtb_Gain1_idx_1 = 0.0 * rtb_OUTPUT_1_0[2];

    /* Math: '<S15>/Math Function' */
    rtb_MathFunction_idx_0 = rtb_Max * rtb_Max;
    rtb_MathFunction_idx_1 = rtb_Gain1_idx_1 * rtb_Gain1_idx_1;

    /* Gain: '<S57>/Gain1' */
    rtb_Max = 0.0 * rtb_OUTPUT_1_0[5];
    rtb_Gain1_idx_1 = 0.0 * rtb_OUTPUT_1_0[5];

    /* Math: '<S57>/Math Function' */
    rtb_Max *= rtb_Max;

    /* RelationalOperator: '<S85>/Compare' incorporates:
     *  Constant: '<S83>/Time constant'
     *  Constant: '<S85>/Constant'
     *  Sum: '<S83>/Sum1'
     */
    rtb_Compare = (0.02 - rtDW.Probe_o[0] <= 0.0);

    /* Logic: '<S70>/Logical Operator' incorporates:
     *  Constant: '<S70>/Lag time constant'
     *  Constant: '<S72>/Constant'
     *  RelationalOperator: '<S72>/Compare'
     *  Sum: '<S70>/Sum1'
     */
    rtb_LogicalOperator = (0.0 - rtDW.Probe_f[0] <= 0.0);

    /* MinMax: '<S70>/MinMax1' */
    if (rtDW.Probe_f[0] > 0.0) {
      rtb_MinMax1 = rtDW.Probe_f[0];
    } else {
      rtb_MinMax1 = 0.0;
    }

    /* End of MinMax: '<S70>/MinMax1' */

    /* MinMax: '<S70>/MinMax2' */
    if ((0.0 > rtDW.Probe_f[0]) || rtIsNaN(rtDW.Probe_f[0])) {
      rtb_MinMax2 = 0.0;
    } else {
      rtb_MinMax2 = rtDW.Probe_f[0];
    }

    /* End of MinMax: '<S70>/MinMax2' */

    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S70>/Constant'
     *  Fcn: '<S70>/Avoid Divide by Zero2'
     *  Product: '<S70>/product2'
     */
    if (rtb_LogicalOperator) {
      rtb_E_FEmaxmin = 1.0;
    } else {
      rtb_E_FEmaxmin = rtb_MinMax1 / ((real_T)(rtb_MinMax2 == 0.0) *
        2.2204460492503131e-16 + rtb_MinMax2);
    }

    /* End of Switch: '<S70>/Switch' */

    /* RelationalOperator: '<S89>/Compare' incorporates:
     *  Constant: '<S87>/Time constant'
     *  Constant: '<S89>/Constant'
     *  Sum: '<S87>/Sum1'
     */
    rtb_Compare_l = (0.0 - rtDW.Probe_i[0] <= 0.0);

    /* Sum: '<S57>/Sum3' incorporates:
     *  Math: '<S57>/Math Function'
     *  Sqrt: '<S57>/Sqrt'
     *  Sum: '<S57>/Sum5'
     */
    rtb_Gain1_idx_1 = sqrt(rtb_Gain1_idx_1 * rtb_Gain1_idx_1 + rtb_Max) +
      rtb_OUTPUT_1_0[6];

    /* DiscreteIntegrator: '<S90>/Integrator' */
    if (rtDW.Integrator_IC_LOADING != 0) {
      rtDW.Integrator_DSTATE_g = rtb_Gain1_idx_1;
    }

    if (rtb_Compare_l || (rtDW.Integrator_PrevResetState_h != 0)) {
      rtDW.Integrator_DSTATE_g = rtb_Gain1_idx_1;
    }

    /* Gain: '<S80>/Minimum sampling to time constant ratio' */
    u0 = 10.0 * rtDW.Probe_k[0];

    /* Sum: '<S64>/Sum2' incorporates:
     *  Gain: '<S64>/Gain2'
     *  Lookup: '<S77>/Saturation'
     *  Product: '<S77>/Product'
     */
    rtb_Integrator_p = (rtb_Integrator_p * rt_Lookup(rtConstP.pooled12, 3,
      rtb_Integrator_p, rtConstP.pooled13) + rtb_Integrator_p) + 0.38 *
      rtb_UnitDelay_k;

    /* DiscreteIntegrator: '<S82>/Integrator' */
    if (rtDW.Integrator_IC_LOADING_b != 0) {
      rtDW.Integrator_DSTATE_a = rtb_Integrator_p;
    }

    if (rtDW.Integrator_PrevResetState_p != 0) {
      rtDW.Integrator_DSTATE_a = rtb_Integrator_p;
    }

    /* MinMax: '<S80>/MinMax' */
    if (!(u0 > 1.0)) {
      u0 = 1.0;
    }

    /* End of MinMax: '<S80>/MinMax' */

    /* Product: '<S65>/1//T' incorporates:
     *  DiscreteIntegrator: '<S82>/Integrator'
     *  Sum: '<S65>/Sum1'
     */
    rtb_uT = 1.0 / u0 * (rtb_Integrator_p - rtDW.Integrator_DSTATE_a);

    /* Sum: '<S57>/Sum1' incorporates:
     *  Constant: '<S52>/Constant4'
     *  Constant: '<S57>/Constant'
     *  DiscreteIntegrator: '<S90>/Integrator'
     *  Gain: '<S65>/Gain'
     *  Sum: '<S57>/Sum'
     */
    rtb_UnitDelay_k = ((1.0 - rtDW.Integrator_DSTATE_g) + 0.0052034768986866141)
      - 0.03 * rtb_uT;

    /* DiscreteIntegrator: '<S74>/Integrator' */
    if (rtDW.Integrator_IC_LOADING_o != 0) {
      rtDW.Integrator_DSTATE_b = rtb_UnitDelay_k;
    }

    if (rtb_LogicalOperator || (rtDW.Integrator_PrevResetState_a != 0)) {
      rtDW.Integrator_DSTATE_b = rtb_UnitDelay_k;
    }

    /* Switch: '<S70>/Switch1' incorporates:
     *  Bias: '<S70>/Bias'
     *  Constant: '<S70>/Constant1'
     *  Fcn: '<S70>/Avoid Divide by Zero1'
     *  Product: '<S70>/product1'
     */
    if (rtb_LogicalOperator) {
      rtb_Max = 0.0;
    } else {
      rtb_Max = rtb_MinMax2 / ((real_T)(rtb_MinMax1 == 0.0) *
        2.2204460492503131e-16 + rtb_MinMax1) + -1.0;
    }

    /* End of Switch: '<S70>/Switch1' */

    /* Product: '<S63>/T1//T2' incorporates:
     *  DiscreteIntegrator: '<S74>/Integrator'
     *  Product: '<S63>/T2//T1-1'
     *  Sum: '<S63>/Sum2'
     */
    rtb_E_FEmaxmin *= rtDW.Integrator_DSTATE_b * rtb_Max + rtb_UnitDelay_k;

    /* Gain: '<S68>/K' */
    rtb_MinMax2 = 400.0 * rtb_E_FEmaxmin;

    /* DiscreteIntegrator: '<S86>/Integrator' */
    if (rtDW.Integrator_IC_LOADING_d != 0) {
      rtDW.Integrator_DSTATE_gc = rtb_MinMax2;
      if (rtDW.Integrator_DSTATE_gc >= 14.5) {
        rtDW.Integrator_DSTATE_gc = 14.5;
      } else {
        if (rtDW.Integrator_DSTATE_gc <= -14.5) {
          rtDW.Integrator_DSTATE_gc = -14.5;
        }
      }
    }

    if (rtb_Compare || (rtDW.Integrator_PrevResetState_e != 0)) {
      rtDW.Integrator_DSTATE_gc = rtb_MinMax2;
      if (rtDW.Integrator_DSTATE_gc >= 14.5) {
        rtDW.Integrator_DSTATE_gc = 14.5;
      } else {
        if (rtDW.Integrator_DSTATE_gc <= -14.5) {
          rtDW.Integrator_DSTATE_gc = -14.5;
        }
      }
    }

    if (rtDW.Integrator_DSTATE_gc >= 14.5) {
      rtDW.Integrator_DSTATE_gc = 14.5;
    } else {
      if (rtDW.Integrator_DSTATE_gc <= -14.5) {
        rtDW.Integrator_DSTATE_gc = -14.5;
      }
    }

    /* MinMax: '<S83>/Max' */
    if (rtDW.Probe_o[0] > 0.02) {
      rtb_UnitDelay_k = rtDW.Probe_o[0];
    } else {
      rtb_UnitDelay_k = 0.02;
    }

    /* End of MinMax: '<S83>/Max' */

    /* Product: '<S68>/1//T' incorporates:
     *  DiscreteIntegrator: '<S86>/Integrator'
     *  Sum: '<S68>/Sum1'
     */
    rtb_uT_h = 1.0 / rtb_UnitDelay_k * (rtb_MinMax2 - rtDW.Integrator_DSTATE_gc);

    /* MinMax: '<S67>/HV Gate' incorporates:
     *  DiscreteIntegrator: '<S86>/Integrator'
     */
    rtb_Max = rtDW.Integrator_DSTATE_gc;
    if ((!(rtb_Max > rtDW.Integrator_DSTATE_gc)) && (!rtIsNaN
         (rtDW.Integrator_DSTATE_gc))) {
      rtb_Max = rtDW.Integrator_DSTATE_gc;
    }

    /* End of MinMax: '<S67>/HV Gate' */

    /* Saturate: '<S57>/E_FE maxmin' */
    if (rtb_Max > 6.03) {
      rtb_Max = 6.03;
    } else {
      if (rtb_Max < -5.43) {
        rtb_Max = -5.43;
      }
    }

    /* End of Saturate: '<S57>/E_FE maxmin' */

    /* Gain: '<S64>/Gain' incorporates:
     *  Sum: '<S64>/Sum4'
     */
    rtb_Gain_b = (rtb_Max - rtb_Integrator_p) * 1.25;

    /* Product: '<S63>/1//T1' incorporates:
     *  DiscreteIntegrator: '<S74>/Integrator'
     *  Fcn: '<S70>/Avoid Divide by Zero'
     *  Sum: '<S63>/Sum1'
     */
    rtb_uT1 = 1.0 / ((real_T)(rtb_MinMax1 == 0.0) * 2.2204460492503131e-16 +
                     rtb_MinMax1) * (rtb_E_FEmaxmin - rtDW.Integrator_DSTATE_b);

    /* MinMax: '<S87>/Max' */
    if (rtDW.Probe_i[0] > 0.0) {
      rtb_Max = rtDW.Probe_i[0];
    } else {
      rtb_Max = 0.0;
    }

    /* End of MinMax: '<S87>/Max' */

    /* Product: '<S69>/1//T' incorporates:
     *  DiscreteIntegrator: '<S90>/Integrator'
     *  Fcn: '<S87>/Avoid Divide by Zero'
     *  Sum: '<S69>/Sum1'
     */
    rtb_uT_c = 1.0 / ((real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
                      rtb_Max) * (rtb_Gain1_idx_1 - rtDW.Integrator_DSTATE_g);

    /* RelationalOperator: '<S43>/Compare' incorporates:
     *  Constant: '<S41>/Time constant'
     *  Constant: '<S43>/Constant'
     *  Sum: '<S41>/Sum1'
     */
    rtb_Compare_f = (0.02 - rtDW.Probe_b[0] <= 0.0);

    /* Logic: '<S28>/Logical Operator' incorporates:
     *  Constant: '<S28>/Lag time constant'
     *  Constant: '<S30>/Constant'
     *  RelationalOperator: '<S30>/Compare'
     *  Sum: '<S28>/Sum1'
     */
    rtb_LogicalOperator_g = (0.0 - rtDW.Probe[0] <= 0.0);

    /* MinMax: '<S28>/MinMax1' */
    if (rtDW.Probe[0] > 0.0) {
      rtb_MinMax1 = rtDW.Probe[0];
    } else {
      rtb_MinMax1 = 0.0;
    }

    /* End of MinMax: '<S28>/MinMax1' */

    /* MinMax: '<S28>/MinMax2' */
    if ((0.0 > rtDW.Probe[0]) || rtIsNaN(rtDW.Probe[0])) {
      rtb_MinMax2 = 0.0;
    } else {
      rtb_MinMax2 = rtDW.Probe[0];
    }

    /* End of MinMax: '<S28>/MinMax2' */

    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S28>/Constant'
     *  Fcn: '<S28>/Avoid Divide by Zero2'
     *  Product: '<S28>/product2'
     */
    if (rtb_LogicalOperator_g) {
      rtb_Max = 1.0;
    } else {
      rtb_Max = rtb_MinMax1 / ((real_T)(rtb_MinMax2 == 0.0) *
        2.2204460492503131e-16 + rtb_MinMax2);
    }

    /* End of Switch: '<S28>/Switch' */

    /* RelationalOperator: '<S47>/Compare' incorporates:
     *  Constant: '<S45>/Time constant'
     *  Constant: '<S47>/Constant'
     *  Sum: '<S45>/Sum1'
     */
    rtb_Compare_o = (0.0 - rtDW.Probe_a[0] <= 0.0);

    /* Sum: '<S15>/Sum3' incorporates:
     *  Sqrt: '<S15>/Sqrt'
     *  Sum: '<S15>/Sum5'
     */
    rtb_Gain1_idx_1 = sqrt(rtb_MathFunction_idx_0 + rtb_MathFunction_idx_1) +
      rtb_OUTPUT_1_0[3];

    /* DiscreteIntegrator: '<S48>/Integrator' */
    if (rtDW.Integrator_IC_LOADING_i != 0) {
      rtDW.Integrator_DSTATE_bs = rtb_Gain1_idx_1;
    }

    if (rtb_Compare_o || (rtDW.Integrator_PrevResetState_o != 0)) {
      rtDW.Integrator_DSTATE_bs = rtb_Gain1_idx_1;
    }

    /* Gain: '<S38>/Minimum sampling to time constant ratio' */
    u0 = 10.0 * rtDW.Probe_l[0];

    /* Sum: '<S22>/Sum2' incorporates:
     *  Gain: '<S22>/Gain2'
     *  Lookup: '<S35>/Saturation'
     *  Product: '<S35>/Product'
     */
    rtb_Integrator_mm = (rtb_Integrator_mm * rt_Lookup(rtConstP.pooled12, 3,
      rtb_Integrator_mm, rtConstP.pooled13) + rtb_Integrator_mm) + 0.38 *
      rtb_UnitDelay;

    /* DiscreteIntegrator: '<S40>/Integrator' */
    if (rtDW.Integrator_IC_LOADING_br != 0) {
      rtDW.Integrator_DSTATE_bu = rtb_Integrator_mm;
    }

    if (rtDW.Integrator_PrevResetState_em != 0) {
      rtDW.Integrator_DSTATE_bu = rtb_Integrator_mm;
    }

    /* MinMax: '<S38>/MinMax' */
    if (!(u0 > 1.0)) {
      u0 = 1.0;
    }

    /* End of MinMax: '<S38>/MinMax' */

    /* Product: '<S23>/1//T' incorporates:
     *  DiscreteIntegrator: '<S40>/Integrator'
     *  Sum: '<S23>/Sum1'
     */
    rtb_uT_f = 1.0 / u0 * (rtb_Integrator_mm - rtDW.Integrator_DSTATE_bu);

    /* Sum: '<S15>/Sum1' incorporates:
     *  Constant: '<S10>/Constant4'
     *  Constant: '<S15>/Constant'
     *  DiscreteIntegrator: '<S48>/Integrator'
     *  Gain: '<S23>/Gain'
     *  Sum: '<S15>/Sum'
     */
    rtb_UnitDelay = ((1.0 - rtDW.Integrator_DSTATE_bs) + 0.0043054717367055264)
      - 0.03 * rtb_uT_f;

    /* DiscreteIntegrator: '<S32>/Integrator' */
    if (rtDW.Integrator_IC_LOADING_bz != 0) {
      rtDW.Integrator_DSTATE_p = rtb_UnitDelay;
    }

    if (rtb_LogicalOperator_g || (rtDW.Integrator_PrevResetState_f != 0)) {
      rtDW.Integrator_DSTATE_p = rtb_UnitDelay;
    }

    /* Switch: '<S28>/Switch1' incorporates:
     *  Bias: '<S28>/Bias'
     *  Constant: '<S28>/Constant1'
     *  Fcn: '<S28>/Avoid Divide by Zero1'
     *  Product: '<S28>/product1'
     */
    if (rtb_LogicalOperator_g) {
      rtb_E_FEmaxmin = 0.0;
    } else {
      rtb_E_FEmaxmin = rtb_MinMax2 / ((real_T)(rtb_MinMax1 == 0.0) *
        2.2204460492503131e-16 + rtb_MinMax1) + -1.0;
    }

    /* End of Switch: '<S28>/Switch1' */

    /* Product: '<S21>/T1//T2' incorporates:
     *  DiscreteIntegrator: '<S32>/Integrator'
     *  Product: '<S21>/T2//T1-1'
     *  Sum: '<S21>/Sum2'
     */
    rtb_Max *= rtDW.Integrator_DSTATE_p * rtb_E_FEmaxmin + rtb_UnitDelay;

    /* Gain: '<S26>/K' */
    rtb_UnitDelay = 400.0 * rtb_Max;

    /* DiscreteIntegrator: '<S44>/Integrator' */
    if (rtDW.Integrator_IC_LOADING_dv != 0) {
      rtDW.Integrator_DSTATE_m = rtb_UnitDelay;
      if (rtDW.Integrator_DSTATE_m >= 14.5) {
        rtDW.Integrator_DSTATE_m = 14.5;
      } else {
        if (rtDW.Integrator_DSTATE_m <= -14.5) {
          rtDW.Integrator_DSTATE_m = -14.5;
        }
      }
    }

    if (rtb_Compare_f || (rtDW.Integrator_PrevResetState_j != 0)) {
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

    /* MinMax: '<S41>/Max' */
    if (rtDW.Probe_b[0] > 0.02) {
      rtb_UnitDelay_k = rtDW.Probe_b[0];
    } else {
      rtb_UnitDelay_k = 0.02;
    }

    /* End of MinMax: '<S41>/Max' */

    /* Product: '<S26>/1//T' incorporates:
     *  DiscreteIntegrator: '<S44>/Integrator'
     *  Sum: '<S26>/Sum1'
     */
    rtb_uT_j = 1.0 / rtb_UnitDelay_k * (rtb_UnitDelay - rtDW.Integrator_DSTATE_m);

    /* MinMax: '<S25>/HV Gate' incorporates:
     *  DiscreteIntegrator: '<S44>/Integrator'
     */
    rtb_E_FEmaxmin = rtDW.Integrator_DSTATE_m;
    if ((!(rtb_E_FEmaxmin > rtDW.Integrator_DSTATE_m)) && (!rtIsNaN
         (rtDW.Integrator_DSTATE_m))) {
      rtb_E_FEmaxmin = rtDW.Integrator_DSTATE_m;
    }

    /* End of MinMax: '<S25>/HV Gate' */

    /* Saturate: '<S15>/E_FE maxmin' */
    if (rtb_E_FEmaxmin > 6.03) {
      rtb_E_FEmaxmin = 6.03;
    } else {
      if (rtb_E_FEmaxmin < -5.43) {
        rtb_E_FEmaxmin = -5.43;
      }
    }

    /* End of Saturate: '<S15>/E_FE maxmin' */

    /* Gain: '<S22>/Gain' incorporates:
     *  Sum: '<S22>/Sum4'
     */
    rtb_Gain_jr = (rtb_E_FEmaxmin - rtb_Integrator_mm) * 1.25;

    /* Product: '<S21>/1//T1' incorporates:
     *  DiscreteIntegrator: '<S32>/Integrator'
     *  Fcn: '<S28>/Avoid Divide by Zero'
     *  Sum: '<S21>/Sum1'
     */
    rtb_uT1_a = 1.0 / ((real_T)(rtb_MinMax1 == 0.0) * 2.2204460492503131e-16 +
                       rtb_MinMax1) * (rtb_Max - rtDW.Integrator_DSTATE_p);

    /* MinMax: '<S45>/Max' */
    if (rtDW.Probe_a[0] > 0.0) {
      rtb_Max = rtDW.Probe_a[0];
    } else {
      rtb_Max = 0.0;
    }

    /* End of MinMax: '<S45>/Max' */

    /* Product: '<S27>/1//T' incorporates:
     *  DiscreteIntegrator: '<S48>/Integrator'
     *  Fcn: '<S45>/Avoid Divide by Zero'
     *  Sum: '<S27>/Sum1'
     */
    rtb_uT_a = 1.0 / ((real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
                      rtb_Max) * (rtb_Gain1_idx_1 - rtDW.Integrator_DSTATE_bs);
  }

  {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    real_T tmp_0[20];
    int_T tmp_1[6];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
    char *msg;

    /* Update for DiscreteIntegrator: '<S37>/Integrator' */
    rtDW.Integrator_DSTATE += 0.001 * rtb_Gain_jr;
    if (rtDW.Integrator_DSTATE >= (rtInf)) {
      rtDW.Integrator_DSTATE = (rtInf);
    } else {
      if (rtDW.Integrator_DSTATE <= 0.0) {
        rtDW.Integrator_DSTATE = 0.0;
      }
    }

    rtDW.Integrator_PrevResetState = 0;

    /* End of Update for DiscreteIntegrator: '<S37>/Integrator' */

    /* Update for UnitDelay: '<S10>/Unit Delay' */
    rtDW.UnitDelay_DSTATE = rtb_OUTPUT_1_0[0];

    /* Update for DiscreteIntegrator: '<S79>/Integrator' */
    rtDW.Integrator_DSTATE_f += 0.001 * rtb_Gain_b;
    if (rtDW.Integrator_DSTATE_f >= (rtInf)) {
      rtDW.Integrator_DSTATE_f = (rtInf);
    } else {
      if (rtDW.Integrator_DSTATE_f <= 0.0) {
        rtDW.Integrator_DSTATE_f = 0.0;
      }
    }

    rtDW.Integrator_PrevResetState_b = 0;

    /* End of Update for DiscreteIntegrator: '<S79>/Integrator' */

    /* Update for UnitDelay: '<S52>/Unit Delay' */
    rtDW.UnitDelay_DSTATE_j = rtb_OUTPUT_1_0[4];

    /* Update for SimscapeExecutionBlock: '<S98>/STATE_1' */
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    time = rtM->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 332;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 47;
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
    tmp_0[0] = rtDW.INPUT_5_1_1[0];
    tmp_0[1] = rtDW.INPUT_5_1_1[1];
    tmp_0[2] = rtDW.INPUT_5_1_1[2];
    tmp_0[3] = rtDW.INPUT_5_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = rtDW.INPUT_4_1_1[0];
    tmp_0[5] = rtDW.INPUT_4_1_1[1];
    tmp_0[6] = rtDW.INPUT_4_1_1[2];
    tmp_0[7] = rtDW.INPUT_4_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = rtDW.INPUT_1_1_1[0];
    tmp_0[9] = rtDW.INPUT_1_1_1[1];
    tmp_0[10] = rtDW.INPUT_1_1_1[2];
    tmp_0[11] = rtDW.INPUT_1_1_1[3];
    tmp_1[3] = 12;
    tmp_0[12] = rtDW.INPUT_2_1_1[0];
    tmp_0[13] = rtDW.INPUT_2_1_1[1];
    tmp_0[14] = rtDW.INPUT_2_1_1[2];
    tmp_0[15] = rtDW.INPUT_2_1_1[3];
    tmp_1[4] = 16;
    tmp_0[16] = rtDW.INPUT_3_1_1[0];
    tmp_0[17] = rtDW.INPUT_3_1_1[1];
    tmp_0[18] = rtDW.INPUT_3_1_1[2];
    tmp_0[19] = rtDW.INPUT_3_1_1[3];
    tmp_1[5] = 20;
    simulationData->mData->mInputValues.mN = 20;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 6;
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

    /* End of Update for SimscapeExecutionBlock: '<S98>/STATE_1' */

    /* Update for DiscreteIntegrator: '<S90>/Integrator' */
    rtDW.Integrator_IC_LOADING = 0U;
    if (!rtb_Compare_l) {
      rtDW.Integrator_DSTATE_g += 0.001 * rtb_uT_c;
    }

    rtDW.Integrator_PrevResetState_h = (int8_T)rtb_Compare_l;

    /* End of Update for DiscreteIntegrator: '<S90>/Integrator' */

    /* Update for DiscreteIntegrator: '<S82>/Integrator' */
    rtDW.Integrator_IC_LOADING_b = 0U;
    rtDW.Integrator_DSTATE_a += 0.001 * rtb_uT;
    rtDW.Integrator_PrevResetState_p = 0;

    /* Update for DiscreteIntegrator: '<S74>/Integrator' */
    rtDW.Integrator_IC_LOADING_o = 0U;
    if (!rtb_LogicalOperator) {
      rtDW.Integrator_DSTATE_b += 0.001 * rtb_uT1;
    }

    rtDW.Integrator_PrevResetState_a = (int8_T)rtb_LogicalOperator;

    /* End of Update for DiscreteIntegrator: '<S74>/Integrator' */

    /* Update for DiscreteIntegrator: '<S86>/Integrator' */
    rtDW.Integrator_IC_LOADING_d = 0U;
    if (!rtb_Compare) {
      rtDW.Integrator_DSTATE_gc += 0.001 * rtb_uT_h;
      if (rtDW.Integrator_DSTATE_gc >= 14.5) {
        rtDW.Integrator_DSTATE_gc = 14.5;
      } else {
        if (rtDW.Integrator_DSTATE_gc <= -14.5) {
          rtDW.Integrator_DSTATE_gc = -14.5;
        }
      }
    }

    rtDW.Integrator_PrevResetState_e = (int8_T)rtb_Compare;

    /* End of Update for DiscreteIntegrator: '<S86>/Integrator' */

    /* Update for DiscreteIntegrator: '<S48>/Integrator' */
    rtDW.Integrator_IC_LOADING_i = 0U;
    if (!rtb_Compare_o) {
      rtDW.Integrator_DSTATE_bs += 0.001 * rtb_uT_a;
    }

    rtDW.Integrator_PrevResetState_o = (int8_T)rtb_Compare_o;

    /* End of Update for DiscreteIntegrator: '<S48>/Integrator' */

    /* Update for DiscreteIntegrator: '<S40>/Integrator' */
    rtDW.Integrator_IC_LOADING_br = 0U;
    rtDW.Integrator_DSTATE_bu += 0.001 * rtb_uT_f;
    rtDW.Integrator_PrevResetState_em = 0;

    /* Update for DiscreteIntegrator: '<S32>/Integrator' */
    rtDW.Integrator_IC_LOADING_bz = 0U;
    if (!rtb_LogicalOperator_g) {
      rtDW.Integrator_DSTATE_p += 0.001 * rtb_uT1_a;
    }

    rtDW.Integrator_PrevResetState_f = (int8_T)rtb_LogicalOperator_g;

    /* End of Update for DiscreteIntegrator: '<S32>/Integrator' */

    /* Update for DiscreteIntegrator: '<S44>/Integrator' */
    rtDW.Integrator_IC_LOADING_dv = 0U;
    if (!rtb_Compare_f) {
      rtDW.Integrator_DSTATE_m += 0.001 * rtb_uT_j;
      if (rtDW.Integrator_DSTATE_m >= 14.5) {
        rtDW.Integrator_DSTATE_m = 14.5;
      } else {
        if (rtDW.Integrator_DSTATE_m <= -14.5) {
          rtDW.Integrator_DSTATE_m = -14.5;
        }
      }
    }

    rtDW.Integrator_PrevResetState_j = (int8_T)rtb_Compare_f;

    /* End of Update for DiscreteIntegrator: '<S44>/Integrator' */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  rtM->Timing.t[0] =
    (++rtM->Timing.clockTick0) * rtM->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.001, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    rtM->Timing.clockTick1++;
  }
}

/* Model initialize function */
void ee_marine_electrical_system_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&rtM->solverInfo, &rtM->Timing.simTimeStep);
    rtsiSetTPtr(&rtM->solverInfo, &rtmGetTPtr(rtM));
    rtsiSetStepSizePtr(&rtM->solverInfo, &rtM->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&rtM->solverInfo, ((const char_T **)
      (&rtmGetErrorStatus(rtM))));
    rtsiSetRTModelPtr(&rtM->solverInfo, rtM);
  }

  rtsiSetSimTimeStep(&rtM->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&rtM->solverInfo,"FixedStepDiscrete");
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

    /* Start for SimscapeExecutionBlock: '<S98>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S98>/OUTPUT_1_0'
     */
    tmp = nesl_lease_simulator(
      "ee_marine_electrical_system/Solver Configuration_1", 0, 0);
    rtDW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_1_Simulator);
    if (tmp_0) {
      ee_marine_electrical_system_fab709d2_1_gateway();
      tmp = nesl_lease_simulator(
        "ee_marine_electrical_system/Solver Configuration_1", 0, 0);
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
    modelParameters.mRTWModifiedTimeStamp = 4.89589489E+8;
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
    simulationData->mData->mDiscStates.mN = 332;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 47;
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

    /* End of Start for SimscapeExecutionBlock: '<S98>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S98>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator(
      "ee_marine_electrical_system/Solver Configuration_1", 1, 0);
    rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      ee_marine_electrical_system_fab709d2_1_gateway();
      tmp = nesl_lease_simulator(
        "ee_marine_electrical_system/Solver Configuration_1", 1, 0);
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
    modelParameters_0.mRTWModifiedTimeStamp = 4.89589489E+8;
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

    /* Start for Probe: '<S28>/Probe' */
    rtDW.Probe[0] = 0.001;
    rtDW.Probe[1] = 0.0;

    /* Start for Probe: '<S45>/Probe' */
    rtDW.Probe_a[0] = 0.001;
    rtDW.Probe_a[1] = 0.0;

    /* Start for Probe: '<S38>/Probe' */
    rtDW.Probe_l[0] = 0.001;
    rtDW.Probe_l[1] = 0.0;

    /* Start for Probe: '<S41>/Probe' */
    rtDW.Probe_b[0] = 0.001;
    rtDW.Probe_b[1] = 0.0;

    /* Start for Probe: '<S70>/Probe' */
    rtDW.Probe_f[0] = 0.001;
    rtDW.Probe_f[1] = 0.0;

    /* Start for Probe: '<S87>/Probe' */
    rtDW.Probe_i[0] = 0.001;
    rtDW.Probe_i[1] = 0.0;

    /* Start for Probe: '<S80>/Probe' */
    rtDW.Probe_k[0] = 0.001;
    rtDW.Probe_k[1] = 0.0;

    /* Start for Probe: '<S83>/Probe' */
    rtDW.Probe_o[0] = 0.001;
    rtDW.Probe_o[1] = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S37>/Integrator' */
    rtDW.Integrator_DSTATE = 1.2730301989425321;
    if (rtDW.Integrator_DSTATE >= (rtInf)) {
      rtDW.Integrator_DSTATE = (rtInf);
    } else {
      if (rtDW.Integrator_DSTATE <= 0.0) {
        rtDW.Integrator_DSTATE = 0.0;
      }
    }

    /* End of InitializeConditions for DiscreteIntegrator: '<S37>/Integrator' */

    /* InitializeConditions for UnitDelay: '<S10>/Unit Delay' */
    rtDW.UnitDelay_DSTATE = 1.14125;

    /* InitializeConditions for DiscreteIntegrator: '<S79>/Integrator' */
    rtDW.Integrator_DSTATE_f = 1.5357010872202868;
    if (rtDW.Integrator_DSTATE_f >= (rtInf)) {
      rtDW.Integrator_DSTATE_f = (rtInf);
    } else {
      if (rtDW.Integrator_DSTATE_f <= 0.0) {
        rtDW.Integrator_DSTATE_f = 0.0;
      }
    }

    /* End of InitializeConditions for DiscreteIntegrator: '<S79>/Integrator' */

    /* InitializeConditions for UnitDelay: '<S52>/Unit Delay' */
    rtDW.UnitDelay_DSTATE_j = 1.37673;

    /* InitializeConditions for DiscreteIntegrator: '<S90>/Integrator' */
    rtDW.Integrator_IC_LOADING = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S82>/Integrator' */
    rtDW.Integrator_IC_LOADING_b = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S74>/Integrator' */
    rtDW.Integrator_IC_LOADING_o = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S86>/Integrator' */
    rtDW.Integrator_IC_LOADING_d = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S48>/Integrator' */
    rtDW.Integrator_IC_LOADING_i = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S40>/Integrator' */
    rtDW.Integrator_IC_LOADING_br = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S32>/Integrator' */
    rtDW.Integrator_IC_LOADING_bz = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S44>/Integrator' */
    rtDW.Integrator_IC_LOADING_dv = 1U;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
