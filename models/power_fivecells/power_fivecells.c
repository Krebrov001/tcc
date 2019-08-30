// Added to remove complier errors.
#include <string.h>

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: power_fivecells.c
 *
 * Code generated for Simulink model 'power_fivecells'.
 *
 * Model version                  : 1.103
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Fri Aug 30 11:41:17 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "power_fivecells.h"
#include <math.h>
#include <stdlib.h>
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

/* Block signals and states (default storage) */
DW rtDW;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
extern real_T rt_remd_snf(real_T u0, real_T u1);
static real_T look1_binlx(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern real_T rtGetNaN(void);
extern real32_T rtGetNaNF(void);
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
void power_fivecells_step(void)
{
  real_T rtb_Sum;
  real_T rtb_Modulation_idx_0;
  real_T rtb_Modulation_idx_1;
  real_T rtb_Modulation_idx_2;
  real_T rtb_Sum_tmp;

  /* Sin: '<S11>/AC' incorporates:
   *  Sin: '<Root>/Sine Wave'
   *  Sin: '<S10>/AC'
   *  Sin: '<S9>/AC'
   */
  rtb_Modulation_idx_2 = 376.99111843077515 * rtM->Timing.t[0];
  rtDW.AC = sin(rtb_Modulation_idx_2 + 2.0943951023931953) * 5388.8774341229928;

  /* Sin: '<S10>/AC' */
  rtDW.AC_k = sin(rtb_Modulation_idx_2 + -2.0943951023931953) *
    5388.8774341229928;

  /* Sin: '<S9>/AC' */
  rtDW.AC_n = sin(rtb_Modulation_idx_2) * 5388.8774341229928;

  /* S-Function (sfun_spssw_discc): '<S360>/State-Space' incorporates:
   *  Constant: '<S156>/g'
   *  Constant: '<S165>/g'
   *  Constant: '<S174>/g'
   *  Constant: '<S183>/g'
   *  Constant: '<S192>/g'
   *  Constant: '<S261>/g'
   *  Constant: '<S270>/g'
   *  Constant: '<S279>/g'
   *  Constant: '<S288>/g'
   *  Constant: '<S297>/g'
   *  Constant: '<S362>/SwitchCurrents'
   *  Constant: '<S51>/g'
   *  Constant: '<S60>/g'
   *  Constant: '<S69>/g'
   *  Constant: '<S78>/g'
   *  Constant: '<S87>/g'
   */

  /* S-Function block: <S360>/State-Space */
  {
    real_T accum;

    /* Circuit has switches */
    int_T *switch_status = (int_T*) rtDW.StateSpace_PWORK.SWITCH_STATUS;
    int_T *switch_status_init = (int_T*)
      rtDW.StateSpace_PWORK.SWITCH_STATUS_INIT;
    int_T *SwitchChange = (int_T*) rtDW.StateSpace_PWORK.SW_CHG;
    int_T *gState = (int_T*) rtDW.StateSpace_PWORK.G_STATE;
    real_T *yswitch = (real_T*)rtDW.StateSpace_PWORK.Y_SWITCH;
    int_T *switchTypes = (int_T*) rtDW.StateSpace_PWORK.SWITCH_TYPES;
    int_T *idxOutSw = (int_T*) rtDW.StateSpace_PWORK.IDX_OUT_SW;
    real_T *DxCol = (real_T*)rtDW.StateSpace_PWORK.DX_COL;
    real_T *tmp2 = (real_T*)rtDW.StateSpace_PWORK.TMP2;
    real_T *BDcol = (real_T*)rtDW.StateSpace_PWORK.BD_COL;
    real_T *tmp1 = (real_T*)rtDW.StateSpace_PWORK.TMP1;
    real_T *uswlast = (real_T*)rtDW.StateSpace_PWORK.USWLAST;
    int_T newState;
    int_T swChanged = 0;
    int loopsToDo = 20;
    real_T temp;

    /* keep an initial copy of switch_status*/
    memcpy(switch_status_init, switch_status, 150 * sizeof(int_T));
    memcpy(uswlast, &rtDW.StateSpace_o1[0], 150*sizeof(real_T));
    do {
      if (loopsToDo == 1) {            /* Need to reset some variables: */
        swChanged = 0;

        /* return to the original switch status*/
        {
          int_T i1;
          for (i1=0; i1 < 150; i1++) {
            swChanged = ((SwitchChange[i1] = switch_status_init[i1] -
                          switch_status[i1]) != 0) ? 1 : swChanged;
            switch_status[i1] = switch_status_init[i1];
          }
        }
      } else {
        /*
         * Compute outputs:
         * ---------------
         */
        real_T *Cs = (real_T*)rtDW.StateSpace_PWORK.CS;
        real_T *Ds = (real_T*)rtDW.StateSpace_PWORK.DS;

        {
          int_T i1;
          real_T *y0 = &rtDW.StateSpace_o1[0];
          for (i1=0; i1 < 192; i1++) {
            accum = 0.0;

            {
              int_T i2;
              real_T *xd = &rtDW.StateSpace_DSTATE[0];
              for (i2=0; i2 < 242; i2++) {
                accum += *(Cs++) * xd[i2];
              }
            }

            {
              int_T i2;
              const real_T *u0 = rtConstP.SwitchCurrents_Value;
              for (i2=0; i2 < 90; i2++) {
                accum += *(Ds++) * u0[i2];
              }

              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * 0.0;
              accum += *(Ds++) * rtDW.AC;
              accum += *(Ds++) * rtDW.AC_k;
              accum += *(Ds++) * rtDW.AC_n;
            }

            y0[i1] = accum;
          }
        }

        swChanged = 0;

        {
          int_T i1;
          real_T *y0 = &rtDW.StateSpace_o1[0];
          for (i1=0; i1 < 150; i1++) {
            switch (switchTypes[i1]) {
             case 3 :                  /* Diodes */
              newState = y0[i1] > 0.0 ? 1 : ((y0[i1] < 0.0) ? 0 :
                switch_status[i1]);
              break;

             case 7 :                  /* MOSFETs or IGBT/Diode pairs */
              newState = ((y0[i1] > 0.0) && (gState[i1] > 0)) || (y0[i1] < 0.0) ?
                1 : (((y0[i1] > 0.0) && gState[i1] == 0) ? 0 : switch_status[i1]);
              break;
            }

            swChanged = ((SwitchChange[i1] = newState - switch_status[i1]) != 0)
              ? 1 : swChanged;
            switch_status[i1] = newState;/* Keep new state */
          }
        }
      }

      /*
       * Compute new As, Bs, Cs and Ds matrixes:
       * --------------------------------------
       */
      if (swChanged) {
        real_T *As = (real_T*)rtDW.StateSpace_PWORK.AS;
        real_T *Cs = (real_T*)rtDW.StateSpace_PWORK.CS;
        real_T *Bs = (real_T*)rtDW.StateSpace_PWORK.BS;
        real_T *Ds = (real_T*)rtDW.StateSpace_PWORK.DS;
        real_T a1;

        {
          int_T i1;
          for (i1=0; i1 < 150; i1++) {
            if (SwitchChange[i1] != 0) {
              a1 = 1000.0*SwitchChange[i1];
              temp = 1/(1-Ds[i1*154]*a1);

              {
                int_T i2;
                for (i2=0; i2 < 192; i2++) {
                  DxCol[i2]= Ds[i2 * 153 + i1]*temp*a1;
                }
              }

              DxCol[i1] = temp;

              {
                int_T i2;
                for (i2=0; i2 < 242; i2++) {
                  BDcol[i2]= Bs[i2 * 153 + i1]*a1;
                }
              }

              /* Copy row nSw of Cs into tmp1 and zero it out in Cs */
              memcpy(tmp1, &Cs[i1 * 242], 242 * sizeof(real_T));
              memset(&Cs[i1 * 242], '\0', 242 * sizeof(real_T));

              /* Copy row nSw of Ds into tmp2 and zero it out in Ds */
              memcpy(tmp2, &Ds[i1 * 153], 153 * sizeof(real_T));
              memset(&Ds[i1 * 153], '\0', 153 * sizeof(real_T));

              /* Cs = Cs + DxCol * tmp1, Ds = Ds + DxCol * tmp2 *******************/
              {
                int_T i2;
                for (i2=0; i2 < 192; i2++) {
                  a1 = DxCol[i2];

                  {
                    int_T i3;
                    for (i3=0; i3 < 242; i3++) {
                      Cs[i2 * 242 + i3] += a1 * tmp1[i3];
                    }
                  }

                  {
                    int_T i3;
                    for (i3=0; i3 < 153; i3++) {
                      Ds[i2 * 153 + i3] += a1 * tmp2[i3];
                    }
                  }
                }
              }

              /* As = As + BdCol*Cs(nSw,:), Bs = Bs + BdCol*Ds(nSw,:) *************/
              {
                int_T i2;
                for (i2=0; i2 < 242; i2++) {
                  a1 = BDcol[i2];

                  {
                    int_T i3;
                    for (i3=0; i3 < 242; i3++) {
                      As[i2 * 242 + i3] += a1 * Cs[i1 * 242 + i3];
                    }
                  }

                  {
                    int_T i3;
                    for (i3=0; i3 < 153; i3++) {
                      Bs[i2 * 153 + i3] += a1 * Ds[i1 * 153 + i3];
                    }
                  }
                }
              }
            }
          }
        }
      }                                /* if (swChanged) */
    } while (swChanged > 0 && --loopsToDo > 0);

    if (loopsToDo == 0) {
      real_T *Cs = (real_T*)rtDW.StateSpace_PWORK.CS;
      real_T *Ds = (real_T*)rtDW.StateSpace_PWORK.DS;

      {
        int_T i1;
        real_T *y0 = &rtDW.StateSpace_o1[0];
        for (i1=0; i1 < 192; i1++) {
          accum = 0.0;

          {
            int_T i2;
            real_T *xd = &rtDW.StateSpace_DSTATE[0];
            for (i2=0; i2 < 242; i2++) {
              accum += *(Cs++) * xd[i2];
            }
          }

          {
            int_T i2;
            const real_T *u0 = rtConstP.SwitchCurrents_Value;
            for (i2=0; i2 < 90; i2++) {
              accum += *(Ds++) * u0[i2];
            }

            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * rtDW.AC;
            accum += *(Ds++) * rtDW.AC_k;
            accum += *(Ds++) * rtDW.AC_n;
          }

          y0[i1] = accum;
        }
      }
    }

    /* Output new switches states */
    {
      int_T i1;
      real_T *y1 = &rtDW.StateSpace_o2[0];
      for (i1=0; i1 < 150; i1++) {
        y1[i1] = (real_T)switch_status[i1];
      }
    }
  }

  /* Sin: '<Root>/Sine Wave' */
  rtb_Modulation_idx_0 = sin(rtb_Modulation_idx_2) * 0.8;
  rtb_Modulation_idx_1 = sin(rtb_Modulation_idx_2 + -2.0943951023931953) * 0.8;
  rtb_Modulation_idx_2 = sin(rtb_Modulation_idx_2 + 2.0943951023931953) * 0.8;

  /* Clock: '<S33>/Clock' incorporates:
   *  Clock: '<S137>/Clock'
   *  Clock: '<S138>/Clock'
   *  Clock: '<S141>/Clock'
   *  Clock: '<S142>/Clock'
   *  Clock: '<S145>/Clock'
   *  Clock: '<S146>/Clock'
   *  Clock: '<S149>/Clock'
   *  Clock: '<S150>/Clock'
   *  Clock: '<S153>/Clock'
   *  Clock: '<S154>/Clock'
   *  Clock: '<S242>/Clock'
   *  Clock: '<S243>/Clock'
   *  Clock: '<S246>/Clock'
   *  Clock: '<S247>/Clock'
   *  Clock: '<S250>/Clock'
   *  Clock: '<S251>/Clock'
   *  Clock: '<S254>/Clock'
   *  Clock: '<S255>/Clock'
   *  Clock: '<S258>/Clock'
   *  Clock: '<S259>/Clock'
   *  Clock: '<S32>/Clock'
   *  Clock: '<S36>/Clock'
   *  Clock: '<S37>/Clock'
   *  Clock: '<S40>/Clock'
   *  Clock: '<S41>/Clock'
   *  Clock: '<S44>/Clock'
   *  Clock: '<S45>/Clock'
   *  Clock: '<S48>/Clock'
   *  Clock: '<S49>/Clock'
   */
  rtb_Sum_tmp = rtM->Timing.t[0];

  /* Sum: '<S15>/Sum' incorporates:
   *  Clock: '<S33>/Clock'
   *  Constant: '<S33>/Constant'
   *  Lookup_n-D: '<S33>/Look-Up Table1'
   *  Math: '<S33>/Math Function'
   *  S-Function (sfun_tstart): '<S33>/startTime'
   *  Sum: '<S33>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_0 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled6, rtConstP.pooled5, 3U);

  /* Relay: '<S15>/Relay' incorporates:
   *  Relay: '<S15>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode = false;
      }
    }
  }

  rtDW.Relay = rtDW.Relay_Mode;

  /* End of Relay: '<S15>/Relay' */

  /* Relay: '<S15>/Relay1' */
  rtDW.Relay1 = !rtDW.Relay1_Mode;

  /* Sum: '<S15>/Sum1' incorporates:
   *  Constant: '<S32>/Constant'
   *  Lookup_n-D: '<S32>/Look-Up Table1'
   *  Math: '<S32>/Math Function'
   *  S-Function (sfun_tstart): '<S32>/startTime'
   *  Sum: '<S32>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_0 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled6, rtConstP.pooled9, 3U);

  /* Relay: '<S15>/Relay2' incorporates:
   *  Relay: '<S15>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode = false;
      }
    }
  }

  rtDW.Relay2 = !rtDW.Relay2_Mode;

  /* End of Relay: '<S15>/Relay2' */

  /* Relay: '<S15>/Relay3' */
  rtDW.Relay3 = rtDW.Relay3_Mode;

  /* Sum: '<S16>/Sum' incorporates:
   *  Constant: '<S37>/Constant'
   *  Lookup_n-D: '<S37>/Look-Up Table1'
   *  Math: '<S37>/Math Function'
   *  S-Function (sfun_tstart): '<S37>/startTime'
   *  Sum: '<S37>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_0 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled11, rtConstP.pooled10, 3U);

  /* Relay: '<S16>/Relay' incorporates:
   *  Relay: '<S16>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_l = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_l = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_m = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_m = false;
      }
    }
  }

  rtDW.Relay_p = rtDW.Relay_Mode_l;

  /* End of Relay: '<S16>/Relay' */

  /* Relay: '<S16>/Relay1' */
  rtDW.Relay1_g = !rtDW.Relay1_Mode_m;

  /* Sum: '<S16>/Sum1' incorporates:
   *  Constant: '<S36>/Constant'
   *  Lookup_n-D: '<S36>/Look-Up Table1'
   *  Math: '<S36>/Math Function'
   *  S-Function (sfun_tstart): '<S36>/startTime'
   *  Sum: '<S36>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_0 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled11, rtConstP.pooled12, 3U);

  /* Relay: '<S16>/Relay2' incorporates:
   *  Relay: '<S16>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_h = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_h = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_d = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_d = false;
      }
    }
  }

  rtDW.Relay2_f = !rtDW.Relay2_Mode_h;

  /* End of Relay: '<S16>/Relay2' */

  /* Relay: '<S16>/Relay3' */
  rtDW.Relay3_h = rtDW.Relay3_Mode_d;

  /* Sum: '<S17>/Sum' incorporates:
   *  Constant: '<S41>/Constant'
   *  Lookup_n-D: '<S41>/Look-Up Table1'
   *  Math: '<S41>/Math Function'
   *  S-Function (sfun_tstart): '<S41>/startTime'
   *  Sum: '<S41>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_0 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled14, rtConstP.pooled13, 3U);

  /* Relay: '<S17>/Relay' incorporates:
   *  Relay: '<S17>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_p = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_p = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_m4 = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_m4 = false;
      }
    }
  }

  rtDW.Relay_l = rtDW.Relay_Mode_p;

  /* End of Relay: '<S17>/Relay' */

  /* Relay: '<S17>/Relay1' */
  rtDW.Relay1_c = !rtDW.Relay1_Mode_m4;

  /* Sum: '<S17>/Sum1' incorporates:
   *  Constant: '<S40>/Constant'
   *  Lookup_n-D: '<S40>/Look-Up Table1'
   *  Math: '<S40>/Math Function'
   *  S-Function (sfun_tstart): '<S40>/startTime'
   *  Sum: '<S40>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_0 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled14, rtConstP.pooled15, 3U);

  /* Relay: '<S17>/Relay2' incorporates:
   *  Relay: '<S17>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_p = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_p = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_a = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_a = false;
      }
    }
  }

  rtDW.Relay2_b = !rtDW.Relay2_Mode_p;

  /* End of Relay: '<S17>/Relay2' */

  /* Relay: '<S17>/Relay3' */
  rtDW.Relay3_n = rtDW.Relay3_Mode_a;

  /* Sum: '<S18>/Sum' incorporates:
   *  Constant: '<S45>/Constant'
   *  Lookup_n-D: '<S45>/Look-Up Table1'
   *  Math: '<S45>/Math Function'
   *  S-Function (sfun_tstart): '<S45>/startTime'
   *  Sum: '<S45>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_0 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled17, rtConstP.pooled16, 3U);

  /* Relay: '<S18>/Relay' incorporates:
   *  Relay: '<S18>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_i = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_i = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_b = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_b = false;
      }
    }
  }

  rtDW.Relay_a = rtDW.Relay_Mode_i;

  /* End of Relay: '<S18>/Relay' */

  /* Relay: '<S18>/Relay1' */
  rtDW.Relay1_n = !rtDW.Relay1_Mode_b;

  /* Sum: '<S18>/Sum1' incorporates:
   *  Constant: '<S44>/Constant'
   *  Lookup_n-D: '<S44>/Look-Up Table1'
   *  Math: '<S44>/Math Function'
   *  S-Function (sfun_tstart): '<S44>/startTime'
   *  Sum: '<S44>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_0 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled17, rtConstP.pooled18, 3U);

  /* Relay: '<S18>/Relay2' incorporates:
   *  Relay: '<S18>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_i = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_i = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_l = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_l = false;
      }
    }
  }

  rtDW.Relay2_i = !rtDW.Relay2_Mode_i;

  /* End of Relay: '<S18>/Relay2' */

  /* Relay: '<S18>/Relay3' */
  rtDW.Relay3_f = rtDW.Relay3_Mode_l;

  /* Sum: '<S19>/Sum' incorporates:
   *  Constant: '<S49>/Constant'
   *  Lookup_n-D: '<S49>/Look-Up Table1'
   *  Math: '<S49>/Math Function'
   *  S-Function (sfun_tstart): '<S49>/startTime'
   *  Sum: '<S49>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_0 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled20, rtConstP.pooled19, 3U);

  /* Relay: '<S19>/Relay' incorporates:
   *  Relay: '<S19>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_ib = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_ib = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_g = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_g = false;
      }
    }
  }

  rtDW.Relay_m = rtDW.Relay_Mode_ib;

  /* End of Relay: '<S19>/Relay' */

  /* Relay: '<S19>/Relay1' */
  rtDW.Relay1_e = !rtDW.Relay1_Mode_g;

  /* Sum: '<S19>/Sum1' incorporates:
   *  Constant: '<S48>/Constant'
   *  Lookup_n-D: '<S48>/Look-Up Table1'
   *  Math: '<S48>/Math Function'
   *  S-Function (sfun_tstart): '<S48>/startTime'
   *  Sum: '<S48>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_0 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled20, rtConstP.pooled21, 3U);

  /* Relay: '<S19>/Relay2' incorporates:
   *  Relay: '<S19>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_j = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_j = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_j = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_j = false;
      }
    }
  }

  rtDW.Relay2_io = !rtDW.Relay2_Mode_j;

  /* End of Relay: '<S19>/Relay2' */

  /* Relay: '<S19>/Relay3' */
  rtDW.Relay3_o = rtDW.Relay3_Mode_j;

  /* Sum: '<S120>/Sum' incorporates:
   *  Constant: '<S138>/Constant'
   *  Lookup_n-D: '<S138>/Look-Up Table1'
   *  Math: '<S138>/Math Function'
   *  S-Function (sfun_tstart): '<S138>/startTime'
   *  Sum: '<S138>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_1 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled6, rtConstP.pooled5, 3U);

  /* Relay: '<S120>/Relay' incorporates:
   *  Relay: '<S120>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_j = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_j = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_e = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_e = false;
      }
    }
  }

  rtDW.Relay_n = rtDW.Relay_Mode_j;

  /* End of Relay: '<S120>/Relay' */

  /* Relay: '<S120>/Relay1' */
  rtDW.Relay1_m = !rtDW.Relay1_Mode_e;

  /* Sum: '<S120>/Sum1' incorporates:
   *  Constant: '<S137>/Constant'
   *  Lookup_n-D: '<S137>/Look-Up Table1'
   *  Math: '<S137>/Math Function'
   *  S-Function (sfun_tstart): '<S137>/startTime'
   *  Sum: '<S137>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_1 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled6, rtConstP.pooled9, 3U);

  /* Relay: '<S120>/Relay2' incorporates:
   *  Relay: '<S120>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_f = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_f = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_n = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_n = false;
      }
    }
  }

  rtDW.Relay2_e = !rtDW.Relay2_Mode_f;

  /* End of Relay: '<S120>/Relay2' */

  /* Relay: '<S120>/Relay3' */
  rtDW.Relay3_d = rtDW.Relay3_Mode_n;

  /* Sum: '<S121>/Sum' incorporates:
   *  Constant: '<S142>/Constant'
   *  Lookup_n-D: '<S142>/Look-Up Table1'
   *  Math: '<S142>/Math Function'
   *  S-Function (sfun_tstart): '<S142>/startTime'
   *  Sum: '<S142>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_1 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled11, rtConstP.pooled10, 3U);

  /* Relay: '<S121>/Relay' incorporates:
   *  Relay: '<S121>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_o = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_o = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_a = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_a = false;
      }
    }
  }

  rtDW.Relay_k = rtDW.Relay_Mode_o;

  /* End of Relay: '<S121>/Relay' */

  /* Relay: '<S121>/Relay1' */
  rtDW.Relay1_mk = !rtDW.Relay1_Mode_a;

  /* Sum: '<S121>/Sum1' incorporates:
   *  Constant: '<S141>/Constant'
   *  Lookup_n-D: '<S141>/Look-Up Table1'
   *  Math: '<S141>/Math Function'
   *  S-Function (sfun_tstart): '<S141>/startTime'
   *  Sum: '<S141>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_1 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled11, rtConstP.pooled12, 3U);

  /* Relay: '<S121>/Relay2' incorporates:
   *  Relay: '<S121>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_pv = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_pv = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_f = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_f = false;
      }
    }
  }

  rtDW.Relay2_j = !rtDW.Relay2_Mode_pv;

  /* End of Relay: '<S121>/Relay2' */

  /* Relay: '<S121>/Relay3' */
  rtDW.Relay3_m = rtDW.Relay3_Mode_f;

  /* Sum: '<S122>/Sum' incorporates:
   *  Constant: '<S146>/Constant'
   *  Lookup_n-D: '<S146>/Look-Up Table1'
   *  Math: '<S146>/Math Function'
   *  S-Function (sfun_tstart): '<S146>/startTime'
   *  Sum: '<S146>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_1 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled14, rtConstP.pooled13, 3U);

  /* Relay: '<S122>/Relay' incorporates:
   *  Relay: '<S122>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_c = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_c = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_l = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_l = false;
      }
    }
  }

  rtDW.Relay_mm = rtDW.Relay_Mode_c;

  /* End of Relay: '<S122>/Relay' */

  /* Relay: '<S122>/Relay1' */
  rtDW.Relay1_gm = !rtDW.Relay1_Mode_l;

  /* Sum: '<S122>/Sum1' incorporates:
   *  Constant: '<S145>/Constant'
   *  Lookup_n-D: '<S145>/Look-Up Table1'
   *  Math: '<S145>/Math Function'
   *  S-Function (sfun_tstart): '<S145>/startTime'
   *  Sum: '<S145>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_1 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled14, rtConstP.pooled15, 3U);

  /* Relay: '<S122>/Relay2' incorporates:
   *  Relay: '<S122>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_jz = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_jz = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_b = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_b = false;
      }
    }
  }

  rtDW.Relay2_fy = !rtDW.Relay2_Mode_jz;

  /* End of Relay: '<S122>/Relay2' */

  /* Relay: '<S122>/Relay3' */
  rtDW.Relay3_nm = rtDW.Relay3_Mode_b;

  /* Sum: '<S123>/Sum' incorporates:
   *  Constant: '<S150>/Constant'
   *  Lookup_n-D: '<S150>/Look-Up Table1'
   *  Math: '<S150>/Math Function'
   *  S-Function (sfun_tstart): '<S150>/startTime'
   *  Sum: '<S150>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_1 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled17, rtConstP.pooled16, 3U);

  /* Relay: '<S123>/Relay' incorporates:
   *  Relay: '<S123>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_js = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_js = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_h = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_h = false;
      }
    }
  }

  rtDW.Relay_c = rtDW.Relay_Mode_js;

  /* End of Relay: '<S123>/Relay' */

  /* Relay: '<S123>/Relay1' */
  rtDW.Relay1_p = !rtDW.Relay1_Mode_h;

  /* Sum: '<S123>/Sum1' incorporates:
   *  Constant: '<S149>/Constant'
   *  Lookup_n-D: '<S149>/Look-Up Table1'
   *  Math: '<S149>/Math Function'
   *  S-Function (sfun_tstart): '<S149>/startTime'
   *  Sum: '<S149>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_1 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled17, rtConstP.pooled18, 3U);

  /* Relay: '<S123>/Relay2' incorporates:
   *  Relay: '<S123>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_o = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_o = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_i = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_i = false;
      }
    }
  }

  rtDW.Relay2_c = !rtDW.Relay2_Mode_o;

  /* End of Relay: '<S123>/Relay2' */

  /* Relay: '<S123>/Relay3' */
  rtDW.Relay3_my = rtDW.Relay3_Mode_i;

  /* Sum: '<S124>/Sum' incorporates:
   *  Constant: '<S154>/Constant'
   *  Lookup_n-D: '<S154>/Look-Up Table1'
   *  Math: '<S154>/Math Function'
   *  S-Function (sfun_tstart): '<S154>/startTime'
   *  Sum: '<S154>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_1 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled20, rtConstP.pooled19, 3U);

  /* Relay: '<S124>/Relay' incorporates:
   *  Relay: '<S124>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_pp = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_pp = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_eq = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_eq = false;
      }
    }
  }

  rtDW.Relay_h = rtDW.Relay_Mode_pp;

  /* End of Relay: '<S124>/Relay' */

  /* Relay: '<S124>/Relay1' */
  rtDW.Relay1_f = !rtDW.Relay1_Mode_eq;

  /* Sum: '<S124>/Sum1' incorporates:
   *  Constant: '<S153>/Constant'
   *  Lookup_n-D: '<S153>/Look-Up Table1'
   *  Math: '<S153>/Math Function'
   *  S-Function (sfun_tstart): '<S153>/startTime'
   *  Sum: '<S153>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_1 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled20, rtConstP.pooled21, 3U);

  /* Relay: '<S124>/Relay2' incorporates:
   *  Relay: '<S124>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_g = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_g = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_g = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_g = false;
      }
    }
  }

  rtDW.Relay2_m = !rtDW.Relay2_Mode_g;

  /* End of Relay: '<S124>/Relay2' */

  /* Relay: '<S124>/Relay3' */
  rtDW.Relay3_b = rtDW.Relay3_Mode_g;

  /* Sum: '<S225>/Sum' incorporates:
   *  Constant: '<S243>/Constant'
   *  Lookup_n-D: '<S243>/Look-Up Table1'
   *  Math: '<S243>/Math Function'
   *  S-Function (sfun_tstart): '<S243>/startTime'
   *  Sum: '<S243>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_2 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled6, rtConstP.pooled5, 3U);

  /* Relay: '<S225>/Relay' incorporates:
   *  Relay: '<S225>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_e = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_e = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_h4 = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_h4 = false;
      }
    }
  }

  rtDW.Relay_j = rtDW.Relay_Mode_e;

  /* End of Relay: '<S225>/Relay' */

  /* Relay: '<S225>/Relay1' */
  rtDW.Relay1_gw = !rtDW.Relay1_Mode_h4;

  /* Sum: '<S225>/Sum1' incorporates:
   *  Constant: '<S242>/Constant'
   *  Lookup_n-D: '<S242>/Look-Up Table1'
   *  Math: '<S242>/Math Function'
   *  S-Function (sfun_tstart): '<S242>/startTime'
   *  Sum: '<S242>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_2 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled6, rtConstP.pooled9, 3U);

  /* Relay: '<S225>/Relay2' incorporates:
   *  Relay: '<S225>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_gm = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_gm = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_c = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_c = false;
      }
    }
  }

  rtDW.Relay2_g = !rtDW.Relay2_Mode_gm;

  /* End of Relay: '<S225>/Relay2' */

  /* Relay: '<S225>/Relay3' */
  rtDW.Relay3_ob = rtDW.Relay3_Mode_c;

  /* Sum: '<S226>/Sum' incorporates:
   *  Constant: '<S247>/Constant'
   *  Lookup_n-D: '<S247>/Look-Up Table1'
   *  Math: '<S247>/Math Function'
   *  S-Function (sfun_tstart): '<S247>/startTime'
   *  Sum: '<S247>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_2 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled11, rtConstP.pooled10, 3U);

  /* Relay: '<S226>/Relay' incorporates:
   *  Relay: '<S226>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_ld = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_ld = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_n = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_n = false;
      }
    }
  }

  rtDW.Relay_mu = rtDW.Relay_Mode_ld;

  /* End of Relay: '<S226>/Relay' */

  /* Relay: '<S226>/Relay1' */
  rtDW.Relay1_j = !rtDW.Relay1_Mode_n;

  /* Sum: '<S226>/Sum1' incorporates:
   *  Constant: '<S246>/Constant'
   *  Lookup_n-D: '<S246>/Look-Up Table1'
   *  Math: '<S246>/Math Function'
   *  S-Function (sfun_tstart): '<S246>/startTime'
   *  Sum: '<S246>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_2 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled11, rtConstP.pooled12, 3U);

  /* Relay: '<S226>/Relay2' incorporates:
   *  Relay: '<S226>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_ge = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_ge = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_e = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_e = false;
      }
    }
  }

  rtDW.Relay2_ex = !rtDW.Relay2_Mode_ge;

  /* End of Relay: '<S226>/Relay2' */

  /* Relay: '<S226>/Relay3' */
  rtDW.Relay3_c = rtDW.Relay3_Mode_e;

  /* Sum: '<S227>/Sum' incorporates:
   *  Constant: '<S251>/Constant'
   *  Lookup_n-D: '<S251>/Look-Up Table1'
   *  Math: '<S251>/Math Function'
   *  S-Function (sfun_tstart): '<S251>/startTime'
   *  Sum: '<S251>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_2 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled14, rtConstP.pooled13, 3U);

  /* Relay: '<S227>/Relay' incorporates:
   *  Relay: '<S227>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_b = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_b = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_o = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_o = false;
      }
    }
  }

  rtDW.Relay_ca = rtDW.Relay_Mode_b;

  /* End of Relay: '<S227>/Relay' */

  /* Relay: '<S227>/Relay1' */
  rtDW.Relay1_a = !rtDW.Relay1_Mode_o;

  /* Sum: '<S227>/Sum1' incorporates:
   *  Constant: '<S250>/Constant'
   *  Lookup_n-D: '<S250>/Look-Up Table1'
   *  Math: '<S250>/Math Function'
   *  S-Function (sfun_tstart): '<S250>/startTime'
   *  Sum: '<S250>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_2 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled14, rtConstP.pooled15, 3U);

  /* Relay: '<S227>/Relay2' incorporates:
   *  Relay: '<S227>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_pm = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_pm = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_fz = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_fz = false;
      }
    }
  }

  rtDW.Relay2_cb = !rtDW.Relay2_Mode_pm;

  /* End of Relay: '<S227>/Relay2' */

  /* Relay: '<S227>/Relay3' */
  rtDW.Relay3_nt = rtDW.Relay3_Mode_fz;

  /* Sum: '<S228>/Sum' incorporates:
   *  Constant: '<S255>/Constant'
   *  Lookup_n-D: '<S255>/Look-Up Table1'
   *  Math: '<S255>/Math Function'
   *  S-Function (sfun_tstart): '<S255>/startTime'
   *  Sum: '<S255>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_2 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled17, rtConstP.pooled16, 3U);

  /* Relay: '<S228>/Relay' incorporates:
   *  Relay: '<S228>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_jo = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_jo = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_es = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_es = false;
      }
    }
  }

  rtDW.Relay_hg = rtDW.Relay_Mode_jo;

  /* End of Relay: '<S228>/Relay' */

  /* Relay: '<S228>/Relay1' */
  rtDW.Relay1_o = !rtDW.Relay1_Mode_es;

  /* Sum: '<S228>/Sum1' incorporates:
   *  Constant: '<S254>/Constant'
   *  Lookup_n-D: '<S254>/Look-Up Table1'
   *  Math: '<S254>/Math Function'
   *  S-Function (sfun_tstart): '<S254>/startTime'
   *  Sum: '<S254>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_2 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled17, rtConstP.pooled18, 3U);

  /* Relay: '<S228>/Relay2' incorporates:
   *  Relay: '<S228>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_c = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_c = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_cr = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_cr = false;
      }
    }
  }

  rtDW.Relay2_p = !rtDW.Relay2_Mode_c;

  /* End of Relay: '<S228>/Relay2' */

  /* Relay: '<S228>/Relay3' */
  rtDW.Relay3_p = rtDW.Relay3_Mode_cr;

  /* Sum: '<S229>/Sum' incorporates:
   *  Constant: '<S259>/Constant'
   *  Lookup_n-D: '<S259>/Look-Up Table1'
   *  Math: '<S259>/Math Function'
   *  S-Function (sfun_tstart): '<S259>/startTime'
   *  Sum: '<S259>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_2 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled20, rtConstP.pooled19, 3U);

  /* Relay: '<S229>/Relay' incorporates:
   *  Relay: '<S229>/Relay1'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay_Mode_g = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay_Mode_g = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay1_Mode_g5 = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay1_Mode_g5 = false;
      }
    }
  }

  rtDW.Relay_h2 = rtDW.Relay_Mode_g;

  /* End of Relay: '<S229>/Relay' */

  /* Relay: '<S229>/Relay1' */
  rtDW.Relay1_ca = !rtDW.Relay1_Mode_g5;

  /* Sum: '<S229>/Sum1' incorporates:
   *  Constant: '<S258>/Constant'
   *  Lookup_n-D: '<S258>/Look-Up Table1'
   *  Math: '<S258>/Math Function'
   *  S-Function (sfun_tstart): '<S258>/startTime'
   *  Sum: '<S258>/Sum'
   */
  rtb_Sum = rtb_Modulation_idx_2 - look1_binlx(rt_remd_snf(rtb_Sum_tmp - (0.0),
    0.0016667), rtConstP.pooled20, rtConstP.pooled21, 3U);

  /* Relay: '<S229>/Relay2' incorporates:
   *  Relay: '<S229>/Relay3'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay2_Mode_n = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay2_Mode_n = false;
      }
    }

    if (rtb_Sum >= 2.2204460492503131E-16) {
      rtDW.Relay3_Mode_p = true;
    } else {
      if (rtb_Sum <= 2.2204460492503131E-16) {
        rtDW.Relay3_Mode_p = false;
      }
    }
  }

  rtDW.Relay2_bp = !rtDW.Relay2_Mode_n;

  /* End of Relay: '<S229>/Relay2' */

  /* Relay: '<S229>/Relay3' */
  rtDW.Relay3_cq = rtDW.Relay3_Mode_p;

  /* Update for S-Function (sfun_spssw_discc): '<S360>/State-Space' incorporates:
   *  Constant: '<S156>/g'
   *  Constant: '<S165>/g'
   *  Constant: '<S174>/g'
   *  Constant: '<S183>/g'
   *  Constant: '<S192>/g'
   *  Constant: '<S261>/g'
   *  Constant: '<S270>/g'
   *  Constant: '<S279>/g'
   *  Constant: '<S288>/g'
   *  Constant: '<S297>/g'
   *  Constant: '<S362>/SwitchCurrents'
   *  Constant: '<S51>/g'
   *  Constant: '<S60>/g'
   *  Constant: '<S69>/g'
   *  Constant: '<S78>/g'
   *  Constant: '<S87>/g'
   */

  /* S-Function block: <S360>/State-Space */
  {
    const real_T *As = (real_T*)rtDW.StateSpace_PWORK.AS;
    const real_T *Bs = (real_T*)rtDW.StateSpace_PWORK.BS;
    real_T *xtmp = (real_T*)rtDW.StateSpace_PWORK.XTMP;
    real_T accum;

    /* Calculate new states... */
    {
      int_T i1;
      real_T *xd = &rtDW.StateSpace_DSTATE[0];
      for (i1=0; i1 < 242; i1++) {
        accum = 0.0;

        {
          int_T i2;
          real_T *xd = &rtDW.StateSpace_DSTATE[0];
          for (i2=0; i2 < 242; i2++) {
            accum += *(As++) * xd[i2];
          }
        }

        {
          int_T i2;
          const real_T *u0 = rtConstP.SwitchCurrents_Value;
          for (i2=0; i2 < 90; i2++) {
            accum += *(Bs++) * u0[i2];
          }

          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * 0.0;
          accum += *(Bs++) * rtDW.AC;
          accum += *(Bs++) * rtDW.AC_k;
          accum += *(Bs++) * rtDW.AC_n;
        }

        xtmp[i1] = accum;
      }
    }

    {
      int_T i1;
      real_T *xd = &rtDW.StateSpace_DSTATE[0];
      for (i1=0; i1 < 242; i1++) {
        xd[i1] = xtmp[i1];
      }
    }

    {
      int_T *gState = (int_T*)rtDW.StateSpace_PWORK.G_STATE;

      /* Store switch gates values for next step */
      {
        int_T i1;
        const real_T *u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        u1 = rtConstP.pooled22;
        for (i1=0; i1 < 6; i1++) {
          *(gState++) = (int_T) u1[i1];
        }

        *(gState++) = (int_T) rtDW.Relay;
        *(gState++) = (int_T) rtDW.Relay1;
        *(gState++) = (int_T) rtDW.Relay2;
        *(gState++) = (int_T) rtDW.Relay3;
        *(gState++) = (int_T) rtDW.Relay_p;
        *(gState++) = (int_T) rtDW.Relay1_g;
        *(gState++) = (int_T) rtDW.Relay2_f;
        *(gState++) = (int_T) rtDW.Relay3_h;
        *(gState++) = (int_T) rtDW.Relay_l;
        *(gState++) = (int_T) rtDW.Relay1_c;
        *(gState++) = (int_T) rtDW.Relay2_b;
        *(gState++) = (int_T) rtDW.Relay3_n;
        *(gState++) = (int_T) rtDW.Relay_a;
        *(gState++) = (int_T) rtDW.Relay1_n;
        *(gState++) = (int_T) rtDW.Relay2_i;
        *(gState++) = (int_T) rtDW.Relay3_f;
        *(gState++) = (int_T) rtDW.Relay_m;
        *(gState++) = (int_T) rtDW.Relay1_e;
        *(gState++) = (int_T) rtDW.Relay2_io;
        *(gState++) = (int_T) rtDW.Relay3_o;
        *(gState++) = (int_T) rtDW.Relay_n;
        *(gState++) = (int_T) rtDW.Relay1_m;
        *(gState++) = (int_T) rtDW.Relay2_e;
        *(gState++) = (int_T) rtDW.Relay3_d;
        *(gState++) = (int_T) rtDW.Relay_k;
        *(gState++) = (int_T) rtDW.Relay1_mk;
        *(gState++) = (int_T) rtDW.Relay2_j;
        *(gState++) = (int_T) rtDW.Relay3_m;
        *(gState++) = (int_T) rtDW.Relay_mm;
        *(gState++) = (int_T) rtDW.Relay1_gm;
        *(gState++) = (int_T) rtDW.Relay2_fy;
        *(gState++) = (int_T) rtDW.Relay3_nm;
        *(gState++) = (int_T) rtDW.Relay_c;
        *(gState++) = (int_T) rtDW.Relay1_p;
        *(gState++) = (int_T) rtDW.Relay2_c;
        *(gState++) = (int_T) rtDW.Relay3_my;
        *(gState++) = (int_T) rtDW.Relay_h;
        *(gState++) = (int_T) rtDW.Relay1_f;
        *(gState++) = (int_T) rtDW.Relay2_m;
        *(gState++) = (int_T) rtDW.Relay3_b;
        *(gState++) = (int_T) rtDW.Relay_j;
        *(gState++) = (int_T) rtDW.Relay1_gw;
        *(gState++) = (int_T) rtDW.Relay2_g;
        *(gState++) = (int_T) rtDW.Relay3_ob;
        *(gState++) = (int_T) rtDW.Relay_mu;
        *(gState++) = (int_T) rtDW.Relay1_j;
        *(gState++) = (int_T) rtDW.Relay2_ex;
        *(gState++) = (int_T) rtDW.Relay3_c;
        *(gState++) = (int_T) rtDW.Relay_ca;
        *(gState++) = (int_T) rtDW.Relay1_a;
        *(gState++) = (int_T) rtDW.Relay2_cb;
        *(gState++) = (int_T) rtDW.Relay3_nt;
        *(gState++) = (int_T) rtDW.Relay_hg;
        *(gState++) = (int_T) rtDW.Relay1_o;
        *(gState++) = (int_T) rtDW.Relay2_p;
        *(gState++) = (int_T) rtDW.Relay3_p;
        *(gState++) = (int_T) rtDW.Relay_h2;
        *(gState++) = (int_T) rtDW.Relay1_ca;
        *(gState++) = (int_T) rtDW.Relay2_bp;
        *(gState++) = (int_T) rtDW.Relay3_cq;
      }
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++rtM->Timing.clockTick0)) {
    ++rtM->Timing.clockTickH0;
  }

  rtM->Timing.t[0] = rtM->Timing.clockTick0 * rtM->Timing.stepSize0 +
    rtM->Timing.clockTickH0 * rtM->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [2.0E-6s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 2.0E-6, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    rtM->Timing.clockTick1++;
    if (!rtM->Timing.clockTick1) {
      rtM->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void power_fivecells_initialize(void)
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
  rtM->Timing.stepSize0 = 2.0E-6;

  /* Start for S-Function (sfun_spssw_discc): '<S360>/State-Space' incorporates:
   *  Constant: '<S156>/g'
   *  Constant: '<S165>/g'
   *  Constant: '<S174>/g'
   *  Constant: '<S183>/g'
   *  Constant: '<S192>/g'
   *  Constant: '<S261>/g'
   *  Constant: '<S270>/g'
   *  Constant: '<S279>/g'
   *  Constant: '<S288>/g'
   *  Constant: '<S297>/g'
   *  Constant: '<S362>/SwitchCurrents'
   *  Constant: '<S51>/g'
   *  Constant: '<S60>/g'
   *  Constant: '<S69>/g'
   *  Constant: '<S78>/g'
   *  Constant: '<S87>/g'
   */

  /* S-Function block: <S360>/State-Space */
  {
    rtDW.StateSpace_PWORK.AS = (real_T*)calloc(242 * 242, sizeof(real_T));
    rtDW.StateSpace_PWORK.BS = (real_T*)calloc(242 * 153, sizeof(real_T));
    rtDW.StateSpace_PWORK.CS = (real_T*)calloc(192 * 242, sizeof(real_T));
    rtDW.StateSpace_PWORK.DS = (real_T*)calloc(192 * 153, sizeof(real_T));
    rtDW.StateSpace_PWORK.DX_COL = (real_T*)calloc(192, sizeof(real_T));
    rtDW.StateSpace_PWORK.TMP2 = (real_T*)calloc(153, sizeof(real_T));
    rtDW.StateSpace_PWORK.BD_COL = (real_T*)calloc(242, sizeof(real_T));
    rtDW.StateSpace_PWORK.TMP1 = (real_T*)calloc(242, sizeof(real_T));
    rtDW.StateSpace_PWORK.XTMP = (real_T*)calloc(242, sizeof(real_T));
    rtDW.StateSpace_PWORK.SWITCH_STATUS = (int_T*)calloc(150, sizeof(int_T));
    rtDW.StateSpace_PWORK.SW_CHG = (int_T*)calloc(150, sizeof(int_T));
    rtDW.StateSpace_PWORK.G_STATE = (int_T*)calloc(150, sizeof(int_T));
    rtDW.StateSpace_PWORK.Y_SWITCH = (real_T*)calloc(150, sizeof(real_T));
    rtDW.StateSpace_PWORK.SWITCH_TYPES = (int_T*)calloc(150, sizeof(int_T));
    rtDW.StateSpace_PWORK.IDX_OUT_SW = (int_T*)calloc(150, sizeof(int_T));
    rtDW.StateSpace_PWORK.SWITCH_STATUS_INIT = (int_T*)calloc(150, sizeof(int_T));
    rtDW.StateSpace_PWORK.USWLAST = (real_T*)calloc(150, sizeof(real_T));
  }

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S360>/State-Space' incorporates:
   *  Constant: '<S156>/g'
   *  Constant: '<S165>/g'
   *  Constant: '<S174>/g'
   *  Constant: '<S183>/g'
   *  Constant: '<S192>/g'
   *  Constant: '<S261>/g'
   *  Constant: '<S270>/g'
   *  Constant: '<S279>/g'
   *  Constant: '<S288>/g'
   *  Constant: '<S297>/g'
   *  Constant: '<S362>/SwitchCurrents'
   *  Constant: '<S51>/g'
   *  Constant: '<S60>/g'
   *  Constant: '<S69>/g'
   *  Constant: '<S78>/g'
   *  Constant: '<S87>/g'
   */
  {
    int32_T i, j;
    real_T *As = (real_T*)rtDW.StateSpace_PWORK.AS;
    real_T *Bs = (real_T*)rtDW.StateSpace_PWORK.BS;
    real_T *Cs = (real_T*)rtDW.StateSpace_PWORK.CS;
    real_T *Ds = (real_T*)rtDW.StateSpace_PWORK.DS;
    real_T *X0 = (real_T*)&rtDW.StateSpace_DSTATE[0];
    for (i = 0; i < 242; i++) {
      X0[i] = (rtConstP.StateSpace_X0_param[i]);
    }

    /* Copy and transpose A and B */
    for (i=0; i<242; i++) {
      for (j=0; j<242; j++)
        As[i*242 + j] = (rtConstP.StateSpace_AS_param[i + j*242]);
      for (j=0; j<153; j++)
        Bs[i*153 + j] = (rtConstP.StateSpace_BS_param[i + j*242]);
    }

    /* Copy and transpose C */
    for (i=0; i<192; i++) {
      for (j=0; j<242; j++)
        Cs[i*242 + j] = (rtConstP.StateSpace_CS_param[i + j*192]);
    }

    /* Copy and transpose D */
    for (i=0; i<192; i++) {
      for (j=0; j<153; j++)
        Ds[i*153 + j] = (rtConstP.StateSpace_DS_param[i + j*192]);
    }

    {
      /* Switches work vectors */
      int_T *switch_status = (int_T*) rtDW.StateSpace_PWORK.SWITCH_STATUS;
      int_T *gState = (int_T*)rtDW.StateSpace_PWORK.G_STATE;
      real_T *yswitch = (real_T*)rtDW.StateSpace_PWORK.Y_SWITCH;
      int_T *switchTypes = (int_T*)rtDW.StateSpace_PWORK.SWITCH_TYPES;
      int_T *idxOutSw = (int_T*)rtDW.StateSpace_PWORK.IDX_OUT_SW;
      int_T *switch_status_init = (int_T*)
        rtDW.StateSpace_PWORK.SWITCH_STATUS_INIT;

      /* Initialize work vectors */
      switch_status[0] = 0;
      switch_status_init[0] = 0;
      gState[0] = (int_T) 0.0;
      yswitch[0] = 1/0.001;
      switchTypes[0] = (int_T)3.0;
      idxOutSw[0] = ((int_T)0.0) - 1;
      switch_status[1] = 0;
      switch_status_init[1] = 0;
      gState[1] = (int_T) 0.0;
      yswitch[1] = 1/0.001;
      switchTypes[1] = (int_T)3.0;
      idxOutSw[1] = ((int_T)0.0) - 1;
      switch_status[2] = 0;
      switch_status_init[2] = 0;
      gState[2] = (int_T) 0.0;
      yswitch[2] = 1/0.001;
      switchTypes[2] = (int_T)3.0;
      idxOutSw[2] = ((int_T)0.0) - 1;
      switch_status[3] = 0;
      switch_status_init[3] = 0;
      gState[3] = (int_T) 0.0;
      yswitch[3] = 1/0.001;
      switchTypes[3] = (int_T)3.0;
      idxOutSw[3] = ((int_T)0.0) - 1;
      switch_status[4] = 0;
      switch_status_init[4] = 0;
      gState[4] = (int_T) 0.0;
      yswitch[4] = 1/0.001;
      switchTypes[4] = (int_T)3.0;
      idxOutSw[4] = ((int_T)0.0) - 1;
      switch_status[5] = 0;
      switch_status_init[5] = 0;
      gState[5] = (int_T) 0.0;
      yswitch[5] = 1/0.001;
      switchTypes[5] = (int_T)3.0;
      idxOutSw[5] = ((int_T)0.0) - 1;
      switch_status[6] = 0;
      switch_status_init[6] = 0;
      gState[6] = (int_T) 0.0;
      yswitch[6] = 1/0.001;
      switchTypes[6] = (int_T)3.0;
      idxOutSw[6] = ((int_T)0.0) - 1;
      switch_status[7] = 0;
      switch_status_init[7] = 0;
      gState[7] = (int_T) 0.0;
      yswitch[7] = 1/0.001;
      switchTypes[7] = (int_T)3.0;
      idxOutSw[7] = ((int_T)0.0) - 1;
      switch_status[8] = 0;
      switch_status_init[8] = 0;
      gState[8] = (int_T) 0.0;
      yswitch[8] = 1/0.001;
      switchTypes[8] = (int_T)3.0;
      idxOutSw[8] = ((int_T)0.0) - 1;
      switch_status[9] = 0;
      switch_status_init[9] = 0;
      gState[9] = (int_T) 0.0;
      yswitch[9] = 1/0.001;
      switchTypes[9] = (int_T)3.0;
      idxOutSw[9] = ((int_T)0.0) - 1;
      switch_status[10] = 0;
      switch_status_init[10] = 0;
      gState[10] = (int_T) 0.0;
      yswitch[10] = 1/0.001;
      switchTypes[10] = (int_T)3.0;
      idxOutSw[10] = ((int_T)0.0) - 1;
      switch_status[11] = 0;
      switch_status_init[11] = 0;
      gState[11] = (int_T) 0.0;
      yswitch[11] = 1/0.001;
      switchTypes[11] = (int_T)3.0;
      idxOutSw[11] = ((int_T)0.0) - 1;
      switch_status[12] = 0;
      switch_status_init[12] = 0;
      gState[12] = (int_T) 0.0;
      yswitch[12] = 1/0.001;
      switchTypes[12] = (int_T)3.0;
      idxOutSw[12] = ((int_T)0.0) - 1;
      switch_status[13] = 0;
      switch_status_init[13] = 0;
      gState[13] = (int_T) 0.0;
      yswitch[13] = 1/0.001;
      switchTypes[13] = (int_T)3.0;
      idxOutSw[13] = ((int_T)0.0) - 1;
      switch_status[14] = 0;
      switch_status_init[14] = 0;
      gState[14] = (int_T) 0.0;
      yswitch[14] = 1/0.001;
      switchTypes[14] = (int_T)3.0;
      idxOutSw[14] = ((int_T)0.0) - 1;
      switch_status[15] = 0;
      switch_status_init[15] = 0;
      gState[15] = (int_T) 0.0;
      yswitch[15] = 1/0.001;
      switchTypes[15] = (int_T)3.0;
      idxOutSw[15] = ((int_T)0.0) - 1;
      switch_status[16] = 0;
      switch_status_init[16] = 0;
      gState[16] = (int_T) 0.0;
      yswitch[16] = 1/0.001;
      switchTypes[16] = (int_T)3.0;
      idxOutSw[16] = ((int_T)0.0) - 1;
      switch_status[17] = 0;
      switch_status_init[17] = 0;
      gState[17] = (int_T) 0.0;
      yswitch[17] = 1/0.001;
      switchTypes[17] = (int_T)3.0;
      idxOutSw[17] = ((int_T)0.0) - 1;
      switch_status[18] = 0;
      switch_status_init[18] = 0;
      gState[18] = (int_T) 0.0;
      yswitch[18] = 1/0.001;
      switchTypes[18] = (int_T)3.0;
      idxOutSw[18] = ((int_T)0.0) - 1;
      switch_status[19] = 0;
      switch_status_init[19] = 0;
      gState[19] = (int_T) 0.0;
      yswitch[19] = 1/0.001;
      switchTypes[19] = (int_T)3.0;
      idxOutSw[19] = ((int_T)0.0) - 1;
      switch_status[20] = 0;
      switch_status_init[20] = 0;
      gState[20] = (int_T) 0.0;
      yswitch[20] = 1/0.001;
      switchTypes[20] = (int_T)3.0;
      idxOutSw[20] = ((int_T)0.0) - 1;
      switch_status[21] = 0;
      switch_status_init[21] = 0;
      gState[21] = (int_T) 0.0;
      yswitch[21] = 1/0.001;
      switchTypes[21] = (int_T)3.0;
      idxOutSw[21] = ((int_T)0.0) - 1;
      switch_status[22] = 0;
      switch_status_init[22] = 0;
      gState[22] = (int_T) 0.0;
      yswitch[22] = 1/0.001;
      switchTypes[22] = (int_T)3.0;
      idxOutSw[22] = ((int_T)0.0) - 1;
      switch_status[23] = 0;
      switch_status_init[23] = 0;
      gState[23] = (int_T) 0.0;
      yswitch[23] = 1/0.001;
      switchTypes[23] = (int_T)3.0;
      idxOutSw[23] = ((int_T)0.0) - 1;
      switch_status[24] = 0;
      switch_status_init[24] = 0;
      gState[24] = (int_T) 0.0;
      yswitch[24] = 1/0.001;
      switchTypes[24] = (int_T)3.0;
      idxOutSw[24] = ((int_T)0.0) - 1;
      switch_status[25] = 0;
      switch_status_init[25] = 0;
      gState[25] = (int_T) 0.0;
      yswitch[25] = 1/0.001;
      switchTypes[25] = (int_T)3.0;
      idxOutSw[25] = ((int_T)0.0) - 1;
      switch_status[26] = 0;
      switch_status_init[26] = 0;
      gState[26] = (int_T) 0.0;
      yswitch[26] = 1/0.001;
      switchTypes[26] = (int_T)3.0;
      idxOutSw[26] = ((int_T)0.0) - 1;
      switch_status[27] = 0;
      switch_status_init[27] = 0;
      gState[27] = (int_T) 0.0;
      yswitch[27] = 1/0.001;
      switchTypes[27] = (int_T)3.0;
      idxOutSw[27] = ((int_T)0.0) - 1;
      switch_status[28] = 0;
      switch_status_init[28] = 0;
      gState[28] = (int_T) 0.0;
      yswitch[28] = 1/0.001;
      switchTypes[28] = (int_T)3.0;
      idxOutSw[28] = ((int_T)0.0) - 1;
      switch_status[29] = 0;
      switch_status_init[29] = 0;
      gState[29] = (int_T) 0.0;
      yswitch[29] = 1/0.001;
      switchTypes[29] = (int_T)3.0;
      idxOutSw[29] = ((int_T)0.0) - 1;
      switch_status[30] = 0;
      switch_status_init[30] = 0;
      gState[30] = (int_T) 0.0;
      yswitch[30] = 1/0.001;
      switchTypes[30] = (int_T)3.0;
      idxOutSw[30] = ((int_T)0.0) - 1;
      switch_status[31] = 0;
      switch_status_init[31] = 0;
      gState[31] = (int_T) 0.0;
      yswitch[31] = 1/0.001;
      switchTypes[31] = (int_T)3.0;
      idxOutSw[31] = ((int_T)0.0) - 1;
      switch_status[32] = 0;
      switch_status_init[32] = 0;
      gState[32] = (int_T) 0.0;
      yswitch[32] = 1/0.001;
      switchTypes[32] = (int_T)3.0;
      idxOutSw[32] = ((int_T)0.0) - 1;
      switch_status[33] = 0;
      switch_status_init[33] = 0;
      gState[33] = (int_T) 0.0;
      yswitch[33] = 1/0.001;
      switchTypes[33] = (int_T)3.0;
      idxOutSw[33] = ((int_T)0.0) - 1;
      switch_status[34] = 0;
      switch_status_init[34] = 0;
      gState[34] = (int_T) 0.0;
      yswitch[34] = 1/0.001;
      switchTypes[34] = (int_T)3.0;
      idxOutSw[34] = ((int_T)0.0) - 1;
      switch_status[35] = 0;
      switch_status_init[35] = 0;
      gState[35] = (int_T) 0.0;
      yswitch[35] = 1/0.001;
      switchTypes[35] = (int_T)3.0;
      idxOutSw[35] = ((int_T)0.0) - 1;
      switch_status[36] = 0;
      switch_status_init[36] = 0;
      gState[36] = (int_T) 0.0;
      yswitch[36] = 1/0.001;
      switchTypes[36] = (int_T)3.0;
      idxOutSw[36] = ((int_T)0.0) - 1;
      switch_status[37] = 0;
      switch_status_init[37] = 0;
      gState[37] = (int_T) 0.0;
      yswitch[37] = 1/0.001;
      switchTypes[37] = (int_T)3.0;
      idxOutSw[37] = ((int_T)0.0) - 1;
      switch_status[38] = 0;
      switch_status_init[38] = 0;
      gState[38] = (int_T) 0.0;
      yswitch[38] = 1/0.001;
      switchTypes[38] = (int_T)3.0;
      idxOutSw[38] = ((int_T)0.0) - 1;
      switch_status[39] = 0;
      switch_status_init[39] = 0;
      gState[39] = (int_T) 0.0;
      yswitch[39] = 1/0.001;
      switchTypes[39] = (int_T)3.0;
      idxOutSw[39] = ((int_T)0.0) - 1;
      switch_status[40] = 0;
      switch_status_init[40] = 0;
      gState[40] = (int_T) 0.0;
      yswitch[40] = 1/0.001;
      switchTypes[40] = (int_T)3.0;
      idxOutSw[40] = ((int_T)0.0) - 1;
      switch_status[41] = 0;
      switch_status_init[41] = 0;
      gState[41] = (int_T) 0.0;
      yswitch[41] = 1/0.001;
      switchTypes[41] = (int_T)3.0;
      idxOutSw[41] = ((int_T)0.0) - 1;
      switch_status[42] = 0;
      switch_status_init[42] = 0;
      gState[42] = (int_T) 0.0;
      yswitch[42] = 1/0.001;
      switchTypes[42] = (int_T)3.0;
      idxOutSw[42] = ((int_T)0.0) - 1;
      switch_status[43] = 0;
      switch_status_init[43] = 0;
      gState[43] = (int_T) 0.0;
      yswitch[43] = 1/0.001;
      switchTypes[43] = (int_T)3.0;
      idxOutSw[43] = ((int_T)0.0) - 1;
      switch_status[44] = 0;
      switch_status_init[44] = 0;
      gState[44] = (int_T) 0.0;
      yswitch[44] = 1/0.001;
      switchTypes[44] = (int_T)3.0;
      idxOutSw[44] = ((int_T)0.0) - 1;
      switch_status[45] = 0;
      switch_status_init[45] = 0;
      gState[45] = (int_T) 0.0;
      yswitch[45] = 1/0.001;
      switchTypes[45] = (int_T)3.0;
      idxOutSw[45] = ((int_T)0.0) - 1;
      switch_status[46] = 0;
      switch_status_init[46] = 0;
      gState[46] = (int_T) 0.0;
      yswitch[46] = 1/0.001;
      switchTypes[46] = (int_T)3.0;
      idxOutSw[46] = ((int_T)0.0) - 1;
      switch_status[47] = 0;
      switch_status_init[47] = 0;
      gState[47] = (int_T) 0.0;
      yswitch[47] = 1/0.001;
      switchTypes[47] = (int_T)3.0;
      idxOutSw[47] = ((int_T)0.0) - 1;
      switch_status[48] = 0;
      switch_status_init[48] = 0;
      gState[48] = (int_T) 0.0;
      yswitch[48] = 1/0.001;
      switchTypes[48] = (int_T)3.0;
      idxOutSw[48] = ((int_T)0.0) - 1;
      switch_status[49] = 0;
      switch_status_init[49] = 0;
      gState[49] = (int_T) 0.0;
      yswitch[49] = 1/0.001;
      switchTypes[49] = (int_T)3.0;
      idxOutSw[49] = ((int_T)0.0) - 1;
      switch_status[50] = 0;
      switch_status_init[50] = 0;
      gState[50] = (int_T) 0.0;
      yswitch[50] = 1/0.001;
      switchTypes[50] = (int_T)3.0;
      idxOutSw[50] = ((int_T)0.0) - 1;
      switch_status[51] = 0;
      switch_status_init[51] = 0;
      gState[51] = (int_T) 0.0;
      yswitch[51] = 1/0.001;
      switchTypes[51] = (int_T)3.0;
      idxOutSw[51] = ((int_T)0.0) - 1;
      switch_status[52] = 0;
      switch_status_init[52] = 0;
      gState[52] = (int_T) 0.0;
      yswitch[52] = 1/0.001;
      switchTypes[52] = (int_T)3.0;
      idxOutSw[52] = ((int_T)0.0) - 1;
      switch_status[53] = 0;
      switch_status_init[53] = 0;
      gState[53] = (int_T) 0.0;
      yswitch[53] = 1/0.001;
      switchTypes[53] = (int_T)3.0;
      idxOutSw[53] = ((int_T)0.0) - 1;
      switch_status[54] = 0;
      switch_status_init[54] = 0;
      gState[54] = (int_T) 0.0;
      yswitch[54] = 1/0.001;
      switchTypes[54] = (int_T)3.0;
      idxOutSw[54] = ((int_T)0.0) - 1;
      switch_status[55] = 0;
      switch_status_init[55] = 0;
      gState[55] = (int_T) 0.0;
      yswitch[55] = 1/0.001;
      switchTypes[55] = (int_T)3.0;
      idxOutSw[55] = ((int_T)0.0) - 1;
      switch_status[56] = 0;
      switch_status_init[56] = 0;
      gState[56] = (int_T) 0.0;
      yswitch[56] = 1/0.001;
      switchTypes[56] = (int_T)3.0;
      idxOutSw[56] = ((int_T)0.0) - 1;
      switch_status[57] = 0;
      switch_status_init[57] = 0;
      gState[57] = (int_T) 0.0;
      yswitch[57] = 1/0.001;
      switchTypes[57] = (int_T)3.0;
      idxOutSw[57] = ((int_T)0.0) - 1;
      switch_status[58] = 0;
      switch_status_init[58] = 0;
      gState[58] = (int_T) 0.0;
      yswitch[58] = 1/0.001;
      switchTypes[58] = (int_T)3.0;
      idxOutSw[58] = ((int_T)0.0) - 1;
      switch_status[59] = 0;
      switch_status_init[59] = 0;
      gState[59] = (int_T) 0.0;
      yswitch[59] = 1/0.001;
      switchTypes[59] = (int_T)3.0;
      idxOutSw[59] = ((int_T)0.0) - 1;
      switch_status[60] = 0;
      switch_status_init[60] = 0;
      gState[60] = (int_T) 0.0;
      yswitch[60] = 1/0.001;
      switchTypes[60] = (int_T)3.0;
      idxOutSw[60] = ((int_T)0.0) - 1;
      switch_status[61] = 0;
      switch_status_init[61] = 0;
      gState[61] = (int_T) 0.0;
      yswitch[61] = 1/0.001;
      switchTypes[61] = (int_T)3.0;
      idxOutSw[61] = ((int_T)0.0) - 1;
      switch_status[62] = 0;
      switch_status_init[62] = 0;
      gState[62] = (int_T) 0.0;
      yswitch[62] = 1/0.001;
      switchTypes[62] = (int_T)3.0;
      idxOutSw[62] = ((int_T)0.0) - 1;
      switch_status[63] = 0;
      switch_status_init[63] = 0;
      gState[63] = (int_T) 0.0;
      yswitch[63] = 1/0.001;
      switchTypes[63] = (int_T)3.0;
      idxOutSw[63] = ((int_T)0.0) - 1;
      switch_status[64] = 0;
      switch_status_init[64] = 0;
      gState[64] = (int_T) 0.0;
      yswitch[64] = 1/0.001;
      switchTypes[64] = (int_T)3.0;
      idxOutSw[64] = ((int_T)0.0) - 1;
      switch_status[65] = 0;
      switch_status_init[65] = 0;
      gState[65] = (int_T) 0.0;
      yswitch[65] = 1/0.001;
      switchTypes[65] = (int_T)3.0;
      idxOutSw[65] = ((int_T)0.0) - 1;
      switch_status[66] = 0;
      switch_status_init[66] = 0;
      gState[66] = (int_T) 0.0;
      yswitch[66] = 1/0.001;
      switchTypes[66] = (int_T)3.0;
      idxOutSw[66] = ((int_T)0.0) - 1;
      switch_status[67] = 0;
      switch_status_init[67] = 0;
      gState[67] = (int_T) 0.0;
      yswitch[67] = 1/0.001;
      switchTypes[67] = (int_T)3.0;
      idxOutSw[67] = ((int_T)0.0) - 1;
      switch_status[68] = 0;
      switch_status_init[68] = 0;
      gState[68] = (int_T) 0.0;
      yswitch[68] = 1/0.001;
      switchTypes[68] = (int_T)3.0;
      idxOutSw[68] = ((int_T)0.0) - 1;
      switch_status[69] = 0;
      switch_status_init[69] = 0;
      gState[69] = (int_T) 0.0;
      yswitch[69] = 1/0.001;
      switchTypes[69] = (int_T)3.0;
      idxOutSw[69] = ((int_T)0.0) - 1;
      switch_status[70] = 0;
      switch_status_init[70] = 0;
      gState[70] = (int_T) 0.0;
      yswitch[70] = 1/0.001;
      switchTypes[70] = (int_T)3.0;
      idxOutSw[70] = ((int_T)0.0) - 1;
      switch_status[71] = 0;
      switch_status_init[71] = 0;
      gState[71] = (int_T) 0.0;
      yswitch[71] = 1/0.001;
      switchTypes[71] = (int_T)3.0;
      idxOutSw[71] = ((int_T)0.0) - 1;
      switch_status[72] = 0;
      switch_status_init[72] = 0;
      gState[72] = (int_T) 0.0;
      yswitch[72] = 1/0.001;
      switchTypes[72] = (int_T)3.0;
      idxOutSw[72] = ((int_T)0.0) - 1;
      switch_status[73] = 0;
      switch_status_init[73] = 0;
      gState[73] = (int_T) 0.0;
      yswitch[73] = 1/0.001;
      switchTypes[73] = (int_T)3.0;
      idxOutSw[73] = ((int_T)0.0) - 1;
      switch_status[74] = 0;
      switch_status_init[74] = 0;
      gState[74] = (int_T) 0.0;
      yswitch[74] = 1/0.001;
      switchTypes[74] = (int_T)3.0;
      idxOutSw[74] = ((int_T)0.0) - 1;
      switch_status[75] = 0;
      switch_status_init[75] = 0;
      gState[75] = (int_T) 0.0;
      yswitch[75] = 1/0.001;
      switchTypes[75] = (int_T)3.0;
      idxOutSw[75] = ((int_T)0.0) - 1;
      switch_status[76] = 0;
      switch_status_init[76] = 0;
      gState[76] = (int_T) 0.0;
      yswitch[76] = 1/0.001;
      switchTypes[76] = (int_T)3.0;
      idxOutSw[76] = ((int_T)0.0) - 1;
      switch_status[77] = 0;
      switch_status_init[77] = 0;
      gState[77] = (int_T) 0.0;
      yswitch[77] = 1/0.001;
      switchTypes[77] = (int_T)3.0;
      idxOutSw[77] = ((int_T)0.0) - 1;
      switch_status[78] = 0;
      switch_status_init[78] = 0;
      gState[78] = (int_T) 0.0;
      yswitch[78] = 1/0.001;
      switchTypes[78] = (int_T)3.0;
      idxOutSw[78] = ((int_T)0.0) - 1;
      switch_status[79] = 0;
      switch_status_init[79] = 0;
      gState[79] = (int_T) 0.0;
      yswitch[79] = 1/0.001;
      switchTypes[79] = (int_T)3.0;
      idxOutSw[79] = ((int_T)0.0) - 1;
      switch_status[80] = 0;
      switch_status_init[80] = 0;
      gState[80] = (int_T) 0.0;
      yswitch[80] = 1/0.001;
      switchTypes[80] = (int_T)3.0;
      idxOutSw[80] = ((int_T)0.0) - 1;
      switch_status[81] = 0;
      switch_status_init[81] = 0;
      gState[81] = (int_T) 0.0;
      yswitch[81] = 1/0.001;
      switchTypes[81] = (int_T)3.0;
      idxOutSw[81] = ((int_T)0.0) - 1;
      switch_status[82] = 0;
      switch_status_init[82] = 0;
      gState[82] = (int_T) 0.0;
      yswitch[82] = 1/0.001;
      switchTypes[82] = (int_T)3.0;
      idxOutSw[82] = ((int_T)0.0) - 1;
      switch_status[83] = 0;
      switch_status_init[83] = 0;
      gState[83] = (int_T) 0.0;
      yswitch[83] = 1/0.001;
      switchTypes[83] = (int_T)3.0;
      idxOutSw[83] = ((int_T)0.0) - 1;
      switch_status[84] = 0;
      switch_status_init[84] = 0;
      gState[84] = (int_T) 0.0;
      yswitch[84] = 1/0.001;
      switchTypes[84] = (int_T)3.0;
      idxOutSw[84] = ((int_T)0.0) - 1;
      switch_status[85] = 0;
      switch_status_init[85] = 0;
      gState[85] = (int_T) 0.0;
      yswitch[85] = 1/0.001;
      switchTypes[85] = (int_T)3.0;
      idxOutSw[85] = ((int_T)0.0) - 1;
      switch_status[86] = 0;
      switch_status_init[86] = 0;
      gState[86] = (int_T) 0.0;
      yswitch[86] = 1/0.001;
      switchTypes[86] = (int_T)3.0;
      idxOutSw[86] = ((int_T)0.0) - 1;
      switch_status[87] = 0;
      switch_status_init[87] = 0;
      gState[87] = (int_T) 0.0;
      yswitch[87] = 1/0.001;
      switchTypes[87] = (int_T)3.0;
      idxOutSw[87] = ((int_T)0.0) - 1;
      switch_status[88] = 0;
      switch_status_init[88] = 0;
      gState[88] = (int_T) 0.0;
      yswitch[88] = 1/0.001;
      switchTypes[88] = (int_T)3.0;
      idxOutSw[88] = ((int_T)0.0) - 1;
      switch_status[89] = 0;
      switch_status_init[89] = 0;
      gState[89] = (int_T) 0.0;
      yswitch[89] = 1/0.001;
      switchTypes[89] = (int_T)3.0;
      idxOutSw[89] = ((int_T)0.0) - 1;
      switch_status[90] = 0;
      switch_status_init[90] = 0;
      gState[90] = (int_T) 0.0;
      yswitch[90] = 1/0.001;
      switchTypes[90] = (int_T)7.0;
      idxOutSw[90] = ((int_T)0.0) - 1;
      switch_status[91] = 0;
      switch_status_init[91] = 0;
      gState[91] = (int_T) 0.0;
      yswitch[91] = 1/0.001;
      switchTypes[91] = (int_T)7.0;
      idxOutSw[91] = ((int_T)0.0) - 1;
      switch_status[92] = 0;
      switch_status_init[92] = 0;
      gState[92] = (int_T) 0.0;
      yswitch[92] = 1/0.001;
      switchTypes[92] = (int_T)7.0;
      idxOutSw[92] = ((int_T)0.0) - 1;
      switch_status[93] = 0;
      switch_status_init[93] = 0;
      gState[93] = (int_T) 0.0;
      yswitch[93] = 1/0.001;
      switchTypes[93] = (int_T)7.0;
      idxOutSw[93] = ((int_T)0.0) - 1;
      switch_status[94] = 0;
      switch_status_init[94] = 0;
      gState[94] = (int_T) 0.0;
      yswitch[94] = 1/0.001;
      switchTypes[94] = (int_T)7.0;
      idxOutSw[94] = ((int_T)0.0) - 1;
      switch_status[95] = 0;
      switch_status_init[95] = 0;
      gState[95] = (int_T) 0.0;
      yswitch[95] = 1/0.001;
      switchTypes[95] = (int_T)7.0;
      idxOutSw[95] = ((int_T)0.0) - 1;
      switch_status[96] = 0;
      switch_status_init[96] = 0;
      gState[96] = (int_T) 0.0;
      yswitch[96] = 1/0.001;
      switchTypes[96] = (int_T)7.0;
      idxOutSw[96] = ((int_T)0.0) - 1;
      switch_status[97] = 0;
      switch_status_init[97] = 0;
      gState[97] = (int_T) 0.0;
      yswitch[97] = 1/0.001;
      switchTypes[97] = (int_T)7.0;
      idxOutSw[97] = ((int_T)0.0) - 1;
      switch_status[98] = 0;
      switch_status_init[98] = 0;
      gState[98] = (int_T) 0.0;
      yswitch[98] = 1/0.001;
      switchTypes[98] = (int_T)7.0;
      idxOutSw[98] = ((int_T)0.0) - 1;
      switch_status[99] = 0;
      switch_status_init[99] = 0;
      gState[99] = (int_T) 0.0;
      yswitch[99] = 1/0.001;
      switchTypes[99] = (int_T)7.0;
      idxOutSw[99] = ((int_T)0.0) - 1;
      switch_status[100] = 0;
      switch_status_init[100] = 0;
      gState[100] = (int_T) 0.0;
      yswitch[100] = 1/0.001;
      switchTypes[100] = (int_T)7.0;
      idxOutSw[100] = ((int_T)0.0) - 1;
      switch_status[101] = 0;
      switch_status_init[101] = 0;
      gState[101] = (int_T) 0.0;
      yswitch[101] = 1/0.001;
      switchTypes[101] = (int_T)7.0;
      idxOutSw[101] = ((int_T)0.0) - 1;
      switch_status[102] = 0;
      switch_status_init[102] = 0;
      gState[102] = (int_T) 0.0;
      yswitch[102] = 1/0.001;
      switchTypes[102] = (int_T)7.0;
      idxOutSw[102] = ((int_T)0.0) - 1;
      switch_status[103] = 0;
      switch_status_init[103] = 0;
      gState[103] = (int_T) 0.0;
      yswitch[103] = 1/0.001;
      switchTypes[103] = (int_T)7.0;
      idxOutSw[103] = ((int_T)0.0) - 1;
      switch_status[104] = 0;
      switch_status_init[104] = 0;
      gState[104] = (int_T) 0.0;
      yswitch[104] = 1/0.001;
      switchTypes[104] = (int_T)7.0;
      idxOutSw[104] = ((int_T)0.0) - 1;
      switch_status[105] = 0;
      switch_status_init[105] = 0;
      gState[105] = (int_T) 0.0;
      yswitch[105] = 1/0.001;
      switchTypes[105] = (int_T)7.0;
      idxOutSw[105] = ((int_T)0.0) - 1;
      switch_status[106] = 0;
      switch_status_init[106] = 0;
      gState[106] = (int_T) 0.0;
      yswitch[106] = 1/0.001;
      switchTypes[106] = (int_T)7.0;
      idxOutSw[106] = ((int_T)0.0) - 1;
      switch_status[107] = 0;
      switch_status_init[107] = 0;
      gState[107] = (int_T) 0.0;
      yswitch[107] = 1/0.001;
      switchTypes[107] = (int_T)7.0;
      idxOutSw[107] = ((int_T)0.0) - 1;
      switch_status[108] = 0;
      switch_status_init[108] = 0;
      gState[108] = (int_T) 0.0;
      yswitch[108] = 1/0.001;
      switchTypes[108] = (int_T)7.0;
      idxOutSw[108] = ((int_T)0.0) - 1;
      switch_status[109] = 0;
      switch_status_init[109] = 0;
      gState[109] = (int_T) 0.0;
      yswitch[109] = 1/0.001;
      switchTypes[109] = (int_T)7.0;
      idxOutSw[109] = ((int_T)0.0) - 1;
      switch_status[110] = 0;
      switch_status_init[110] = 0;
      gState[110] = (int_T) 0.0;
      yswitch[110] = 1/0.001;
      switchTypes[110] = (int_T)7.0;
      idxOutSw[110] = ((int_T)0.0) - 1;
      switch_status[111] = 0;
      switch_status_init[111] = 0;
      gState[111] = (int_T) 0.0;
      yswitch[111] = 1/0.001;
      switchTypes[111] = (int_T)7.0;
      idxOutSw[111] = ((int_T)0.0) - 1;
      switch_status[112] = 0;
      switch_status_init[112] = 0;
      gState[112] = (int_T) 0.0;
      yswitch[112] = 1/0.001;
      switchTypes[112] = (int_T)7.0;
      idxOutSw[112] = ((int_T)0.0) - 1;
      switch_status[113] = 0;
      switch_status_init[113] = 0;
      gState[113] = (int_T) 0.0;
      yswitch[113] = 1/0.001;
      switchTypes[113] = (int_T)7.0;
      idxOutSw[113] = ((int_T)0.0) - 1;
      switch_status[114] = 0;
      switch_status_init[114] = 0;
      gState[114] = (int_T) 0.0;
      yswitch[114] = 1/0.001;
      switchTypes[114] = (int_T)7.0;
      idxOutSw[114] = ((int_T)0.0) - 1;
      switch_status[115] = 0;
      switch_status_init[115] = 0;
      gState[115] = (int_T) 0.0;
      yswitch[115] = 1/0.001;
      switchTypes[115] = (int_T)7.0;
      idxOutSw[115] = ((int_T)0.0) - 1;
      switch_status[116] = 0;
      switch_status_init[116] = 0;
      gState[116] = (int_T) 0.0;
      yswitch[116] = 1/0.001;
      switchTypes[116] = (int_T)7.0;
      idxOutSw[116] = ((int_T)0.0) - 1;
      switch_status[117] = 0;
      switch_status_init[117] = 0;
      gState[117] = (int_T) 0.0;
      yswitch[117] = 1/0.001;
      switchTypes[117] = (int_T)7.0;
      idxOutSw[117] = ((int_T)0.0) - 1;
      switch_status[118] = 0;
      switch_status_init[118] = 0;
      gState[118] = (int_T) 0.0;
      yswitch[118] = 1/0.001;
      switchTypes[118] = (int_T)7.0;
      idxOutSw[118] = ((int_T)0.0) - 1;
      switch_status[119] = 0;
      switch_status_init[119] = 0;
      gState[119] = (int_T) 0.0;
      yswitch[119] = 1/0.001;
      switchTypes[119] = (int_T)7.0;
      idxOutSw[119] = ((int_T)0.0) - 1;
      switch_status[120] = 0;
      switch_status_init[120] = 0;
      gState[120] = (int_T) 0.0;
      yswitch[120] = 1/0.001;
      switchTypes[120] = (int_T)7.0;
      idxOutSw[120] = ((int_T)0.0) - 1;
      switch_status[121] = 0;
      switch_status_init[121] = 0;
      gState[121] = (int_T) 0.0;
      yswitch[121] = 1/0.001;
      switchTypes[121] = (int_T)7.0;
      idxOutSw[121] = ((int_T)0.0) - 1;
      switch_status[122] = 0;
      switch_status_init[122] = 0;
      gState[122] = (int_T) 0.0;
      yswitch[122] = 1/0.001;
      switchTypes[122] = (int_T)7.0;
      idxOutSw[122] = ((int_T)0.0) - 1;
      switch_status[123] = 0;
      switch_status_init[123] = 0;
      gState[123] = (int_T) 0.0;
      yswitch[123] = 1/0.001;
      switchTypes[123] = (int_T)7.0;
      idxOutSw[123] = ((int_T)0.0) - 1;
      switch_status[124] = 0;
      switch_status_init[124] = 0;
      gState[124] = (int_T) 0.0;
      yswitch[124] = 1/0.001;
      switchTypes[124] = (int_T)7.0;
      idxOutSw[124] = ((int_T)0.0) - 1;
      switch_status[125] = 0;
      switch_status_init[125] = 0;
      gState[125] = (int_T) 0.0;
      yswitch[125] = 1/0.001;
      switchTypes[125] = (int_T)7.0;
      idxOutSw[125] = ((int_T)0.0) - 1;
      switch_status[126] = 0;
      switch_status_init[126] = 0;
      gState[126] = (int_T) 0.0;
      yswitch[126] = 1/0.001;
      switchTypes[126] = (int_T)7.0;
      idxOutSw[126] = ((int_T)0.0) - 1;
      switch_status[127] = 0;
      switch_status_init[127] = 0;
      gState[127] = (int_T) 0.0;
      yswitch[127] = 1/0.001;
      switchTypes[127] = (int_T)7.0;
      idxOutSw[127] = ((int_T)0.0) - 1;
      switch_status[128] = 0;
      switch_status_init[128] = 0;
      gState[128] = (int_T) 0.0;
      yswitch[128] = 1/0.001;
      switchTypes[128] = (int_T)7.0;
      idxOutSw[128] = ((int_T)0.0) - 1;
      switch_status[129] = 0;
      switch_status_init[129] = 0;
      gState[129] = (int_T) 0.0;
      yswitch[129] = 1/0.001;
      switchTypes[129] = (int_T)7.0;
      idxOutSw[129] = ((int_T)0.0) - 1;
      switch_status[130] = 0;
      switch_status_init[130] = 0;
      gState[130] = (int_T) 0.0;
      yswitch[130] = 1/0.001;
      switchTypes[130] = (int_T)7.0;
      idxOutSw[130] = ((int_T)0.0) - 1;
      switch_status[131] = 0;
      switch_status_init[131] = 0;
      gState[131] = (int_T) 0.0;
      yswitch[131] = 1/0.001;
      switchTypes[131] = (int_T)7.0;
      idxOutSw[131] = ((int_T)0.0) - 1;
      switch_status[132] = 0;
      switch_status_init[132] = 0;
      gState[132] = (int_T) 0.0;
      yswitch[132] = 1/0.001;
      switchTypes[132] = (int_T)7.0;
      idxOutSw[132] = ((int_T)0.0) - 1;
      switch_status[133] = 0;
      switch_status_init[133] = 0;
      gState[133] = (int_T) 0.0;
      yswitch[133] = 1/0.001;
      switchTypes[133] = (int_T)7.0;
      idxOutSw[133] = ((int_T)0.0) - 1;
      switch_status[134] = 0;
      switch_status_init[134] = 0;
      gState[134] = (int_T) 0.0;
      yswitch[134] = 1/0.001;
      switchTypes[134] = (int_T)7.0;
      idxOutSw[134] = ((int_T)0.0) - 1;
      switch_status[135] = 0;
      switch_status_init[135] = 0;
      gState[135] = (int_T) 0.0;
      yswitch[135] = 1/0.001;
      switchTypes[135] = (int_T)7.0;
      idxOutSw[135] = ((int_T)0.0) - 1;
      switch_status[136] = 0;
      switch_status_init[136] = 0;
      gState[136] = (int_T) 0.0;
      yswitch[136] = 1/0.001;
      switchTypes[136] = (int_T)7.0;
      idxOutSw[136] = ((int_T)0.0) - 1;
      switch_status[137] = 0;
      switch_status_init[137] = 0;
      gState[137] = (int_T) 0.0;
      yswitch[137] = 1/0.001;
      switchTypes[137] = (int_T)7.0;
      idxOutSw[137] = ((int_T)0.0) - 1;
      switch_status[138] = 0;
      switch_status_init[138] = 0;
      gState[138] = (int_T) 0.0;
      yswitch[138] = 1/0.001;
      switchTypes[138] = (int_T)7.0;
      idxOutSw[138] = ((int_T)0.0) - 1;
      switch_status[139] = 0;
      switch_status_init[139] = 0;
      gState[139] = (int_T) 0.0;
      yswitch[139] = 1/0.001;
      switchTypes[139] = (int_T)7.0;
      idxOutSw[139] = ((int_T)0.0) - 1;
      switch_status[140] = 0;
      switch_status_init[140] = 0;
      gState[140] = (int_T) 0.0;
      yswitch[140] = 1/0.001;
      switchTypes[140] = (int_T)7.0;
      idxOutSw[140] = ((int_T)0.0) - 1;
      switch_status[141] = 0;
      switch_status_init[141] = 0;
      gState[141] = (int_T) 0.0;
      yswitch[141] = 1/0.001;
      switchTypes[141] = (int_T)7.0;
      idxOutSw[141] = ((int_T)0.0) - 1;
      switch_status[142] = 0;
      switch_status_init[142] = 0;
      gState[142] = (int_T) 0.0;
      yswitch[142] = 1/0.001;
      switchTypes[142] = (int_T)7.0;
      idxOutSw[142] = ((int_T)0.0) - 1;
      switch_status[143] = 0;
      switch_status_init[143] = 0;
      gState[143] = (int_T) 0.0;
      yswitch[143] = 1/0.001;
      switchTypes[143] = (int_T)7.0;
      idxOutSw[143] = ((int_T)0.0) - 1;
      switch_status[144] = 0;
      switch_status_init[144] = 0;
      gState[144] = (int_T) 0.0;
      yswitch[144] = 1/0.001;
      switchTypes[144] = (int_T)7.0;
      idxOutSw[144] = ((int_T)0.0) - 1;
      switch_status[145] = 0;
      switch_status_init[145] = 0;
      gState[145] = (int_T) 0.0;
      yswitch[145] = 1/0.001;
      switchTypes[145] = (int_T)7.0;
      idxOutSw[145] = ((int_T)0.0) - 1;
      switch_status[146] = 0;
      switch_status_init[146] = 0;
      gState[146] = (int_T) 0.0;
      yswitch[146] = 1/0.001;
      switchTypes[146] = (int_T)7.0;
      idxOutSw[146] = ((int_T)0.0) - 1;
      switch_status[147] = 0;
      switch_status_init[147] = 0;
      gState[147] = (int_T) 0.0;
      yswitch[147] = 1/0.001;
      switchTypes[147] = (int_T)7.0;
      idxOutSw[147] = ((int_T)0.0) - 1;
      switch_status[148] = 0;
      switch_status_init[148] = 0;
      gState[148] = (int_T) 0.0;
      yswitch[148] = 1/0.001;
      switchTypes[148] = (int_T)7.0;
      idxOutSw[148] = ((int_T)0.0) - 1;
      switch_status[149] = 0;
      switch_status_init[149] = 0;
      gState[149] = (int_T) 0.0;
      yswitch[149] = 1/0.001;
      switchTypes[149] = (int_T)7.0;
      idxOutSw[149] = ((int_T)0.0) - 1;
    }
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
