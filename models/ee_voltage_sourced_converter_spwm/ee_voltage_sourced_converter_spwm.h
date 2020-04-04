/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_voltage_sourced_converter_spwm.h
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

#ifndef RTW_HEADER_ee_voltage_sourced_converter_spwm_h_
#define RTW_HEADER_ee_voltage_sourced_converter_spwm_h_
#include <math.h>
#include <string.h>
#ifndef ee_voltage_sourced_converter_spwm_COMMON_INCLUDES_
# define ee_voltage_sourced_converter_spwm_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_gateway.h"
#endif                  /* ee_voltage_sourced_converter_spwm_COMMON_INCLUDES_ */

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
  real_T deadband[6];                  /* '<S7>/deadband' */
  real_T INPUT_1_1_1[4];               /* '<S25>/INPUT_1_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S25>/INPUT_4_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S25>/INPUT_3_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S25>/INPUT_6_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S25>/INPUT_5_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S25>/INPUT_2_1_1' */
  real_T STATE_1[64];                  /* '<S25>/STATE_1' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S25>/INPUT_1_1_1' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S25>/INPUT_4_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S25>/INPUT_3_1_1' */
  real_T INPUT_6_1_1_Discrete[2];      /* '<S25>/INPUT_6_1_1' */
  real_T INPUT_5_1_1_Discrete[2];      /* '<S25>/INPUT_5_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S25>/INPUT_2_1_1' */
  real_T STATE_1_Discrete[24];         /* '<S25>/STATE_1' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S5>/Discrete-Time Integrator' */
  real_T OUTPUT_1_0_Discrete;          /* '<S25>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S25>/STATE_1' */
  void* STATE_1_SimData;               /* '<S25>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S25>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S25>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S25>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S25>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S25>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S25>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S25>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S25>/OUTPUT_1_0' */
  int_T STATE_1_Modes[36];             /* '<S25>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S25>/OUTPUT_1_0' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S5>/Discrete-Time Integrator' */
  boolean_T STATE_1_FirstOutput;       /* '<S25>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S25>/OUTPUT_1_0' */
} DW;

/* Continuous states (default storage) */
typedef struct {
  real_T ee_voltage_sourced_converter_sp[4];/* '<S25>/STATE_1' */
} X;

/* State derivatives (default storage) */
typedef struct {
  real_T ee_voltage_sourced_converter_sp[4];/* '<S25>/STATE_1' */
} XDot;

/* State disabled  */
typedef struct {
  boolean_T ee_voltage_sourced_converter_sp[4];/* '<S25>/STATE_1' */
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
  /* Expression: (0:5).*2*pi/6
   * Referenced by: '<S1>/Phase offsets'
   */
  real_T Phaseoffsets_Value[6];

  /* Expression: (0:4*2*triangleMultiPulse).*pi/2
   * Referenced by: '<S1>/Lookup Table'
   */
  real_T LookupTable_XData[321];

  /* Expression: [ repmat( [ 0 1 0 -1 ], 1, 2*triangleMultiPulse ) 0];
   * Referenced by: '<S1>/Lookup Table'
   */
  real_T LookupTable_YData[321];
} ConstP;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T PhaseA[2];                    /* '<Root>/Out1' */
  real_T PhaseB[2];                    /* '<Root>/Out2' */
  real_T PhaseC[2];                    /* '<Root>/Out3' */
  real_T AC_Currents[3];               /* '<Root>/Out4' */
  real_T DC_Current;                   /* '<Root>/Out5' */
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
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
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
extern void ee_voltage_sourced_converter_spwm_initialize(void);
extern void ee_voltage_sourced_converter_spwm_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Triangle wave modulation' : Eliminated nontunable gain of 1
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
 * '<Root>' : 'ee_voltage_sourced_converter_spwm'
 * '<S1>'   : 'ee_voltage_sourced_converter_spwm/SPWM modulation'
 * '<S2>'   : 'ee_voltage_sourced_converter_spwm/Sensing current'
 * '<S3>'   : 'ee_voltage_sourced_converter_spwm/Sensing currents abc'
 * '<S4>'   : 'ee_voltage_sourced_converter_spwm/Solver Configuration'
 * '<S5>'   : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Discrete-time repeating ramp generator'
 * '<S6>'   : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment'
 * '<S7>'   : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Pulses'
 * '<S8>'   : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Discrete-time repeating ramp generator/Compare To Constant'
 * '<S9>'   : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S1PS'
 * '<S10>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S2PS'
 * '<S11>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S3PS'
 * '<S12>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S4PS'
 * '<S13>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S5PS'
 * '<S14>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S6PS'
 * '<S15>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S1PS/EVAL_KEY'
 * '<S16>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S2PS/EVAL_KEY'
 * '<S17>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S3PS/EVAL_KEY'
 * '<S18>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S4PS/EVAL_KEY'
 * '<S19>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S5PS/EVAL_KEY'
 * '<S20>'  : 'ee_voltage_sourced_converter_spwm/SPWM modulation/Gate assignment/S6PS/EVAL_KEY'
 * '<S21>'  : 'ee_voltage_sourced_converter_spwm/Sensing current/PS-Simulink Converter//1'
 * '<S22>'  : 'ee_voltage_sourced_converter_spwm/Sensing current/PS-Simulink Converter//1/EVAL_KEY'
 * '<S23>'  : 'ee_voltage_sourced_converter_spwm/Sensing currents abc/PS-Simulink Converter//2'
 * '<S24>'  : 'ee_voltage_sourced_converter_spwm/Sensing currents abc/PS-Simulink Converter//2/EVAL_KEY'
 * '<S25>'  : 'ee_voltage_sourced_converter_spwm/Solver Configuration/EVAL_KEY'
 */
#endif                     /* RTW_HEADER_ee_voltage_sourced_converter_spwm_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
