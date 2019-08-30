/*
 * complete_system_io.h
 *
 * Code generation for model "complete_system_io".
 *
 * Model version              : 1.309
 * Simulink Coder version : 8.5 (R2013b) 08-Aug-2013
 * C source code generated on : Tue Jun 20 11:55:30 2017
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Specified
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */
#ifndef RTW_HEADER_complete_system_io_h_
#define RTW_HEADER_complete_system_io_h_
#ifndef complete_system_io_COMMON_INCLUDES_
# define complete_system_io_COMMON_INCLUDES_
#include <math.h>
#include <float.h>
#include <string.h>
#include "rtwtypes.h"
#include "multiword_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rt_defines.h"
#include "rt_look.h"
#include "rt_look1d.h"
#endif                                 /* complete_system_io_COMMON_INCLUDES_ */

#include "complete_system_io_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->ModelData.odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->ModelData.odeY = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

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

/* Block signals (auto storage) */
typedef struct {
  real_T RateTransition2[2];           /* '<S77>/Rate Transition2' */
  real_T ib[4];                        /* '<S17>/ib' */
  real_T Current;                      /* '<S102>/Look-Up Table' */
  real_T Current_i;                    /* '<S103>/Look-Up Table' */
  real_T Current_d;                    /* '<S104>/Look-Up Table' */
  real_T SineWaveA;                    /* '<S10>/Sine Wave A' */
  real_T SineWaveB;                    /* '<S10>/Sine Wave B' */
  real_T SineWaveC;                    /* '<S10>/Sine Wave C' */
  real_T StateSpace[8];                /* '<S107>/State-Space' */
  real_T RateTransition2_p[6];         /* '<S99>/Rate Transition2' */
  real_T Product;                      /* '<S3>/Product' */
  real_T GainK;                        /* '<S3>/Gain K' */
  real_T Sum;                          /* '<S3>/Sum' */
  real_T TF1;                          /* '<S3>/TF1' */
  real_T TF2;                          /* '<S3>/TF2' */
  real_T Flux;                         /* '<S102>/Discrete-Time Integrator' */
  real_T Flux_o;                       /* '<S103>/Discrete-Time Integrator' */
  real_T Flux_o0;                      /* '<S104>/Discrete-Time Integrator' */
  real_T Lmsatd;                       /* '<S91>/Lmd' */
  real_T Switch1;                      /* '<S89>/Switch1' */
  real_T Linv[25];                     /* '<S89>/inversion' */
  real_T RLinv[25];                    /* '<S89>/Product1' */
  real_T Lmsatq;                       /* '<S92>/Lmq' */
  real_T Constant[2];                  /* '<S36>/Constant' */
  real_T TrigonometricFunction;        /* '<S36>/Trigonometric Function' */
  real_T TrigonometricFunction1;       /* '<S36>/Trigonometric Function1' */
  real_T W43wr[16];                    /* '<S36>/W(4,3)=wr' */
  real_T Constant_j[2];                /* '<S35>/Constant' */
  real_T TrigonometricFunction_p;      /* '<S35>/Trigonometric Function' */
  real_T TrigonometricFunction1_b;     /* '<S35>/Trigonometric Function1' */
  real_T W21wr[16];                    /* '<S35>/W(2,1)=-wr' */
  real_T TrigonometricFunction_o;      /* '<S34>/Trigonometric Function' */
  real_T TrigonometricFunction1_c;     /* '<S34>/Trigonometric Function1' */
  real_T TrigonometricFunction2;       /* '<S34>/Trigonometric Function2' */
  real_T TrigonometricFunction3;       /* '<S34>/Trigonometric Function3' */
  real_T W43wr1[16];                   /* '<S34>/W(4,3)=wr-1' */
  real_T ira;                          /* '<S33>/ira' */
  real_T irb;                          /* '<S33>/irb' */
  real_T isa;                          /* '<S33>/isa' */
  real_T isb;                          /* '<S33>/isb' */
  real_T ira_i;                        /* '<S32>/ira' */
  real_T irb_h;                        /* '<S32>/irb' */
  real_T isa_a;                        /* '<S32>/isa' */
  real_T isb_b;                        /* '<S32>/isb' */
  real_T ira_p;                        /* '<S31>/ira' */
  real_T irb_a;                        /* '<S31>/irb' */
  real_T isa_n;                        /* '<S31>/isa' */
  real_T isb_j;                        /* '<S31>/isb' */
  real_T vdr;                          /* '<S29>/vdr' */
  real_T vds;                          /* '<S29>/vds' */
  real_T vqr;                          /* '<S29>/vqr' */
  real_T vqs;                          /* '<S29>/vqs' */
  real_T vdr_o;                        /* '<S28>/vdr' */
  real_T vds_p;                        /* '<S28>/vds' */
  real_T vqr_l;                        /* '<S28>/vqr' */
  real_T vqs_b;                        /* '<S28>/vqs' */
  real_T vdr_ob;                       /* '<S27>/vdr' */
  real_T vds_n;                        /* '<S27>/vds' */
  real_T vqr_a;                        /* '<S27>/vqr' */
  real_T vqs_d;                        /* '<S27>/vqs' */
  real_T Switch;                       /* '<S21>/Switch' */
  real_T Linv_o[16];                   /* '<S21>/inversion' */
  real_T RLinv_g[16];                  /* '<S21>/Product1' */
} B_complete_system_io_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S99>/Discrete-Time Integrator1' */
  real_T fluxes_DSTATE[5];             /* '<S90>/fluxes' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S99>/Discrete-Time Integrator' */
  real_T voltages_DSTATE[5];           /* '<S90>/voltages' */
  real_T fluxes_DSTATE_m[4];           /* '<S22>/fluxes' */
  real_T fluxes_DSTATE_e[4];           /* '<S20>/fluxes' */
  real_T DiscreteTimeIntegrator1_DSTATE_k;/* '<S38>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S38>/Discrete-Time Integrator' */
  real_T voltages_DSTATE_k[4];         /* '<S22>/voltages' */
  real_T breakAlgLoop_DSTATE;          /* '<S102>/break  Alg.Loop' */
  real_T breakAlgLoop_DSTATE_e;        /* '<S103>/break  Alg.Loop' */
  real_T breakAlgLoop_DSTATE_b;        /* '<S104>/break  Alg.Loop' */
  real_T StateSpace_DSTATE[9];         /* '<S107>/State-Space' */
  real_T DiscreteTimeIntegrator2_DSTATE;/* '<S99>/Discrete-Time Integrator2' */
  real_T UnitDelay_DSTATE;             /* '<S48>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_h;/* '<S48>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_iq;/* '<S53>/Discrete-Time Integrator' */
  real_T DiscreteStateSpace_DSTATE;    /* '<S49>/Discrete State-Space' */
  real_T Delay_x_DSTATE;               /* '<S63>/Delay_x' */
  real_T Delay_x_DSTATE_h;             /* '<S60>/Delay_x' */
  real_T DiscreteTimeIntegrator_DSTATE_c;/* '<S102>/Discrete-Time Integrator' */
  real_T Prediction_DSTATE;            /* '<S102>/Prediction' */
  real_T DiscreteTimeIntegrator_DSTATE_e;/* '<S103>/Discrete-Time Integrator' */
  real_T Prediction_DSTATE_n;          /* '<S103>/Prediction' */
  real_T DiscreteTimeIntegrator_DSTATE_ct;/* '<S104>/Discrete-Time Integrator' */
  real_T Prediction_DSTATE_p;          /* '<S104>/Prediction' */
  real_T Lmd_sat_DSTATE;               /* '<S91>/Lmd_sat' */
  real_T Lmq_sat_DSTATE;               /* '<S92>/Lmq_sat' */
  real_T Delay_DSTATE;                 /* '<S21>/Delay' */
  real_T lastSin;                      /* '<S10>/Sine Wave A' */
  real_T lastCos;                      /* '<S10>/Sine Wave A' */
  real_T lastSin_n;                    /* '<S10>/Sine Wave B' */
  real_T lastCos_h;                    /* '<S10>/Sine Wave B' */
  real_T lastSin_m;                    /* '<S10>/Sine Wave C' */
  real_T lastCos_f;                    /* '<S10>/Sine Wave C' */
  real_T inversion_DWORK4[25];         /* '<S89>/inversion' */
  real_T inversion_DWORK4_d[16];       /* '<S21>/inversion' */
  struct {
    real_T modelTStart;
    real_T TUbufferArea[2048];
  } ENGINETd_RWORK;                    /* '<S3>/ENGINE Td' */

  struct {
    void *AS;
    void *BS;
    void *CS;
    void *DS;
    void *DX_COL;
    void *BD_COL;
    void *TMP1;
    void *TMP2;
    void *XTMP;
    void *SWITCH_STATUS;
    void *SWITCH_STATUS_INIT;
    void *SW_CHG;
    void *CHOPPER;
    void *G_STATE;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
  } StateSpace_PWORK;                  /* '<S107>/State-Space' */

  struct {
    void *TUbufferPtrs[2];
  } ENGINETd_PWORK;                    /* '<S3>/ENGINE Td' */

  int32_T systemEnable;                /* '<S10>/Sine Wave A' */
  int32_T systemEnable_c;              /* '<S10>/Sine Wave B' */
  int32_T systemEnable_p;              /* '<S10>/Sine Wave C' */
  int_T StateSpace_IWORK[4];           /* '<S107>/State-Space' */
  struct {
    int_T Tail;
    int_T Head;
    int_T Last;
    int_T CircularBufSize;
  } ENGINETd_IWORK;                    /* '<S3>/ENGINE Td' */

  int8_T SwitchCase_ActiveSubsystem;   /* '<S50>/Switch Case' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_ENABLE;/* '<S102>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_ENABLE_c;/* '<S103>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_ENABLE_n;/* '<S104>/Discrete-Time Integrator' */
  boolean_T sinthrcosthr_MODE;         /* '<S18>/sin(thr),cos(thr)' */
  boolean_T sinthrcosthr1_MODE;        /* '<S18>/sin(thr),cos(thr)1' */
  boolean_T Rotorreferenceframe_MODE;  /* '<S17>/Rotor reference frame' */
  boolean_T Stationaryreferenceframe_MODE;/* '<S17>/Stationary reference frame' */
  boolean_T Synchronousreferenceframe_MODE;/* '<S17>/Synchronous reference frame' */
  boolean_T Rotorreferenceframe_MODE_f;/* '<S16>/Rotor reference frame' */
  boolean_T Stationaryreferenceframe_MODE_o;/* '<S16>/Stationary reference frame' */
  boolean_T Synchronousreferenceframe_MODE_c;/* '<S16>/Synchronous reference frame' */
  real_T *STRUCT_TEST_PTR;
} DW_complete_system_io_T;

int *GLOBAL_TEST_PTR;

/* Continuous states (auto storage) */
typedef struct {
  real_T CONTROLSYSTEM_CSTATE[2];      /* '<S3>/CONTROL SYSTEM' */
  real_T Integrator_CSTATE;            /* '<S3>/Integrator' */
  real_T TF1_CSTATE;                   /* '<S3>/TF1' */
  real_T TF2_CSTATE;                   /* '<S3>/TF2' */
} X_complete_system_io_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T CONTROLSYSTEM_CSTATE[2];      /* '<S3>/CONTROL SYSTEM' */
  real_T Integrator_CSTATE;            /* '<S3>/Integrator' */
  real_T TF1_CSTATE;                   /* '<S3>/TF1' */
  real_T TF2_CSTATE;                   /* '<S3>/TF2' */
} XDot_complete_system_io_T;

/* State disabled  */
typedef struct {
  boolean_T CONTROLSYSTEM_CSTATE[2];   /* '<S3>/CONTROL SYSTEM' */
  boolean_T Integrator_CSTATE;         /* '<S3>/Integrator' */
  boolean_T TF1_CSTATE;                /* '<S3>/TF1' */
  boolean_T TF2_CSTATE;                /* '<S3>/TF2' */
} XDis_complete_system_io_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2[3];                      /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
  real_T Out5;                         /* '<Root>/Out5' */
  real_T Out6;                         /* '<Root>/Out6' */
  real_T Out7;                         /* '<Root>/Out7' */
} ExtY_complete_system_io_T;

/* Parameters (auto storage) */
struct P_complete_system_io_T_ {
  real_T Lm_nosat_Value;               /* Expression: SM.Lm
                                        * Referenced by: '<S15>/Lm_nosat'
                                        */
  real_T Constant2_Value[16];          /* Expression: SM.Linv
                                        * Referenced by: '<S15>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: SM.Lsat(1)
                                        * Referenced by: '<S21>/Constant1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: SM.Lsat(1)
                                        * Referenced by: '<S21>/Delay'
                                        */
  real_T u2_Value[2];                  /* Expression: [ SM.Lls SM.Llr ]
                                        * Referenced by: '<S23>/u2'
                                        */
  real_T u1_Value[2];                  /* Expression: [1/SM.Lls 1/SM.Llr]
                                        * Referenced by: '<S25>/u1'
                                        */
  real_T LookupTable_XData[2];         /* Expression: SM.Phisat
                                        * Referenced by: '<S21>/Lookup Table'
                                        */
  real_T LookupTable_YData[2];         /* Expression: [ 0 SM.Phisat(2:end)./SM.Lsat(2:end) ]
                                        * Referenced by: '<S21>/Lookup Table'
                                        */
  real_T u1_Value_f[16];               /* Expression: zeros(4,4)
                                        * Referenced by: '<S24>/u1'
                                        */
  real_T u5_Value[16];                 /* Expression: SM.Ll
                                        * Referenced by: '<S24>/u5'
                                        */
  real_T u1_Value_a[16];               /* Expression: SM.R
                                        * Referenced by: '<S21>/u1'
                                        */
  real_T Constant4_Value[16];          /* Expression: SM.RLinv
                                        * Referenced by: '<S15>/Constant4'
                                        */
  real_T I4_Value[16];                 /* Expression: eye(4,4)
                                        * Referenced by: '<S26>/I4'
                                        */
  real_T wbaseTs2_Gain;                /* Expression: SM.web*Ts
                                        * Referenced by: '<S26>/wbase*Ts//2 '
                                        */
  real_T Constant3_Value;              /* Expression: SM.ensat
                                        * Referenced by: '<S15>/Constant3'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch1'
                                        */
  real_T Constant4_Value_i;            /* Expression: SM.ctrl
                                        * Referenced by: '<S18>/Constant4'
                                        */
  real_T wbaseTs_Gain;                 /* Expression: SM.web*Ts
                                        * Referenced by: '<S26>/wbase*Ts'
                                        */
  real_T vqrvdr_Y0;                    /* Expression: 0
                                        * Referenced by: '<S27>/vqr,vdr'
                                        */
  real_T vqsvds_Y0;                    /* Expression: 0
                                        * Referenced by: '<S27>/vqs,vds'
                                        */
  real_T vqrvdr_Y0_f;                  /* Expression: 0
                                        * Referenced by: '<S28>/vqr,vdr'
                                        */
  real_T vqsvds_Y0_g;                  /* Expression: 0
                                        * Referenced by: '<S28>/vqs,vds'
                                        */
  real_T vqrvdr_Y0_c;                  /* Expression: 0
                                        * Referenced by: '<S29>/vqr,vdr'
                                        */
  real_T vqsvds_Y0_e;                  /* Expression: 0
                                        * Referenced by: '<S29>/vqs,vds'
                                        */
  real_T irairb_Y0;                    /* Expression: 0
                                        * Referenced by: '<S31>/ira,irb'
                                        */
  real_T isaisb_Y0;                    /* Expression: 0
                                        * Referenced by: '<S31>/isa,isb'
                                        */
  real_T irairb_Y0_i;                  /* Expression: 0
                                        * Referenced by: '<S32>/ira,irb'
                                        */
  real_T isaisb_Y0_l;                  /* Expression: 0
                                        * Referenced by: '<S32>/isa,isb'
                                        */
  real_T irairb_Y0_n;                  /* Expression: 0
                                        * Referenced by: '<S33>/ira,irb'
                                        */
  real_T isaisb_Y0_c;                  /* Expression: 0
                                        * Referenced by: '<S33>/isa,isb'
                                        */
  real_T sinbetacosbetasinthcosth_Y0;  /* Expression: 0
                                        * Referenced by: '<S34>/sin(beta),cos(beta), sin(th),cos(th)'
                                        */
  real_T W_Y0;                         /* Expression: 0
                                        * Referenced by: '<S34>/W'
                                        */
  real_T we_Value;                     /* Expression: 1
                                        * Referenced by: '<S34>/we'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S34>/Gain2'
                                        */
  real_T web_psb_Gain;                 /* Expression: SM.web
                                        * Referenced by: '<S34>/web_psb'
                                        */
  real_T u3_Value[16];                 /* Expression: [ 0 1  0  0; -1  0  0  0;  0  0  0  0;  0  0  0  0]
                                        * Referenced by: '<S34>/u3'
                                        */
  real_T sinthrcosthr_Y0;              /* Expression: 0
                                        * Referenced by: '<S35>/sin(thr),cos(thr)'
                                        */
  real_T W_Y0_e;                       /* Expression: 0
                                        * Referenced by: '<S35>/W'
                                        */
  real_T Constant_Value[2];            /* Expression: [0; 0]
                                        * Referenced by: '<S35>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S35>/Gain1'
                                        */
  real_T u1_Value_o[16];               /* Expression: zeros(4,4)
                                        * Referenced by: '<S35>/u1'
                                        */
  real_T sinthrcosthr_Y0_f;            /* Expression: 0
                                        * Referenced by: '<S36>/sin(thr),cos(thr)'
                                        */
  real_T Constant_Value_b[2];          /* Expression: [0; 0]
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T Gain3_Gain;                   /* Expression: -1
                                        * Referenced by: '<S36>/Gain3'
                                        */
  real_T u4_Value[16];                 /* Expression: zeros(4,4)
                                        * Referenced by: '<S36>/u4'
                                        */
  real_T input2_Value;                 /* Expression: 1.0
                                        * Referenced by: '<S56>/input2'
                                        */
  real_T Gain_Gain;                    /* Expression: 1.732
                                        * Referenced by: '<S56>/Gain'
                                        */
  real_T input2_Value_o;               /* Expression: 0.75
                                        * Referenced by: '<S55>/input2'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 0.577
                                        * Referenced by: '<S57>/Gain'
                                        */
  real_T input2_Value_e;               /* Expression: 1.0
                                        * Referenced by: '<S57>/input2'
                                        */
  real_T fIn_Y0;                       /* Expression: 0
                                        * Referenced by: '<S58>/f(In)'
                                        */
  real_T input2_Value_n;               /* Expression: 0
                                        * Referenced by: '<S58>/input2'
                                        */
  real_T Constant2_Value_h;            /* Expression: 0
                                        * Referenced by: '<S78>/Constant2'
                                        */
  real_T Lmqd_nosat_Value[2];          /* Expression: [SM.Lmq SM.Lmd]
                                        * Referenced by: '<S79>/Lmqd_nosat'
                                        */
  real_T Constant4_Value_g[25];        /* Expression: SM.Linv
                                        * Referenced by: '<S79>/Constant4'
                                        */
  real_T u3_Value_p;                   /* Expression: SM.Lmq
                                        * Referenced by: '<S89>/u3'
                                        */
  real_T Constant1_Value_l;            /* Expression: SM.Lmsatd(1)
                                        * Referenced by: '<S91>/Constant1'
                                        */
  real_T Constant1_Value_h;            /* Expression: SM.Lmsatq(1)
                                        * Referenced by: '<S92>/Constant1'
                                        */
  real_T Ll_q_Gain[2];                 /* Expression: SM.One_Llq
                                        * Referenced by: '<S97>/1//Ll_q'
                                        */
  real_T u2_Value_h[3];                /* Expression: [ 1/SM.Ll 1/SM.Llkq1 1/SM.Llkq2]
                                        * Referenced by: '<S96>/u2'
                                        */
  real_T Lmq_sat_InitialCondition;     /* Expression: SM.Lmsatq(1)
                                        * Referenced by: '<S92>/Lmq_sat'
                                        */
  real_T LookupTable_XData_k[2];       /* Expression: SM.Phisat
                                        * Referenced by: '<S92>/Lookup Table'
                                        */
  real_T LookupTable_YData_c[2];       /* Expression: [ 0 SM.Phisat(2:end)./SM.Lmsatq(2:end)*SM.Lmq ]
                                        * Referenced by: '<S92>/Lookup Table'
                                        */
  real_T Lmq_Gain;                     /* Expression: SM.Lmq
                                        * Referenced by: '<S92>/Lmq'
                                        */
  real_T Ll_d_Gain[3];                 /* Expression: [ 1/SM.Ll   1/SM.Llfd   1/SM.Llkd ]
                                        * Referenced by: '<S95>/1//Ll_d'
                                        */
  real_T u1_Value_p[3];                /* Expression: [1/SM.Ll 1/SM.Llkd 1/SM.Llfd]
                                        * Referenced by: '<S94>/u1'
                                        */
  real_T Lmd_sat_InitialCondition;     /* Expression: SM.Lmsatd(1)
                                        * Referenced by: '<S91>/Lmd_sat'
                                        */
  real_T LookupTable_XData_d[2];       /* Expression: SM.Phisat
                                        * Referenced by: '<S91>/Lookup Table'
                                        */
  real_T LookupTable_YData_o[2];       /* Expression: [ 0 SM.Phisat(2:end)./SM.Lmsatd(2:end)*SM.Lmd ]
                                        * Referenced by: '<S91>/Lookup Table'
                                        */
  real_T Lmd_Gain;                     /* Expression: SM.Lmd
                                        * Referenced by: '<S91>/Lmd'
                                        */
  real_T u1_Value_ox[25];              /* Expression: SM.R
                                        * Referenced by: '<S89>/u1'
                                        */
  real_T u1_Value_m[25];               /* Expression: zeros(SM.nState,SM.nState)
                                        * Referenced by: '<S93>/u1'
                                        */
  real_T u5_Value_g[25];               /* Expression: SM.Llqd
                                        * Referenced by: '<S93>/u5'
                                        */
  real_T Constant6_Value[25];          /* Expression: SM.RLinv
                                        * Referenced by: '<S79>/Constant6'
                                        */
  real_T In_Value[25];                 /* Expression: eye(SM.nState,SM.nState)
                                        * Referenced by: '<S98>/In'
                                        */
  real_T wbaseTs2_Gain_b;              /* Expression: SM.web*Ts
                                        * Referenced by: '<S98>/wbase*Ts//2 '
                                        */
  real_T Constant2_Value_i;            /* Expression: SM.Sat
                                        * Referenced by: '<S79>/Constant2'
                                        */
  real_T Switch1_Threshold_n;          /* Expression: 0.5
                                        * Referenced by: '<S79>/Switch1'
                                        */
  real_T Gain1_Gain_l;                 /* Expression: -1
                                        * Referenced by: '<S87>/Gain1'
                                        */
  real_T u1_Value_d[25];               /* Expression: zeros(SM.nState,SM.nState)
                                        * Referenced by: '<S87>/u1'
                                        */
  real_T wbaseTs_Gain_n;               /* Expression: SM.web*Ts
                                        * Referenced by: '<S98>/wbase*Ts'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S99>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: SM.tho
                                        * Referenced by: '<S99>/Discrete-Time Integrator1'
                                        */
  real_T web2_Gain;                    /* Expression: SM.web
                                        * Referenced by: '<S99>/web2'
                                        */
  real_T fluxes_InitialCondition[5];   /* Expression: SM.phiqd0
                                        * Referenced by: '<S90>/fluxes'
                                        */
  real_T Constant1_Value_g;            /* Expression: SM.Sat
                                        * Referenced by: '<S79>/Constant1'
                                        */
  real_T Constant3_Value_l;            /* Expression: SM.Sat
                                        * Referenced by: '<S79>/Constant3'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S79>/Switch'
                                        */
  real_T nomspeed_Value;               /* Expression: 1
                                        * Referenced by: '<S99>/nom. speed'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S99>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: SM.dwo
                                        * Referenced by: '<S99>/Discrete-Time Integrator'
                                        */
  real_T voltages_InitialCondition;    /* Expression: 0
                                        * Referenced by: '<S90>/voltages'
                                        */
  real_T IC_Threshold;                 /* Expression: Ts
                                        * Referenced by: '<S90>/IC'
                                        */
  real_T changeIqIdcurrentsigns_Gain[5];/* Expression: SM.IqdSign
                                         * Referenced by: '<S79>/change Iq Id  current signs'
                                         */
  real_T ib_Gain;                      /* Expression: SM.ib
                                        * Referenced by: '<S81>/ib'
                                        */
  real_T Constant3_Value_i;            /* Expression: SM.ctrl
                                        * Referenced by: '<S17>/Constant3'
                                        */
  real_T fluxes_InitialCondition_c[4]; /* Expression: SM.phiqd0
                                        * Referenced by: '<S22>/fluxes'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 2
                                        * Referenced by: '<S20>/Gain'
                                        */
  real_T fluxes_InitialCondition_h[4]; /* Expression: SM.phiqd0
                                        * Referenced by: '<S20>/fluxes'
                                        */
  real_T Constant_Value_j;             /* Expression: SM.ensat
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T Constant1_Value_j;            /* Expression: SM.ensat
                                        * Referenced by: '<S15>/Constant1'
                                        */
  real_T Switch_Threshold_b;           /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch'
                                        */
  real_T DiscreteTimeIntegrator1_gainval_o;/* Computed Parameter: DiscreteTimeIntegrator1_gainval_o
                                            * Referenced by: '<S38>/Discrete-Time Integrator1'
                                            */
  real_T DiscreteTimeIntegrator1_IC_i; /* Expression: SM.tho
                                        * Referenced by: '<S38>/Discrete-Time Integrator1'
                                        */
  real_T DiscreteTimeIntegrator_gainval_h;/* Computed Parameter: DiscreteTimeIntegrator_gainval_h
                                           * Referenced by: '<S38>/Discrete-Time Integrator'
                                           */
  real_T DiscreteTimeIntegrator_IC_f;  /* Expression: SM.wmo
                                        * Referenced by: '<S38>/Discrete-Time Integrator'
                                        */
  real_T voltages_InitialCondition_f;  /* Expression: 0
                                        * Referenced by: '<S22>/voltages'
                                        */
  real_T IC_Threshold_o;               /* Expression: Ts
                                        * Referenced by: '<S22>/IC'
                                        */
  real_T Constant2_Value_k;            /* Expression: SM.ctrl
                                        * Referenced by: '<S18>/Constant2'
                                        */
  real_T Constant4_Value_j;            /* Expression: SM.ctrl
                                        * Referenced by: '<S17>/Constant4'
                                        */
  real_T ib_Gain_k;                    /* Expression: SM.ib
                                        * Referenced by: '<S17>/ib'
                                        */
  real_T breakAlgLoop_InitialCondition;/* Expression: InitialFlux
                                        * Referenced by: '<S102>/break  Alg.Loop'
                                        */
  real_T LookUpTable_XData[4];         /* Expression: ST.SaturationFlux
                                        * Referenced by: '<S102>/Look-Up Table'
                                        */
  real_T LookUpTable_YData[4];         /* Expression: ST.SaturationCurrent
                                        * Referenced by: '<S102>/Look-Up Table'
                                        */
  real_T breakAlgLoop_InitialCondition_k;/* Expression: InitialFlux
                                          * Referenced by: '<S103>/break  Alg.Loop'
                                          */
  real_T LookUpTable_XData_k[4];       /* Expression: ST.SaturationFlux
                                        * Referenced by: '<S103>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_l[4];       /* Expression: ST.SaturationCurrent
                                        * Referenced by: '<S103>/Look-Up Table'
                                        */
  real_T breakAlgLoop_InitialCondition_d;/* Expression: InitialFlux
                                          * Referenced by: '<S104>/break  Alg.Loop'
                                          */
  real_T LookUpTable_XData_h[4];       /* Expression: ST.SaturationFlux
                                        * Referenced by: '<S104>/Look-Up Table'
                                        */
  real_T LookUpTable_YData_i[4];       /* Expression: ST.SaturationCurrent
                                        * Referenced by: '<S104>/Look-Up Table'
                                        */
  real_T SineWaveA_Amp;                /* Expression: Amplitude
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  real_T SineWaveA_Bias;               /* Expression: 0
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  real_T SineWaveA_Freq;               /* Expression: 2*pi*Frequency
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  real_T SineWaveA_Hsin;               /* Computed Parameter: SineWaveA_Hsin
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  real_T SineWaveA_HCos;               /* Computed Parameter: SineWaveA_HCos
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  real_T SineWaveA_PSin;               /* Computed Parameter: SineWaveA_PSin
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  real_T SineWaveA_PCos;               /* Computed Parameter: SineWaveA_PCos
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  real_T SineWaveB_Amp;                /* Expression: Amplitude
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  real_T SineWaveB_Bias;               /* Expression: 0
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  real_T SineWaveB_Freq;               /* Expression: 2*pi*Frequency
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  real_T SineWaveB_Hsin;               /* Computed Parameter: SineWaveB_Hsin
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  real_T SineWaveB_HCos;               /* Computed Parameter: SineWaveB_HCos
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  real_T SineWaveB_PSin;               /* Computed Parameter: SineWaveB_PSin
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  real_T SineWaveB_PCos;               /* Computed Parameter: SineWaveB_PCos
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  real_T SineWaveC_Amp;                /* Expression: Amplitude
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  real_T SineWaveC_Bias;               /* Expression: 0
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  real_T SineWaveC_Freq;               /* Expression: 2*pi*Frequency
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  real_T SineWaveC_Hsin;               /* Computed Parameter: SineWaveC_Hsin
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  real_T SineWaveC_HCos;               /* Computed Parameter: SineWaveC_HCos
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  real_T SineWaveC_PSin;               /* Computed Parameter: SineWaveC_PSin
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  real_T SineWaveC_PCos;               /* Computed Parameter: SineWaveC_PCos
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  real_T donotdeletethisgain_Gain;     /* Expression: 1
                                        * Referenced by: '<S7>/do not delete this gain'
                                        */
  real_T Constant3_Value_a;            /* Expression: SM.ctrl
                                        * Referenced by: '<S16>/Constant3'
                                        */
  real_T Constant6_Value_c[2];         /* Expression: [0;0]
                                        * Referenced by: '<S30>/Constant6'
                                        */
  real_T _Vb_Gain;                     /* Expression: 1/SM.Vb
                                        * Referenced by: '<S16>/1_Vb'
                                        */
  real_T Constant4_Value_e;            /* Expression: SM.ctrl
                                        * Referenced by: '<S16>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: SM.ensat
                                        * Referenced by: '<S15>/Constant5'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch2'
                                        */
  real_T unitconversion_Gain[19];      /* Expression: [SM.ib2*ones(5,1);SM.phib2;SM.phib2;SM.Vb2;SM.Vb2;SM.ib2*ones(5,1);SM.phib2;SM.phib2;SM.Vb2;SM.Vb2; SM.phib2/SM.ib2]
                                        * Referenced by: '<S14>/unit conversion'
                                        */
  real_T u_Gain[2];                    /* Expression: [1 -1]
                                        * Referenced by: '<S19>/1-1'
                                        */
  real_T p_Gain;                       /* Expression: 1/SM.p
                                        * Referenced by: '<S38>/1\p'
                                        */
  real_T p1_Gain[3];                   /* Expression: [SM.Nb2;SM.Tb2;1]
                                        * Referenced by: '<S38>/1\p1'
                                        */
  real_T RPM_Gain;                     /* Expression: 60/2/pi
                                        * Referenced by: '<Root>/RPM'
                                        */
  real_T TorqueNm_Value;               /* Expression: 7964
                                        * Referenced by: '<Root>/Torque (N.m)'
                                        */
  real_T _Tb2_Gain;                    /* Expression: 1/SM.Tb2
                                        * Referenced by: '<S38>/1_Tb2'
                                        */
  real_T F_Gain;                       /* Expression: SM.F
                                        * Referenced by: '<S38>/F'
                                        */
  real_T _2H_Gain;                     /* Expression: 1/(2*SM.H)
                                        * Referenced by: '<S38>/1_2H'
                                        */
  real_T web_psb_Gain_d;               /* Expression: SM.web
                                        * Referenced by: '<S38>/web_psb'
                                        */
  real_T ENGINETd_Delay;               /* Expression: Td
                                        * Referenced by: '<S3>/ENGINE Td'
                                        */
  real_T ENGINETd_InitOutput;          /* Expression: Pm0
                                        * Referenced by: '<S3>/ENGINE Td'
                                        */
  real_T units_Gain;                   /* Expression: SM.Nb
                                        * Referenced by: '<S99>/units'
                                        */
  real_T u_Gain_a[2];                  /* Expression: [1 -1]
                                        * Referenced by: '<S86>/1-1'
                                        */
  real_T units1_Gain;                  /* Expression: SM.Pb
                                        * Referenced by: '<S99>/units1'
                                        */
  real_T DiscreteTimeIntegrator2_gainval;/* Computed Parameter: DiscreteTimeIntegrator2_gainval
                                          * Referenced by: '<S99>/Discrete-Time Integrator2'
                                          */
  real_T DiscreteTimeIntegrator2_IC;   /* Expression: SM.tho
                                        * Referenced by: '<S99>/Discrete-Time Integrator2'
                                        */
  real_T theta_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<S99>/theta'
                                        */
  real_T units2_Gain;                  /* Expression: SM.Pb/SM.Nb
                                        * Referenced by: '<S99>/units2'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: Efd0
                                        * Referenced by: '<S48>/Unit Delay'
                                        */
  real_T LaqLl_q_Gain[2];              /* Expression: SM.Laq*SM.One_Llq
                                        * Referenced by: '<S88>/Laq//Ll_q'
                                        */
  real_T LadLl_d_Gain[3];              /* Expression: [ SM.Lad/SM.Ll   SM.Lad/SM.Llfd   SM.Lad/SM.Llkd ]
                                        * Referenced by: '<S88>/Lad//Ll_d'
                                        */
  real_T _Vb_Gain_a;                   /* Expression: 1/SM.Vb
                                        * Referenced by: '<S80>/1_Vb'
                                        */
  real_T Constant5_Value_e;            /* Expression: SM.Sat
                                        * Referenced by: '<S79>/Constant5'
                                        */
  real_T Switch2_Threshold_e;          /* Expression: 0.5
                                        * Referenced by: '<S79>/Switch2'
                                        */
  real_T Gain_Gain_kf;                 /* Expression: 180/pi
                                        * Referenced by: '<S85>/Gain'
                                        */
  real_T Gain_Gain_hn;                 /* Expression: SM.Gain1
                                        * Referenced by: '<S83>/Gain'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: SM.Gain1
                                        * Referenced by: '<S83>/Gain1'
                                        */
  real_T outputformatting_Gain[18];    /* Expression: [SM.Ib2*ones(1,5),SM.N2,SM.Ib2,SM.Ib2,SM.Ib2,SM.phib,SM.phib,SM.Vb2,SM.Vb2,(SM.phib/SM.Ib2)*ones(1,2),1,1,1]
                                        * Referenced by: '<S78>/output formatting'
                                        */
  real_T CONTROLSYSTEM_A[2];           /* Computed Parameter: CONTROLSYSTEM_A
                                        * Referenced by: '<S3>/CONTROL SYSTEM'
                                        */
  real_T CONTROLSYSTEM_C[2];           /* Computed Parameter: CONTROLSYSTEM_C
                                        * Referenced by: '<S3>/CONTROL SYSTEM'
                                        */
  real_T GainK_Gain;                   /* Expression: K
                                        * Referenced by: '<S3>/Gain K'
                                        */
  real_T Integrator_IC;                /* Expression: Pm0
                                        * Referenced by: '<S3>/Integrator'
                                        */
  real_T Integrator_UpperSat;          /* Expression: Tlim(2)
                                        * Referenced by: '<S3>/Integrator'
                                        */
  real_T Integrator_LowerSat;          /* Expression: Tlim(1)
                                        * Referenced by: '<S3>/Integrator'
                                        */
  real_T wrefpu_Value;                 /* Expression: 1
                                        * Referenced by: '<Root>/wref (pu)'
                                        */
  real_T TF1_A;                        /* Computed Parameter: TF1_A
                                        * Referenced by: '<S3>/TF1'
                                        */
  real_T TF1_C;                        /* Computed Parameter: TF1_C
                                        * Referenced by: '<S3>/TF1'
                                        */
  real_T TF1_D;                        /* Computed Parameter: TF1_D
                                        * Referenced by: '<S3>/TF1'
                                        */
  real_T TF2_A;                        /* Computed Parameter: TF2_A
                                        * Referenced by: '<S3>/TF2'
                                        */
  real_T TF2_C;                        /* Computed Parameter: TF2_C
                                        * Referenced by: '<S3>/TF2'
                                        */
  real_T DiscreteTimeIntegrator_gainval_g;/* Computed Parameter: DiscreteTimeIntegrator_gainval_g
                                           * Referenced by: '<S48>/Discrete-Time Integrator'
                                           */
  real_T DiscreteTimeIntegrator_IC_p;  /* Expression: Ve0
                                        * Referenced by: '<S48>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: inf
                                          * Referenced by: '<S48>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: 0
                                          * Referenced by: '<S48>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_gainval_i;/* Computed Parameter: DiscreteTimeIntegrator_gainval_i
                                           * Referenced by: '<S53>/Discrete-Time Integrator'
                                           */
  real_T DiscreteTimeIntegrator_IC_g;  /* Expression: Vfe0
                                        * Referenced by: '<S53>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat_l;/* Expression: VAmax
                                            * Referenced by: '<S53>/Discrete-Time Integrator'
                                            */
  real_T DiscreteTimeIntegrator_LowerSat_k;/* Expression: VAmin
                                            * Referenced by: '<S53>/Discrete-Time Integrator'
                                            */
  real_T VRmin_UpperSat;               /* Expression: VRmax
                                        * Referenced by: '<S48>/VRmin'
                                        */
  real_T VRmin_LowerSat;               /* Expression: VRmin
                                        * Referenced by: '<S48>/VRmin'
                                        */
  real_T Saturation_XData[3];          /* Expression: [0 Ve2 Ve1]
                                        * Referenced by: '<S51>/Saturation'
                                        */
  real_T Saturation_YData[3];          /* Expression: [0 SeVe2 SeVe1]
                                        * Referenced by: '<S51>/Saturation'
                                        */
  real_T Gain3_Gain_l;                 /* Expression: Ke
                                        * Referenced by: '<S48>/Gain3'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: Kd
                                        * Referenced by: '<S48>/Gain1'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 1/Te
                                        * Referenced by: '<S48>/Gain'
                                        */
  real_T DiscreteStateSpace_A;         /* Computed Parameter: DiscreteStateSpace_A
                                        * Referenced by: '<S49>/Discrete State-Space'
                                        */
  real_T DiscreteStateSpace_B;         /* Computed Parameter: DiscreteStateSpace_B
                                        * Referenced by: '<S49>/Discrete State-Space'
                                        */
  real_T DiscreteStateSpace_C;         /* Computed Parameter: DiscreteStateSpace_C
                                        * Referenced by: '<S49>/Discrete State-Space'
                                        */
  real_T DiscreteStateSpace_D;         /* Computed Parameter: DiscreteStateSpace_D
                                        * Referenced by: '<S49>/Discrete State-Space'
                                        */
  real_T DiscreteStateSpace_X0;        /* Expression: x0d
                                        * Referenced by: '<S49>/Discrete State-Space'
                                        */
  real_T Gain_Gain_o;                  /* Expression: Kc
                                        * Referenced by: '<S50>/Gain'
                                        */
  real_T input_Value;                  /* Expression: 0.433
                                        * Referenced by: '<S50>/input'
                                        */
  real_T input1_Value;                 /* Expression: 0.75
                                        * Referenced by: '<S50>/input1'
                                        */
  real_T input2_Value_nw;              /* Expression: 1.0
                                        * Referenced by: '<S50>/input2'
                                        */
  real_T Vtrefpu_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/Vtref (pu) '
                                        */
  real_T Vfe0Ka_Value;                 /* Expression: Vfe0/Ka
                                        * Referenced by: '<S48>/Vfe0//Ka'
                                        */
  real_T Gain2_Gain_g;                 /* Expression: Kf/Tf
                                        * Referenced by: '<S54>/Gain2'
                                        */
  real_T D_Gain;                       /* Expression: sps.D
                                        * Referenced by: '<S63>/D'
                                        */
  real_T Delay_x_InitialCondition;     /* Expression: sps.x0
                                        * Referenced by: '<S63>/Delay_x'
                                        */
  real_T C_Gain;                       /* Expression: sps.C
                                        * Referenced by: '<S63>/C'
                                        */
  real_T Delay_x_InitialCondition_i;   /* Expression: sps.x0
                                        * Referenced by: '<S60>/Delay_x'
                                        */
  real_T A_Gain;                       /* Expression: sps.A
                                        * Referenced by: '<S60>/A'
                                        */
  real_T B_Gain;                       /* Expression: sps.B
                                        * Referenced by: '<S60>/B'
                                        */
  real_T C_Gain_j;                     /* Expression: sps.C
                                        * Referenced by: '<S60>/C'
                                        */
  real_T D_Gain_f;                     /* Expression: sps.D
                                        * Referenced by: '<S60>/D'
                                        */
  real_T Gain2_Gain_k;                 /* Expression: Ka
                                        * Referenced by: '<S53>/Gain2'
                                        */
  real_T Gain1_Gain_ls;                /* Expression: 1/Ta
                                        * Referenced by: '<S53>/Gain1'
                                        */
  real_T A_Gain_i;                     /* Expression: sps.A
                                        * Referenced by: '<S63>/A'
                                        */
  real_T B_Gain_k;                     /* Expression: sps.B
                                        * Referenced by: '<S63>/B'
                                        */
  real_T N_Gain;                       /* Expression: SM.N
                                        * Referenced by: '<S77>/N'
                                        */
  real_T Vkd0Vkq10Vkq20_Value[2];      /* Expression: zeros(1, SM.nState-3)
                                        * Referenced by: '<S77>/[ Vkd =0 Vkq1=0  Vkq2=0 ]'
                                        */
  real_T _Pb_Gain;                     /* Expression: 1/SM.Pb
                                        * Referenced by: '<S99>/1_Pb'
                                        */
  real_T F1_Gain;                      /* Expression: SM.F
                                        * Referenced by: '<S99>/F1'
                                        */
  real_T _2H_Gain_h;                   /* Expression: 1/(2*SM.H)
                                        * Referenced by: '<S99>/1_(2H)'
                                        */
  real_T web1_Gain;                    /* Expression: SM.web
                                        * Referenced by: '<S99>/web1'
                                        */
  real_T web3_Gain;                    /* Expression: SM.web
                                        * Referenced by: '<S99>/web3'
                                        */
  real_T DiscreteTimeIntegrator_gainval_m;/* Computed Parameter: DiscreteTimeIntegrator_gainval_m
                                           * Referenced by: '<S102>/Discrete-Time Integrator'
                                           */
  real_T DiscreteTimeIntegrator_IC_c;  /* Expression: InitialFlux
                                        * Referenced by: '<S102>/Discrete-Time Integrator'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 2
                                        * Referenced by: '<S102>/Gain'
                                        */
  real_T Prediction_InitialCondition;  /* Expression: InitialFlux
                                        * Referenced by: '<S102>/Prediction'
                                        */
  real_T DiscreteTimeIntegrator_gainval_mg;/* Computed Parameter: DiscreteTimeIntegrator_gainval_mg
                                            * Referenced by: '<S103>/Discrete-Time Integrator'
                                            */
  real_T DiscreteTimeIntegrator_IC_b;  /* Expression: InitialFlux
                                        * Referenced by: '<S103>/Discrete-Time Integrator'
                                        */
  real_T Gain_Gain_h1;                 /* Expression: 2
                                        * Referenced by: '<S103>/Gain'
                                        */
  real_T Prediction_InitialCondition_n;/* Expression: InitialFlux
                                        * Referenced by: '<S103>/Prediction'
                                        */
  real_T DiscreteTimeIntegrator_gainval_n;/* Computed Parameter: DiscreteTimeIntegrator_gainval_n
                                           * Referenced by: '<S104>/Discrete-Time Integrator'
                                           */
  real_T DiscreteTimeIntegrator_IC_ba; /* Expression: InitialFlux
                                        * Referenced by: '<S104>/Discrete-Time Integrator'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 2
                                        * Referenced by: '<S104>/Gain'
                                        */
  real_T Prediction_InitialCondition_np;/* Expression: InitialFlux
                                         * Referenced by: '<S104>/Prediction'
                                         */
  boolean_T Constant1_Value_lv;        /* Expression: SM.nState==6
                                        * Referenced by: '<S89>/Constant1'
                                        */
  boolean_T Constant2_Value_id;        /* Expression: SM.nState==6
                                        * Referenced by: '<S89>/Constant2'
                                        */
  boolean_T Constant_Value_bf;         /* Expression: SM.ctrl==1
                                        * Referenced by: '<S18>/Constant'
                                        */
  boolean_T Constant1_Value_k;         /* Expression: SM.ctrl==2
                                        * Referenced by: '<S18>/Constant1'
                                        */
  boolean_T Constant3_Value_o;         /* Expression: SM.ctrl==3
                                        * Referenced by: '<S18>/Constant3'
                                        */
  boolean_T Constant_Value_m;          /* Expression: SM.ctrl==1
                                        * Referenced by: '<S17>/Constant'
                                        */
  boolean_T Constant1_Value_m;         /* Expression: SM.ctrl==2
                                        * Referenced by: '<S17>/Constant1'
                                        */
  boolean_T Constant2_Value_j;         /* Expression: SM.ctrl==3
                                        * Referenced by: '<S17>/Constant2'
                                        */
  boolean_T Constant_Value_d;          /* Expression: SM.ctrl==1
                                        * Referenced by: '<S16>/Constant'
                                        */
  boolean_T Constant1_Value_k4;        /* Expression: SM.ctrl==2
                                        * Referenced by: '<S16>/Constant1'
                                        */
  boolean_T Constant2_Value_f;         /* Expression: SM.ctrl==3
                                        * Referenced by: '<S16>/Constant2'
                                        */
  boolean_T Constant1_Value_ke;        /* Expression: SM.nState==6
                                        * Referenced by: '<S78>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_complete_system_io_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    X_complete_system_io_T *contStates;
    real_T *derivs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeY[5];
    real_T odeF[3][5];
    ODE3_IntgData intgData;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
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

/* Block parameters (auto storage) */
extern P_complete_system_io_T complete_system_io_P;

/* Block signals (auto storage) */
extern B_complete_system_io_T complete_system_io_B;

/* Continuous states (auto storage) */
extern X_complete_system_io_T complete_system_io_X;

/* Block states (auto storage) */
extern DW_complete_system_io_T complete_system_io_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_complete_system_io_T complete_system_io_Y;

/* Model entry point functions */
extern void complete_system_io_initialize(void);
extern void complete_system_io_step(void);
extern void complete_system_io_terminate(void);

/* Real-time Model object */
extern RT_MODEL_complete_system_io_T *const complete_system_io_M;

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
 * '<Root>' : 'complete_system_io'
 * '<S1>'   : 'complete_system_io/25 kV   1000 MVA'
 * '<S2>'   : 'complete_system_io/ASM 2250 HP'
 * '<S3>'   : 'complete_system_io/Diesel Engine Governor'
 * '<S4>'   : 'complete_system_io/EXCITATION'
 * '<S5>'   : 'complete_system_io/SM 3.125 MVA'
 * '<S6>'   : 'complete_system_io/Transformer 25 kV // 2400V 6 MVA'
 * '<S7>'   : 'complete_system_io/Va'
 * '<S8>'   : 'complete_system_io/powergui'
 * '<S9>'   : 'complete_system_io/25 kV   1000 MVA/Model'
 * '<S10>'  : 'complete_system_io/25 kV   1000 MVA/Model/ThreePhaseSource'
 * '<S11>'  : 'complete_system_io/ASM 2250 HP/Electrical model'
 * '<S12>'  : 'complete_system_io/ASM 2250 HP/Measurements'
 * '<S13>'  : 'complete_system_io/ASM 2250 HP/Mechanical model'
 * '<S14>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete'
 * '<S15>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/Asynchronous Machine State-space model'
 * '<S16>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/abc to dq  transformation'
 * '<S17>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/dq to abc transformation'
 * '<S18>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/sin,cos'
 * '<S19>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/Asynchronous Machine State-space model/Electromagnetic Torque'
 * '<S20>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/Asynchronous Machine State-space model/Flux Prediction'
 * '<S21>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/Asynchronous Machine State-space model/Saturation'
 * '<S22>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/Asynchronous Machine State-space model/phiqd_SR'
 * '<S23>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/Asynchronous Machine State-space model/Saturation/Laq=Lad'
 * '<S24>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/Asynchronous Machine State-space model/Saturation/Matrix L'
 * '<S25>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/Asynchronous Machine State-space model/Saturation/phimqd'
 * '<S26>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/Asynchronous Machine State-space model/phiqd_SR/Subsystem'
 * '<S27>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/abc to dq  transformation/Rotor reference frame'
 * '<S28>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/abc to dq  transformation/Stationary reference frame'
 * '<S29>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/abc to dq  transformation/Synchronous reference frame'
 * '<S30>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/abc to dq  transformation/transit'
 * '<S31>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/dq to abc transformation/Rotor reference frame'
 * '<S32>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/dq to abc transformation/Stationary reference frame'
 * '<S33>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/dq to abc transformation/Synchronous reference frame'
 * '<S34>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/sin,cos/sin(beta),cos(beta),sin(th),cos(th)'
 * '<S35>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/sin,cos/sin(thr),cos(thr)'
 * '<S36>'  : 'complete_system_io/ASM 2250 HP/Electrical model/Discrete/sin,cos/sin(thr),cos(thr)1'
 * '<S37>'  : 'complete_system_io/ASM 2250 HP/Measurements/Single-cage SI'
 * '<S38>'  : 'complete_system_io/ASM 2250 HP/Mechanical model/Discrete Tm input'
 * '<S39>'  : 'complete_system_io/EXCITATION/AC1A'
 * '<S40>'  : 'complete_system_io/EXCITATION/AC4A'
 * '<S41>'  : 'complete_system_io/EXCITATION/AC5A'
 * '<S42>'  : 'complete_system_io/EXCITATION/DC1A'
 * '<S43>'  : 'complete_system_io/EXCITATION/DC2A'
 * '<S44>'  : 'complete_system_io/EXCITATION/ST1A'
 * '<S45>'  : 'complete_system_io/EXCITATION/ST2A'
 * '<S46>'  : 'complete_system_io/EXCITATION/AC1A/AC1A'
 * '<S47>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model'
 * '<S48>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete'
 * '<S49>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Low Pass Filter 1//(Tr.s+1)'
 * '<S50>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Rectifier'
 * '<S51>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Saturation Vx=Ve*Se[Ve]'
 * '<S52>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Transient Gain Reduction (Tc.s+1)//(Tb.s+1)'
 * '<S53>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Vaminmax'
 * '<S54>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Vaminmax1'
 * '<S55>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Rectifier/0.433<In<0.75'
 * '<S56>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Rectifier/0.75<=In<=1.0'
 * '<S57>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Rectifier/In<=0.433'
 * '<S58>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Rectifier/In>1.0'
 * '<S59>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Transient Gain Reduction (Tc.s+1)//(Tb.s+1)/Model'
 * '<S60>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Transient Gain Reduction (Tc.s+1)//(Tb.s+1)/Model/Discrete'
 * '<S61>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Vaminmax1/First-Order Filter'
 * '<S62>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Vaminmax1/First-Order Filter/Model'
 * '<S63>'  : 'complete_system_io/EXCITATION/AC1A/AC1A/Model/Discrete/Vaminmax1/First-Order Filter/Model/Discrete'
 * '<S64>'  : 'complete_system_io/EXCITATION/ST2A/Model'
 * '<S65>'  : 'complete_system_io/EXCITATION/ST2A/Model/Discrete'
 * '<S66>'  : 'complete_system_io/EXCITATION/ST2A/Model/Discrete/Damping Filter Kf.s//(Tf.s+1)'
 * '<S67>'  : 'complete_system_io/EXCITATION/ST2A/Model/Discrete/Rectifier'
 * '<S68>'  : 'complete_system_io/EXCITATION/ST2A/Model/Discrete/Subsystem'
 * '<S69>'  : 'complete_system_io/EXCITATION/ST2A/Model/Discrete/Vaminmax1'
 * '<S70>'  : 'complete_system_io/EXCITATION/ST2A/Model/Discrete/Rectifier/0.433<In<0.75'
 * '<S71>'  : 'complete_system_io/EXCITATION/ST2A/Model/Discrete/Rectifier/0.75<=In<=1.0'
 * '<S72>'  : 'complete_system_io/EXCITATION/ST2A/Model/Discrete/Rectifier/In<=0.433'
 * '<S73>'  : 'complete_system_io/EXCITATION/ST2A/Model/Discrete/Rectifier/In>1.0'
 * '<S74>'  : 'complete_system_io/SM 3.125 MVA/Electrical model'
 * '<S75>'  : 'complete_system_io/SM 3.125 MVA/Measurement list'
 * '<S76>'  : 'complete_system_io/SM 3.125 MVA/Mechanical model'
 * '<S77>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete'
 * '<S78>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Machine measurements'
 * '<S79>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model'
 * '<S80>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/abc to qd transformation'
 * '<S81>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/qd to abc transformation'
 * '<S82>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Machine measurements/Delta angle'
 * '<S83>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Machine measurements/PQ'
 * '<S84>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Machine measurements/Delta angle/Cartesian to Polar'
 * '<S85>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Machine measurements/Delta angle/Radians to Degrees'
 * '<S86>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Electromagnetic Torque'
 * '<S87>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Matrix W'
 * '<S88>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Phimqd'
 * '<S89>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Saturation'
 * '<S90>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/phi'
 * '<S91>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Saturation/Lmd_sat'
 * '<S92>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Saturation/Lmq_sat'
 * '<S93>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Saturation/Update Matrix L'
 * '<S94>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Saturation/Lmd_sat/Lad'
 * '<S95>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Saturation/Lmd_sat/phimd'
 * '<S96>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Saturation/Lmq_sat/Laq'
 * '<S97>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/Saturation/Lmq_sat/phimq'
 * '<S98>'  : 'complete_system_io/SM 3.125 MVA/Electrical model/Discrete/Synchronous Machine Discrete Model/phi/Subsystem'
 * '<S99>'  : 'complete_system_io/SM 3.125 MVA/Mechanical model/Discrete Pm input'
 * '<S100>' : 'complete_system_io/Transformer 25 kV // 2400V 6 MVA/Model'
 * '<S101>' : 'complete_system_io/Transformer 25 kV // 2400V 6 MVA/Model/Discrete Break Loop'
 * '<S102>' : 'complete_system_io/Transformer 25 kV // 2400V 6 MVA/Model/Discrete Break Loop/Discrete Break Loop1'
 * '<S103>' : 'complete_system_io/Transformer 25 kV // 2400V 6 MVA/Model/Discrete Break Loop/Discrete Break Loop2'
 * '<S104>' : 'complete_system_io/Transformer 25 kV // 2400V 6 MVA/Model/Discrete Break Loop/Discrete Break Loop3'
 * '<S105>' : 'complete_system_io/Va/Model'
 * '<S106>' : 'complete_system_io/Va/Model/Complex'
 * '<S107>' : 'complete_system_io/powergui/EquivalentModel1'
 * '<S108>' : 'complete_system_io/powergui/EquivalentModel1/Sources'
 * '<S109>' : 'complete_system_io/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_complete_system_io_h_ */
