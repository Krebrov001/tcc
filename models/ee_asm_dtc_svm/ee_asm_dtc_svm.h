/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_asm_dtc_svm.h
 *
 * Code generated for Simulink model 'ee_asm_dtc_svm'.
 *
 * Model version                  : 1.792
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 11:50:34 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ee_asm_dtc_svm_h_
#define RTW_HEADER_ee_asm_dtc_svm_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#ifndef ee_asm_dtc_svm_COMMON_INCLUDES_
# define ee_asm_dtc_svm_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "nesl_rtw.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_gateway.h"
#endif                                 /* ee_asm_dtc_svm_COMMON_INCLUDES_ */

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
  real_T ZeroOrderHold2[3];            /* '<S1>/Zero-Order Hold2' */
  real_T ZeroOrderHold1[3];            /* '<S1>/Zero-Order Hold1' */
  real_T RTabc[3];                     /* '<S28>/RTabc' */
  real_T INPUT_2_1_1[4];               /* '<S86>/INPUT_2_1_1' */
  real_T INPUT_2_1_2[4];               /* '<S86>/INPUT_2_1_2' */
  real_T INPUT_2_1_3[4];               /* '<S86>/INPUT_2_1_3' */
  real_T INPUT_1_1_1[4];               /* '<S86>/INPUT_1_1_1' */
  real_T STATE_1[78];                  /* '<S86>/STATE_1' */
  real_T UnitDelay4_DSTATE[3];         /* '<S1>/Unit Delay4' */
  real_T UnitDelay5_DSTATE[3];         /* '<S1>/Unit Delay5' */
  real_T DiscreteTimeIntegrator_DSTATE[2];/* '<S10>/Discrete-Time Integrator' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S86>/INPUT_2_1_1' */
  real_T INPUT_2_1_2_Discrete[2];      /* '<S86>/INPUT_2_1_2' */
  real_T INPUT_2_1_3_Discrete[2];      /* '<S86>/INPUT_2_1_3' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S86>/INPUT_1_1_1' */
  real_T STATE_1_Discrete[54];         /* '<S86>/STATE_1' */
  real_T RTabc_Buffer0[3];             /* '<S28>/RTabc' */
  real_T ZeroOrderHold3;               /* '<S1>/Zero-Order Hold3' */
  real_T RTdc;                         /* '<S28>/RTdc' */
  real_T RateTransition;               /* '<S5>/Rate Transition' */
  real_T UnitDelay_DSTATE;             /* '<S15>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S15>/Discrete-Time Integrator' */
  real_T UnitDelay1_DSTATE;            /* '<S1>/Unit Delay1' */
  real_T Integrator_DSTATE;            /* '<S60>/Integrator' */
  real_T UnitDelay_DSTATE_n;           /* '<S16>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_g;/* '<S16>/Discrete-Time Integrator' */
  real_T PrevY;                        /* '<S1>/Rate Limiter' */
  real_T RTdc_Buffer0;                 /* '<S28>/RTdc' */
  real_T OUTPUT_1_0_Discrete;          /* '<S86>/OUTPUT_1_0' */
  real_T RateTransition_Buffer0;       /* '<S5>/Rate Transition' */
  void* STATE_1_Simulator;             /* '<S86>/STATE_1' */
  void* STATE_1_SimData;               /* '<S86>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S86>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S86>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S86>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S86>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S86>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S86>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S86>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S86>/OUTPUT_1_0' */
  int_T STATE_1_Modes[24];             /* '<S86>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S86>/OUTPUT_1_0' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S15>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_i;/* '<S16>/Discrete-Time Integrator' */
  boolean_T STATE_1_FirstOutput;       /* '<S86>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S86>/OUTPUT_1_0' */
} DW;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T I_ABC[3];                     /* '<Root>/Out1' */
  real_T Trq[2];                       /* '<Root>/Out2' */
  real_T Spd[2];                       /* '<Root>/Out3' */
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
extern void ee_asm_dtc_svm_initialize(void);
extern void ee_asm_dtc_svm_step0(void);
extern void ee_asm_dtc_svm_step1(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S21>/Data Type Duplicate' : Unused code path elimination
 * Block '<S21>/Data Type Propagation' : Unused code path elimination
 * Block '<S22>/Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/Data Type Propagation' : Unused code path elimination
 * Block '<S23>/Data Type Duplicate' : Unused code path elimination
 * Block '<S23>/Data Type Propagation' : Unused code path elimination
 * Block '<S24>/Data Type Duplicate' : Unused code path elimination
 * Block '<S24>/Data Type Propagation' : Unused code path elimination
 * Block '<S28>/Data Type Conversion' : Unused code path elimination
 * Block '<S29>/Add3' : Unused code path elimination
 * Block '<S29>/Bias' : Unused code path elimination
 * Block '<S29>/Constant2' : Unused code path elimination
 * Block '<S29>/Constant3' : Unused code path elimination
 * Block '<S29>/Discrete-Time Integrator1' : Unused code path elimination
 * Block '<S29>/Initial' : Unused code path elimination
 * Block '<S29>/Logical Operator' : Unused code path elimination
 * Block '<S29>/Logical Operator3' : Unused code path elimination
 * Block '<S29>/Rate Transition' : Unused code path elimination
 * Block '<S29>/Rate Transition1' : Unused code path elimination
 * Block '<S29>/Relational Operator' : Unused code path elimination
 * Block '<S29>/Relational Operator1' : Unused code path elimination
 * Block '<S29>/Relational Operator3' : Unused code path elimination
 * Block '<S12>/Relay' : Unused code path elimination
 * Block '<S12>/Switch1' : Unused code path elimination
 * Block '<S12>/Unit Delay2' : Unused code path elimination
 * Block '<S12>/Zero  vector' : Unused code path elimination
 * Block '<S15>/Gain2' : Eliminated nontunable gain of 1
 * Block '<S16>/Gain' : Eliminated nontunable gain of 1
 * Block '<S16>/Gain2' : Eliminated nontunable gain of 1
 * Block '<S17>/Multiport Switch' : Eliminated due to constant selection input
 * Block '<S17>/Multiport Switch1' : Eliminated due to constant selection input
 * Block '<S27>/Gain1' : Eliminated nontunable gain of 1
 * Block '<S28>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S17>/Abs' : Unused code path elimination
 * Block '<S17>/Abs1' : Unused code path elimination
 * Block '<S17>/Constant' : Unused code path elimination
 * Block '<S17>/Gain' : Unused code path elimination
 * Block '<S17>/Gain1' : Unused code path elimination
 * Block '<S17>/Math Function2' : Unused code path elimination
 * Block '<S17>/Math Function3' : Unused code path elimination
 * Block '<S20>/Constant1' : Unused code path elimination
 * Block '<S20>/Switch' : Unused code path elimination
 * Block '<S17>/Product' : Unused code path elimination
 * Block '<S17>/Product1' : Unused code path elimination
 * Block '<S23>/LowerRelop1' : Unused code path elimination
 * Block '<S23>/Switch' : Unused code path elimination
 * Block '<S23>/Switch2' : Unused code path elimination
 * Block '<S23>/UpperRelop' : Unused code path elimination
 * Block '<S24>/LowerRelop1' : Unused code path elimination
 * Block '<S24>/Switch' : Unused code path elimination
 * Block '<S24>/Switch2' : Unused code path elimination
 * Block '<S24>/UpperRelop' : Unused code path elimination
 * Block '<S17>/Sqrt1' : Unused code path elimination
 * Block '<S17>/Sum1' : Unused code path elimination
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
 * '<Root>' : 'ee_asm_dtc_svm'
 * '<S1>'   : 'ee_asm_dtc_svm/Control'
 * '<S2>'   : 'ee_asm_dtc_svm/Load torque'
 * '<S3>'   : 'ee_asm_dtc_svm/Measurement'
 * '<S4>'   : 'ee_asm_dtc_svm/Sensing vi'
 * '<S5>'   : 'ee_asm_dtc_svm/Signals'
 * '<S6>'   : 'ee_asm_dtc_svm/Simulink-PS Converter1'
 * '<S7>'   : 'ee_asm_dtc_svm/Solver Configuration'
 * '<S8>'   : 'ee_asm_dtc_svm/Control/ASM DTC-SVM'
 * '<S9>'   : 'ee_asm_dtc_svm/Control/PI (wr)'
 * '<S10>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque estimator'
 * '<S11>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control'
 * '<S12>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/SVM'
 * '<S13>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque estimator/Clarke Transform'
 * '<S14>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque estimator/Clarke Transform1'
 * '<S15>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/PI flux'
 * '<S16>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/PI torque'
 * '<S17>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/d-q Voltage Limiter'
 * '<S18>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/d-q Voltage Limiter/Axis prioritization'
 * '<S19>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/d-q Voltage Limiter/Axis prioritization1'
 * '<S20>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/d-q Voltage Limiter/Prevent division by zero'
 * '<S21>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/d-q Voltage Limiter/Saturation v1'
 * '<S22>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/d-q Voltage Limiter/Saturation v2'
 * '<S23>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/d-q Voltage Limiter/Saturation vd'
 * '<S24>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/d-q Voltage Limiter/Saturation vq'
 * '<S25>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/d-q Voltage Limiter/Axis prioritization/Compare To Constant'
 * '<S26>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/Flux and torque control/d-q Voltage Limiter/Axis prioritization1/Compare To Constant'
 * '<S27>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/SVM/Inverse Park Transform'
 * '<S28>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/SVM/PWM Generator (Three-phase, Two-level)'
 * '<S29>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/SVM/PWM Generator (Three-phase, Two-level)/Gate Signal Generator'
 * '<S30>'  : 'ee_asm_dtc_svm/Control/ASM DTC-SVM/SVM/PWM Generator (Three-phase, Two-level)/Switching Time Calculation'
 * '<S31>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Anti-windup'
 * '<S32>'  : 'ee_asm_dtc_svm/Control/PI (wr)/D Gain'
 * '<S33>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Filter'
 * '<S34>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Filter ICs'
 * '<S35>'  : 'ee_asm_dtc_svm/Control/PI (wr)/I Gain'
 * '<S36>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Ideal P Gain'
 * '<S37>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Ideal P Gain Fdbk'
 * '<S38>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Integrator'
 * '<S39>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Integrator ICs'
 * '<S40>'  : 'ee_asm_dtc_svm/Control/PI (wr)/N Copy'
 * '<S41>'  : 'ee_asm_dtc_svm/Control/PI (wr)/N Gain'
 * '<S42>'  : 'ee_asm_dtc_svm/Control/PI (wr)/P Copy'
 * '<S43>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Parallel P Gain'
 * '<S44>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Reset Signal'
 * '<S45>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Saturation'
 * '<S46>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Saturation Fdbk'
 * '<S47>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Sum'
 * '<S48>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Sum Fdbk'
 * '<S49>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Tracking Mode'
 * '<S50>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Tracking Mode Sum'
 * '<S51>'  : 'ee_asm_dtc_svm/Control/PI (wr)/postSat Signal'
 * '<S52>'  : 'ee_asm_dtc_svm/Control/PI (wr)/preSat Signal'
 * '<S53>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Anti-windup/Back Calculation'
 * '<S54>'  : 'ee_asm_dtc_svm/Control/PI (wr)/D Gain/Disabled'
 * '<S55>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Filter/Disabled'
 * '<S56>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Filter ICs/Disabled'
 * '<S57>'  : 'ee_asm_dtc_svm/Control/PI (wr)/I Gain/Internal Parameters'
 * '<S58>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Ideal P Gain/Passthrough'
 * '<S59>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Ideal P Gain Fdbk/Disabled'
 * '<S60>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Integrator/Discrete'
 * '<S61>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Integrator ICs/Internal IC'
 * '<S62>'  : 'ee_asm_dtc_svm/Control/PI (wr)/N Copy/Disabled wSignal Specification'
 * '<S63>'  : 'ee_asm_dtc_svm/Control/PI (wr)/N Gain/Disabled'
 * '<S64>'  : 'ee_asm_dtc_svm/Control/PI (wr)/P Copy/Disabled'
 * '<S65>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Parallel P Gain/Internal Parameters'
 * '<S66>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Reset Signal/Disabled'
 * '<S67>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Saturation/Enabled'
 * '<S68>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Saturation Fdbk/Disabled'
 * '<S69>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Sum/Sum_PI'
 * '<S70>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Sum Fdbk/Disabled'
 * '<S71>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Tracking Mode/Disabled'
 * '<S72>'  : 'ee_asm_dtc_svm/Control/PI (wr)/Tracking Mode Sum/Passthrough'
 * '<S73>'  : 'ee_asm_dtc_svm/Control/PI (wr)/postSat Signal/Forward_Path'
 * '<S74>'  : 'ee_asm_dtc_svm/Control/PI (wr)/preSat Signal/Forward_Path'
 * '<S75>'  : 'ee_asm_dtc_svm/Load torque/Simulink-PS Converter'
 * '<S76>'  : 'ee_asm_dtc_svm/Load torque/Simulink-PS Converter/EVAL_KEY'
 * '<S77>'  : 'ee_asm_dtc_svm/Measurement/PS-Simulink Converter1'
 * '<S78>'  : 'ee_asm_dtc_svm/Measurement/PS-Simulink Converter2'
 * '<S79>'  : 'ee_asm_dtc_svm/Measurement/PS-Simulink Converter1/EVAL_KEY'
 * '<S80>'  : 'ee_asm_dtc_svm/Measurement/PS-Simulink Converter2/EVAL_KEY'
 * '<S81>'  : 'ee_asm_dtc_svm/Sensing vi/PS-Simulink Converter'
 * '<S82>'  : 'ee_asm_dtc_svm/Sensing vi/PS-Simulink Converter1'
 * '<S83>'  : 'ee_asm_dtc_svm/Sensing vi/PS-Simulink Converter/EVAL_KEY'
 * '<S84>'  : 'ee_asm_dtc_svm/Sensing vi/PS-Simulink Converter1/EVAL_KEY'
 * '<S85>'  : 'ee_asm_dtc_svm/Simulink-PS Converter1/EVAL_KEY'
 * '<S86>'  : 'ee_asm_dtc_svm/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_ee_asm_dtc_svm_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
