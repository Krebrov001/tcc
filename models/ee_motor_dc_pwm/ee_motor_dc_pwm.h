/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_motor_dc_pwm.h
 *
 * Code generated for Simulink model 'ee_motor_dc_pwm'.
 *
 * Model version                  : 1.245
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 12:04:56 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ee_motor_dc_pwm_h_
#define RTW_HEADER_ee_motor_dc_pwm_h_
#include <string.h>
#ifndef ee_motor_dc_pwm_COMMON_INCLUDES_
# define ee_motor_dc_pwm_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "ee_motor_dc_pwm_3d73c5c7_1_gateway.h"
#endif                                 /* ee_motor_dc_pwm_COMMON_INCLUDES_ */

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
  real_T STATE_1[12];                  /* '<S6>/STATE_1' */
  real_T STATE_1_Discrete[6];          /* '<S6>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S6>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S6>/STATE_1' */
  void* STATE_1_SimData;               /* '<S6>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S6>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S6>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S6>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S6>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S6>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S6>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S6>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S6>/OUTPUT_1_0' */
  int_T STATE_1_Modes[2];              /* '<S6>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S6>/OUTPUT_1_0' */
  boolean_T STATE_1_FirstOutput;       /* '<S6>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S6>/OUTPUT_1_0' */
} DW;

/* Continuous states (default storage) */
typedef struct {
  real_T ee_motor_dc_pwmDC_Motori_L[4];/* '<S6>/STATE_1' */
} X;

/* State derivatives (default storage) */
typedef struct {
  real_T ee_motor_dc_pwmDC_Motori_L[4];/* '<S6>/STATE_1' */
} XDot;

/* State disabled  */
typedef struct {
  boolean_T ee_motor_dc_pwmDC_Motori_L[4];/* '<S6>/STATE_1' */
} XDis;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Current;                      /* '<Root>/Out1' */
  real_T RPM;                          /* '<Root>/Out2' */
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
  real_T odeY[4];
  real_T odeF[3][4];
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

/* Model entry point functions */
extern void ee_motor_dc_pwm_initialize(void);
extern void ee_motor_dc_pwm_step(void);

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
 * '<Root>' : 'ee_motor_dc_pwm'
 * '<S1>'   : 'ee_motor_dc_pwm/PS-Simulink'
 * '<S2>'   : 'ee_motor_dc_pwm/PS-Simulink1'
 * '<S3>'   : 'ee_motor_dc_pwm/Solver Configuration'
 * '<S4>'   : 'ee_motor_dc_pwm/PS-Simulink/EVAL_KEY'
 * '<S5>'   : 'ee_motor_dc_pwm/PS-Simulink1/EVAL_KEY'
 * '<S6>'   : 'ee_motor_dc_pwm/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_ee_motor_dc_pwm_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
