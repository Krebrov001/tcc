/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_marine_electrical_system.h
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

#ifndef RTW_HEADER_ee_marine_electrical_system_h_
#define RTW_HEADER_ee_marine_electrical_system_h_
#include <stddef.h>
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef ee_marine_electrical_system_COMMON_INCLUDES_
# define ee_marine_electrical_system_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "ee_marine_electrical_system_fab709d2_1_gateway.h"
#endif                        /* ee_marine_electrical_system_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
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
  real_T INPUT_5_1_1[4];               /* '<S98>/INPUT_5_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S98>/INPUT_4_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S98>/INPUT_1_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S98>/INPUT_2_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S98>/INPUT_3_1_1' */
  real_T STATE_1[337];                 /* '<S98>/STATE_1' */
  real_T Probe[2];                     /* '<S28>/Probe' */
  real_T Probe_a[2];                   /* '<S45>/Probe' */
  real_T Probe_l[2];                   /* '<S38>/Probe' */
  real_T Probe_b[2];                   /* '<S41>/Probe' */
  real_T Probe_f[2];                   /* '<S70>/Probe' */
  real_T Probe_i[2];                   /* '<S87>/Probe' */
  real_T Probe_k[2];                   /* '<S80>/Probe' */
  real_T Probe_o[2];                   /* '<S83>/Probe' */
  real_T INPUT_5_1_1_Discrete[2];      /* '<S98>/INPUT_5_1_1' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S98>/INPUT_4_1_1' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S98>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S98>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S98>/INPUT_3_1_1' */
  real_T STATE_1_Discrete[332];        /* '<S98>/STATE_1' */
  real_T Integrator_DSTATE;            /* '<S37>/Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S10>/Unit Delay' */
  real_T Integrator_DSTATE_f;          /* '<S79>/Integrator' */
  real_T UnitDelay_DSTATE_j;           /* '<S52>/Unit Delay' */
  real_T Integrator_DSTATE_g;          /* '<S90>/Integrator' */
  real_T Integrator_DSTATE_a;          /* '<S82>/Integrator' */
  real_T Integrator_DSTATE_b;          /* '<S74>/Integrator' */
  real_T Integrator_DSTATE_gc;         /* '<S86>/Integrator' */
  real_T Integrator_DSTATE_bs;         /* '<S48>/Integrator' */
  real_T Integrator_DSTATE_bu;         /* '<S40>/Integrator' */
  real_T Integrator_DSTATE_p;          /* '<S32>/Integrator' */
  real_T Integrator_DSTATE_m;          /* '<S44>/Integrator' */
  real_T OUTPUT_1_0_Discrete;          /* '<S98>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S98>/STATE_1' */
  void* STATE_1_SimData;               /* '<S98>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S98>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S98>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S98>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S98>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S98>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S98>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S98>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S98>/OUTPUT_1_0' */
  int_T STATE_1_Modes[47];             /* '<S98>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S98>/OUTPUT_1_0' */
  int8_T Integrator_PrevResetState;    /* '<S37>/Integrator' */
  int8_T Integrator_PrevResetState_b;  /* '<S79>/Integrator' */
  int8_T Integrator_PrevResetState_h;  /* '<S90>/Integrator' */
  int8_T Integrator_PrevResetState_p;  /* '<S82>/Integrator' */
  int8_T Integrator_PrevResetState_a;  /* '<S74>/Integrator' */
  int8_T Integrator_PrevResetState_e;  /* '<S86>/Integrator' */
  int8_T Integrator_PrevResetState_o;  /* '<S48>/Integrator' */
  int8_T Integrator_PrevResetState_em; /* '<S40>/Integrator' */
  int8_T Integrator_PrevResetState_f;  /* '<S32>/Integrator' */
  int8_T Integrator_PrevResetState_j;  /* '<S44>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S90>/Integrator' */
  uint8_T Integrator_IC_LOADING_b;     /* '<S82>/Integrator' */
  uint8_T Integrator_IC_LOADING_o;     /* '<S74>/Integrator' */
  uint8_T Integrator_IC_LOADING_d;     /* '<S86>/Integrator' */
  uint8_T Integrator_IC_LOADING_i;     /* '<S48>/Integrator' */
  uint8_T Integrator_IC_LOADING_br;    /* '<S40>/Integrator' */
  uint8_T Integrator_IC_LOADING_bz;    /* '<S32>/Integrator' */
  uint8_T Integrator_IC_LOADING_dv;    /* '<S44>/Integrator' */
  boolean_T STATE_1_FirstOutput;       /* '<S98>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S98>/OUTPUT_1_0' */
} DW;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: rep_seq_y
   * Referenced by: '<S5>/Look-Up Table1'
   */
  real_T LookUpTable1_tableData[8];

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S5>/Look-Up Table1'
   */
  real_T LookUpTable1_bp01Data[8];

  /* Expression: rep_seq_y
   * Referenced by: '<S4>/Look-Up Table1'
   */
  real_T LookUpTable1_tableData_j[6];

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S4>/Look-Up Table1'
   */
  real_T LookUpTable1_bp01Data_i[6];

  /* Pooled Parameter (Expression: [0 E_2 E_1])
   * Referenced by:
   *   '<S35>/Saturation'
   *   '<S77>/Saturation'
   */
  real_T pooled12[3];

  /* Pooled Parameter (Expression: [0 S_E_E2 S_E_E1])
   * Referenced by:
   *   '<S35>/Saturation'
   *   '<S77>/Saturation'
   */
  real_T pooled13[3];
} ConstP;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Generator_Power;              /* '<Root>/Out1' */
  real_T Turbine_Power;                /* '<Root>/Out2' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
  RTWSolverInfo solverInfo;

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
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Model entry point functions */
extern void ee_marine_electrical_system_initialize(void);
extern void ee_marine_electrical_system_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S32>/Saturation' : Eliminated Saturate block
 * Block '<S21>/[A,B]' : Eliminated Saturate block
 * Block '<S22>/Gain3' : Eliminated nontunable gain of 1
 * Block '<S37>/Saturation' : Eliminated Saturate block
 * Block '<S40>/Saturation' : Eliminated Saturate block
 * Block '<S23>/[A,B]' : Eliminated Saturate block
 * Block '<S24>/Switch2' : Eliminated due to constant selection input
 * Block '<S24>/Switch3' : Eliminated due to constant selection input
 * Block '<S24>/Switch4' : Eliminated due to constant selection input
 * Block '<S25>/Switch2' : Eliminated due to constant selection input
 * Block '<S25>/Switch3' : Eliminated due to constant selection input
 * Block '<S25>/Switch4' : Eliminated due to constant selection input
 * Block '<S25>/Switch5' : Eliminated due to constant selection input
 * Block '<S44>/Saturation' : Eliminated Saturate block
 * Block '<S48>/Saturation' : Eliminated Saturate block
 * Block '<S27>/K' : Eliminated nontunable gain of 1
 * Block '<S74>/Saturation' : Eliminated Saturate block
 * Block '<S63>/[A,B]' : Eliminated Saturate block
 * Block '<S64>/Gain3' : Eliminated nontunable gain of 1
 * Block '<S79>/Saturation' : Eliminated Saturate block
 * Block '<S82>/Saturation' : Eliminated Saturate block
 * Block '<S65>/[A,B]' : Eliminated Saturate block
 * Block '<S66>/Switch2' : Eliminated due to constant selection input
 * Block '<S66>/Switch3' : Eliminated due to constant selection input
 * Block '<S66>/Switch4' : Eliminated due to constant selection input
 * Block '<S67>/Switch2' : Eliminated due to constant selection input
 * Block '<S67>/Switch3' : Eliminated due to constant selection input
 * Block '<S67>/Switch4' : Eliminated due to constant selection input
 * Block '<S67>/Switch5' : Eliminated due to constant selection input
 * Block '<S86>/Saturation' : Eliminated Saturate block
 * Block '<S90>/Saturation' : Eliminated Saturate block
 * Block '<S69>/K' : Eliminated nontunable gain of 1
 * Block '<S4>/Output' : Eliminate redundant signal conversion block
 * Block '<S5>/Output' : Eliminate redundant signal conversion block
 * Block '<S10>/Constant5' : Unused code path elimination
 * Block '<S10>/Constant6' : Unused code path elimination
 * Block '<S10>/Constant7' : Unused code path elimination
 * Block '<S10>/Constant8' : Unused code path elimination
 * Block '<S10>/Constant9' : Unused code path elimination
 * Block '<S24>/notIsUelSummationPoint1' : Unused code path elimination
 * Block '<S24>/notIsUelSummationPoint3' : Unused code path elimination
 * Block '<S24>/notIsUelSummationPoint4' : Unused code path elimination
 * Block '<S25>/notIsUelSummationPoint1' : Unused code path elimination
 * Block '<S25>/notIsUelSummationPoint2' : Unused code path elimination
 * Block '<S25>/notIsUelSummationPoint3' : Unused code path elimination
 * Block '<S25>/notIsUelSummationPoint4' : Unused code path elimination
 * Block '<S52>/Constant5' : Unused code path elimination
 * Block '<S52>/Constant6' : Unused code path elimination
 * Block '<S52>/Constant7' : Unused code path elimination
 * Block '<S52>/Constant8' : Unused code path elimination
 * Block '<S52>/Constant9' : Unused code path elimination
 * Block '<S66>/notIsUelSummationPoint1' : Unused code path elimination
 * Block '<S66>/notIsUelSummationPoint3' : Unused code path elimination
 * Block '<S66>/notIsUelSummationPoint4' : Unused code path elimination
 * Block '<S67>/notIsUelSummationPoint1' : Unused code path elimination
 * Block '<S67>/notIsUelSummationPoint2' : Unused code path elimination
 * Block '<S67>/notIsUelSummationPoint3' : Unused code path elimination
 * Block '<S67>/notIsUelSummationPoint4' : Unused code path elimination
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
 * '<Root>' : 'ee_marine_electrical_system'
 * '<S1>'   : 'ee_marine_electrical_system/Bow Thrusters'
 * '<S2>'   : 'ee_marine_electrical_system/Diesel generator '
 * '<S3>'   : 'ee_marine_electrical_system/Gas turbine'
 * '<S4>'   : 'ee_marine_electrical_system/Hotel Load Profile'
 * '<S5>'   : 'ee_marine_electrical_system/Propulsion Load Profile'
 * '<S6>'   : 'ee_marine_electrical_system/Simulink-PS Converter'
 * '<S7>'   : 'ee_marine_electrical_system/Simulink-PS Converter2'
 * '<S8>'   : 'ee_marine_electrical_system/Simulink-PS Converter3'
 * '<S9>'   : 'ee_marine_electrical_system/Solver Configuration'
 * '<S10>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter'
 * '<S11>'  : 'ee_marine_electrical_system/Diesel generator /Generator and governor'
 * '<S12>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/E_FD Simulink-PS '
 * '<S13>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/I_FD PS-Simulink'
 * '<S14>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/PS-Simulink Converter'
 * '<S15>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C'
 * '<S16>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Current PS-Simulink'
 * '<S17>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Voltage PS-Simulink'
 * '<S18>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/E_FD Simulink-PS /EVAL_KEY'
 * '<S19>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/I_FD PS-Simulink/EVAL_KEY'
 * '<S20>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/PS-Simulink Converter/EVAL_KEY'
 * '<S21>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)'
 * '<S22>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/AC Rotating Exciter'
 * '<S23>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Rate Feedback'
 * '<S24>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Summation Point Logic'
 * '<S25>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Take-over Logic'
 * '<S26>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Vaminmax'
 * '<S27>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Voltage Transducer'
 * '<S28>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Gains'
 * '<S29>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Integrator (Discrete or Continuous)'
 * '<S30>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Gains/Compare To Zero'
 * '<S31>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Gains/Compare To Zero1'
 * '<S32>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Integrator (Discrete or Continuous)/Discrete'
 * '<S33>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/AC Rotating Exciter/Fex'
 * '<S34>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/AC Rotating Exciter/Integrator (Discrete or Continuous)'
 * '<S35>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/AC Rotating Exciter/Saturation'
 * '<S36>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/AC Rotating Exciter/Fex/fex'
 * '<S37>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/AC Rotating Exciter/Integrator (Discrete or Continuous)/Discrete'
 * '<S38>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Rate Feedback/Enable//disable time constant'
 * '<S39>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Rate Feedback/Integrator (Discrete or Continuous)'
 * '<S40>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Rate Feedback/Integrator (Discrete or Continuous)/Discrete'
 * '<S41>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Vaminmax/Enable//disable time constant'
 * '<S42>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Vaminmax/Integrator (Discrete or Continuous)'
 * '<S43>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Vaminmax/Enable//disable time constant/Compare To Zero'
 * '<S44>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Vaminmax/Integrator (Discrete or Continuous)/Discrete'
 * '<S45>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Voltage Transducer/Enable//disable time constant'
 * '<S46>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Voltage Transducer/Integrator (Discrete or Continuous)'
 * '<S47>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Voltage Transducer/Enable//disable time constant/Compare To Zero'
 * '<S48>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/SM AC1C/Voltage Transducer/Integrator (Discrete or Continuous)/Discrete'
 * '<S49>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Current PS-Simulink/EVAL_KEY'
 * '<S50>'  : 'ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Voltage PS-Simulink/EVAL_KEY'
 * '<S51>'  : 'ee_marine_electrical_system/Diesel generator /Generator and governor/Governor'
 * '<S52>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter'
 * '<S53>'  : 'ee_marine_electrical_system/Gas turbine/Turbine and governor '
 * '<S54>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/E_FD Simulink-PS '
 * '<S55>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/I_FD PS-Simulink'
 * '<S56>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/PS-Simulink Converter'
 * '<S57>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C'
 * '<S58>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Current PS-Simulink'
 * '<S59>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage PS-Simulink'
 * '<S60>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/E_FD Simulink-PS /EVAL_KEY'
 * '<S61>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/I_FD PS-Simulink/EVAL_KEY'
 * '<S62>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/PS-Simulink Converter/EVAL_KEY'
 * '<S63>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)'
 * '<S64>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/AC Rotating Exciter'
 * '<S65>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Rate Feedback'
 * '<S66>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Summation Point Logic'
 * '<S67>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Take-over Logic'
 * '<S68>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Vaminmax'
 * '<S69>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Voltage Transducer'
 * '<S70>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Gains'
 * '<S71>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Integrator (Discrete or Continuous)'
 * '<S72>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Gains/Compare To Zero'
 * '<S73>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Gains/Compare To Zero1'
 * '<S74>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/(1+sT_C)//(1+sT_B)/Integrator (Discrete or Continuous)/Discrete'
 * '<S75>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/AC Rotating Exciter/Fex'
 * '<S76>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/AC Rotating Exciter/Integrator (Discrete or Continuous)'
 * '<S77>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/AC Rotating Exciter/Saturation'
 * '<S78>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/AC Rotating Exciter/Fex/fex'
 * '<S79>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/AC Rotating Exciter/Integrator (Discrete or Continuous)/Discrete'
 * '<S80>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Rate Feedback/Enable//disable time constant'
 * '<S81>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Rate Feedback/Integrator (Discrete or Continuous)'
 * '<S82>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Rate Feedback/Integrator (Discrete or Continuous)/Discrete'
 * '<S83>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Vaminmax/Enable//disable time constant'
 * '<S84>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Vaminmax/Integrator (Discrete or Continuous)'
 * '<S85>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Vaminmax/Enable//disable time constant/Compare To Zero'
 * '<S86>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Vaminmax/Integrator (Discrete or Continuous)/Discrete'
 * '<S87>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Voltage Transducer/Enable//disable time constant'
 * '<S88>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Voltage Transducer/Integrator (Discrete or Continuous)'
 * '<S89>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Voltage Transducer/Enable//disable time constant/Compare To Zero'
 * '<S90>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/SM AC1C/Voltage Transducer/Integrator (Discrete or Continuous)/Discrete'
 * '<S91>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Current PS-Simulink/EVAL_KEY'
 * '<S92>'  : 'ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage PS-Simulink/EVAL_KEY'
 * '<S93>'  : 'ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine'
 * '<S94>'  : 'ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor'
 * '<S95>'  : 'ee_marine_electrical_system/Simulink-PS Converter/EVAL_KEY'
 * '<S96>'  : 'ee_marine_electrical_system/Simulink-PS Converter2/EVAL_KEY'
 * '<S97>'  : 'ee_marine_electrical_system/Simulink-PS Converter3/EVAL_KEY'
 * '<S98>'  : 'ee_marine_electrical_system/Solver Configuration/EVAL_KEY'
 */
#endif                           /* RTW_HEADER_ee_marine_electrical_system_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
