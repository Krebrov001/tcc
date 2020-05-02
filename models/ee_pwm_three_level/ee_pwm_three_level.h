/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_pwm_three_level.h
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

#ifndef RTW_HEADER_ee_pwm_three_level_h_
#define RTW_HEADER_ee_pwm_three_level_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#ifndef ee_pwm_three_level_COMMON_INCLUDES_
# define ee_pwm_three_level_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "nesl_rtw.h"
#include "ee_pwm_three_level_8ad899e3_1_gateway.h"
#endif                                 /* ee_pwm_three_level_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T RTabc[3];                     /* '<S15>/RTabc' */
  real_T INPUT_1_1_1[4];               /* '<S12>/INPUT_1_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S12>/INPUT_2_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S12>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S12>/INPUT_6_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S12>/INPUT_7_1_1' */
  real_T INPUT_8_1_1[4];               /* '<S12>/INPUT_8_1_1' */
  real_T INPUT_9_1_1[4];               /* '<S12>/INPUT_9_1_1' */
  real_T INPUT_10_1_1[4];              /* '<S12>/INPUT_10_1_1' */
  real_T INPUT_11_1_1[4];              /* '<S12>/INPUT_11_1_1' */
  real_T INPUT_12_1_1[4];              /* '<S12>/INPUT_12_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S12>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S12>/INPUT_4_1_1' */
  real_T STATE_1[140];                 /* '<S12>/STATE_1' */
  real_T ZeroOrderHold[3];             /* '<S5>/Zero-Order Hold' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S12>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S12>/INPUT_2_1_1' */
  real_T INPUT_5_1_1_Discrete[2];      /* '<S12>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_Discrete[2];      /* '<S12>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_Discrete[2];      /* '<S12>/INPUT_7_1_1' */
  real_T INPUT_8_1_1_Discrete[2];      /* '<S12>/INPUT_8_1_1' */
  real_T INPUT_9_1_1_Discrete[2];      /* '<S12>/INPUT_9_1_1' */
  real_T INPUT_10_1_1_Discrete[2];     /* '<S12>/INPUT_10_1_1' */
  real_T INPUT_11_1_1_Discrete[2];     /* '<S12>/INPUT_11_1_1' */
  real_T INPUT_12_1_1_Discrete[2];     /* '<S12>/INPUT_12_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S12>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S12>/INPUT_4_1_1' */
  real_T STATE_1_Discrete[80];         /* '<S12>/STATE_1' */
  real_T lastSin[3];                   /* '<Root>/Unit Sine Wave' */
  real_T lastCos[3];                   /* '<Root>/Unit Sine Wave' */
  real_T RTabc_Buffer0[3];             /* '<S15>/RTabc' */
  real_T RTdc;                         /* '<S15>/RTdc' */
  real_T RTneutral;                    /* '<S15>/RTneutral' */
  real_T ZeroOrderHold2;               /* '<S5>/Zero-Order Hold2' */
  real_T ZeroOrderHold3;               /* '<S5>/Zero-Order Hold3' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S84>/Discrete-Time Integrator1' */
  real_T UnitDelay_DSTATE;             /* '<S5>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S5>/Unit Delay1' */
  real_T RTdc_Buffer0;                 /* '<S15>/RTdc' */
  real_T RTneutral_Buffer0;            /* '<S15>/RTneutral' */
  real_T RateTransition_Buffer0;       /* '<S5>/Rate Transition' */
  real_T OUTPUT_1_0_Discrete;          /* '<S12>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S12>/STATE_1' */
  void* STATE_1_SimData;               /* '<S12>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S12>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S12>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S12>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S12>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S12>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S12>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S12>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S12>/OUTPUT_1_0' */
  int_T STATE_1_Modes[60];             /* '<S12>/STATE_1' */
  int32_T systemEnable;                /* '<Root>/Unit Sine Wave' */
  int_T OUTPUT_1_0_Modes;              /* '<S12>/OUTPUT_1_0' */
  int8_T DiscreteTimeIntegrator1_PrevRes;/* '<S84>/Discrete-Time Integrator1' */
  boolean_T Initial_FirstOutputTime;   /* '<S84>/Initial' */
  boolean_T STATE_1_FirstOutput;       /* '<S12>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S12>/OUTPUT_1_0' */
} DW;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Reference_Voltages[3];        /* '<Root>/Out1' */
  real_T Modulation_Waveforms[3];      /* '<Root>/Out2' */
  real_T Neutral_Point;                /* '<Root>/Out3' */
  real_T Vc_Measured[2];               /* '<Root>/Out4' */
  real_T ia;                           /* '<Root>/Out5' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    uint32_T clockTick1;
    struct {
      uint8_T TID0_1;
    } RateInteraction;
  } Timing;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void ee_pwm_three_level_initialize(void);
extern void ee_pwm_three_level_step0(void);
extern void ee_pwm_three_level_step1(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Manual Switch1' : Eliminated due to constant selection input
 * Block '<S15>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S15>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S84>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S84>/Rate Transition1' : Eliminated since input and output rates are identical
 * Block '<S84>/Rate Transition2' : Eliminated since input and output rates are identical
 * Block '<S5>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<Root>/SPWM max. input' : Unused code path elimination
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
 * '<Root>' : 'ee_pwm_three_level'
 * '<S1>'   : 'ee_pwm_three_level/Sensing current'
 * '<S2>'   : 'ee_pwm_three_level/Sensing voltage Vc1'
 * '<S3>'   : 'ee_pwm_three_level/Sensing voltage Vc2'
 * '<S4>'   : 'ee_pwm_three_level/Solver Configuration'
 * '<S5>'   : 'ee_pwm_three_level/Three-Level Controller'
 * '<S6>'   : 'ee_pwm_three_level/Sensing current/PS-Simulink Converter'
 * '<S7>'   : 'ee_pwm_three_level/Sensing current/PS-Simulink Converter/EVAL_KEY'
 * '<S8>'   : 'ee_pwm_three_level/Sensing voltage Vc1/PS-Simulink Converter'
 * '<S9>'   : 'ee_pwm_three_level/Sensing voltage Vc1/PS-Simulink Converter/EVAL_KEY'
 * '<S10>'  : 'ee_pwm_three_level/Sensing voltage Vc2/PS-Simulink Converter'
 * '<S11>'  : 'ee_pwm_three_level/Sensing voltage Vc2/PS-Simulink Converter/EVAL_KEY'
 * '<S12>'  : 'ee_pwm_three_level/Solver Configuration/EVAL_KEY'
 * '<S13>'  : 'ee_pwm_three_level/Three-Level Controller/Gate'
 * '<S14>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller'
 * '<S15>'  : 'ee_pwm_three_level/Three-Level Controller/PWM Generator (Three-phase, Three-level)'
 * '<S16>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter'
 * '<S17>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter1'
 * '<S18>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter10'
 * '<S19>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter11'
 * '<S20>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter2'
 * '<S21>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter3'
 * '<S22>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter4'
 * '<S23>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter5'
 * '<S24>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter6'
 * '<S25>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter7'
 * '<S26>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter8'
 * '<S27>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter9'
 * '<S28>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter/EVAL_KEY'
 * '<S29>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter1/EVAL_KEY'
 * '<S30>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter10/EVAL_KEY'
 * '<S31>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter11/EVAL_KEY'
 * '<S32>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter2/EVAL_KEY'
 * '<S33>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter3/EVAL_KEY'
 * '<S34>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter4/EVAL_KEY'
 * '<S35>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter5/EVAL_KEY'
 * '<S36>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter6/EVAL_KEY'
 * '<S37>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter7/EVAL_KEY'
 * '<S38>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter8/EVAL_KEY'
 * '<S39>'  : 'ee_pwm_three_level/Three-Level Controller/Gate/Simulink-PS Converter9/EVAL_KEY'
 * '<S40>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Anti-windup'
 * '<S41>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/D Gain'
 * '<S42>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Filter'
 * '<S43>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Filter ICs'
 * '<S44>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/I Gain'
 * '<S45>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Ideal P Gain'
 * '<S46>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Ideal P Gain Fdbk'
 * '<S47>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Integrator'
 * '<S48>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Integrator ICs'
 * '<S49>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/N Copy'
 * '<S50>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/N Gain'
 * '<S51>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/P Copy'
 * '<S52>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Parallel P Gain'
 * '<S53>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Reset Signal'
 * '<S54>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Saturation'
 * '<S55>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Saturation Fdbk'
 * '<S56>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Sum'
 * '<S57>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Sum Fdbk'
 * '<S58>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Tracking Mode'
 * '<S59>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Tracking Mode Sum'
 * '<S60>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/postSat Signal'
 * '<S61>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/preSat Signal'
 * '<S62>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Anti-windup/Disabled'
 * '<S63>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/D Gain/Disabled'
 * '<S64>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Filter/Disabled'
 * '<S65>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Filter ICs/Disabled'
 * '<S66>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/I Gain/Disabled'
 * '<S67>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Ideal P Gain/Passthrough'
 * '<S68>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Ideal P Gain Fdbk/Disabled'
 * '<S69>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Integrator/Disabled'
 * '<S70>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Integrator ICs/Disabled'
 * '<S71>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/N Copy/Disabled wSignal Specification'
 * '<S72>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/N Gain/Disabled'
 * '<S73>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/P Copy/Disabled'
 * '<S74>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Parallel P Gain/Internal Parameters'
 * '<S75>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Reset Signal/Disabled'
 * '<S76>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Saturation/Enabled'
 * '<S77>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Saturation Fdbk/Disabled'
 * '<S78>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Sum/Passthrough_P'
 * '<S79>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Sum Fdbk/Disabled'
 * '<S80>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Tracking Mode/Disabled'
 * '<S81>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/Tracking Mode Sum/Passthrough'
 * '<S82>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/postSat Signal/Forward_Path'
 * '<S83>'  : 'ee_pwm_three_level/Three-Level Controller/Neutral point controller/preSat Signal/Forward_Path'
 * '<S84>'  : 'ee_pwm_three_level/Three-Level Controller/PWM Generator (Three-phase, Three-level)/Gate Signal Generator'
 * '<S85>'  : 'ee_pwm_three_level/Three-Level Controller/PWM Generator (Three-phase, Three-level)/Switching Time Calculation'
 * '<S86>'  : 'ee_pwm_three_level/Three-Level Controller/PWM Generator (Three-phase, Three-level)/Gate Signal Generator/Gate signal'
 * '<S87>'  : 'ee_pwm_three_level/Three-Level Controller/PWM Generator (Three-phase, Three-level)/Gate Signal Generator/Signal Correction'
 */
#endif                                 /* RTW_HEADER_ee_pwm_three_level_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
