/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_sm_control.h
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

#ifndef RTW_HEADER_ee_sm_control_h_
#define RTW_HEADER_ee_sm_control_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#ifndef ee_sm_control_COMMON_INCLUDES_
# define ee_sm_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "ee_sm_control_fab709d2_1_gateway.h"
#endif                                 /* ee_sm_control_COMMON_INCLUDES_ */

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
  real_T INPUT_1_1_1[4];               /* '<S55>/INPUT_1_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S55>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S55>/INPUT_4_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S55>/INPUT_2_1_1' */
  real_T STATE_1[140];                 /* '<S55>/STATE_1' */
  real_T Probe[2];                     /* '<S22>/Probe' */
  real_T Probe_i[2];                   /* '<S39>/Probe' */
  real_T Probe_o[2];                   /* '<S32>/Probe' */
  real_T Probe_e[2];                   /* '<S35>/Probe' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S55>/INPUT_1_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S55>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S55>/INPUT_4_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S55>/INPUT_2_1_1' */
  real_T STATE_1_Discrete[140];        /* '<S55>/STATE_1' */
  real_T Deltaloadsetpoint;            /* '<S45>/Delta load setpoint' */
  real_T uT_G;                         /* '<S45>/1//T_G' */
  real_T uT_CH;                        /* '<S46>/1//T_CH' */
  real_T Integrator_DSTATE;            /* '<S31>/Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T Integrator_DSTATE_d;          /* '<S42>/Integrator' */
  real_T Integrator_DSTATE_b;          /* '<S34>/Integrator' */
  real_T Integrator_DSTATE_dj;         /* '<S26>/Integrator' */
  real_T Integrator_DSTATE_m;          /* '<S38>/Integrator' */
  real_T OUTPUT_1_0_Discrete;          /* '<S55>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S55>/STATE_1' */
  void* STATE_1_SimData;               /* '<S55>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S55>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S55>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S55>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S55>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S55>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S55>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S55>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S55>/OUTPUT_1_0' */
  int_T STATE_1_Modes[42];             /* '<S55>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S55>/OUTPUT_1_0' */
  int8_T Integrator_PrevResetState;    /* '<S31>/Integrator' */
  int8_T Integrator_PrevResetState_h;  /* '<S42>/Integrator' */
  int8_T Integrator_PrevResetState_b;  /* '<S34>/Integrator' */
  int8_T Integrator_PrevResetState_m;  /* '<S26>/Integrator' */
  int8_T Integrator_PrevResetState_e;  /* '<S38>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S42>/Integrator' */
  uint8_T Integrator_IC_LOADING_g;     /* '<S34>/Integrator' */
  uint8_T Integrator_IC_LOADING_j;     /* '<S26>/Integrator' */
  uint8_T Integrator_IC_LOADING_b;     /* '<S38>/Integrator' */
  boolean_T STATE_1_FirstOutput;       /* '<S55>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S55>/OUTPUT_1_0' */
} DW;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S46>/Integrator' */
  real_T Integrator_CSTATE_k;          /* '<S45>/Integrator' */
} X;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S46>/Integrator' */
  real_T Integrator_CSTATE_k;          /* '<S45>/Integrator' */
} XDot;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S46>/Integrator' */
  boolean_T Integrator_CSTATE_k;       /* '<S45>/Integrator' */
} XDis;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: [0 E_2 E_1]
   * Referenced by: '<S29>/Saturation'
   */
  real_T Saturation_XData[3];

  /* Expression: [0 S_E_E2 S_E_E1]
   * Referenced by: '<S29>/Saturation'
   */
  real_T Saturation_YData[3];
} ConstP;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Terminal_Voltage;             /* '<Root>/Out1' */
  real_T Rotor_Velocity;               /* '<Root>/Out2' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[2];
  real_T odeF[3][2];
  ODE3_IntgData intgData;

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
extern X rtX;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Model entry point functions */
extern void ee_sm_control_initialize(void);
extern void ee_sm_control_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S26>/Saturation' : Eliminated Saturate block
 * Block '<S15>/[A,B]' : Eliminated Saturate block
 * Block '<S16>/Gain3' : Eliminated nontunable gain of 1
 * Block '<S31>/Saturation' : Eliminated Saturate block
 * Block '<S34>/Saturation' : Eliminated Saturate block
 * Block '<S17>/[A,B]' : Eliminated Saturate block
 * Block '<S18>/Switch2' : Eliminated due to constant selection input
 * Block '<S18>/Switch3' : Eliminated due to constant selection input
 * Block '<S18>/Switch4' : Eliminated due to constant selection input
 * Block '<S19>/Switch2' : Eliminated due to constant selection input
 * Block '<S19>/Switch3' : Eliminated due to constant selection input
 * Block '<S19>/Switch4' : Eliminated due to constant selection input
 * Block '<S19>/Switch5' : Eliminated due to constant selection input
 * Block '<S38>/Saturation' : Eliminated Saturate block
 * Block '<S42>/Saturation' : Eliminated Saturate block
 * Block '<S21>/K' : Eliminated nontunable gain of 1
 * Block '<S1>/Constant5' : Unused code path elimination
 * Block '<S1>/Constant6' : Unused code path elimination
 * Block '<S1>/Constant7' : Unused code path elimination
 * Block '<S1>/Constant8' : Unused code path elimination
 * Block '<S1>/Constant9' : Unused code path elimination
 * Block '<S18>/notIsUelSummationPoint1' : Unused code path elimination
 * Block '<S18>/notIsUelSummationPoint3' : Unused code path elimination
 * Block '<S18>/notIsUelSummationPoint4' : Unused code path elimination
 * Block '<S19>/notIsUelSummationPoint1' : Unused code path elimination
 * Block '<S19>/notIsUelSummationPoint2' : Unused code path elimination
 * Block '<S19>/notIsUelSummationPoint3' : Unused code path elimination
 * Block '<S19>/notIsUelSummationPoint4' : Unused code path elimination
 */

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
 * '<Root>' : 'ee_sm_control'
 * '<S1>'   : 'ee_sm_control/AVR and Exciter'
 * '<S2>'   : 'ee_sm_control/Governor and Prime Mover '
 * '<S3>'   : 'ee_sm_control/PS-Simulink Converter'
 * '<S4>'   : 'ee_sm_control/PS-Simulink Converter1'
 * '<S5>'   : 'ee_sm_control/Simulink-PS Converter'
 * '<S6>'   : 'ee_sm_control/Simulink-PS Converter1'
 * '<S7>'   : 'ee_sm_control/Solver Configuration'
 * '<S8>'   : 'ee_sm_control/AVR and Exciter/E_FD Simulink-PS '
 * '<S9>'   : 'ee_sm_control/AVR and Exciter/I_FD PS-Simulink'
 * '<S10>'  : 'ee_sm_control/AVR and Exciter/SM AC1C'
 * '<S11>'  : 'ee_sm_control/AVR and Exciter/Terminal Current PS-Simulink'
 * '<S12>'  : 'ee_sm_control/AVR and Exciter/Terminal Voltage PS-Simulink'
 * '<S13>'  : 'ee_sm_control/AVR and Exciter/E_FD Simulink-PS /EVAL_KEY'
 * '<S14>'  : 'ee_sm_control/AVR and Exciter/I_FD PS-Simulink/EVAL_KEY'
 * '<S15>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/(1+sT_C)//(1+sT_B)'
 * '<S16>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/AC Rotating Exciter'
 * '<S17>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Rate Feedback'
 * '<S18>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Summation Point Logic'
 * '<S19>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Take-over Logic'
 * '<S20>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Vaminmax'
 * '<S21>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Voltage Transducer'
 * '<S22>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Gains'
 * '<S23>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Integrator (Discrete or Continuous)'
 * '<S24>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Gains/Compare To Zero'
 * '<S25>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Gains/Compare To Zero1'
 * '<S26>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Integrator (Discrete or Continuous)/Discrete'
 * '<S27>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/AC Rotating Exciter/Fex'
 * '<S28>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/AC Rotating Exciter/Integrator (Discrete or Continuous)'
 * '<S29>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/AC Rotating Exciter/Saturation'
 * '<S30>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/AC Rotating Exciter/Fex/fex'
 * '<S31>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/AC Rotating Exciter/Integrator (Discrete or Continuous)/Discrete'
 * '<S32>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Rate Feedback/Enable//disable time constant'
 * '<S33>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Rate Feedback/Integrator (Discrete or Continuous)'
 * '<S34>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Rate Feedback/Integrator (Discrete or Continuous)/Discrete'
 * '<S35>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Vaminmax/Enable//disable time constant'
 * '<S36>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Vaminmax/Integrator (Discrete or Continuous)'
 * '<S37>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Vaminmax/Enable//disable time constant/Compare To Zero'
 * '<S38>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Vaminmax/Integrator (Discrete or Continuous)/Discrete'
 * '<S39>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Voltage Transducer/Enable//disable time constant'
 * '<S40>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Voltage Transducer/Integrator (Discrete or Continuous)'
 * '<S41>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Voltage Transducer/Enable//disable time constant/Compare To Zero'
 * '<S42>'  : 'ee_sm_control/AVR and Exciter/SM AC1C/Voltage Transducer/Integrator (Discrete or Continuous)/Discrete'
 * '<S43>'  : 'ee_sm_control/AVR and Exciter/Terminal Current PS-Simulink/EVAL_KEY'
 * '<S44>'  : 'ee_sm_control/AVR and Exciter/Terminal Voltage PS-Simulink/EVAL_KEY'
 * '<S45>'  : 'ee_sm_control/Governor and Prime Mover /Governor'
 * '<S46>'  : 'ee_sm_control/Governor and Prime Mover /Non-reheat turbine'
 * '<S47>'  : 'ee_sm_control/Governor and Prime Mover /PS-Simulink Converter'
 * '<S48>'  : 'ee_sm_control/Governor and Prime Mover /Simulink-PS Converter'
 * '<S49>'  : 'ee_sm_control/Governor and Prime Mover /PS-Simulink Converter/EVAL_KEY'
 * '<S50>'  : 'ee_sm_control/Governor and Prime Mover /Simulink-PS Converter/EVAL_KEY'
 * '<S51>'  : 'ee_sm_control/PS-Simulink Converter/EVAL_KEY'
 * '<S52>'  : 'ee_sm_control/PS-Simulink Converter1/EVAL_KEY'
 * '<S53>'  : 'ee_sm_control/Simulink-PS Converter/EVAL_KEY'
 * '<S54>'  : 'ee_sm_control/Simulink-PS Converter1/EVAL_KEY'
 * '<S55>'  : 'ee_sm_control/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_ee_sm_control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
