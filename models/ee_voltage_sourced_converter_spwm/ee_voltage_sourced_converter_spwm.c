/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_voltage_sourced_converter_spwm.c
 *
 * Code generated for Simulink model 'ee_voltage_sourced_converter_spwm'.
 *
 * Model version                  : 1.140
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 12:54:26 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "ee_voltage_sourced_converter_spwm.h"

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
static void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u,
  const real_T *pData, uint32_T iHi);
static void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u,
  const real_T *pUData, uint32_T iHi);

/* private model entry point functions */
extern void ee_voltage_sourced_converter_spwm_derivatives(void);

/* Lookup Binary Search Utility BINARYSEARCH_real_T */
static void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u,
  const real_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* Lookup Utility LookUp_real_T_real_T */
static void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u,
  const real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
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
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  ee_voltage_sourced_converter_spwm_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  ee_voltage_sourced_converter_spwm_step();
  ee_voltage_sourced_converter_spwm_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  ee_voltage_sourced_converter_spwm_step();
  ee_voltage_sourced_converter_spwm_derivatives();

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
void ee_voltage_sourced_converter_spwm_step(void)
{
  /* local block i/o variables */
  real_T rtb_DataTypeConversion2[6];
  boolean_T rtb_Compare;
  if (rtmIsMajorTimeStep(rtM)) {
    /* set solver stop time */
    if (!(rtM->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&rtM->solverInfo, ((rtM->Timing.clockTickH0 + 1) * rtM->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&rtM->solverInfo, ((rtM->Timing.clockTick0 + 1) * rtM->Timing.stepSize0 + rtM->Timing.clockTickH0 * rtM->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(rtM)) {
    rtM->Timing.t[0] = rtsiGetT(&rtM->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    real_T tmp_0[24];
    int_T tmp_1[7];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T time_0;
    real_T tmp_2[88];
    int_T tmp_3[8];
    real_T rtb_Abs[6];
    real_T rtb_OUTPUT_1_0[4];
    real_T rtb_Trianglefrequencymultiplier[6];
    int32_T i;
    real_T rtb_Abs_i;
    real_T rtb_Trianglefrequencymultipli_b;
    boolean_T tmp_4;
    if (rtmIsMajorTimeStep(rtM)) {
      /* RelationalOperator: '<S8>/Compare' incorporates:
       *  Constant: '<S8>/Constant'
       */
      rtb_Compare = (rtDW.DiscreteTimeIntegrator_DSTATE >= 6.2831853071795862);

      /* DiscreteIntegrator: '<S5>/Discrete-Time Integrator' */
      if (rtb_Compare && (rtDW.DiscreteTimeIntegrator_PrevRese <= 0)) {
        rtDW.DiscreteTimeIntegrator_DSTATE = 0.0;
      }

      for (i = 0; i < 6; i++) {
        /* Sum: '<S1>/Sum3' incorporates:
         *  Constant: '<S1>/Phase offsets'
         *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator'
         *  Sum: '<S1>/Sum2'
         */
        rtb_Abs_i = rtConstP.Phaseoffsets_Value[i] + rtDW.DiscreteTimeIntegrator_DSTATE;

        /* Gain: '<S1>/Triangle frequency multiplier' */
        rtb_Trianglefrequencymultiplier[i] = 40.0 * rtb_Abs_i;

        /* Sum: '<S1>/Sum3' */
        rtb_Abs[i] = rtb_Abs_i;
      }

      /* Lookup: '<S1>/Lookup Table' */
      /*
       * About '<S1>/Lookup Table':
       * Input0  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       * XData parameter uses the same data type and scaling as Input0
       * YData parameter uses the same data type and scaling as Output0
       */
      {
        int_T i1;
        const real_T *u0 = &rtb_Trianglefrequencymultiplier[0];
        real_T *y0 = &rtb_DataTypeConversion2[0];
        for (i1=0; i1 < 6; i1++) {
          LookUp_real_T_real_T( &(y0[i1]), rtConstP.LookupTable_YData, u0[i1], rtConstP.LookupTable_XData, 320U);
        }
      }

      for (i = 0; i < 6; i++) {
        /* Trigonometry: '<S1>/Trigonometric Function' */
        rtb_Abs_i = sin(rtb_Abs[i]);

        /* DataTypeConversion: '<S7>/Data Type Conversion1' incorporates:
         *  RelationalOperator: '<S7>/Relational Operator1'
         */
        rtb_Trianglefrequencymultipli_b = (rtb_DataTypeConversion2[i] < rtb_Abs_i);

        /* DataTypeConversion: '<S7>/Data Type Conversion2' incorporates:
         *  RelationalOperator: '<S7>/Relational Operator2'
         */
        rtb_DataTypeConversion2[i] = (rtb_DataTypeConversion2[i] > rtb_Abs_i);

        /* Switch: '<S7>/Set sign' incorporates:
         *  Gain: '<S7>/minus1'
         */
        if (!(rtb_Abs_i >= 0.0)) {
          rtb_Trianglefrequencymultipli_b = -rtb_DataTypeConversion2[i];
        }

        /* End of Switch: '<S7>/Set sign' */

        /* Abs: '<S7>/Abs' */
        rtb_Abs_i = fabs(rtb_Abs_i);

        /* Switch: '<S7>/deadband' incorporates:
         *  Constant: '<S7>/Constant1'
         */
        if (rtb_Abs_i > 0.01) {
          rtDW.deadband[i] = rtb_Trianglefrequencymultipli_b;
        } else {
          rtDW.deadband[i] = 0.0;
        }

        /* End of Switch: '<S7>/deadband' */

        /* Trigonometry: '<S1>/Trigonometric Function' */
        rtb_Abs[i] = rtb_Abs_i;
      }

      /* Outport: '<Root>/Out1' */
      rtY.PhaseA[0] = rtDW.deadband[0];
      rtY.PhaseA[1] = rtDW.deadband[3];

      /* Outport: '<Root>/Out2' */
      rtY.PhaseB[0] = rtDW.deadband[2];
      rtY.PhaseB[1] = rtDW.deadband[5];

      /* Outport: '<Root>/Out3' */
      rtY.PhaseC[0] = rtDW.deadband[4];
      rtY.PhaseC[1] = rtDW.deadband[1];
    }

    /* SimscapeInputBlock: '<S25>/INPUT_1_1_1' */
    rtDW.INPUT_1_1_1[0] = rtDW.deadband[0];
    rtDW.INPUT_1_1_1[1] = 0.0;
    rtDW.INPUT_1_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_1_1_1_Discrete[0] = !(rtDW.INPUT_1_1_1[0] == rtDW.INPUT_1_1_1_Discrete[1]);
      rtDW.INPUT_1_1_1_Discrete[1] = rtDW.INPUT_1_1_1[0];
    }

    rtDW.INPUT_1_1_1[0] = rtDW.INPUT_1_1_1_Discrete[1];
    rtDW.INPUT_1_1_1[3] = rtDW.INPUT_1_1_1_Discrete[0];

    /* End of SimscapeInputBlock: '<S25>/INPUT_1_1_1' */

    /* SimscapeInputBlock: '<S25>/INPUT_4_1_1' */
    rtDW.INPUT_4_1_1[0] = rtDW.deadband[3];
    rtDW.INPUT_4_1_1[1] = 0.0;
    rtDW.INPUT_4_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_4_1_1_Discrete[0] = !(rtDW.INPUT_4_1_1[0] == rtDW.INPUT_4_1_1_Discrete[1]);
      rtDW.INPUT_4_1_1_Discrete[1] = rtDW.INPUT_4_1_1[0];
    }

    rtDW.INPUT_4_1_1[0] = rtDW.INPUT_4_1_1_Discrete[1];
    rtDW.INPUT_4_1_1[3] = rtDW.INPUT_4_1_1_Discrete[0];

    /* End of SimscapeInputBlock: '<S25>/INPUT_4_1_1' */

    /* SimscapeInputBlock: '<S25>/INPUT_3_1_1' */
    rtDW.INPUT_3_1_1[0] = rtDW.deadband[2];
    rtDW.INPUT_3_1_1[1] = 0.0;
    rtDW.INPUT_3_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_3_1_1_Discrete[0] = !(rtDW.INPUT_3_1_1[0] == rtDW.INPUT_3_1_1_Discrete[1]);
      rtDW.INPUT_3_1_1_Discrete[1] = rtDW.INPUT_3_1_1[0];
    }

    rtDW.INPUT_3_1_1[0] = rtDW.INPUT_3_1_1_Discrete[1];
    rtDW.INPUT_3_1_1[3] = rtDW.INPUT_3_1_1_Discrete[0];

    /* End of SimscapeInputBlock: '<S25>/INPUT_3_1_1' */

    /* SimscapeInputBlock: '<S25>/INPUT_6_1_1' */
    rtDW.INPUT_6_1_1[0] = rtDW.deadband[5];
    rtDW.INPUT_6_1_1[1] = 0.0;
    rtDW.INPUT_6_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_6_1_1_Discrete[0] = !(rtDW.INPUT_6_1_1[0] == rtDW.INPUT_6_1_1_Discrete[1]);
      rtDW.INPUT_6_1_1_Discrete[1] = rtDW.INPUT_6_1_1[0];
    }

    rtDW.INPUT_6_1_1[0] = rtDW.INPUT_6_1_1_Discrete[1];
    rtDW.INPUT_6_1_1[3] = rtDW.INPUT_6_1_1_Discrete[0];

    /* End of SimscapeInputBlock: '<S25>/INPUT_6_1_1' */

    /* SimscapeInputBlock: '<S25>/INPUT_5_1_1' */
    rtDW.INPUT_5_1_1[0] = rtDW.deadband[4];
    rtDW.INPUT_5_1_1[1] = 0.0;
    rtDW.INPUT_5_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_5_1_1_Discrete[0] = !(rtDW.INPUT_5_1_1[0] == rtDW.INPUT_5_1_1_Discrete[1]);
      rtDW.INPUT_5_1_1_Discrete[1] = rtDW.INPUT_5_1_1[0];
    }

    rtDW.INPUT_5_1_1[0] = rtDW.INPUT_5_1_1_Discrete[1];
    rtDW.INPUT_5_1_1[3] = rtDW.INPUT_5_1_1_Discrete[0];

    /* End of SimscapeInputBlock: '<S25>/INPUT_5_1_1' */

    /* SimscapeInputBlock: '<S25>/INPUT_2_1_1' */
    rtDW.INPUT_2_1_1[0] = rtDW.deadband[1];
    rtDW.INPUT_2_1_1[1] = 0.0;
    rtDW.INPUT_2_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_2_1_1_Discrete[0] = !(rtDW.INPUT_2_1_1[0] == rtDW.INPUT_2_1_1_Discrete[1]);
      rtDW.INPUT_2_1_1_Discrete[1] = rtDW.INPUT_2_1_1[0];
    }

    rtDW.INPUT_2_1_1[0] = rtDW.INPUT_2_1_1_Discrete[1];
    rtDW.INPUT_2_1_1[3] = rtDW.INPUT_2_1_1_Discrete[0];

    /* End of SimscapeInputBlock: '<S25>/INPUT_2_1_1' */

    /* SimscapeExecutionBlock: '<S25>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S25>/OUTPUT_1_0'
     */
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    rtb_Abs_i = rtM->Timing.t[0];
    time = rtb_Abs_i;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX = &rtX.ee_voltage_sourced_converter_sp[0];
    simulationData->mData->mDiscStates.mN = 24;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 36;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = false;
    tmp_4 = rtmIsMajorTimeStep(rtM);
    simulationData->mData->mIsMajorTimeStep = tmp_4;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = false;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_1[0] = 0;
    tmp_0[0] = rtDW.INPUT_1_1_1[0];
    tmp_0[1] = rtDW.INPUT_1_1_1[1];
    tmp_0[2] = rtDW.INPUT_1_1_1[2];
    tmp_0[3] = rtDW.INPUT_1_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = rtDW.INPUT_4_1_1[0];
    tmp_0[5] = rtDW.INPUT_4_1_1[1];
    tmp_0[6] = rtDW.INPUT_4_1_1[2];
    tmp_0[7] = rtDW.INPUT_4_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = rtDW.INPUT_3_1_1[0];
    tmp_0[9] = rtDW.INPUT_3_1_1[1];
    tmp_0[10] = rtDW.INPUT_3_1_1[2];
    tmp_0[11] = rtDW.INPUT_3_1_1[3];
    tmp_1[3] = 12;
    tmp_0[12] = rtDW.INPUT_6_1_1[0];
    tmp_0[13] = rtDW.INPUT_6_1_1[1];
    tmp_0[14] = rtDW.INPUT_6_1_1[2];
    tmp_0[15] = rtDW.INPUT_6_1_1[3];
    tmp_1[4] = 16;
    tmp_0[16] = rtDW.INPUT_5_1_1[0];
    tmp_0[17] = rtDW.INPUT_5_1_1[1];
    tmp_0[18] = rtDW.INPUT_5_1_1[2];
    tmp_0[19] = rtDW.INPUT_5_1_1[3];
    tmp_1[5] = 20;
    tmp_0[20] = rtDW.INPUT_2_1_1[0];
    tmp_0[21] = rtDW.INPUT_2_1_1[1];
    tmp_0[22] = rtDW.INPUT_2_1_1[2];
    tmp_0[23] = rtDW.INPUT_2_1_1[3];
    tmp_1[6] = 24;
    simulationData->mData->mInputValues.mN = 24;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 7;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulationData->mData->mOutputs.mN = 64;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S25>/STATE_1' */

    /* SimscapeExecutionBlock: '<S25>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
    time_0 = rtb_Abs_i;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_1_0_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = false;
    simulationData->mData->mIsMajorTimeStep = tmp_4;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = false;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_3[0] = 0;
    tmp_2[0] = rtDW.INPUT_1_1_1[0];
    tmp_2[1] = rtDW.INPUT_1_1_1[1];
    tmp_2[2] = rtDW.INPUT_1_1_1[2];
    tmp_2[3] = rtDW.INPUT_1_1_1[3];
    tmp_3[1] = 4;
    tmp_2[4] = rtDW.INPUT_4_1_1[0];
    tmp_2[5] = rtDW.INPUT_4_1_1[1];
    tmp_2[6] = rtDW.INPUT_4_1_1[2];
    tmp_2[7] = rtDW.INPUT_4_1_1[3];
    tmp_3[2] = 8;
    tmp_2[8] = rtDW.INPUT_3_1_1[0];
    tmp_2[9] = rtDW.INPUT_3_1_1[1];
    tmp_2[10] = rtDW.INPUT_3_1_1[2];
    tmp_2[11] = rtDW.INPUT_3_1_1[3];
    tmp_3[3] = 12;
    tmp_2[12] = rtDW.INPUT_6_1_1[0];
    tmp_2[13] = rtDW.INPUT_6_1_1[1];
    tmp_2[14] = rtDW.INPUT_6_1_1[2];
    tmp_2[15] = rtDW.INPUT_6_1_1[3];
    tmp_3[4] = 16;
    tmp_2[16] = rtDW.INPUT_5_1_1[0];
    tmp_2[17] = rtDW.INPUT_5_1_1[1];
    tmp_2[18] = rtDW.INPUT_5_1_1[2];
    tmp_2[19] = rtDW.INPUT_5_1_1[3];
    tmp_3[5] = 20;
    tmp_2[20] = rtDW.INPUT_2_1_1[0];
    tmp_2[21] = rtDW.INPUT_2_1_1[1];
    tmp_2[22] = rtDW.INPUT_2_1_1[2];
    tmp_2[23] = rtDW.INPUT_2_1_1[3];
    tmp_3[6] = 24;
    memcpy(&tmp_2[24], &rtDW.STATE_1[0], sizeof(real_T) << 6U);
    tmp_3[7] = 88;
    simulationData->mData->mInputValues.mN = 88;
    simulationData->mData->mInputValues.mX = &tmp_2[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = &tmp_3[0];
    simulationData->mData->mOutputs.mN = 4;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* Outport: '<Root>/Out4' */
    rtY.AC_Currents[0] = rtb_OUTPUT_1_0[1];
    rtY.AC_Currents[1] = rtb_OUTPUT_1_0[2];
    rtY.AC_Currents[2] = rtb_OUTPUT_1_0[3];

    /* Outport: '<Root>/Out5' */
    rtY.DC_Current = rtb_OUTPUT_1_0[0];
  }

  if (rtmIsMajorTimeStep(rtM)) {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    real_T tmp_0[24];
    int_T tmp_1[7];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
    char *msg;
    if (rtmIsMajorTimeStep(rtM)) {
      /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator' incorporates:
       *  Constant: '<S1>/Nominal angular frequency'
       */
      rtDW.DiscreteTimeIntegrator_DSTATE += 0.0037699111843077517;
      rtDW.DiscreteTimeIntegrator_PrevRese = (int8_T)rtb_Compare;
    }

    /* Update for SimscapeExecutionBlock: '<S25>/STATE_1' */
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    time = rtM->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX = &rtX.ee_voltage_sourced_converter_sp[0];
    simulationData->mData->mDiscStates.mN = 24;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 36;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = false;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = false;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_1[0] = 0;
    tmp_0[0] = rtDW.INPUT_1_1_1[0];
    tmp_0[1] = rtDW.INPUT_1_1_1[1];
    tmp_0[2] = rtDW.INPUT_1_1_1[2];
    tmp_0[3] = rtDW.INPUT_1_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = rtDW.INPUT_4_1_1[0];
    tmp_0[5] = rtDW.INPUT_4_1_1[1];
    tmp_0[6] = rtDW.INPUT_4_1_1[2];
    tmp_0[7] = rtDW.INPUT_4_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = rtDW.INPUT_3_1_1[0];
    tmp_0[9] = rtDW.INPUT_3_1_1[1];
    tmp_0[10] = rtDW.INPUT_3_1_1[2];
    tmp_0[11] = rtDW.INPUT_3_1_1[3];
    tmp_1[3] = 12;
    tmp_0[12] = rtDW.INPUT_6_1_1[0];
    tmp_0[13] = rtDW.INPUT_6_1_1[1];
    tmp_0[14] = rtDW.INPUT_6_1_1[2];
    tmp_0[15] = rtDW.INPUT_6_1_1[3];
    tmp_1[4] = 16;
    tmp_0[16] = rtDW.INPUT_5_1_1[0];
    tmp_0[17] = rtDW.INPUT_5_1_1[1];
    tmp_0[18] = rtDW.INPUT_5_1_1[2];
    tmp_0[19] = rtDW.INPUT_5_1_1[3];
    tmp_1[5] = 20;
    tmp_0[20] = rtDW.INPUT_2_1_1[0];
    tmp_0[21] = rtDW.INPUT_2_1_1[1];
    tmp_0[22] = rtDW.INPUT_2_1_1[2];
    tmp_0[23] = rtDW.INPUT_2_1_1[3];
    tmp_1[6] = 24;
    simulationData->mData->mInputValues.mN = 24;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 7;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S25>/STATE_1' */
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(rtM)) {
    rt_ertODEUpdateContinuousStates(&rtM->solverInfo);

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

    rtM->Timing.t[0] = rtsiGetSolverStopTime(&rtM->solverInfo);

    {
      /* Update absolute timer for sample time: [1.0E-5s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 1.0E-5, which is the step size
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
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void ee_voltage_sourced_converter_spwm_derivatives(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  real_T tmp_0[24];
  int_T tmp_1[7];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;
  XDot *_rtXdot;
  _rtXdot = ((XDot *) rtM->derivs);

  /* Derivatives for SimscapeExecutionBlock: '<S25>/STATE_1' */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  time = rtM->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 4;
  simulationData->mData->mContStates.mX = &rtX.ee_voltage_sourced_converter_sp[0];
  simulationData->mData->mDiscStates.mN = 24;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 36;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
  tmp = false;
  simulationData->mData->mFoundZcEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = false;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_1[0] = 0;
  tmp_0[0] = rtDW.INPUT_1_1_1[0];
  tmp_0[1] = rtDW.INPUT_1_1_1[1];
  tmp_0[2] = rtDW.INPUT_1_1_1[2];
  tmp_0[3] = rtDW.INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = rtDW.INPUT_4_1_1[0];
  tmp_0[5] = rtDW.INPUT_4_1_1[1];
  tmp_0[6] = rtDW.INPUT_4_1_1[2];
  tmp_0[7] = rtDW.INPUT_4_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = rtDW.INPUT_3_1_1[0];
  tmp_0[9] = rtDW.INPUT_3_1_1[1];
  tmp_0[10] = rtDW.INPUT_3_1_1[2];
  tmp_0[11] = rtDW.INPUT_3_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = rtDW.INPUT_6_1_1[0];
  tmp_0[13] = rtDW.INPUT_6_1_1[1];
  tmp_0[14] = rtDW.INPUT_6_1_1[2];
  tmp_0[15] = rtDW.INPUT_6_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = rtDW.INPUT_5_1_1[0];
  tmp_0[17] = rtDW.INPUT_5_1_1[1];
  tmp_0[18] = rtDW.INPUT_5_1_1[2];
  tmp_0[19] = rtDW.INPUT_5_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = rtDW.INPUT_2_1_1[0];
  tmp_0[21] = rtDW.INPUT_2_1_1[1];
  tmp_0[22] = rtDW.INPUT_2_1_1[2];
  tmp_0[23] = rtDW.INPUT_2_1_1[3];
  tmp_1[6] = 24;
  simulationData->mData->mInputValues.mN = 24;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 7;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 4;
  simulationData->mData->mDx.mX = &_rtXdot->ee_voltage_sourced_converter_sp[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator, NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S25>/STATE_1' */
}

/* Model initialize function */
void ee_voltage_sourced_converter_spwm_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&rtM->solverInfo, &rtM->Timing.simTimeStep);
    rtsiSetTPtr(&rtM->solverInfo, &rtmGetTPtr(rtM));
    rtsiSetStepSizePtr(&rtM->solverInfo, &rtM->Timing.stepSize0);
    rtsiSetdXPtr(&rtM->solverInfo, &rtM->derivs);
    rtsiSetContStatesPtr(&rtM->solverInfo, (real_T **) &rtM->contStates);
    rtsiSetNumContStatesPtr(&rtM->solverInfo, &rtM->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&rtM->solverInfo, &rtM->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&rtM->solverInfo, &rtM->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&rtM->solverInfo, &rtM->periodicContStateRanges);
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
  rtM->Timing.stepSize0 = 1.0E-5;

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
    boolean_T tmp_3;

    /* Start for SimscapeExecutionBlock: '<S25>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S25>/OUTPUT_1_0'
     */
    tmp = nesl_lease_simulator("ee_voltage_sourced_converter_spwm/Solver Configuration_1", 0, 0);
    rtDW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_1_Simulator);
    if (tmp_0) {
      ee_voltage_sourced_converter_spwm_8406756f_1_gateway();
      tmp = nesl_lease_simulator("ee_voltage_sourced_converter_spwm/Solver Configuration_1", 0, 0);
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
    modelParameters.mRTWModifiedTimeStamp = 4.89588825E+8;
    tmp_1 = 0.001;
    modelParameters.mSolverTolerance = tmp_1;
    tmp_1 = 1.0E-5;
    modelParameters.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_1_Simulator, &modelParameters, diagnosticManager);
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
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX = &rtX.ee_voltage_sourced_converter_sp[0];
    simulationData->mData->mDiscStates.mN = 24;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 36;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = false;
    tmp_3 = rtmIsMajorTimeStep(rtM);
    simulationData->mData->mIsMajorTimeStep = tmp_3;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = false;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator, NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S25>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S25>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("ee_voltage_sourced_converter_spwm/Solver Configuration_1", 1, 0);
    rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      ee_voltage_sourced_converter_spwm_8406756f_1_gateway();
      tmp = nesl_lease_simulator("ee_voltage_sourced_converter_spwm/Solver Configuration_1", 1, 0);
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
    modelParameters_0.mRTWModifiedTimeStamp = 4.89588825E+8;
    tmp_1 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_1;
    tmp_1 = 1.0E-5;
    modelParameters_0.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator, &modelParameters_0, diagnosticManager);
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
    simulationData->mData->mFoundZcEvents = false;
    simulationData->mData->mIsMajorTimeStep = tmp_3;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = false;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator, NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* InitializeConditions for DiscreteIntegrator: '<S5>/Discrete-Time Integrator' */
    rtDW.DiscreteTimeIntegrator_PrevRese = 2;

    /* InitializeConditions for SimscapeExecutionBlock: '<S25>/STATE_1' */
    tmp_0 = false;
    if (tmp_0) {
      tmp_2 = strcmp("ode3", rtsiGetSolverName(&rtM->solverInfo));
      if (tmp_2 != 0) {
        msg = solver_mismatch_message("ode3", rtsiGetSolverName(&rtM->solverInfo));
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of InitializeConditions for SimscapeExecutionBlock: '<S25>/STATE_1' */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */