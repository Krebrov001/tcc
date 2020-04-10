/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_switching_power_supply_thermal.h
 *
 * Code generated for Simulink model 'ee_switching_power_supply_thermal'.
 *
 * Model version                  : 1.327
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 12:45:23 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ee_switching_power_supply_thermal_h_
#define RTW_HEADER_ee_switching_power_supply_thermal_h_
#include <string.h>
#include <math.h>
#ifndef ee_switching_power_supply_thermal_COMMON_INCLUDES_
# define ee_switching_power_supply_thermal_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_gateway.h"
#endif                  /* ee_switching_power_supply_thermal_COMMON_INCLUDES_ */

#include "math.h"
#include "rt_matrixlib.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T INPUT_1_1_1[4];               /* '<S16>/INPUT_1_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S16>/INPUT_2_1_1' */
  real_T STATE_1[86];                  /* '<S16>/STATE_1' */
  real_T OUTPUT_1_0[4];                /* '<S16>/OUTPUT_1_0' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S16>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S16>/INPUT_2_1_1' */
  real_T STATE_1_Discrete[34];         /* '<S16>/STATE_1' */
  real_T Measurementlag;               /* '<S9>/Measurement lag' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T OUTPUT_1_0_Discrete;          /* '<S16>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S16>/STATE_1' */
  void* STATE_1_SimData;               /* '<S16>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S16>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S16>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S16>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S16>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S16>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S16>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S16>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S16>/OUTPUT_1_0' */
  int_T STATE_1_Modes[41];             /* '<S16>/STATE_1' */
  int32_T clockTickCounter;            /* '<Root>/200Hz' */
  int_T OUTPUT_1_0_Modes;              /* '<S16>/OUTPUT_1_0' */
  int32_T STATE_1_MASS_MATRIX_PR;      /* '<S16>/STATE_1' */
  boolean_T STATE_1_FirstOutput;       /* '<S16>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S16>/OUTPUT_1_0' */
} D_Work;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S9>/Integrator' */
  real_T Measurementlag_CSTATE;        /* '<S9>/Measurement lag' */
  real_T ee_switching_power_supply_therm[38];/* '<S16>/STATE_1' */
} ContinuousStates;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S9>/Integrator' */
  real_T Measurementlag_CSTATE;        /* '<S9>/Measurement lag' */
  real_T ee_switching_power_supply_therm[38];/* '<S16>/STATE_1' */
} StateDerivatives;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S9>/Integrator' */
  boolean_T Measurementlag_CSTATE;     /* '<S9>/Measurement lag' */
  boolean_T ee_switching_power_supply_therm[38];/* '<S16>/STATE_1' */
} StateDisabled;

/* Mass Matrix (global) */
typedef struct {
  int_T ir[52];
  int_T jc[41];
  real_T pr[52];
} MassMatrixGlobal;

#ifndef ODE14X_INTG
#define ODE14X_INTG

/* ODE14X Integration Data */
typedef struct {
  real_T *x0;
  real_T *f0;
  real_T *x1start;
  real_T *f1;
  real_T *Delta;
  real_T *E;
  real_T *fac;
  real_T *DFDX;
  real_T *W;
  int_T *pivots;
  real_T *xtmp;
  real_T *ztmp;
  real_T *M;
  real_T *M1;
  real_T *Edot;
  real_T *xdot;
  real_T *fminusMxdot;
  boolean_T isFirstStep;
} ODE14X_IntgData;

#endif

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output_Voltage;               /* '<Root>/Out1' */
  real_T Control_Signal;               /* '<Root>/Out2' */
  real_T Cyclic_Load_Current;          /* '<Root>/Out3' */
  real_T Supply_Current;               /* '<Root>/Out4' */
  real_T Heat_Flow;                    /* '<Root>/Out5' */
} ExternalOutputs;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  ContinuousStates *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  int_T massMatrixType;
  int_T massMatrixNzMax;
  int_T *massMatrixIr;
  int_T *massMatrixJc;
  real_T *massMatrixPr;
  real_T odeX0[40];
  real_T odeF0[40];
  real_T odeX1START[40];
  real_T odeF1[40];
  real_T odeDELTA[40];
  real_T odeE[4*40];
  real_T odeFAC[40];
  real_T odeDFDX[40*40];
  real_T odeW[40*40];
  int_T odePIVOTS[40];
  real_T odeXTMP[40];
  real_T odeZTMP[40];
  real_T odeMASSMATRIX_M[52];
  real_T odeMASSMATRIX_M1[52];
  real_T odeEDOT[4*40];
  real_T odeXDOT[40];
  real_T odeFMXDOT[40];
  ODE14X_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Continuous states (default storage) */
extern ContinuousStates rtX;

/* global MassMatrix */
extern MassMatrixGlobal rtMassMatrixGlobal;

/* Block signals and states (default storage) */
extern D_Work rtDWork;

/* External outputs (root outports fed by signals with default storage) */
extern ExternalOutputs rtY;

/* Model entry point functions */
extern void initialize(void);
extern void step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ee_switching_power_supply_thermal'
 * '<S1>'   : 'ee_switching_power_supply_thermal/Controller'
 * '<S2>'   : 'ee_switching_power_supply_thermal/Current sensor'
 * '<S3>'   : 'ee_switching_power_supply_thermal/Cyclic Load'
 * '<S4>'   : 'ee_switching_power_supply_thermal/Driver'
 * '<S5>'   : 'ee_switching_power_supply_thermal/Solver Configuration'
 * '<S6>'   : 'ee_switching_power_supply_thermal/Thermal 1'
 * '<S7>'   : 'ee_switching_power_supply_thermal/Thermal 2'
 * '<S8>'   : 'ee_switching_power_supply_thermal/Voltage sensor'
 * '<S9>'   : 'ee_switching_power_supply_thermal/Controller/Continuous PI'
 * '<S10>'  : 'ee_switching_power_supply_thermal/Current sensor/PS-Simulink'
 * '<S11>'  : 'ee_switching_power_supply_thermal/Current sensor/PS-Simulink/EVAL_KEY'
 * '<S12>'  : 'ee_switching_power_supply_thermal/Cyclic Load/Simulink-PS Converter'
 * '<S13>'  : 'ee_switching_power_supply_thermal/Cyclic Load/Simulink-PS Converter/EVAL_KEY'
 * '<S14>'  : 'ee_switching_power_supply_thermal/Driver/Simulink-PS Converter'
 * '<S15>'  : 'ee_switching_power_supply_thermal/Driver/Simulink-PS Converter/EVAL_KEY'
 * '<S16>'  : 'ee_switching_power_supply_thermal/Solver Configuration/EVAL_KEY'
 * '<S17>'  : 'ee_switching_power_supply_thermal/Thermal 1/PS-Simulink Converter'
 * '<S18>'  : 'ee_switching_power_supply_thermal/Thermal 1/PS-Simulink Converter/EVAL_KEY'
 * '<S19>'  : 'ee_switching_power_supply_thermal/Thermal 2/PS-Simulink Converter'
 * '<S20>'  : 'ee_switching_power_supply_thermal/Thermal 2/PS-Simulink Converter/EVAL_KEY'
 * '<S21>'  : 'ee_switching_power_supply_thermal/Voltage sensor/PS-Simulink'
 * '<S22>'  : 'ee_switching_power_supply_thermal/Voltage sensor/PS-Simulink/EVAL_KEY'
 */
#endif                     /* RTW_HEADER_ee_switching_power_supply_thermal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
