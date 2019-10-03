/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: power_converters_switching_function.h
 *
 * Code generated for Simulink model 'power_converters_switching_function'.
 *
 * Model version                  : 1.1239
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 13:31:30 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_power_converters_switching_function_h_
#define RTW_HEADER_power_converters_switching_function_h_
#include <stddef.h>
#include <string.h>
#include <float.h>
#include <math.h>
#ifndef power_converters_switching_function_COMMON_INCLUDES_
# define power_converters_switching_function_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif                /* power_converters_switching_function_COMMON_INCLUDES_ */

#include "power_converters_switching_function_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
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

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  creal_T Gain3_e;                     /* '<S906>/Gain3' */
  creal_T Gain3_k;                     /* '<S513>/Gain3' */
  creal_T Gain3_f;                     /* '<S512>/Gain3' */
  creal_T Gain3_kl;                    /* '<S511>/Gain3' */
  creal_T Gain3_o;                     /* '<S489>/Gain3' */
  creal_T Gain3_en;                    /* '<S488>/Gain3' */
  creal_T Gain3_l;                     /* '<S487>/Gain3' */
  creal_T Gain3_fk;                    /* '<S462>/Gain3' */
  creal_T Gain3_n;                     /* '<S438>/Gain3' */
  real_T StateSpace_o1[6];             /* '<S954>/State-Space' */
  real_T StateSpace_o2[2];             /* '<S954>/State-Space' */
  real_T RateTransition3[2];           /* '<S83>/Rate Transition3' */
  real_T RateTransition3_a[2];         /* '<S84>/Rate Transition3' */
  real_T Sum5[3];                      /* '<S926>/Sum5' */
  real_T StateSpace_o1_m[92];          /* '<S955>/State-Space' */
  real_T StateSpace_o2_e[24];          /* '<S955>/State-Space' */
  real_T Product1[3];                  /* '<S929>/Product1' */
  real_T Product1_o[3];                /* '<S930>/Product1' */
  real_T V[2];                         /* '<S882>/MATLAB Function' */
  real_T V_o[2];                       /* '<S824>/MATLAB Function' */
  real_T V_i[2];                       /* '<S823>/MATLAB Function' */
  real_T V_oe[2];                      /* '<S822>/MATLAB Function' */
  real_T V_j[2];                       /* '<S764>/MATLAB Function' */
  real_T V_in[2];                      /* '<S763>/MATLAB Function' */
  real_T V_ow[2];                      /* '<S762>/MATLAB Function' */
  real_T V_k[2];                       /* '<S688>/MATLAB Function1' */
  real_T Idc_h[2];                     /* '<S688>/MATLAB Function1' */
  real_T V_n[2];                       /* '<S687>/MATLAB Function1' */
  real_T Idc_d[2];                     /* '<S687>/MATLAB Function1' */
  real_T V_o2[2];                      /* '<S686>/MATLAB Function1' */
  real_T Idc_nv[2];                    /* '<S686>/MATLAB Function1' */
  real_T V_b[2];                       /* '<S390>/MATLAB Function' */
  real_T V_ji[2];                      /* '<S366>/MATLAB Function3' */
  real_T DataTypeConversion[2];        /* '<S179>/Data Type Conversion' */
  real_T DataTypeConversion_o[4];      /* '<S161>/Data Type Conversion' */
  real_T DataTypeConversion_or[12];    /* '<S131>/Data Type Conversion' */
  real_T Integ4_lh[3];                 /* '<S132>/Integ4' */
  real_T SFunction_bl[3];              /* '<S133>/S-Function' */
  real_T Integ4_fe[3];                 /* '<S134>/Integ4' */
  real_T SFunction_fj[3];              /* '<S135>/S-Function' */
  real_T DataTypeConversion_d[6];      /* '<S92>/Data Type Conversion' */
  real_T DataTypeConversion_do[6];     /* '<S93>/Data Type Conversion' */
  real_T Integ4_iy[3];                 /* '<S96>/Integ4' */
  real_T Integ4_im[3];                 /* '<S94>/Integ4' */
  real_T SFunction_nt[3];              /* '<S95>/S-Function' */
  real_T SFunction_id[3];              /* '<S97>/S-Function' */
  real_T UnitDelay1_DSTATE[2];         /* '<S366>/Unit Delay1' */
  real_T StateSpace_DSTATE_d[2];       /* '<S954>/State-Space' */
  real_T UnitDelay1_DSTATE_ky[2];      /* '<S688>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_b[2];       /* '<S822>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_d[2];       /* '<S882>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_a[2];       /* '<S686>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_ka[2];      /* '<S763>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_l[2];       /* '<S824>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_f[2];       /* '<S762>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_c[2];       /* '<S823>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_j[2];       /* '<S764>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_d3[2];      /* '<S390>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_k3[2];      /* '<S687>/Unit Delay1' */
  real_T StateSpace_DSTATE_l[38];      /* '<S955>/State-Space' */
  real_T UnitDelay1_DSTATE_o0[3];      /* '<S5>/Unit Delay1' */
  real_T Delay_x1_DSTATE_i[2];         /* '<S246>/Delay_x1' */
  real_T Delay_x2_DSTATE_p[2];         /* '<S246>/Delay_x2' */
  real_T UnitDelay4_DSTATE_i[3];       /* '<S5>/Unit Delay4' */
  real_T Delay_x1_DSTATE_pm[2];        /* '<S325>/Delay_x1' */
  real_T Delay_x2_DSTATE_d[2];         /* '<S325>/Delay_x2' */
  real_T UnitDelay3_DSTATE[3];         /* '<S5>/Unit Delay3' */
  real_T UnitDelay_DSTATE_ds[3];       /* '<S5>/Unit Delay' */
  real_T Integ4_DSTATE_lf[3];          /* '<S132>/Integ4' */
  real_T Integ4_DSTATE_lk[3];          /* '<S134>/Integ4' */
  real_T Integ4_DSTATE_ey[3];          /* '<S96>/Integ4' */
  real_T Integ4_DSTATE_bk[3];          /* '<S94>/Integ4' */
  real_T RateTransition3_Buffer0[2];   /* '<S83>/Rate Transition3' */
  real_T RateTransition3_Buffer0_a[2]; /* '<S84>/Rate Transition3' */
  real_T RateTransition6_Buffer[3];    /* '<S83>/Rate Transition6' */
  real_T RateTransition1_Buffer[3];    /* '<S83>/Rate Transition1' */
  real_T RateTransition6_Buffer_d[3];  /* '<S84>/Rate Transition6' */
  real_T RateTransition1_Buffer_n[3];  /* '<S84>/Rate Transition1' */
  real_T RateTransition2_Buffer_g[3];  /* '<S84>/Rate Transition2' */
  real_T RateTransition2_Buffer_i[3];  /* '<S83>/Rate Transition2' */
  real_T StateSpace;                   /* '<S953>/State-Space' */
  real_T Vload;                        /* '<Root>/Vload' */
  real_T Product;                      /* '<S346>/Product' */
  real_T RateTransition4;              /* '<S83>/Rate Transition4' */
  real_T RateTransition4_p;            /* '<S84>/Rate Transition4' */
  real_T RateTransition2;              /* '<S75>/Rate Transition2' */
  real_T Integ4;                       /* '<S444>/Integ4' */
  real_T SFunction;                    /* '<S445>/S-Function' */
  real_T Integ4_p;                     /* '<S442>/Integ4' */
  real_T SFunction_e;                  /* '<S443>/S-Function' */
  real_T Integ4_d;                     /* '<S450>/Integ4' */
  real_T SFunction_em;                 /* '<S451>/S-Function' */
  real_T Integ4_h;                     /* '<S448>/Integ4' */
  real_T SFunction_c;                  /* '<S449>/S-Function' */
  real_T Integ4_a;                     /* '<S456>/Integ4' */
  real_T SFunction_l;                  /* '<S457>/S-Function' */
  real_T Integ4_c;                     /* '<S454>/Integ4' */
  real_T SFunction_h;                  /* '<S455>/S-Function' */
  real_T Integ4_ae;                    /* '<S468>/Integ4' */
  real_T SFunction_c5;                 /* '<S469>/S-Function' */
  real_T Integ4_k;                     /* '<S466>/Integ4' */
  real_T SFunction_c1;                 /* '<S467>/S-Function' */
  real_T Integ4_dh;                    /* '<S474>/Integ4' */
  real_T SFunction_g;                  /* '<S475>/S-Function' */
  real_T Integ4_b;                     /* '<S472>/Integ4' */
  real_T SFunction_gi;                 /* '<S473>/S-Function' */
  real_T Integ4_hq;                    /* '<S480>/Integ4' */
  real_T SFunction_lu;                 /* '<S481>/S-Function' */
  real_T Integ4_j;                     /* '<S478>/Integ4' */
  real_T SFunction_hd;                 /* '<S479>/S-Function' */
  real_T Integ4_f;                     /* '<S912>/Integ4' */
  real_T SFunction_ez;                 /* '<S913>/S-Function' */
  real_T Integ4_aa;                    /* '<S910>/Integ4' */
  real_T SFunction_d;                  /* '<S911>/S-Function' */
  real_T Integ4_f0;                    /* '<S918>/Integ4' */
  real_T SFunction_dm;                 /* '<S919>/S-Function' */
  real_T Integ4_i;                     /* '<S916>/Integ4' */
  real_T SFunction_gs;                 /* '<S917>/S-Function' */
  real_T Integ4_l;                     /* '<S924>/Integ4' */
  real_T SFunction_dy;                 /* '<S925>/S-Function' */
  real_T Integ4_g;                     /* '<S922>/Integ4' */
  real_T SFunction_p;                  /* '<S923>/S-Function' */
  real_T Integ4_m;                     /* '<S410>/Integ4' */
  real_T SFunction_f;                  /* '<S411>/S-Function' */
  real_T Integ4_fr;                    /* '<S412>/Integ4' */
  real_T SFunction_ct;                 /* '<S413>/S-Function' */
  real_T Integ4_mt;                    /* '<S414>/Integ4' */
  real_T SFunction_n;                  /* '<S415>/S-Function' */
  real_T Integ4_ge;                    /* '<S416>/Integ4' */
  real_T SFunction_k;                  /* '<S417>/S-Function' */
  real_T Integ4_lf;                    /* '<S424>/Integ4' */
  real_T SFunction_o;                  /* '<S425>/S-Function' */
  real_T Integ4_bp;                    /* '<S422>/Integ4' */
  real_T SFunction_c5r;                /* '<S423>/S-Function' */
  real_T Integ4_n;                     /* '<S430>/Integ4' */
  real_T SFunction_h1;                 /* '<S431>/S-Function' */
  real_T Integ4_o;                     /* '<S428>/Integ4' */
  real_T SFunction_j;                  /* '<S429>/S-Function' */
  real_T Integ4_mta;                   /* '<S494>/Integ4' */
  real_T SFunction_i;                  /* '<S495>/S-Function' */
  real_T Integ4_oc;                    /* '<S492>/Integ4' */
  real_T SFunction_ge;                 /* '<S493>/S-Function' */
  real_T Integ4_do;                    /* '<S500>/Integ4' */
  real_T SFunction_jm;                 /* '<S501>/S-Function' */
  real_T Integ4_nk;                    /* '<S498>/Integ4' */
  real_T SFunction_et;                 /* '<S499>/S-Function' */
  real_T Integ4_pl;                    /* '<S506>/Integ4' */
  real_T SFunction_ko;                 /* '<S507>/S-Function' */
  real_T Integ4_nkx;                   /* '<S504>/Integ4' */
  real_T SFunction_ey;                 /* '<S505>/S-Function' */
  real_T Integ4_mr;                    /* '<S518>/Integ4' */
  real_T SFunction_iz;                 /* '<S519>/S-Function' */
  real_T Integ4_dg;                    /* '<S516>/Integ4' */
  real_T SFunction_ff;                 /* '<S517>/S-Function' */
  real_T Integ4_e;                     /* '<S524>/Integ4' */
  real_T SFunction_b;                  /* '<S525>/S-Function' */
  real_T Integ4_g4;                    /* '<S522>/Integ4' */
  real_T SFunction_gv;                 /* '<S523>/S-Function' */
  real_T Integ4_ao;                    /* '<S530>/Integ4' */
  real_T SFunction_l5;                 /* '<S531>/S-Function' */
  real_T Integ4_mk;                    /* '<S528>/Integ4' */
  real_T SFunction_gy;                 /* '<S529>/S-Function' */
  real_T Integ4_j0;                    /* '<S280>/Integ4' */
  real_T SFunction_m;                  /* '<S281>/S-Function' */
  real_T Integ4_ll;                    /* '<S310>/Integ4' */
  real_T Delay;                        /* '<S310>/Gain' */
  real_T SFunction_ia;                 /* '<S312>/S-Function' */
  real_T Integ4_nt;                    /* '<S231>/Integ4' */
  real_T Delay_o;                      /* '<S231>/Gain' */
  real_T SFunction_gd;                 /* '<S233>/S-Function' */
  real_T Integ4_c1;                    /* '<S546>/Integ4' */
  real_T SFunction_b5;                 /* '<S547>/S-Function' */
  real_T Integ4_is;                    /* '<S622>/Integ4' */
  real_T SFunction_do;                 /* '<S623>/S-Function' */
  real_T Integ4_np;                    /* '<S624>/Integ4' */
  real_T SFunction_ks;                 /* '<S625>/S-Function' */
  real_T Integ4_nw;                    /* '<S628>/Integ4' */
  real_T SFunction_kof;                /* '<S629>/S-Function' */
  real_T Integ4_pz;                    /* '<S630>/Integ4' */
  real_T SFunction_oc;                 /* '<S631>/S-Function' */
  real_T Integ4_i0;                    /* '<S634>/Integ4' */
  real_T SFunction_ok;                 /* '<S635>/S-Function' */
  real_T Integ4_j1;                    /* '<S636>/Integ4' */
  real_T SFunction_i1;                 /* '<S637>/S-Function' */
  real_T Integ4_di;                    /* '<S646>/Integ4' */
  real_T SFunction_fd;                 /* '<S647>/S-Function' */
  real_T Integ4_dd;                    /* '<S648>/Integ4' */
  real_T SFunction_ig;                 /* '<S649>/S-Function' */
  real_T Integ4_a3;                    /* '<S652>/Integ4' */
  real_T SFunction_jc;                 /* '<S653>/S-Function' */
  real_T Integ4_lc;                    /* '<S654>/Integ4' */
  real_T SFunction_gh;                 /* '<S655>/S-Function' */
  real_T Integ4_hp;                    /* '<S658>/Integ4' */
  real_T SFunction_cu;                 /* '<S659>/S-Function' */
  real_T Integ4_ce;                    /* '<S660>/Integ4' */
  real_T SFunction_ck;                 /* '<S661>/S-Function' */
  real_T Integ4_mu;                    /* '<S552>/Integ4' */
  real_T SFunction_me;                 /* '<S553>/S-Function' */
  real_T Integ4_ddm;                   /* '<S554>/Integ4' */
  real_T SFunction_mk;                 /* '<S555>/S-Function' */
  real_T Integ4_m1;                    /* '<S558>/Integ4' */
  real_T SFunction_i11;                /* '<S559>/S-Function' */
  real_T Integ4_nr;                    /* '<S560>/Integ4' */
  real_T SFunction_ib;                 /* '<S561>/S-Function' */
  real_T Integ4_ab;                    /* '<S572>/Integ4' */
  real_T SFunction_kf;                 /* '<S573>/S-Function' */
  real_T Integ4_cc;                    /* '<S574>/Integ4' */
  real_T SFunction_nj;                 /* '<S575>/S-Function' */
  real_T Integ4_m3;                    /* '<S578>/Integ4' */
  real_T SFunction_ix;                 /* '<S579>/S-Function' */
  real_T Integ4_ocz;                   /* '<S580>/Integ4' */
  real_T SFunction_b3;                 /* '<S581>/S-Function' */
  real_T Integ4_frw;                   /* '<S584>/Integ4' */
  real_T SFunction_be;                 /* '<S585>/S-Function' */
  real_T Integ4_ah;                    /* '<S586>/Integ4' */
  real_T SFunction_cs;                 /* '<S587>/S-Function' */
  real_T Integ4_jz;                    /* '<S596>/Integ4' */
  real_T SFunction_kz;                 /* '<S597>/S-Function' */
  real_T Integ4_oe;                    /* '<S598>/Integ4' */
  real_T SFunction_ns;                 /* '<S599>/S-Function' */
  real_T Integ4_ea;                    /* '<S602>/Integ4' */
  real_T SFunction_f3;                 /* '<S603>/S-Function' */
  real_T Integ4_no;                    /* '<S604>/Integ4' */
  real_T SFunction_hx;                 /* '<S605>/S-Function' */
  real_T Integ4_ex;                    /* '<S608>/Integ4' */
  real_T SFunction_bh;                 /* '<S609>/S-Function' */
  real_T Integ4_ij;                    /* '<S610>/Integ4' */
  real_T SFunction_mr;                 /* '<S611>/S-Function' */
  real_T Integ4_fg;                    /* '<S670>/Integ4' */
  real_T SFunction_j4;                 /* '<S671>/S-Function' */
  real_T Integ4_kv;                    /* '<S672>/Integ4' */
  real_T SFunction_a;                  /* '<S673>/S-Function' */
  real_T Integ4_ks;                    /* '<S676>/Integ4' */
  real_T SFunction_h1o;                /* '<S677>/S-Function' */
  real_T Integ4_dl;                    /* '<S678>/Integ4' */
  real_T SFunction_ds;                 /* '<S679>/S-Function' */
  real_T Integ4_kd;                    /* '<S682>/Integ4' */
  real_T SFunction_in;                 /* '<S683>/S-Function' */
  real_T Integ4_id;                    /* '<S684>/Integ4' */
  real_T SFunction_ev;                 /* '<S685>/S-Function' */
  real_T Integ4_ddl;                   /* '<S544>/Integ4' */
  real_T SFunction_ga;                 /* '<S545>/S-Function' */
  real_T Integ4_pt;                    /* '<S540>/Integ4' */
  real_T SFunction_lh;                 /* '<S541>/S-Function' */
  real_T Integ4_pf;                    /* '<S542>/Integ4' */
  real_T SFunction_p2;                 /* '<S543>/S-Function' */
  real_T LookUpTable;                  /* '<S933>/Look-Up Table' */
  real_T Switch3;                      /* '<S928>/Switch3' */
  real_T Switch2;                      /* '<S928>/Switch2' */
  real_T DiscreteTimeIntegrator;       /* '<S928>/Discrete-Time Integrator' */
  real_T Idc;                          /* '<S882>/MATLAB Function' */
  real_T Idc_o;                        /* '<S824>/MATLAB Function' */
  real_T Idc_j;                        /* '<S823>/MATLAB Function' */
  real_T Idc_n;                        /* '<S822>/MATLAB Function' */
  real_T Idc_a;                        /* '<S764>/MATLAB Function' */
  real_T Idc_e;                        /* '<S763>/MATLAB Function' */
  real_T Idc_ay;                       /* '<S762>/MATLAB Function' */
  real_T Idc_g;                        /* '<S390>/MATLAB Function' */
  real_T Idc_jt;                       /* '<S366>/MATLAB Function3' */
  real_T Fcn;                          /* '<S345>/Fcn' */
  real_T Fcn1;                         /* '<S345>/Fcn1' */
  real_T Fcn_f;                        /* '<S344>/Fcn' */
  real_T Fcn1_o;                       /* '<S344>/Fcn1' */
  real_T Fcn_j;                        /* '<S339>/Fcn' */
  real_T Fcn1_i;                       /* '<S339>/Fcn1' */
  real_T Fcn_d;                        /* '<S338>/Fcn' */
  real_T Fcn1_j;                       /* '<S338>/Fcn1' */
  real_T Fcn_m;                        /* '<S324>/Fcn' */
  real_T Fcn1_k;                       /* '<S324>/Fcn1' */
  real_T Fcn_g;                        /* '<S323>/Fcn' */
  real_T Fcn1_c;                       /* '<S323>/Fcn1' */
  real_T Fcn1_g;                       /* '<S318>/Fcn1' */
  real_T Fcn1_b;                       /* '<S317>/Fcn1' */
  real_T Integ4_cs;                    /* '<S294>/Integ4' */
  real_T Delay_f;                      /* '<S294>/Gain' */
  real_T SFunction_d4;                 /* '<S296>/S-Function' */
  real_T Integ4_ha;                    /* '<S297>/Integ4' */
  real_T Delay_l;                      /* '<S297>/Gain' */
  real_T SFunction_e5;                 /* '<S299>/S-Function' */
  real_T MathFunction;                 /* '<S285>/Math Function' */
  real_T Fcn_m5;                       /* '<S305>/Fcn' */
  real_T Fcn1_g1;                      /* '<S305>/Fcn1' */
  real_T Fcn_c;                        /* '<S304>/Fcn' */
  real_T Fcn1_d;                       /* '<S304>/Fcn1' */
  real_T Fcn_e;                        /* '<S266>/Fcn' */
  real_T Fcn1_a;                       /* '<S266>/Fcn1' */
  real_T Fcn_k;                        /* '<S265>/Fcn' */
  real_T Fcn1_jb;                      /* '<S265>/Fcn1' */
  real_T Fcn_g3;                       /* '<S260>/Fcn' */
  real_T Fcn1_gm;                      /* '<S260>/Fcn1' */
  real_T Fcn_jl;                       /* '<S259>/Fcn' */
  real_T Fcn1_on;                      /* '<S259>/Fcn1' */
  real_T Fcn_b;                        /* '<S245>/Fcn' */
  real_T Fcn1_n;                       /* '<S245>/Fcn1' */
  real_T Fcn_o;                        /* '<S244>/Fcn' */
  real_T Fcn1_om;                      /* '<S244>/Fcn1' */
  real_T Fcn1_n1;                      /* '<S239>/Fcn1' */
  real_T Fcn1_f;                       /* '<S238>/Fcn1' */
  real_T Integ4_cu;                    /* '<S215>/Integ4' */
  real_T Delay_ou;                     /* '<S215>/Gain' */
  real_T SFunction_lp;                 /* '<S217>/S-Function' */
  real_T Integ4_dh0;                   /* '<S218>/Integ4' */
  real_T Delay_lg;                     /* '<S218>/Gain' */
  real_T SFunction_ca;                 /* '<S220>/S-Function' */
  real_T MathFunction_h;               /* '<S206>/Math Function' */
  real_T Fcn_a;                        /* '<S226>/Fcn' */
  real_T Fcn1_l;                       /* '<S226>/Fcn1' */
  real_T Fcn_p;                        /* '<S225>/Fcn' */
  real_T Fcn1_h;                       /* '<S225>/Fcn1' */
  real_T Integ4_l1;                    /* '<S180>/Integ4' */
  real_T SFunction_bz;                 /* '<S181>/S-Function' */
  real_T Integ4_m0;                    /* '<S162>/Integ4' */
  real_T SFunction_eh;                 /* '<S163>/S-Function' */
  real_T Integ4_jq;                    /* '<S164>/Integ4' */
  real_T SFunction_be1;                /* '<S165>/S-Function' */
  real_T DataTypeConversion_j;         /* '<S151>/Data Type Conversion' */
  real_T Integ4_jx;                    /* '<S152>/Integ4' */
  real_T SFunction_bi;                 /* '<S153>/S-Function' */
  real_T DataTypeConversion_ob;        /* '<S143>/Data Type Conversion' */
  real_T Integ4_hv;                    /* '<S144>/Integ4' */
  real_T SFunction_bv;                 /* '<S145>/S-Function' */
  real_T DataTypeConversion_l;         /* '<S121>/Data Type Conversion' */
  real_T LogicalOperator;              /* '<S119>/Logical Operator' */
  real_T Integ4_md;                    /* '<S122>/Integ4' */
  real_T SFunction_ap;                 /* '<S123>/S-Function' */
  real_T V_jp;                         /* '<S61>/MATLAB Function4' */
  real_T Idc_b;                        /* '<S61>/MATLAB Function4' */
  real_T V_c;                          /* '<S43>/MATLAB Function4' */
  real_T Idc_a2;                       /* '<S43>/MATLAB Function4' */
  real_T StateSpace_DSTATE;            /* '<S953>/State-Space' */
  real_T UnitDelay5_DSTATE;            /* '<S370>/Unit Delay5' */
  real_T UnitDelay6_DSTATE;            /* '<S370>/Unit Delay6' */
  real_T UnitDelay5_DSTATE_g;          /* '<S65>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_h;          /* '<S65>/Unit Delay6' */
  real_T UnitDelay1_DSTATE_k;          /* '<S61>/Unit Delay1' */
  real_T UnitDelay5_DSTATE_e;          /* '<S47>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_o;          /* '<S47>/Unit Delay6' */
  real_T UnitDelay1_DSTATE_i;          /* '<S43>/Unit Delay1' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S346>/Discrete-Time Integrator' */
  real_T KEfilter_DSTATE;              /* '<S346>/KE filter' */
  real_T UnitDelay_DSTATE;             /* '<S83>/Unit Delay' */
  real_T Delay_x1_DSTATE;              /* '<S250>/Delay_x1' */
  real_T Delay_x2_DSTATE;              /* '<S250>/Delay_x2' */
  real_T UnitDelay5_DSTATE_c;          /* '<S736>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_l;          /* '<S736>/Unit Delay6' */
  real_T UnitDelay4_DSTATE;            /* '<S736>/Unit Delay4' */
  real_T UnitDelay7_DSTATE;            /* '<S736>/Unit Delay7' */
  real_T UnitDelay_DSTATE_o;           /* '<S84>/Unit Delay' */
  real_T Delay_x1_DSTATE_p;            /* '<S329>/Delay_x1' */
  real_T Delay_x2_DSTATE_c;            /* '<S329>/Delay_x2' */
  real_T UnitDelay5_DSTATE_g0;         /* '<S828>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_hc;         /* '<S828>/Unit Delay6' */
  real_T UnitDelay5_DSTATE_i;          /* '<S886>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_i;          /* '<S886>/Unit Delay6' */
  real_T UnitDelay5_DSTATE_l;          /* '<S692>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_g;          /* '<S692>/Unit Delay6' */
  real_T UnitDelay4_DSTATE_p;          /* '<S692>/Unit Delay4' */
  real_T UnitDelay7_DSTATE_d;          /* '<S692>/Unit Delay7' */
  real_T UnitDelay5_DSTATE_b;          /* '<S787>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_b;          /* '<S787>/Unit Delay6' */
  real_T UnitDelay5_DSTATE_lw;         /* '<S866>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_d;          /* '<S866>/Unit Delay6' */
  real_T UnitDelay5_DSTATE_ij;         /* '<S768>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_o0;         /* '<S768>/Unit Delay6' */
  real_T UnitDelay5_DSTATE_bb;         /* '<S847>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_iz;         /* '<S847>/Unit Delay6' */
  real_T UnitDelay5_DSTATE_ik;         /* '<S806>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_le;         /* '<S806>/Unit Delay6' */
  real_T UnitDelay5_DSTATE_g0i;        /* '<S394>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_n;          /* '<S394>/Unit Delay6' */
  real_T UnitDelay5_DSTATE_k;          /* '<S714>/Unit Delay5' */
  real_T UnitDelay6_DSTATE_h5;         /* '<S714>/Unit Delay6' */
  real_T UnitDelay4_DSTATE_c;          /* '<S714>/Unit Delay4' */
  real_T UnitDelay7_DSTATE_n;          /* '<S714>/Unit Delay7' */
  real_T Integ4_DSTATE;                /* '<S444>/Integ4' */
  real_T UnitDelay_DSTATE_p;           /* '<S444>/Unit Delay' */
  real_T UnitDelay1_DSTATE_m;          /* '<S444>/Unit Delay1' */
  real_T Integ4_DSTATE_e;              /* '<S442>/Integ4' */
  real_T UnitDelay_DSTATE_c;           /* '<S442>/Unit Delay' */
  real_T UnitDelay1_DSTATE_lc;         /* '<S442>/Unit Delay1' */
  real_T Integ4_DSTATE_d;              /* '<S450>/Integ4' */
  real_T UnitDelay_DSTATE_g;           /* '<S450>/Unit Delay' */
  real_T UnitDelay1_DSTATE_fh;         /* '<S450>/Unit Delay1' */
  real_T Integ4_DSTATE_dw;             /* '<S448>/Integ4' */
  real_T UnitDelay_DSTATE_e;           /* '<S448>/Unit Delay' */
  real_T UnitDelay1_DSTATE_jg;         /* '<S448>/Unit Delay1' */
  real_T Integ4_DSTATE_p;              /* '<S456>/Integ4' */
  real_T UnitDelay_DSTATE_l;           /* '<S456>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S456>/Unit Delay1' */
  real_T Integ4_DSTATE_pr;             /* '<S454>/Integ4' */
  real_T UnitDelay_DSTATE_eo;          /* '<S454>/Unit Delay' */
  real_T UnitDelay1_DSTATE_h;          /* '<S454>/Unit Delay1' */
  real_T Integ4_DSTATE_o;              /* '<S468>/Integ4' */
  real_T UnitDelay_DSTATE_h;           /* '<S468>/Unit Delay' */
  real_T UnitDelay1_DSTATE_au;         /* '<S468>/Unit Delay1' */
  real_T Integ4_DSTATE_i;              /* '<S466>/Integ4' */
  real_T UnitDelay_DSTATE_f;           /* '<S466>/Unit Delay' */
  real_T UnitDelay1_DSTATE_av;         /* '<S466>/Unit Delay1' */
  real_T Integ4_DSTATE_g;              /* '<S474>/Integ4' */
  real_T UnitDelay_DSTATE_b;           /* '<S474>/Unit Delay' */
  real_T UnitDelay1_DSTATE_mw;         /* '<S474>/Unit Delay1' */
  real_T Integ4_DSTATE_m;              /* '<S472>/Integ4' */
  real_T UnitDelay_DSTATE_lm;          /* '<S472>/Unit Delay' */
  real_T UnitDelay1_DSTATE_o;          /* '<S472>/Unit Delay1' */
  real_T Integ4_DSTATE_j;              /* '<S480>/Integ4' */
  real_T UnitDelay_DSTATE_i;           /* '<S480>/Unit Delay' */
  real_T UnitDelay1_DSTATE_jl;         /* '<S480>/Unit Delay1' */
  real_T Integ4_DSTATE_l;              /* '<S478>/Integ4' */
  real_T UnitDelay_DSTATE_ps;          /* '<S478>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ha;         /* '<S478>/Unit Delay1' */
  real_T Integ4_DSTATE_os;             /* '<S912>/Integ4' */
  real_T UnitDelay_DSTATE_or;          /* '<S912>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ay;         /* '<S912>/Unit Delay1' */
  real_T Integ4_DSTATE_lo;             /* '<S910>/Integ4' */
  real_T UnitDelay_DSTATE_a;           /* '<S910>/Unit Delay' */
  real_T UnitDelay1_DSTATE_e;          /* '<S910>/Unit Delay1' */
  real_T Integ4_DSTATE_n;              /* '<S918>/Integ4' */
  real_T UnitDelay_DSTATE_ln;          /* '<S918>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ca;         /* '<S918>/Unit Delay1' */
  real_T Integ4_DSTATE_lc;             /* '<S916>/Integ4' */
  real_T UnitDelay_DSTATE_n;           /* '<S916>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ag;         /* '<S916>/Unit Delay1' */
  real_T Integ4_DSTATE_o0;             /* '<S924>/Integ4' */
  real_T UnitDelay_DSTATE_gs;          /* '<S924>/Unit Delay' */
  real_T UnitDelay1_DSTATE_cr;         /* '<S924>/Unit Delay1' */
  real_T Integ4_DSTATE_pu;             /* '<S922>/Integ4' */
  real_T UnitDelay_DSTATE_p3;          /* '<S922>/Unit Delay' */
  real_T UnitDelay1_DSTATE_p;          /* '<S922>/Unit Delay1' */
  real_T Integ4_DSTATE_jc;             /* '<S410>/Integ4' */
  real_T UnitDelay_DSTATE_bm;          /* '<S410>/Unit Delay' */
  real_T UnitDelay1_DSTATE_m0;         /* '<S410>/Unit Delay1' */
  real_T Integ4_DSTATE_id;             /* '<S412>/Integ4' */
  real_T UnitDelay_DSTATE_cr;          /* '<S412>/Unit Delay' */
  real_T UnitDelay1_DSTATE_g;          /* '<S412>/Unit Delay1' */
  real_T Integ4_DSTATE_h;              /* '<S414>/Integ4' */
  real_T UnitDelay_DSTATE_m;           /* '<S414>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ags;        /* '<S414>/Unit Delay1' */
  real_T Integ4_DSTATE_oi;             /* '<S416>/Integ4' */
  real_T UnitDelay_DSTATE_ez;          /* '<S416>/Unit Delay' */
  real_T UnitDelay1_DSTATE_lg;         /* '<S416>/Unit Delay1' */
  real_T Integ4_DSTATE_pg;             /* '<S424>/Integ4' */
  real_T UnitDelay_DSTATE_aq;          /* '<S424>/Unit Delay' */
  real_T UnitDelay1_DSTATE_jx;         /* '<S424>/Unit Delay1' */
  real_T Integ4_DSTATE_oi0;            /* '<S422>/Integ4' */
  real_T UnitDelay_DSTATE_cn;          /* '<S422>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kp;         /* '<S422>/Unit Delay1' */
  real_T Integ4_DSTATE_io;             /* '<S430>/Integ4' */
  real_T UnitDelay_DSTATE_j;           /* '<S430>/Unit Delay' */
  real_T UnitDelay1_DSTATE_lz;         /* '<S430>/Unit Delay1' */
  real_T Integ4_DSTATE_hw;             /* '<S428>/Integ4' */
  real_T UnitDelay_DSTATE_hl;          /* '<S428>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iq;         /* '<S428>/Unit Delay1' */
  real_T Integ4_DSTATE_nf;             /* '<S494>/Integ4' */
  real_T UnitDelay_DSTATE_hw;          /* '<S494>/Unit Delay' */
  real_T UnitDelay1_DSTATE_gx;         /* '<S494>/Unit Delay1' */
  real_T Integ4_DSTATE_j5;             /* '<S492>/Integ4' */
  real_T UnitDelay_DSTATE_ai;          /* '<S492>/Unit Delay' */
  real_T UnitDelay1_DSTATE_di;         /* '<S492>/Unit Delay1' */
  real_T Integ4_DSTATE_a;              /* '<S500>/Integ4' */
  real_T UnitDelay_DSTATE_lw;          /* '<S500>/Unit Delay' */
  real_T UnitDelay1_DSTATE_m5;         /* '<S500>/Unit Delay1' */
  real_T Integ4_DSTATE_k;              /* '<S498>/Integ4' */
  real_T UnitDelay_DSTATE_ei;          /* '<S498>/Unit Delay' */
  real_T UnitDelay1_DSTATE_by;         /* '<S498>/Unit Delay1' */
  real_T Integ4_DSTATE_kd;             /* '<S506>/Integ4' */
  real_T UnitDelay_DSTATE_jz;          /* '<S506>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a1;         /* '<S506>/Unit Delay1' */
  real_T Integ4_DSTATE_me;             /* '<S504>/Integ4' */
  real_T UnitDelay_DSTATE_b2;          /* '<S504>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ea;         /* '<S504>/Unit Delay1' */
  real_T Integ4_DSTATE_ip;             /* '<S518>/Integ4' */
  real_T UnitDelay_DSTATE_fp;          /* '<S518>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ma;         /* '<S518>/Unit Delay1' */
  real_T Integ4_DSTATE_dq;             /* '<S516>/Integ4' */
  real_T UnitDelay_DSTATE_gf;          /* '<S516>/Unit Delay' */
  real_T UnitDelay1_DSTATE_e2;         /* '<S516>/Unit Delay1' */
  real_T Integ4_DSTATE_le;             /* '<S524>/Integ4' */
  real_T UnitDelay_DSTATE_d;           /* '<S524>/Unit Delay' */
  real_T UnitDelay1_DSTATE_gb;         /* '<S524>/Unit Delay1' */
  real_T Integ4_DSTATE_ox;             /* '<S522>/Integ4' */
  real_T UnitDelay_DSTATE_hz;          /* '<S522>/Unit Delay' */
  real_T UnitDelay1_DSTATE_dz;         /* '<S522>/Unit Delay1' */
  real_T Integ4_DSTATE_gb;             /* '<S530>/Integ4' */
  real_T UnitDelay_DSTATE_cm;          /* '<S530>/Unit Delay' */
  real_T UnitDelay1_DSTATE_jz;         /* '<S530>/Unit Delay1' */
  real_T Integ4_DSTATE_ia;             /* '<S528>/Integ4' */
  real_T UnitDelay_DSTATE_lx;          /* '<S528>/Unit Delay' */
  real_T UnitDelay1_DSTATE_pq;         /* '<S528>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S5>/Unit Delay2' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S254>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_c;/* '<S205>/Discrete-Time Integrator' */
  real_T UnitDelay5_DSTATE_a;          /* '<S5>/Unit Delay5' */
  real_T DiscreteTimeIntegrator_DSTATE_j;/* '<S333>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_o;/* '<S284>/Discrete-Time Integrator' */
  real_T Integ4_DSTATE_gg;             /* '<S280>/Integ4' */
  real_T UnitDelay_DSTATE_pj;          /* '<S280>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ai;         /* '<S280>/Unit Delay1' */
  real_T UnitDelay6_DSTATE_o2;         /* '<S5>/Unit Delay6' */
  real_T DiscreteTimeIntegrator_DSTAT_oe;/* '<S86>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTAT_ju;/* '<S277>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_cn4;         /* '<S284>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S278>/Discrete-Time Integrator' */
  real_T DiscreteDerivative_states;    /* '<S286>/Discrete Derivative ' */
  real_T DiscreteTimeIntegrator_DSTATE_n;/* '<S286>/Discrete-Time Integrator' */
  real_T Integ4_DSTATE_ad;             /* '<S310>/Integ4' */
  real_T UnitDelay_DSTATE_c3;          /* '<S311>/Unit Delay' */
  real_T UnitDelay1_DSTATE_o0e;        /* '<S310>/Unit Delay1' */
  real_T Delay_x1_DSTATE_l;            /* '<S306>/Delay_x1' */
  real_T Delay_x2_DSTATE_j;            /* '<S306>/Delay_x2' */
  real_T DiscreteTimeIntegrator_DSTAT_om;/* '<S85>/Discrete-Time Integrator' */
  real_T UnitDelay7_DSTATE_a;          /* '<S5>/Unit Delay7' */
  real_T DiscreteTimeIntegrator_DSTATE_e;/* '<S201>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_fu;          /* '<S205>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_l;/* '<S202>/Discrete-Time Integrator' */
  real_T DiscreteDerivative_states_l;  /* '<S207>/Discrete Derivative ' */
  real_T DiscreteTimeIntegrator_DSTATE_p;/* '<S207>/Discrete-Time Integrator' */
  real_T Integ4_DSTATE_o5;             /* '<S231>/Integ4' */
  real_T UnitDelay_DSTATE_k;           /* '<S232>/Unit Delay' */
  real_T UnitDelay1_DSTATE_lv;         /* '<S231>/Unit Delay1' */
  real_T Delay_x1_DSTATE_g;            /* '<S227>/Delay_x1' */
  real_T Delay_x2_DSTATE_i;            /* '<S227>/Delay_x2' */
  real_T Integ4_DSTATE_oe;             /* '<S546>/Integ4' */
  real_T Integ4_DSTATE_n5;             /* '<S622>/Integ4' */
  real_T Integ4_DSTATE_c;              /* '<S624>/Integ4' */
  real_T Integ4_DSTATE_cd;             /* '<S628>/Integ4' */
  real_T Integ4_DSTATE_lz;             /* '<S630>/Integ4' */
  real_T Integ4_DSTATE_ne;             /* '<S634>/Integ4' */
  real_T Integ4_DSTATE_df;             /* '<S636>/Integ4' */
  real_T Integ4_DSTATE_am;             /* '<S646>/Integ4' */
  real_T Integ4_DSTATE_ct;             /* '<S648>/Integ4' */
  real_T Integ4_DSTATE_dn;             /* '<S652>/Integ4' */
  real_T Integ4_DSTATE_f;              /* '<S654>/Integ4' */
  real_T Integ4_DSTATE_fv;             /* '<S658>/Integ4' */
  real_T Integ4_DSTATE_ex;             /* '<S660>/Integ4' */
  real_T Integ4_DSTATE_nc;             /* '<S552>/Integ4' */
  real_T Integ4_DSTATE_nd;             /* '<S554>/Integ4' */
  real_T Integ4_DSTATE_li;             /* '<S558>/Integ4' */
  real_T Integ4_DSTATE_j5d;            /* '<S560>/Integ4' */
  real_T Integ4_DSTATE_av;             /* '<S572>/Integ4' */
  real_T Integ4_DSTATE_leb;            /* '<S574>/Integ4' */
  real_T Integ4_DSTATE_b;              /* '<S578>/Integ4' */
  real_T Integ4_DSTATE_e5;             /* '<S580>/Integ4' */
  real_T Integ4_DSTATE_eb;             /* '<S584>/Integ4' */
  real_T Integ4_DSTATE_cq;             /* '<S586>/Integ4' */
  real_T Integ4_DSTATE_hc;             /* '<S596>/Integ4' */
  real_T Integ4_DSTATE_m3;             /* '<S598>/Integ4' */
  real_T Integ4_DSTATE_bo;             /* '<S602>/Integ4' */
  real_T Integ4_DSTATE_jx;             /* '<S604>/Integ4' */
  real_T Integ4_DSTATE_g5;             /* '<S608>/Integ4' */
  real_T Integ4_DSTATE_my;             /* '<S610>/Integ4' */
  real_T Integ4_DSTATE_pv;             /* '<S670>/Integ4' */
  real_T Integ4_DSTATE_ij;             /* '<S672>/Integ4' */
  real_T Integ4_DSTATE_n2;             /* '<S676>/Integ4' */
  real_T Integ4_DSTATE_dy;             /* '<S678>/Integ4' */
  real_T Integ4_DSTATE_hd;             /* '<S682>/Integ4' */
  real_T Integ4_DSTATE_pa;             /* '<S684>/Integ4' */
  real_T Integ4_DSTATE_px;             /* '<S544>/Integ4' */
  real_T Integ4_DSTATE_exz;            /* '<S540>/Integ4' */
  real_T Integ4_DSTATE_hs;             /* '<S542>/Integ4' */
  real_T Integ4_DSTATE_md;             /* '<S294>/Integ4' */
  real_T UnitDelay_DSTATE_kr;          /* '<S295>/Unit Delay' */
  real_T UnitDelay1_DSTATE_hp;         /* '<S294>/Unit Delay1' */
  real_T Integ4_DSTATE_e5y;            /* '<S297>/Integ4' */
  real_T UnitDelay_DSTATE_ko;          /* '<S298>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j3;         /* '<S297>/Unit Delay1' */
  real_T Integ4_DSTATE_o3;             /* '<S215>/Integ4' */
  real_T UnitDelay_DSTATE_c2;          /* '<S216>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ia;         /* '<S215>/Unit Delay1' */
  real_T Integ4_DSTATE_ei;             /* '<S218>/Integ4' */
  real_T UnitDelay_DSTATE_m0;          /* '<S219>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ou;         /* '<S218>/Unit Delay1' */
  real_T Integ4_DSTATE_go;             /* '<S180>/Integ4' */
  real_T Integ4_DSTATE_f0;             /* '<S162>/Integ4' */
  real_T Integ4_DSTATE_b0;             /* '<S164>/Integ4' */
  real_T Integ4_DSTATE_m0;             /* '<S152>/Integ4' */
  real_T Integ4_DSTATE_dd;             /* '<S144>/Integ4' */
  real_T Integ4_DSTATE_dt;             /* '<S122>/Integ4' */
  real_T lastSin;                      /* '<S5>/Uref2' */
  real_T lastCos;                      /* '<S5>/Uref2' */
  real_T lastSin_n;                    /* '<Root>/Vload' */
  real_T lastCos_f;                    /* '<Root>/Vload' */
  real_T RateTransition4_Buffer0;      /* '<S83>/Rate Transition4' */
  real_T RateTransition4_Buffer0_o;    /* '<S84>/Rate Transition4' */
  real_T RateTransition2_Buffer0;      /* '<S75>/Rate Transition2' */
  real_T lastSin_b;                    /* '<S5>/Uref1' */
  real_T lastCos_h;                    /* '<S5>/Uref1' */
  real_T lastSin_o;                    /* '<S434>/sin(wt)' */
  real_T lastCos_n;                    /* '<S434>/sin(wt)' */
  real_T lastSin_j;                    /* '<S434>/cos(wt)' */
  real_T lastCos_i;                    /* '<S434>/cos(wt)' */
  real_T lastSin_h;                    /* '<S435>/sin(wt)' */
  real_T lastCos_j;                    /* '<S435>/sin(wt)' */
  real_T lastSin_hi;                   /* '<S435>/cos(wt)' */
  real_T lastCos_o;                    /* '<S435>/cos(wt)' */
  real_T lastSin_e;                    /* '<S436>/sin(wt)' */
  real_T lastCos_fk;                   /* '<S436>/sin(wt)' */
  real_T lastSin_k;                    /* '<S436>/cos(wt)' */
  real_T lastCos_g;                    /* '<S436>/cos(wt)' */
  real_T lastSin_ob;                   /* '<S458>/sin(wt)' */
  real_T lastCos_k;                    /* '<S458>/sin(wt)' */
  real_T lastSin_f;                    /* '<S458>/cos(wt)' */
  real_T lastCos_e;                    /* '<S458>/cos(wt)' */
  real_T lastSin_h0;                   /* '<S459>/sin(wt)' */
  real_T lastCos_ov;                   /* '<S459>/sin(wt)' */
  real_T lastSin_a;                    /* '<S459>/cos(wt)' */
  real_T lastCos_hg;                   /* '<S459>/cos(wt)' */
  real_T lastSin_fx;                   /* '<S460>/sin(wt)' */
  real_T lastCos_c;                    /* '<S460>/sin(wt)' */
  real_T lastSin_f2;                   /* '<S460>/cos(wt)' */
  real_T lastCos_ni;                   /* '<S460>/cos(wt)' */
  real_T lastSin_fm;                   /* '<S902>/sin(wt)' */
  real_T lastCos_e4;                   /* '<S902>/sin(wt)' */
  real_T lastSin_f5;                   /* '<S902>/cos(wt)' */
  real_T lastCos_l;                    /* '<S902>/cos(wt)' */
  real_T lastSin_fmt;                  /* '<S903>/sin(wt)' */
  real_T lastCos_ns;                   /* '<S903>/sin(wt)' */
  real_T lastSin_d;                    /* '<S903>/cos(wt)' */
  real_T lastCos_a;                    /* '<S903>/cos(wt)' */
  real_T lastSin_d1;                   /* '<S904>/sin(wt)' */
  real_T lastCos_d;                    /* '<S904>/sin(wt)' */
  real_T lastSin_l;                    /* '<S904>/cos(wt)' */
  real_T lastCos_l0;                   /* '<S904>/cos(wt)' */
  real_T lastSin_m;                    /* '<S418>/sin(wt)' */
  real_T lastCos_ovt;                  /* '<S418>/sin(wt)' */
  real_T lastSin_fl;                   /* '<S418>/cos(wt)' */
  real_T lastCos_nl;                   /* '<S418>/cos(wt)' */
  real_T lastSin_p;                    /* '<S419>/sin(wt)' */
  real_T lastCos_fl;                   /* '<S419>/sin(wt)' */
  real_T lastSin_e1;                   /* '<S419>/cos(wt)' */
  real_T lastCos_h5;                   /* '<S419>/cos(wt)' */
  real_T lastSin_am;                   /* '<S484>/sin(wt)' */
  real_T lastCos_ny;                   /* '<S484>/sin(wt)' */
  real_T lastSin_jo;                   /* '<S484>/cos(wt)' */
  real_T lastCos_on;                   /* '<S484>/cos(wt)' */
  real_T lastSin_pp;                   /* '<S485>/sin(wt)' */
  real_T lastCos_ob;                   /* '<S485>/sin(wt)' */
  real_T lastSin_i;                    /* '<S485>/cos(wt)' */
  real_T lastCos_b;                    /* '<S485>/cos(wt)' */
  real_T lastSin_hb;                   /* '<S486>/sin(wt)' */
  real_T lastCos_i4;                   /* '<S486>/sin(wt)' */
  real_T lastSin_fw;                   /* '<S486>/cos(wt)' */
  real_T lastCos_p;                    /* '<S486>/cos(wt)' */
  real_T lastSin_dz;                   /* '<S508>/sin(wt)' */
  real_T lastCos_b4;                   /* '<S508>/sin(wt)' */
  real_T lastSin_jd;                   /* '<S508>/cos(wt)' */
  real_T lastCos_ih;                   /* '<S508>/cos(wt)' */
  real_T lastSin_nj;                   /* '<S509>/sin(wt)' */
  real_T lastCos_hr;                   /* '<S509>/sin(wt)' */
  real_T lastSin_o2;                   /* '<S509>/cos(wt)' */
  real_T lastCos_dm;                   /* '<S509>/cos(wt)' */
  real_T lastSin_e2;                   /* '<S510>/sin(wt)' */
  real_T lastCos_m;                    /* '<S510>/sin(wt)' */
  real_T lastSin_dm;                   /* '<S510>/cos(wt)' */
  real_T lastCos_ie;                   /* '<S510>/cos(wt)' */
  real_T RateTransition5_Buffer;       /* '<S83>/Rate Transition5' */
  real_T RateTransition5_Buffer_a;     /* '<S84>/Rate Transition5' */
  real_T PrevY;                        /* '<S268>/Rate Limiter' */
  real_T RateTransition1_Buffer_b;     /* '<S75>/Rate Transition1' */
  real_T PrevY_k;                      /* '<S75>/Rate Limiter' */
  real_T PrevY_n;                      /* '<S75>/Rate Limiter1' */
  real_T RateTransition1_Buffer_p;     /* '<Root>/Rate Transition1' */
  real_T RateTransition2_Buffer;       /* '<Root>/Rate Transition2' */
  real_T PrevY_l;                      /* '<S284>/Rate Limiter' */
  real_T RateTransition3_Buffer;       /* '<S75>/Rate Transition3' */
  real_T PrevY_a;                      /* '<S205>/Rate Limiter' */
  real_T lastSin_g;                    /* '<S614>/cos(wt)' */
  real_T lastCos_ko;                   /* '<S614>/cos(wt)' */
  real_T lastSin_ne;                   /* '<S614>/sin(wt)' */
  real_T lastCos_n3;                   /* '<S614>/sin(wt)' */
  real_T lastSin_am5;                  /* '<S615>/cos(wt)' */
  real_T lastCos_gn;                   /* '<S615>/cos(wt)' */
  real_T lastSin_on;                   /* '<S615>/sin(wt)' */
  real_T lastCos_gs;                   /* '<S615>/sin(wt)' */
  real_T lastSin_h5;                   /* '<S616>/cos(wt)' */
  real_T lastCos_pj;                   /* '<S616>/cos(wt)' */
  real_T lastSin_n1;                   /* '<S616>/sin(wt)' */
  real_T lastCos_ihc;                  /* '<S616>/sin(wt)' */
  real_T lastSin_ds;                   /* '<S638>/cos(wt)' */
  real_T lastCos_k2;                   /* '<S638>/cos(wt)' */
  real_T lastSin_ft;                   /* '<S638>/sin(wt)' */
  real_T lastCos_le;                   /* '<S638>/sin(wt)' */
  real_T lastSin_ik;                   /* '<S639>/cos(wt)' */
  real_T lastCos_gx;                   /* '<S639>/cos(wt)' */
  real_T lastSin_gg;                   /* '<S639>/sin(wt)' */
  real_T lastCos_kz;                   /* '<S639>/sin(wt)' */
  real_T lastSin_c;                    /* '<S640>/cos(wt)' */
  real_T lastCos_a5;                   /* '<S640>/cos(wt)' */
  real_T lastSin_mp;                   /* '<S640>/sin(wt)' */
  real_T lastCos_pe;                   /* '<S640>/sin(wt)' */
  real_T lastSin_nh;                   /* '<S548>/cos(wt)' */
  real_T lastCos_kw;                   /* '<S548>/cos(wt)' */
  real_T lastSin_mi;                   /* '<S548>/sin(wt)' */
  real_T lastCos_bb;                   /* '<S548>/sin(wt)' */
  real_T lastSin_et;                   /* '<S549>/cos(wt)' */
  real_T lastCos_ju;                   /* '<S549>/cos(wt)' */
  real_T lastSin_ac;                   /* '<S549>/sin(wt)' */
  real_T lastCos_bd;                   /* '<S549>/sin(wt)' */
  real_T lastSin_at;                   /* '<S564>/cos(wt)' */
  real_T lastCos_ci;                   /* '<S564>/cos(wt)' */
  real_T lastSin_la;                   /* '<S564>/sin(wt)' */
  real_T lastCos_bbd;                  /* '<S564>/sin(wt)' */
  real_T lastSin_gh;                   /* '<S565>/cos(wt)' */
  real_T lastCos_lz;                   /* '<S565>/cos(wt)' */
  real_T lastSin_lo;                   /* '<S565>/sin(wt)' */
  real_T lastCos_gsk;                  /* '<S565>/sin(wt)' */
  real_T lastSin_fa;                   /* '<S566>/cos(wt)' */
  real_T lastCos_hf;                   /* '<S566>/cos(wt)' */
  real_T lastSin_lk;                   /* '<S566>/sin(wt)' */
  real_T lastCos_ig;                   /* '<S566>/sin(wt)' */
  real_T lastSin_gh2;                  /* '<S588>/cos(wt)' */
  real_T lastCos_ew;                   /* '<S588>/cos(wt)' */
  real_T lastSin_nr;                   /* '<S588>/sin(wt)' */
  real_T lastCos_op;                   /* '<S588>/sin(wt)' */
  real_T lastSin_fxm;                  /* '<S589>/cos(wt)' */
  real_T lastCos_h0;                   /* '<S589>/cos(wt)' */
  real_T lastSin_o2f;                  /* '<S589>/sin(wt)' */
  real_T lastCos_niz;                  /* '<S589>/sin(wt)' */
  real_T lastSin_p0;                   /* '<S590>/cos(wt)' */
  real_T lastCos_fu;                   /* '<S590>/cos(wt)' */
  real_T lastSin_nx;                   /* '<S590>/sin(wt)' */
  real_T lastCos_ez;                   /* '<S590>/sin(wt)' */
  real_T lastSin_eb;                   /* '<S662>/cos(wt)' */
  real_T lastCos_h2;                   /* '<S662>/cos(wt)' */
  real_T lastSin_pc;                   /* '<S662>/sin(wt)' */
  real_T lastCos_fuy;                  /* '<S662>/sin(wt)' */
  real_T lastSin_ae;                   /* '<S663>/cos(wt)' */
  real_T lastCos_kf;                   /* '<S663>/cos(wt)' */
  real_T lastSin_mk;                   /* '<S663>/sin(wt)' */
  real_T lastCos_pk;                   /* '<S663>/sin(wt)' */
  real_T lastSin_pu;                   /* '<S664>/cos(wt)' */
  real_T lastCos_bdo;                  /* '<S664>/cos(wt)' */
  real_T lastSin_cp;                   /* '<S664>/sin(wt)' */
  real_T lastCos_k1;                   /* '<S664>/sin(wt)' */
  real_T SFunction_RWORK;              /* '<S445>/S-Function' */
  real_T SFunction_RWORK_f;            /* '<S443>/S-Function' */
  real_T SFunction_RWORK_o;            /* '<S451>/S-Function' */
  real_T SFunction_RWORK_m;            /* '<S449>/S-Function' */
  real_T SFunction_RWORK_l;            /* '<S457>/S-Function' */
  real_T SFunction_RWORK_f2;           /* '<S455>/S-Function' */
  real_T SFunction_RWORK_n;            /* '<S469>/S-Function' */
  real_T SFunction_RWORK_p;            /* '<S467>/S-Function' */
  real_T SFunction_RWORK_j;            /* '<S475>/S-Function' */
  real_T SFunction_RWORK_ps;           /* '<S473>/S-Function' */
  real_T SFunction_RWORK_la;           /* '<S481>/S-Function' */
  real_T SFunction_RWORK_o4;           /* '<S479>/S-Function' */
  real_T SFunction_RWORK_i;            /* '<S913>/S-Function' */
  real_T SFunction_RWORK_b;            /* '<S911>/S-Function' */
  real_T SFunction_RWORK_h;            /* '<S919>/S-Function' */
  real_T SFunction_RWORK_g;            /* '<S917>/S-Function' */
  real_T SFunction_RWORK_jh;           /* '<S925>/S-Function' */
  real_T SFunction_RWORK_hg;           /* '<S923>/S-Function' */
  real_T SFunction_RWORK_fx;           /* '<S411>/S-Function' */
  real_T SFunction_RWORK_n0;           /* '<S413>/S-Function' */
  real_T SFunction_RWORK_d;            /* '<S415>/S-Function' */
  real_T SFunction_RWORK_nd;           /* '<S417>/S-Function' */
  real_T SFunction_RWORK_pe;           /* '<S425>/S-Function' */
  real_T SFunction_RWORK_a;            /* '<S423>/S-Function' */
  real_T SFunction_RWORK_lf;           /* '<S431>/S-Function' */
  real_T SFunction_RWORK_e;            /* '<S429>/S-Function' */
  real_T SFunction_RWORK_h1;           /* '<S495>/S-Function' */
  real_T SFunction_RWORK_k;            /* '<S493>/S-Function' */
  real_T SFunction_RWORK_mo;           /* '<S501>/S-Function' */
  real_T SFunction_RWORK_mn;           /* '<S499>/S-Function' */
  real_T SFunction_RWORK_fu;           /* '<S507>/S-Function' */
  real_T SFunction_RWORK_eb;           /* '<S505>/S-Function' */
  real_T SFunction_RWORK_mi;           /* '<S519>/S-Function' */
  real_T SFunction_RWORK_eu;           /* '<S517>/S-Function' */
  real_T SFunction_RWORK_db;           /* '<S525>/S-Function' */
  real_T SFunction_RWORK_kh;           /* '<S523>/S-Function' */
  real_T SFunction_RWORK_ok;           /* '<S531>/S-Function' */
  real_T SFunction_RWORK_c;            /* '<S529>/S-Function' */
  real_T SFunction_RWORK_fc;           /* '<S281>/S-Function' */
  real_T SFunction_RWORK_ks;           /* '<S312>/S-Function' */
  real_T SFunction_RWORK_io;           /* '<S233>/S-Function' */
  real_T SFunction_RWORK_g0;           /* '<S547>/S-Function' */
  real_T SFunction_RWORK_md;           /* '<S623>/S-Function' */
  real_T SFunction_RWORK_k3;           /* '<S625>/S-Function' */
  real_T SFunction_RWORK_dl;           /* '<S629>/S-Function' */
  real_T SFunction_RWORK_nq;           /* '<S631>/S-Function' */
  real_T SFunction_RWORK_hw;           /* '<S635>/S-Function' */
  real_T SFunction_RWORK_jg;           /* '<S637>/S-Function' */
  real_T SFunction_RWORK_pu;           /* '<S647>/S-Function' */
  real_T SFunction_RWORK_ku;           /* '<S649>/S-Function' */
  real_T SFunction_RWORK_kw;           /* '<S653>/S-Function' */
  real_T SFunction_RWORK_ii;           /* '<S655>/S-Function' */
  real_T SFunction_RWORK_os;           /* '<S659>/S-Function' */
  real_T SFunction_RWORK_l2;           /* '<S661>/S-Function' */
  real_T SFunction_RWORK_ez;           /* '<S553>/S-Function' */
  real_T SFunction_RWORK_h3;           /* '<S555>/S-Function' */
  real_T SFunction_RWORK_bg;           /* '<S559>/S-Function' */
  real_T SFunction_RWORK_jq;           /* '<S561>/S-Function' */
  real_T SFunction_RWORK_dv;           /* '<S573>/S-Function' */
  real_T SFunction_RWORK_g0s;          /* '<S575>/S-Function' */
  real_T SFunction_RWORK_be;           /* '<S579>/S-Function' */
  real_T SFunction_RWORK_ab;           /* '<S581>/S-Function' */
  real_T SFunction_RWORK_cp;           /* '<S585>/S-Function' */
  real_T SFunction_RWORK_i2;           /* '<S587>/S-Function' */
  real_T SFunction_RWORK_lp;           /* '<S597>/S-Function' */
  real_T SFunction_RWORK_ct;           /* '<S599>/S-Function' */
  real_T SFunction_RWORK_kb;           /* '<S603>/S-Function' */
  real_T SFunction_RWORK_nz;           /* '<S605>/S-Function' */
  real_T SFunction_RWORK_hp;           /* '<S609>/S-Function' */
  real_T SFunction_RWORK_ay;           /* '<S611>/S-Function' */
  real_T SFunction_RWORK_nv;           /* '<S671>/S-Function' */
  real_T SFunction_RWORK_fc1;          /* '<S673>/S-Function' */
  real_T SFunction_RWORK_dva;          /* '<S677>/S-Function' */
  real_T SFunction_RWORK_ox;           /* '<S679>/S-Function' */
  real_T SFunction_RWORK_bj;           /* '<S683>/S-Function' */
  real_T SFunction_RWORK_lr;           /* '<S685>/S-Function' */
  real_T SFunction_RWORK_e3;           /* '<S545>/S-Function' */
  real_T SFunction_RWORK_fch;          /* '<S541>/S-Function' */
  real_T SFunction_RWORK_lq;           /* '<S543>/S-Function' */
  real_T SFunction_RWORK_nb;           /* '<S296>/S-Function' */
  real_T SFunction_RWORK_pl;           /* '<S299>/S-Function' */
  real_T SFunction_RWORK_abb;          /* '<S217>/S-Function' */
  real_T SFunction_RWORK_az;           /* '<S220>/S-Function' */
  real_T SFunction_RWORK_h4;           /* '<S181>/S-Function' */
  real_T SFunction_RWORK_fn;           /* '<S163>/S-Function' */
  real_T SFunction_RWORK_lp2;          /* '<S165>/S-Function' */
  real_T SFunction_RWORK_gs;           /* '<S153>/S-Function' */
  real_T SFunction_RWORK_nz1;          /* '<S145>/S-Function' */
  real_T SFunction_RWORK_me;           /* '<S133>/S-Function' */
  real_T SFunction_RWORK_np;           /* '<S135>/S-Function' */
  real_T SFunction_RWORK_hgx;          /* '<S123>/S-Function' */
  real_T SFunction_RWORK_hh;           /* '<S95>/S-Function' */
  real_T SFunction_RWORK_ov;           /* '<S97>/S-Function' */
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
    void *G_STATE;
    void *USWLAST;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
    void *SWITCH_TOPO_SAVED_IDX;
    void *SWITCH_MAP;
  } StateSpace_PWORK;                  /* '<S953>/State-Space' */

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
    void *G_STATE;
    void *USWLAST;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
    void *SWITCH_TOPO_SAVED_IDX;
    void *SWITCH_MAP;
  } StateSpace_PWORK_n;                /* '<S954>/State-Space' */

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
    void *G_STATE;
    void *USWLAST;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
    void *SWITCH_TOPO_SAVED_IDX;
    void *SWITCH_MAP;
  } StateSpace_PWORK_f;                /* '<S955>/State-Space' */

  void *SFunction_PWORK_hs[3];         /* '<S133>/S-Function' */
  void *SFunction_PWORK_bd[3];         /* '<S135>/S-Function' */
  void *SFunction_PWORK_jk[3];         /* '<S95>/S-Function' */
  void *SFunction_PWORK_nr[3];         /* '<S97>/S-Function' */
  void *SFunction_PWORK;               /* '<S445>/S-Function' */
  void *SFunction_PWORK_b;             /* '<S443>/S-Function' */
  void *SFunction_PWORK_i;             /* '<S451>/S-Function' */
  void *SFunction_PWORK_bv;            /* '<S449>/S-Function' */
  void *SFunction_PWORK_f;             /* '<S457>/S-Function' */
  void *SFunction_PWORK_bi;            /* '<S455>/S-Function' */
  void *SFunction_PWORK_o;             /* '<S469>/S-Function' */
  void *SFunction_PWORK_bf;            /* '<S467>/S-Function' */
  void *SFunction_PWORK_a;             /* '<S475>/S-Function' */
  void *SFunction_PWORK_j;             /* '<S473>/S-Function' */
  void *SFunction_PWORK_m;             /* '<S481>/S-Function' */
  void *SFunction_PWORK_fu;            /* '<S479>/S-Function' */
  void *SFunction_PWORK_ii;            /* '<S913>/S-Function' */
  void *SFunction_PWORK_ib;            /* '<S911>/S-Function' */
  void *SFunction_PWORK_at;            /* '<S919>/S-Function' */
  void *SFunction_PWORK_og;            /* '<S917>/S-Function' */
  void *SFunction_PWORK_k;             /* '<S925>/S-Function' */
  void *SFunction_PWORK_ac;            /* '<S923>/S-Function' */
  void *SFunction_PWORK_g;             /* '<S411>/S-Function' */
  void *SFunction_PWORK_oa;            /* '<S413>/S-Function' */
  void *SFunction_PWORK_m3;            /* '<S415>/S-Function' */
  void *SFunction_PWORK_e;             /* '<S417>/S-Function' */
  void *SFunction_PWORK_c;             /* '<S425>/S-Function' */
  void *SFunction_PWORK_ki;            /* '<S423>/S-Function' */
  void *SFunction_PWORK_p;             /* '<S431>/S-Function' */
  void *SFunction_PWORK_h;             /* '<S429>/S-Function' */
  void *SFunction_PWORK_l;             /* '<S495>/S-Function' */
  void *SFunction_PWORK_ml;            /* '<S493>/S-Function' */
  void *SFunction_PWORK_k4;            /* '<S501>/S-Function' */
  void *SFunction_PWORK_kd;            /* '<S499>/S-Function' */
  void *SFunction_PWORK_ge;            /* '<S507>/S-Function' */
  void *SFunction_PWORK_by;            /* '<S505>/S-Function' */
  void *SFunction_PWORK_d;             /* '<S519>/S-Function' */
  void *SFunction_PWORK_f3;            /* '<S517>/S-Function' */
  void *SFunction_PWORK_hm;            /* '<S525>/S-Function' */
  void *SFunction_PWORK_m4;            /* '<S523>/S-Function' */
  void *SFunction_PWORK_hv;            /* '<S531>/S-Function' */
  void *SFunction_PWORK_lp;            /* '<S529>/S-Function' */
  void *SFunction_PWORK_fi;            /* '<S281>/S-Function' */
  void *SFunction_PWORK_gw;            /* '<S312>/S-Function' */
  void *SFunction_PWORK_n;             /* '<S233>/S-Function' */
  void *SFunction_PWORK_eq;            /* '<S547>/S-Function' */
  void *SFunction_PWORK_bfq;           /* '<S623>/S-Function' */
  void *SFunction_PWORK_ll;            /* '<S625>/S-Function' */
  void *SFunction_PWORK_ky;            /* '<S629>/S-Function' */
  void *SFunction_PWORK_cy;            /* '<S631>/S-Function' */
  void *SFunction_PWORK_cu;            /* '<S635>/S-Function' */
  void *SFunction_PWORK_pj;            /* '<S637>/S-Function' */
  void *SFunction_PWORK_hq;            /* '<S647>/S-Function' */
  void *SFunction_PWORK_gn;            /* '<S649>/S-Function' */
  void *SFunction_PWORK_nt;            /* '<S653>/S-Function' */
  void *SFunction_PWORK_nk;            /* '<S655>/S-Function' */
  void *SFunction_PWORK_jf;            /* '<S659>/S-Function' */
  void *SFunction_PWORK_ag;            /* '<S661>/S-Function' */
  void *SFunction_PWORK_cc;            /* '<S553>/S-Function' */
  void *SFunction_PWORK_ea;            /* '<S555>/S-Function' */
  void *SFunction_PWORK_bh;            /* '<S559>/S-Function' */
  void *SFunction_PWORK_fn;            /* '<S561>/S-Function' */
  void *SFunction_PWORK_km;            /* '<S573>/S-Function' */
  void *SFunction_PWORK_pi;            /* '<S575>/S-Function' */
  void *SFunction_PWORK_k4k;           /* '<S579>/S-Function' */
  void *SFunction_PWORK_ju;            /* '<S581>/S-Function' */
  void *SFunction_PWORK_kx;            /* '<S585>/S-Function' */
  void *SFunction_PWORK_j3;            /* '<S587>/S-Function' */
  void *SFunction_PWORK_dd;            /* '<S597>/S-Function' */
  void *SFunction_PWORK_p2;            /* '<S599>/S-Function' */
  void *SFunction_PWORK_pw;            /* '<S603>/S-Function' */
  void *SFunction_PWORK_dh;            /* '<S605>/S-Function' */
  void *SFunction_PWORK_cs;            /* '<S609>/S-Function' */
  void *SFunction_PWORK_n5;            /* '<S611>/S-Function' */
  void *SFunction_PWORK_dx;            /* '<S671>/S-Function' */
  void *SFunction_PWORK_ce;            /* '<S673>/S-Function' */
  void *SFunction_PWORK_fnk;           /* '<S677>/S-Function' */
  void *SFunction_PWORK_jv;            /* '<S679>/S-Function' */
  void *SFunction_PWORK_k41;           /* '<S683>/S-Function' */
  void *SFunction_PWORK_bfb;           /* '<S685>/S-Function' */
  void *SFunction_PWORK_kq;            /* '<S545>/S-Function' */
  void *SFunction_PWORK_pv;            /* '<S541>/S-Function' */
  void *SFunction_PWORK_n1;            /* '<S543>/S-Function' */
  void *SFunction_PWORK_lz;            /* '<S296>/S-Function' */
  void *SFunction_PWORK_ft;            /* '<S299>/S-Function' */
  void *SFunction_PWORK_jd;            /* '<S217>/S-Function' */
  void *SFunction_PWORK_lw;            /* '<S220>/S-Function' */
  void *SFunction_PWORK_nv;            /* '<S181>/S-Function' */
  void *SFunction_PWORK_pv4;           /* '<S163>/S-Function' */
  void *SFunction_PWORK_c3;            /* '<S165>/S-Function' */
  void *SFunction_PWORK_je;            /* '<S153>/S-Function' */
  void *SFunction_PWORK_db;            /* '<S145>/S-Function' */
  void *SFunction_PWORK_d2;            /* '<S123>/S-Function' */
  int_T StateSpace_IWORK[11];          /* '<S953>/State-Space' */
  int_T StateSpace_IWORK_e[11];        /* '<S954>/State-Space' */
  int_T StateSpace_IWORK_c[11];        /* '<S955>/State-Space' */
  int_T SFunction_IWORK_iu[3];         /* '<S133>/S-Function' */
  int_T SFunction_IWORK_m1b[3];        /* '<S135>/S-Function' */
  int_T SFunction_IWORK_l2[3];         /* '<S95>/S-Function' */
  int_T SFunction_IWORK_mqk[3];        /* '<S97>/S-Function' */
  int32_T systemEnable;                /* '<S5>/Uref2' */
  int32_T systemEnable_d;              /* '<Root>/Vload' */
  int32_T systemEnable_h;              /* '<S5>/Uref1' */
  int32_T systemEnable_f;              /* '<S434>/sin(wt)' */
  int32_T systemEnable_b;              /* '<S434>/cos(wt)' */
  int32_T systemEnable_n;              /* '<S435>/sin(wt)' */
  int32_T systemEnable_c;              /* '<S435>/cos(wt)' */
  int32_T systemEnable_a;              /* '<S436>/sin(wt)' */
  int32_T systemEnable_di;             /* '<S436>/cos(wt)' */
  int32_T systemEnable_fb;             /* '<S458>/sin(wt)' */
  int32_T systemEnable_o;              /* '<S458>/cos(wt)' */
  int32_T systemEnable_p;              /* '<S459>/sin(wt)' */
  int32_T systemEnable_e;              /* '<S459>/cos(wt)' */
  int32_T systemEnable_l;              /* '<S460>/sin(wt)' */
  int32_T systemEnable_g;              /* '<S460>/cos(wt)' */
  int32_T systemEnable_nr;             /* '<S902>/sin(wt)' */
  int32_T systemEnable_nk;             /* '<S902>/cos(wt)' */
  int32_T systemEnable_lm;             /* '<S903>/sin(wt)' */
  int32_T systemEnable_fk;             /* '<S903>/cos(wt)' */
  int32_T systemEnable_es;             /* '<S904>/sin(wt)' */
  int32_T systemEnable_eq;             /* '<S904>/cos(wt)' */
  int32_T systemEnable_m;              /* '<S418>/sin(wt)' */
  int32_T systemEnable_e2;             /* '<S418>/cos(wt)' */
  int32_T systemEnable_aq;             /* '<S419>/sin(wt)' */
  int32_T systemEnable_ac;             /* '<S419>/cos(wt)' */
  int32_T systemEnable_j;              /* '<S484>/sin(wt)' */
  int32_T systemEnable_gz;             /* '<S484>/cos(wt)' */
  int32_T systemEnable_lb;             /* '<S485>/sin(wt)' */
  int32_T systemEnable_i;              /* '<S485>/cos(wt)' */
  int32_T systemEnable_bk;             /* '<S486>/sin(wt)' */
  int32_T systemEnable_oz;             /* '<S486>/cos(wt)' */
  int32_T systemEnable_cd;             /* '<S508>/sin(wt)' */
  int32_T systemEnable_jg;             /* '<S508>/cos(wt)' */
  int32_T systemEnable_av;             /* '<S509>/sin(wt)' */
  int32_T systemEnable_oh;             /* '<S509>/cos(wt)' */
  int32_T systemEnable_bn;             /* '<S510>/sin(wt)' */
  int32_T systemEnable_na;             /* '<S510>/cos(wt)' */
  int32_T systemEnable_bz;             /* '<S614>/cos(wt)' */
  int32_T systemEnable_e5;             /* '<S614>/sin(wt)' */
  int32_T systemEnable_bj;             /* '<S615>/cos(wt)' */
  int32_T systemEnable_dif;            /* '<S615>/sin(wt)' */
  int32_T systemEnable_k;              /* '<S616>/cos(wt)' */
  int32_T systemEnable_go;             /* '<S616>/sin(wt)' */
  int32_T systemEnable_fq;             /* '<S638>/cos(wt)' */
  int32_T systemEnable_kf;             /* '<S638>/sin(wt)' */
  int32_T systemEnable_ip;             /* '<S639>/cos(wt)' */
  int32_T systemEnable_g1;             /* '<S639>/sin(wt)' */
  int32_T systemEnable_e3;             /* '<S640>/cos(wt)' */
  int32_T systemEnable_bl;             /* '<S640>/sin(wt)' */
  int32_T systemEnable_pz;             /* '<S548>/cos(wt)' */
  int32_T systemEnable_avi;            /* '<S548>/sin(wt)' */
  int32_T systemEnable_ci;             /* '<S549>/cos(wt)' */
  int32_T systemEnable_bj1;            /* '<S549>/sin(wt)' */
  int32_T systemEnable_co;             /* '<S564>/cos(wt)' */
  int32_T systemEnable_pd;             /* '<S564>/sin(wt)' */
  int32_T systemEnable_i2;             /* '<S565>/cos(wt)' */
  int32_T systemEnable_ov;             /* '<S565>/sin(wt)' */
  int32_T systemEnable_mj;             /* '<S566>/cos(wt)' */
  int32_T systemEnable_nf;             /* '<S566>/sin(wt)' */
  int32_T systemEnable_mx;             /* '<S588>/cos(wt)' */
  int32_T systemEnable_mx0;            /* '<S588>/sin(wt)' */
  int32_T systemEnable_gl;             /* '<S589>/cos(wt)' */
  int32_T systemEnable_df;             /* '<S589>/sin(wt)' */
  int32_T systemEnable_h1;             /* '<S590>/cos(wt)' */
  int32_T systemEnable_iv;             /* '<S590>/sin(wt)' */
  int32_T systemEnable_jo;             /* '<S662>/cos(wt)' */
  int32_T systemEnable_fh;             /* '<S662>/sin(wt)' */
  int32_T systemEnable_lo;             /* '<S663>/cos(wt)' */
  int32_T systemEnable_jc;             /* '<S663>/sin(wt)' */
  int32_T systemEnable_pq;             /* '<S664>/cos(wt)' */
  int32_T systemEnable_n5;             /* '<S664>/sin(wt)' */
  int_T SFunction_IWORK;               /* '<S445>/S-Function' */
  int_T SFunction_IWORK_m;             /* '<S443>/S-Function' */
  int_T SFunction_IWORK_l;             /* '<S451>/S-Function' */
  int_T SFunction_IWORK_b;             /* '<S449>/S-Function' */
  int_T SFunction_IWORK_c;             /* '<S457>/S-Function' */
  int_T SFunction_IWORK_bh;            /* '<S455>/S-Function' */
  int_T SFunction_IWORK_e;             /* '<S469>/S-Function' */
  int_T SFunction_IWORK_a;             /* '<S467>/S-Function' */
  int_T SFunction_IWORK_at;            /* '<S475>/S-Function' */
  int_T SFunction_IWORK_n;             /* '<S473>/S-Function' */
  int_T SFunction_IWORK_li;            /* '<S481>/S-Function' */
  int_T SFunction_IWORK_k;             /* '<S479>/S-Function' */
  int_T SFunction_IWORK_j;             /* '<S913>/S-Function' */
  int_T SFunction_IWORK_lt;            /* '<S911>/S-Function' */
  int_T SFunction_IWORK_k0;            /* '<S919>/S-Function' */
  int_T SFunction_IWORK_mp;            /* '<S917>/S-Function' */
  int_T SFunction_IWORK_af;            /* '<S925>/S-Function' */
  int_T SFunction_IWORK_o;             /* '<S923>/S-Function' */
  int_T SFunction_IWORK_i;             /* '<S411>/S-Function' */
  int_T SFunction_IWORK_ci;            /* '<S413>/S-Function' */
  int_T SFunction_IWORK_h;             /* '<S415>/S-Function' */
  int_T SFunction_IWORK_os;            /* '<S417>/S-Function' */
  int_T SFunction_IWORK_f;             /* '<S425>/S-Function' */
  int_T SFunction_IWORK_ow;            /* '<S423>/S-Function' */
  int_T SFunction_IWORK_ny;            /* '<S431>/S-Function' */
  int_T SFunction_IWORK_my;            /* '<S429>/S-Function' */
  int_T SFunction_IWORK_d;             /* '<S495>/S-Function' */
  int_T SFunction_IWORK_d4;            /* '<S493>/S-Function' */
  int_T SFunction_IWORK_g;             /* '<S501>/S-Function' */
  int_T SFunction_IWORK_ip;            /* '<S499>/S-Function' */
  int_T SFunction_IWORK_gi;            /* '<S507>/S-Function' */
  int_T SFunction_IWORK_eq;            /* '<S505>/S-Function' */
  int_T SFunction_IWORK_ln;            /* '<S519>/S-Function' */
  int_T SFunction_IWORK_od;            /* '<S517>/S-Function' */
  int_T SFunction_IWORK_nf;            /* '<S525>/S-Function' */
  int_T SFunction_IWORK_hg;            /* '<S523>/S-Function' */
  int_T SFunction_IWORK_hn;            /* '<S531>/S-Function' */
  int_T SFunction_IWORK_av;            /* '<S529>/S-Function' */
  int_T SFunction_IWORK_cv;            /* '<S281>/S-Function' */
  int_T SFunction_IWORK_nz;            /* '<S312>/S-Function' */
  int_T SFunction_IWORK_g3;            /* '<S233>/S-Function' */
  int_T SFunction_IWORK_g2;            /* '<S547>/S-Function' */
  int_T SFunction_IWORK_nk;            /* '<S623>/S-Function' */
  int_T SFunction_IWORK_lg;            /* '<S625>/S-Function' */
  int_T SFunction_IWORK_cj;            /* '<S629>/S-Function' */
  int_T SFunction_IWORK_jj;            /* '<S631>/S-Function' */
  int_T SFunction_IWORK_e1;            /* '<S635>/S-Function' */
  int_T SFunction_IWORK_ll;            /* '<S637>/S-Function' */
  int_T SFunction_IWORK_k2;            /* '<S647>/S-Function' */
  int_T SFunction_IWORK_bk;            /* '<S649>/S-Function' */
  int_T SFunction_IWORK_mq;            /* '<S653>/S-Function' */
  int_T SFunction_IWORK_bo;            /* '<S655>/S-Function' */
  int_T SFunction_IWORK_o3;            /* '<S659>/S-Function' */
  int_T SFunction_IWORK_ht;            /* '<S661>/S-Function' */
  int_T SFunction_IWORK_ba;            /* '<S553>/S-Function' */
  int_T SFunction_IWORK_p;             /* '<S555>/S-Function' */
  int_T SFunction_IWORK_da;            /* '<S559>/S-Function' */
  int_T SFunction_IWORK_m1;            /* '<S561>/S-Function' */
  int_T SFunction_IWORK_bz;            /* '<S573>/S-Function' */
  int_T SFunction_IWORK_llq;           /* '<S575>/S-Function' */
  int_T SFunction_IWORK_ks;            /* '<S579>/S-Function' */
  int_T SFunction_IWORK_gl;            /* '<S581>/S-Function' */
  int_T SFunction_IWORK_ik;            /* '<S585>/S-Function' */
  int_T SFunction_IWORK_cd;            /* '<S587>/S-Function' */
  int_T SFunction_IWORK_a3;            /* '<S597>/S-Function' */
  int_T SFunction_IWORK_nzb;           /* '<S599>/S-Function' */
  int_T SFunction_IWORK_l3;            /* '<S603>/S-Function' */
  int_T SFunction_IWORK_gw;            /* '<S605>/S-Function' */
  int_T SFunction_IWORK_bq;            /* '<S609>/S-Function' */
  int_T SFunction_IWORK_oh;            /* '<S611>/S-Function' */
  int_T SFunction_IWORK_i5;            /* '<S671>/S-Function' */
  int_T SFunction_IWORK_nc;            /* '<S673>/S-Function' */
  int_T SFunction_IWORK_ed;            /* '<S677>/S-Function' */
  int_T SFunction_IWORK_avv;           /* '<S679>/S-Function' */
  int_T SFunction_IWORK_cq;            /* '<S683>/S-Function' */
  int_T SFunction_IWORK_dk;            /* '<S685>/S-Function' */
  int_T SFunction_IWORK_aa;            /* '<S545>/S-Function' */
  int_T SFunction_IWORK_f3;            /* '<S541>/S-Function' */
  int_T SFunction_IWORK_hj;            /* '<S543>/S-Function' */
  int_T SFunction_IWORK_kk;            /* '<S296>/S-Function' */
  int_T SFunction_IWORK_cl;            /* '<S299>/S-Function' */
  int_T SFunction_IWORK_kh;            /* '<S217>/S-Function' */
  int_T SFunction_IWORK_e3;            /* '<S220>/S-Function' */
  int_T SFunction_IWORK_pe;            /* '<S181>/S-Function' */
  int_T SFunction_IWORK_nq;            /* '<S163>/S-Function' */
  int_T SFunction_IWORK_mt;            /* '<S165>/S-Function' */
  int_T SFunction_IWORK_khs;           /* '<S153>/S-Function' */
  int_T SFunction_IWORK_pa;            /* '<S145>/S-Function' */
  int_T SFunction_IWORK_fd;            /* '<S123>/S-Function' */
  uint32_T m_bpIndex;                  /* '<S191>/1-D Lookup Table' */
  uint32_T m_bpIndex_c;                /* '<S175>/1-D Lookup Table' */
  uint32_T m_bpIndex_b;                /* '<S140>/1-D Lookup Table' */
  uint32_T m_bpIndex_k;                /* '<S107>/1-D Lookup Table' */
  uint32_T m_bpIndex_n;                /* '<S117>/1-D Lookup Table' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S205>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_g;/* '<S284>/Discrete-Time Integrator' */
  uint8_T Integ4_SYSTEM_ENABLE;        /* '<S444>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_e;      /* '<S442>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_c;      /* '<S450>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i;      /* '<S448>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_n;      /* '<S456>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_k;      /* '<S454>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_g;      /* '<S468>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ex;     /* '<S466>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_kl;     /* '<S474>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_l;      /* '<S472>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_k2;     /* '<S480>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_j;      /* '<S478>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_o;      /* '<S912>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_km;     /* '<S910>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_f;      /* '<S918>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_fy;     /* '<S916>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_n0;     /* '<S924>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_d;      /* '<S922>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_a;      /* '<S410>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_h;      /* '<S412>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_m;      /* '<S414>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_o0;     /* '<S416>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_b;      /* '<S424>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_en;     /* '<S422>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_a3;     /* '<S430>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_kb;     /* '<S428>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_cl;     /* '<S494>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i2;     /* '<S492>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bc;     /* '<S500>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_gs;     /* '<S498>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_jz;     /* '<S506>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bm;     /* '<S504>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ke;     /* '<S518>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_oh;     /* '<S516>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_lx;     /* '<S524>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_of;     /* '<S522>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_p;      /* '<S530>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_on;     /* '<S528>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ei;     /* '<S280>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_nm;     /* '<S310>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_nr;     /* '<S231>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_o3;     /* '<S546>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_og;     /* '<S622>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_gy;     /* '<S624>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_nt;     /* '<S628>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ax;     /* '<S630>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ob;     /* '<S634>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_pc;     /* '<S636>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ka;     /* '<S646>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ft;     /* '<S648>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_js;     /* '<S652>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_jw;     /* '<S654>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_h5;     /* '<S658>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_k5;     /* '<S660>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bj;     /* '<S552>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ba;     /* '<S554>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_gl;     /* '<S558>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_fs;     /* '<S560>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_cm;     /* '<S572>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_cc;     /* '<S574>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ix;     /* '<S578>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_jo;     /* '<S580>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bu;     /* '<S584>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i0;     /* '<S586>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_af;     /* '<S596>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ks;     /* '<S598>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_fu;     /* '<S602>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ns;     /* '<S604>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_or;     /* '<S608>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_a0;     /* '<S610>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ic;     /* '<S670>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bz;     /* '<S672>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ds;     /* '<S676>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ow;     /* '<S678>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i1;     /* '<S682>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_oo;     /* '<S684>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_co;     /* '<S544>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_pb;     /* '<S540>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bzw;    /* '<S542>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_oq;     /* '<S294>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ez;     /* '<S297>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ck;     /* '<S215>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ly;     /* '<S218>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ji;     /* '<S180>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_b4;     /* '<S162>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ke4;    /* '<S164>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_lr;     /* '<S152>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_gy2;    /* '<S144>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_jm;     /* '<S132>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_h0;     /* '<S134>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ae;     /* '<S122>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i3;     /* '<S96>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i05;    /* '<S94>/Integ4' */
  boolean_T LogicalOperator1;          /* '<S928>/Logical Operator1' */
  boolean_T Initial_FirstOutputTime;   /* '<S205>/Initial' */
  boolean_T Initial_FirstOutputTime_m; /* '<S284>/Initial' */
  boolean_T Signalgenerator_MODE;      /* '<S926>/Signal generator' */
  boolean_T HarmonicGenerator_MODE;    /* '<S926>/Harmonic Generator' */
  boolean_T AutomaticGainControl_MODE; /* '<S284>/Automatic Gain Control' */
  boolean_T AutomaticGainControl_MODE_p;/* '<S205>/Automatic Gain Control' */
  boolean_T Subsystem_MODE;            /* '<S82>/Subsystem' */
  boolean_T PWMgen_MODE;               /* '<S81>/PWM gen' */
  boolean_T PWMGen_MODE;               /* '<S80>/PWM Gen' */
  boolean_T PWMGen_MODE_e;             /* '<S79>/PWM Gen' */
  boolean_T PWMgenAveraging_MODE;      /* '<S78>/PWMgen - Averaging' */
  boolean_T Subsystem_MODE_n;          /* '<S77>/Subsystem' */
  boolean_T PWMgenAveraging_MODE_e;    /* '<S76>/PWMgen - Averaging' */
} DW;

/* Invariant block signals (default storage) */
typedef struct {
  const uint8_T Compare_p;             /* '<S264>/Compare' */
  const uint8_T Compare_o;             /* '<S343>/Compare' */
  const uint8_T Compare_py;            /* '<S258>/Compare' */
  const uint8_T Compare_nf;            /* '<S337>/Compare' */
  const uint8_T Compare_g;             /* '<S322>/Compare' */
  const uint8_T Compare_pj;            /* '<S316>/Compare' */
  const uint8_T Compare_k;             /* '<S243>/Compare' */
  const uint8_T Compare_a;             /* '<S237>/Compare' */
  const uint8_T Compare_i;             /* '<S303>/Compare' */
  const uint8_T Compare_au;            /* '<S224>/Compare' */
} ConstB;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [0 2 0])
   * Referenced by:
   *   '<S140>/1-D Lookup Table'
   *   '<S107>/1-D Lookup Table'
   *   '<S117>/1-D Lookup Table'
   *   '<S175>/1-D Lookup Table'
   *   '<S191>/1-D Lookup Table'
   */
  real_T pooled7[3];

  /* Pooled Parameter (Expression: [0 .5 1])
   * Referenced by:
   *   '<S140>/1-D Lookup Table'
   *   '<S107>/1-D Lookup Table'
   *   '<S117>/1-D Lookup Table'
   *   '<S175>/1-D Lookup Table'
   *   '<S191>/1-D Lookup Table'
   */
  real_T pooled8[3];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S346>/Discrete-Time Integrator'
   *   '<S928>/Discrete-Time Integrator'
   *   '<S94>/K1'
   *   '<S96>/K1'
   *   '<S122>/K1'
   *   '<S132>/K1'
   *   '<S134>/K1'
   *   '<S144>/K1'
   *   '<S152>/K1'
   *   '<S162>/K1'
   *   '<S164>/K1'
   *   '<S180>/K1'
   */
  real_T pooled12;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S95>/S-Function'
   *   '<S97>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S135>/S-Function'
   *   '<S145>/S-Function'
   *   '<S153>/S-Function'
   *   '<S163>/S-Function'
   *   '<S165>/S-Function'
   *   '<S181>/S-Function'
   */
  real_T pooled13[2];

  /* Pooled Parameter (Expression: MaxDelay)
   * Referenced by:
   *   '<S95>/S-Function'
   *   '<S97>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S135>/S-Function'
   *   '<S145>/S-Function'
   *   '<S153>/S-Function'
   *   '<S163>/S-Function'
   *   '<S165>/S-Function'
   *   '<S181>/S-Function'
   */
  real_T pooled14;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S411>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S417>/S-Function'
   *   '<S541>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S547>/S-Function'
   *   '<S423>/S-Function'
   *   '<S425>/S-Function'
   *   '<S429>/S-Function'
   *   '<S431>/S-Function'
   *   '<S911>/S-Function'
   *   '<S913>/S-Function'
   *   '<S917>/S-Function'
   *   '<S919>/S-Function'
   *   '<S923>/S-Function'
   *   '<S925>/S-Function'
   *   '<S95>/S-Function'
   *   '<S97>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S135>/S-Function'
   *   '<S145>/S-Function'
   *   '<S153>/S-Function'
   *   '<S163>/S-Function'
   *   '<S165>/S-Function'
   *   '<S181>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S455>/S-Function'
   *   '<S457>/S-Function'
   *   '<S467>/S-Function'
   *   '<S469>/S-Function'
   *   '<S473>/S-Function'
   *   '<S475>/S-Function'
   *   '<S479>/S-Function'
   *   '<S481>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S505>/S-Function'
   *   '<S507>/S-Function'
   *   '<S517>/S-Function'
   *   '<S519>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S553>/S-Function'
   *   '<S555>/S-Function'
   *   '<S559>/S-Function'
   *   '<S561>/S-Function'
   *   '<S671>/S-Function'
   *   '<S673>/S-Function'
   *   '<S677>/S-Function'
   *   '<S679>/S-Function'
   *   '<S683>/S-Function'
   *   '<S685>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S585>/S-Function'
   *   '<S587>/S-Function'
   *   '<S597>/S-Function'
   *   '<S599>/S-Function'
   *   '<S603>/S-Function'
   *   '<S605>/S-Function'
   *   '<S609>/S-Function'
   *   '<S611>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S635>/S-Function'
   *   '<S637>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S659>/S-Function'
   *   '<S661>/S-Function'
   */
  real_T pooled15[2];

  /* Pooled Parameter (Expression: Ts)
   * Referenced by:
   *   '<S411>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S417>/S-Function'
   *   '<S541>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S547>/S-Function'
   *   '<S423>/S-Function'
   *   '<S425>/S-Function'
   *   '<S429>/S-Function'
   *   '<S431>/S-Function'
   *   '<S911>/S-Function'
   *   '<S913>/S-Function'
   *   '<S917>/S-Function'
   *   '<S919>/S-Function'
   *   '<S923>/S-Function'
   *   '<S925>/S-Function'
   *   '<S95>/S-Function'
   *   '<S97>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S135>/S-Function'
   *   '<S145>/S-Function'
   *   '<S153>/S-Function'
   *   '<S163>/S-Function'
   *   '<S165>/S-Function'
   *   '<S181>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S455>/S-Function'
   *   '<S457>/S-Function'
   *   '<S467>/S-Function'
   *   '<S469>/S-Function'
   *   '<S473>/S-Function'
   *   '<S475>/S-Function'
   *   '<S479>/S-Function'
   *   '<S481>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S505>/S-Function'
   *   '<S507>/S-Function'
   *   '<S517>/S-Function'
   *   '<S519>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S553>/S-Function'
   *   '<S555>/S-Function'
   *   '<S559>/S-Function'
   *   '<S561>/S-Function'
   *   '<S671>/S-Function'
   *   '<S673>/S-Function'
   *   '<S677>/S-Function'
   *   '<S679>/S-Function'
   *   '<S683>/S-Function'
   *   '<S685>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S585>/S-Function'
   *   '<S587>/S-Function'
   *   '<S597>/S-Function'
   *   '<S599>/S-Function'
   *   '<S603>/S-Function'
   *   '<S605>/S-Function'
   *   '<S609>/S-Function'
   *   '<S611>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S635>/S-Function'
   *   '<S637>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S659>/S-Function'
   *   '<S661>/S-Function'
   */
  real_T pooled16;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S411>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S417>/S-Function'
   *   '<S541>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S547>/S-Function'
   *   '<S423>/S-Function'
   *   '<S425>/S-Function'
   *   '<S429>/S-Function'
   *   '<S431>/S-Function'
   *   '<S911>/S-Function'
   *   '<S913>/S-Function'
   *   '<S917>/S-Function'
   *   '<S919>/S-Function'
   *   '<S923>/S-Function'
   *   '<S925>/S-Function'
   *   '<S95>/S-Function'
   *   '<S97>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S135>/S-Function'
   *   '<S145>/S-Function'
   *   '<S153>/S-Function'
   *   '<S163>/S-Function'
   *   '<S165>/S-Function'
   *   '<S181>/S-Function'
   *   '<S281>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S455>/S-Function'
   *   '<S457>/S-Function'
   *   '<S467>/S-Function'
   *   '<S469>/S-Function'
   *   '<S473>/S-Function'
   *   '<S475>/S-Function'
   *   '<S479>/S-Function'
   *   '<S481>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S505>/S-Function'
   *   '<S507>/S-Function'
   *   '<S517>/S-Function'
   *   '<S519>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S553>/S-Function'
   *   '<S555>/S-Function'
   *   '<S559>/S-Function'
   *   '<S561>/S-Function'
   *   '<S671>/S-Function'
   *   '<S673>/S-Function'
   *   '<S677>/S-Function'
   *   '<S679>/S-Function'
   *   '<S683>/S-Function'
   *   '<S685>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S585>/S-Function'
   *   '<S587>/S-Function'
   *   '<S597>/S-Function'
   *   '<S599>/S-Function'
   *   '<S603>/S-Function'
   *   '<S605>/S-Function'
   *   '<S609>/S-Function'
   *   '<S611>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S635>/S-Function'
   *   '<S637>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S659>/S-Function'
   *   '<S661>/S-Function'
   *   '<S233>/S-Function'
   *   '<S312>/S-Function'
   *   '<S217>/S-Function'
   *   '<S220>/S-Function'
   *   '<S296>/S-Function'
   *   '<S299>/S-Function'
   */
  real_T pooled17[2];

  /* Pooled Parameter (Expression: InitialValue)
   * Referenced by:
   *   '<S411>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S417>/S-Function'
   *   '<S541>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S547>/S-Function'
   *   '<S423>/S-Function'
   *   '<S425>/S-Function'
   *   '<S429>/S-Function'
   *   '<S431>/S-Function'
   *   '<S911>/S-Function'
   *   '<S913>/S-Function'
   *   '<S917>/S-Function'
   *   '<S919>/S-Function'
   *   '<S923>/S-Function'
   *   '<S925>/S-Function'
   *   '<S95>/S-Function'
   *   '<S97>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S135>/S-Function'
   *   '<S145>/S-Function'
   *   '<S153>/S-Function'
   *   '<S163>/S-Function'
   *   '<S165>/S-Function'
   *   '<S181>/S-Function'
   *   '<S281>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S455>/S-Function'
   *   '<S457>/S-Function'
   *   '<S467>/S-Function'
   *   '<S469>/S-Function'
   *   '<S473>/S-Function'
   *   '<S475>/S-Function'
   *   '<S479>/S-Function'
   *   '<S481>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S505>/S-Function'
   *   '<S507>/S-Function'
   *   '<S517>/S-Function'
   *   '<S519>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S553>/S-Function'
   *   '<S555>/S-Function'
   *   '<S559>/S-Function'
   *   '<S561>/S-Function'
   *   '<S671>/S-Function'
   *   '<S673>/S-Function'
   *   '<S677>/S-Function'
   *   '<S679>/S-Function'
   *   '<S683>/S-Function'
   *   '<S685>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S585>/S-Function'
   *   '<S587>/S-Function'
   *   '<S597>/S-Function'
   *   '<S599>/S-Function'
   *   '<S603>/S-Function'
   *   '<S605>/S-Function'
   *   '<S609>/S-Function'
   *   '<S611>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S635>/S-Function'
   *   '<S637>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S659>/S-Function'
   *   '<S661>/S-Function'
   *   '<S233>/S-Function'
   *   '<S312>/S-Function'
   *   '<S217>/S-Function'
   *   '<S220>/S-Function'
   *   '<S296>/S-Function'
   *   '<S299>/S-Function'
   */
  real_T pooled18;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S411>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S417>/S-Function'
   *   '<S541>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S547>/S-Function'
   *   '<S423>/S-Function'
   *   '<S425>/S-Function'
   *   '<S429>/S-Function'
   *   '<S431>/S-Function'
   *   '<S911>/S-Function'
   *   '<S913>/S-Function'
   *   '<S917>/S-Function'
   *   '<S919>/S-Function'
   *   '<S923>/S-Function'
   *   '<S925>/S-Function'
   *   '<S95>/S-Function'
   *   '<S97>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S135>/S-Function'
   *   '<S145>/S-Function'
   *   '<S153>/S-Function'
   *   '<S163>/S-Function'
   *   '<S165>/S-Function'
   *   '<S181>/S-Function'
   *   '<S281>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S455>/S-Function'
   *   '<S457>/S-Function'
   *   '<S467>/S-Function'
   *   '<S469>/S-Function'
   *   '<S473>/S-Function'
   *   '<S475>/S-Function'
   *   '<S479>/S-Function'
   *   '<S481>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S505>/S-Function'
   *   '<S507>/S-Function'
   *   '<S517>/S-Function'
   *   '<S519>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S553>/S-Function'
   *   '<S555>/S-Function'
   *   '<S559>/S-Function'
   *   '<S561>/S-Function'
   *   '<S671>/S-Function'
   *   '<S673>/S-Function'
   *   '<S677>/S-Function'
   *   '<S679>/S-Function'
   *   '<S683>/S-Function'
   *   '<S685>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S585>/S-Function'
   *   '<S587>/S-Function'
   *   '<S597>/S-Function'
   *   '<S599>/S-Function'
   *   '<S603>/S-Function'
   *   '<S605>/S-Function'
   *   '<S609>/S-Function'
   *   '<S611>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S635>/S-Function'
   *   '<S637>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S659>/S-Function'
   *   '<S661>/S-Function'
   *   '<S233>/S-Function'
   *   '<S312>/S-Function'
   *   '<S217>/S-Function'
   *   '<S220>/S-Function'
   *   '<S296>/S-Function'
   *   '<S299>/S-Function'
   */
  real_T pooled19[2];

  /* Pooled Parameter (Expression: DFT)
   * Referenced by:
   *   '<S411>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S417>/S-Function'
   *   '<S541>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S547>/S-Function'
   *   '<S423>/S-Function'
   *   '<S425>/S-Function'
   *   '<S429>/S-Function'
   *   '<S431>/S-Function'
   *   '<S911>/S-Function'
   *   '<S913>/S-Function'
   *   '<S917>/S-Function'
   *   '<S919>/S-Function'
   *   '<S923>/S-Function'
   *   '<S925>/S-Function'
   *   '<S95>/S-Function'
   *   '<S97>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S135>/S-Function'
   *   '<S145>/S-Function'
   *   '<S153>/S-Function'
   *   '<S163>/S-Function'
   *   '<S165>/S-Function'
   *   '<S181>/S-Function'
   *   '<S281>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S455>/S-Function'
   *   '<S457>/S-Function'
   *   '<S467>/S-Function'
   *   '<S469>/S-Function'
   *   '<S473>/S-Function'
   *   '<S475>/S-Function'
   *   '<S479>/S-Function'
   *   '<S481>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S505>/S-Function'
   *   '<S507>/S-Function'
   *   '<S517>/S-Function'
   *   '<S519>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S553>/S-Function'
   *   '<S555>/S-Function'
   *   '<S559>/S-Function'
   *   '<S561>/S-Function'
   *   '<S671>/S-Function'
   *   '<S673>/S-Function'
   *   '<S677>/S-Function'
   *   '<S679>/S-Function'
   *   '<S683>/S-Function'
   *   '<S685>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S585>/S-Function'
   *   '<S587>/S-Function'
   *   '<S597>/S-Function'
   *   '<S599>/S-Function'
   *   '<S603>/S-Function'
   *   '<S605>/S-Function'
   *   '<S609>/S-Function'
   *   '<S611>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S635>/S-Function'
   *   '<S637>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S659>/S-Function'
   *   '<S661>/S-Function'
   *   '<S233>/S-Function'
   *   '<S312>/S-Function'
   *   '<S217>/S-Function'
   *   '<S220>/S-Function'
   *   '<S296>/S-Function'
   *   '<S299>/S-Function'
   */
  real_T pooled20;

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S954>/State-Space'
   *   '<S959>/SwitchCurrents'
   *   '<S136>/S'
   *   '<S259>/dq'
   *   '<S260>/dq'
   *   '<S265>/alpha_beta'
   *   '<S266>/alpha_beta'
   *   '<S338>/dq'
   *   '<S339>/dq'
   *   '<S344>/alpha_beta'
   *   '<S345>/alpha_beta'
   *   '<S244>/dq'
   *   '<S245>/dq'
   *   '<S323>/dq'
   *   '<S324>/dq'
   *   '<S238>/dq'
   *   '<S239>/dq'
   *   '<S317>/dq'
   *   '<S318>/dq'
   *   '<S225>/dq'
   *   '<S226>/dq'
   *   '<S304>/dq'
   *   '<S305>/dq'
   */
  real_T pooled23[2];

  /* Pooled Parameter (Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ] )
   * Referenced by:
   *   '<S256>/Gain3'
   *   '<S335>/Gain3'
   *   '<S241>/Gain3'
   *   '<S320>/Gain3'
   *   '<S235>/Gain3'
   *   '<S314>/Gain3'
   *   '<S222>/Gain3'
   *   '<S301>/Gain3'
   */
  real_T pooled30[9];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S233>/S-Function'
   *   '<S312>/S-Function'
   *   '<S217>/S-Function'
   *   '<S220>/S-Function'
   *   '<S296>/S-Function'
   *   '<S299>/S-Function'
   */
  real_T pooled35[2];

  /* Pooled Parameter (Expression: MaxDelay)
   * Referenced by:
   *   '<S233>/S-Function'
   *   '<S312>/S-Function'
   *   '<S217>/S-Function'
   *   '<S220>/S-Function'
   *   '<S296>/S-Function'
   *   '<S299>/S-Function'
   */
  real_T pooled36;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S281>/S-Function'
   *   '<S233>/S-Function'
   *   '<S312>/S-Function'
   *   '<S217>/S-Function'
   *   '<S220>/S-Function'
   *   '<S296>/S-Function'
   *   '<S299>/S-Function'
   */
  real_T pooled37[2];

  /* Pooled Parameter (Expression: Ts)
   * Referenced by:
   *   '<S281>/S-Function'
   *   '<S233>/S-Function'
   *   '<S312>/S-Function'
   *   '<S217>/S-Function'
   *   '<S220>/S-Function'
   *   '<S296>/S-Function'
   *   '<S299>/S-Function'
   */
  real_T pooled38;

  /* Expression: S.A
   * Referenced by: '<S954>/State-Space'
   */
  real_T StateSpace_AS_param_h[4];

  /* Expression: S.B
   * Referenced by: '<S954>/State-Space'
   */
  real_T StateSpace_BS_param_k[12];

  /* Expression: S.C
   * Referenced by: '<S954>/State-Space'
   */
  real_T StateSpace_CS_param_i[12];

  /* Expression: S.D
   * Referenced by: '<S954>/State-Space'
   */
  real_T StateSpace_DS_param_f[36];

  /* Expression: zeros(24,1)
   * Referenced by: '<S963>/SwitchCurrents'
   */
  real_T SwitchCurrents_Value[24];

  /* Pooled Parameter (Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ] )
   * Referenced by:
   *   '<S261>/Gain3'
   *   '<S340>/Gain3'
   */
  real_T pooled59[9];

  /* Expression: S.A
   * Referenced by: '<S955>/State-Space'
   */
  real_T StateSpace_AS_param_b[1444];

  /* Expression: S.B
   * Referenced by: '<S955>/State-Space'
   */
  real_T StateSpace_BS_param_m[3610];

  /* Expression: S.C
   * Referenced by: '<S955>/State-Space'
   */
  real_T StateSpace_CS_param_f[3496];

  /* Expression: S.D
   * Referenced by: '<S955>/State-Space'
   */
  real_T StateSpace_DS_param_e[8740];

  /* Expression: S.x0
   * Referenced by: '<S955>/State-Space'
   */
  real_T StateSpace_X0_param_c[38];

  /* Pooled Parameter (Expression: sps.Delay)
   * Referenced by:
   *   '<S410>/K1'
   *   '<S412>/K1'
   *   '<S414>/K1'
   *   '<S540>/K1'
   *   '<S542>/K1'
   *   '<S544>/K1'
   *   '<S422>/K1'
   *   '<S424>/K1'
   *   '<S428>/K1'
   *   '<S430>/K1'
   *   '<S910>/K1'
   *   '<S912>/K1'
   *   '<S916>/K1'
   *   '<S918>/K1'
   *   '<S922>/K1'
   *   '<S924>/K1'
   *   '<S442>/K1'
   *   '<S444>/K1'
   *   '<S448>/K1'
   *   '<S450>/K1'
   *   '<S454>/K1'
   *   '<S456>/K1'
   *   '<S466>/K1'
   *   '<S468>/K1'
   *   '<S472>/K1'
   *   '<S474>/K1'
   *   '<S478>/K1'
   *   '<S480>/K1'
   *   '<S492>/K1'
   *   '<S494>/K1'
   *   '<S498>/K1'
   *   '<S500>/K1'
   *   '<S504>/K1'
   *   '<S506>/K1'
   *   '<S516>/K1'
   *   '<S518>/K1'
   *   '<S522>/K1'
   *   '<S524>/K1'
   *   '<S528>/K1'
   *   '<S530>/K1'
   *   '<S552>/K1'
   *   '<S554>/K1'
   *   '<S558>/K1'
   *   '<S560>/K1'
   *   '<S670>/K1'
   *   '<S672>/K1'
   *   '<S676>/K1'
   *   '<S678>/K1'
   *   '<S682>/K1'
   *   '<S684>/K1'
   *   '<S572>/K1'
   *   '<S574>/K1'
   *   '<S578>/K1'
   *   '<S580>/K1'
   *   '<S584>/K1'
   *   '<S586>/K1'
   *   '<S596>/K1'
   *   '<S598>/K1'
   *   '<S602>/K1'
   *   '<S604>/K1'
   *   '<S608>/K1'
   *   '<S610>/K1'
   *   '<S622>/K1'
   *   '<S624>/K1'
   *   '<S628>/K1'
   *   '<S630>/K1'
   *   '<S634>/K1'
   *   '<S636>/K1'
   *   '<S646>/K1'
   *   '<S648>/K1'
   *   '<S652>/K1'
   *   '<S654>/K1'
   *   '<S658>/K1'
   *   '<S660>/K1'
   */
  real_T pooled68;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S411>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S541>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S423>/S-Function'
   *   '<S425>/S-Function'
   *   '<S429>/S-Function'
   *   '<S431>/S-Function'
   *   '<S911>/S-Function'
   *   '<S913>/S-Function'
   *   '<S917>/S-Function'
   *   '<S919>/S-Function'
   *   '<S923>/S-Function'
   *   '<S925>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S455>/S-Function'
   *   '<S457>/S-Function'
   *   '<S467>/S-Function'
   *   '<S469>/S-Function'
   *   '<S473>/S-Function'
   *   '<S475>/S-Function'
   *   '<S479>/S-Function'
   *   '<S481>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S505>/S-Function'
   *   '<S507>/S-Function'
   *   '<S517>/S-Function'
   *   '<S519>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S553>/S-Function'
   *   '<S555>/S-Function'
   *   '<S559>/S-Function'
   *   '<S561>/S-Function'
   *   '<S671>/S-Function'
   *   '<S673>/S-Function'
   *   '<S677>/S-Function'
   *   '<S679>/S-Function'
   *   '<S683>/S-Function'
   *   '<S685>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S585>/S-Function'
   *   '<S587>/S-Function'
   *   '<S597>/S-Function'
   *   '<S599>/S-Function'
   *   '<S603>/S-Function'
   *   '<S605>/S-Function'
   *   '<S609>/S-Function'
   *   '<S611>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S635>/S-Function'
   *   '<S637>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S659>/S-Function'
   *   '<S661>/S-Function'
   */
  real_T pooled69[2];

  /* Pooled Parameter (Expression: MaxDelay)
   * Referenced by:
   *   '<S411>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S541>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S423>/S-Function'
   *   '<S425>/S-Function'
   *   '<S429>/S-Function'
   *   '<S431>/S-Function'
   *   '<S911>/S-Function'
   *   '<S913>/S-Function'
   *   '<S917>/S-Function'
   *   '<S919>/S-Function'
   *   '<S923>/S-Function'
   *   '<S925>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S455>/S-Function'
   *   '<S457>/S-Function'
   *   '<S467>/S-Function'
   *   '<S469>/S-Function'
   *   '<S473>/S-Function'
   *   '<S475>/S-Function'
   *   '<S479>/S-Function'
   *   '<S481>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S505>/S-Function'
   *   '<S507>/S-Function'
   *   '<S517>/S-Function'
   *   '<S519>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S553>/S-Function'
   *   '<S555>/S-Function'
   *   '<S559>/S-Function'
   *   '<S561>/S-Function'
   *   '<S671>/S-Function'
   *   '<S673>/S-Function'
   *   '<S677>/S-Function'
   *   '<S679>/S-Function'
   *   '<S683>/S-Function'
   *   '<S685>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S585>/S-Function'
   *   '<S587>/S-Function'
   *   '<S597>/S-Function'
   *   '<S599>/S-Function'
   *   '<S603>/S-Function'
   *   '<S605>/S-Function'
   *   '<S609>/S-Function'
   *   '<S611>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S635>/S-Function'
   *   '<S637>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S659>/S-Function'
   *   '<S661>/S-Function'
   */
  real_T pooled70;

  /* Pooled Parameter (Expression: sps.Delay)
   * Referenced by:
   *   '<S416>/K1'
   *   '<S546>/K1'
   */
  real_T pooled78;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S417>/S-Function'
   *   '<S547>/S-Function'
   */
  real_T pooled79[2];

  /* Pooled Parameter (Expression: MaxDelay)
   * Referenced by:
   *   '<S417>/S-Function'
   *   '<S547>/S-Function'
   */
  real_T pooled80;

  /* Expression: sps.Delay
   * Referenced by: '<S280>/K1'
   */
  real_T K1_Value;

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S281>/S-Function'
   */
  real_T SFunction_P1_Size[2];

  /* Expression: MaxDelay
   * Referenced by: '<S281>/S-Function'
   */
  real_T SFunction_P1;
} ConstP;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Pgrid;                        /* '<Root>/Out1' */
  real_T Pbuck;                        /* '<Root>/Out2' */
  real_T Pboost;                       /* '<Root>/Out3' */
  real_T Pmotor;                       /* '<Root>/Out4' */
  real_T PFB;                          /* '<Root>/Out5' */
  real_T PHB;                          /* '<Root>/Out6' */
  real_T PQstat[2];                    /* '<Root>/Out7' */
  real_T VHB;                          /* '<Root>/Out8' */
  real_T IHB;                          /* '<Root>/Out9' */
  real_T QHB;                          /* '<Root>/Out10' */
  real_T _3LId[2];                      /* '<Root>/Out11' */
  real_T _3LIq;                         /* '<Root>/Out12' */
  real_T _3Lm;                          /* '<Root>/Out13' */
  real_T Vsec_3L_LLA;                  /* '<Root>/Out14' */
  real_T Vsec_3L_LLB;                  /* '<Root>/Out15' */
  real_T Vsec_3L_LLC;                  /* '<Root>/Out16' */
  real_T Vdc_3L;                       /* '<Root>/Out17' */
  real_T VdcP_3L;                      /* '<Root>/Out18' */
  real_T VdcM_3L;                      /* '<Root>/Out19' */
  real_T Vgrid[3];                     /* '<Root>/Out20' */
  real_T Igrid[3];                     /* '<Root>/Out21' */
  real_T V1grid_pu;                    /* '<Root>/Out22' */
  real_T Qgrid;                        /* '<Root>/Out23' */
  real_T Vbuck;                        /* '<Root>/Out24' */
  real_T Ibuck;                        /* '<Root>/Out25' */
  real_T statId[2];                    /* '<Root>/Out26' */
  real_T statIq[2];                    /* '<Root>/Out27' */
  real_T statm;                        /* '<Root>/Out28' */
  real_T Vdc_stat;                     /* '<Root>/Out29' */
  real_T Vstat[3];                     /* '<Root>/Out30' */
  real_T Istat[3];                     /* '<Root>/Out31' */
  real_T Vboost;                       /* '<Root>/Out32' */
  real_T Iboost;                       /* '<Root>/Out33' */
  real_T Imotor[2];                    /* '<Root>/Out34' */
  real_T D_motor;                      /* '<Root>/Out35' */
  real_T w_motor;                      /* '<Root>/Out36' */
  real_T Vmotor;                       /* '<Root>/Out37' */
  real_T Imotor_m;                     /* '<Root>/Out38' */
  real_T VFB;                          /* '<Root>/Out39' */
  real_T IFB;                          /* '<Root>/Out40' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  struct SimStruct_tag * *childSfunctions;
  const char_T * volatile errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[93];
    SimStruct *childSFunctionPtrs[93];
    struct _ssBlkInfo2 blkInfo2[93];
    struct _ssSFcnModelMethods2 methods2[93];
    struct _ssSFcnModelMethods3 methods3[93];
    struct _ssSFcnModelMethods4 methods4[93];
    struct _ssStatesInfo2 statesInfo2[93];
    ssPeriodicStatesInfo periodicStatesInfo[93];
    struct _ssPortInfo2 inputOutputPortInfo2[93];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[3];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[3];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[3];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[3];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn26;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn27;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn28;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn29;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn30;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn31;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn32;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn33;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn34;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn35;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn36;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn37;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn38;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn39;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn40;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn41;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn42;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn43;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn44;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn45;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn46;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn47;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn48;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn49;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn50;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn51;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn52;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn53;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn54;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn55;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn56;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn57;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn58;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn59;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn60;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn61;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn62;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn63;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn64;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn65;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn66;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn67;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn68;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn69;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn70;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn71;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn72;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn73;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn74;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn75;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn76;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn77;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn78;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn79;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn80;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn81;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn82;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn83;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn84;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn85;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn86;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn87;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn88;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn89;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn90;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn91;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn92;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T stepSize1;
    struct {
      uint8_T TID0_1;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;
extern const ConstB rtConstB;          /* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Model entry point functions */
extern void power_converters_switching_function_initialize(void);
extern void power_converters_switching_function_step0(void);
extern void power_converters_switching_function_step1(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S54>/0 1' : Unused code path elimination
 * Block '<S54>/Gain' : Unused code path elimination
 * Block '<S54>/Saturation' : Unused code path elimination
 * Block '<S54>/Sum' : Unused code path elimination
 * Block '<S54>/Switch' : Unused code path elimination
 * Block '<S72>/0 1' : Unused code path elimination
 * Block '<S72>/Gain' : Unused code path elimination
 * Block '<S72>/Saturation' : Unused code path elimination
 * Block '<S72>/Sum' : Unused code path elimination
 * Block '<S72>/Switch' : Unused code path elimination
 * Block '<S192>/PI_Ireg' : Unused code path elimination
 * Block '<S211>/Rad->Deg.' : Unused code path elimination
 * Block '<S267>/PI_Ireg' : Unused code path elimination
 * Block '<S290>/Rad->Deg.' : Unused code path elimination
 * Block '<S381>/0 1' : Unused code path elimination
 * Block '<S381>/Gain' : Unused code path elimination
 * Block '<S381>/Saturation' : Unused code path elimination
 * Block '<S381>/Sum' : Unused code path elimination
 * Block '<S381>/Switch' : Unused code path elimination
 * Block '<S383>/0 1' : Unused code path elimination
 * Block '<S383>/Gain' : Unused code path elimination
 * Block '<S383>/Saturation' : Unused code path elimination
 * Block '<S383>/Sum' : Unused code path elimination
 * Block '<S383>/Switch' : Unused code path elimination
 * Block '<S405>/0 1' : Unused code path elimination
 * Block '<S405>/Gain' : Unused code path elimination
 * Block '<S405>/Saturation' : Unused code path elimination
 * Block '<S405>/Sum' : Unused code path elimination
 * Block '<S405>/Switch' : Unused code path elimination
 * Block '<S407>/0 1' : Unused code path elimination
 * Block '<S407>/Gain' : Unused code path elimination
 * Block '<S407>/Saturation' : Unused code path elimination
 * Block '<S407>/Sum' : Unused code path elimination
 * Block '<S407>/Switch' : Unused code path elimination
 * Block '<S23>/3L_Rectifier_Control' : Unused code path elimination
 * Block '<S23>/All_Power's (W)' : Unused code path elimination
 * Block '<S23>/Boost' : Unused code path elimination
 * Block '<S23>/Buck' : Unused code path elimination
 * Block '<S23>/FB' : Unused code path elimination
 * Block '<S23>/HB' : Unused code path elimination
 * Block '<S540>/Digital  Clock' : Unused code path elimination
 * Block '<S540>/Gain' : Unused code path elimination
 * Block '<S540>/Gain1' : Unused code path elimination
 * Block '<S540>/K2' : Unused code path elimination
 * Block '<S540>/Product' : Unused code path elimination
 * Block '<S540>/Relational Operator' : Unused code path elimination
 * Block '<S540>/Sum1' : Unused code path elimination
 * Block '<S540>/Sum5' : Unused code path elimination
 * Block '<S540>/Sum7' : Unused code path elimination
 * Block '<S540>/Switch' : Unused code path elimination
 * Block '<S540>/Unit Delay' : Unused code path elimination
 * Block '<S540>/Unit Delay1' : Unused code path elimination
 * Block '<S542>/Digital  Clock' : Unused code path elimination
 * Block '<S542>/Gain' : Unused code path elimination
 * Block '<S542>/Gain1' : Unused code path elimination
 * Block '<S542>/K2' : Unused code path elimination
 * Block '<S542>/Product' : Unused code path elimination
 * Block '<S542>/Relational Operator' : Unused code path elimination
 * Block '<S542>/Sum1' : Unused code path elimination
 * Block '<S542>/Sum5' : Unused code path elimination
 * Block '<S542>/Sum7' : Unused code path elimination
 * Block '<S542>/Switch' : Unused code path elimination
 * Block '<S542>/Unit Delay' : Unused code path elimination
 * Block '<S542>/Unit Delay1' : Unused code path elimination
 * Block '<S544>/Digital  Clock' : Unused code path elimination
 * Block '<S544>/Gain' : Unused code path elimination
 * Block '<S544>/Gain1' : Unused code path elimination
 * Block '<S544>/K2' : Unused code path elimination
 * Block '<S544>/Product' : Unused code path elimination
 * Block '<S544>/Relational Operator' : Unused code path elimination
 * Block '<S544>/Sum1' : Unused code path elimination
 * Block '<S544>/Sum5' : Unused code path elimination
 * Block '<S544>/Sum7' : Unused code path elimination
 * Block '<S544>/Switch' : Unused code path elimination
 * Block '<S544>/Unit Delay' : Unused code path elimination
 * Block '<S544>/Unit Delay1' : Unused code path elimination
 * Block '<S546>/Digital  Clock' : Unused code path elimination
 * Block '<S546>/Gain' : Unused code path elimination
 * Block '<S546>/Gain1' : Unused code path elimination
 * Block '<S546>/K2' : Unused code path elimination
 * Block '<S546>/Product' : Unused code path elimination
 * Block '<S546>/Relational Operator' : Unused code path elimination
 * Block '<S546>/Sum1' : Unused code path elimination
 * Block '<S546>/Sum5' : Unused code path elimination
 * Block '<S546>/Sum7' : Unused code path elimination
 * Block '<S546>/Switch' : Unused code path elimination
 * Block '<S546>/Unit Delay' : Unused code path elimination
 * Block '<S546>/Unit Delay1' : Unused code path elimination
 * Block '<S23>/PQgrid' : Unused code path elimination
 * Block '<S23>/PQstat' : Unused code path elimination
 * Block '<S536>/Deg->Rad' : Unused code path elimination
 * Block '<S548>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S552>/Digital  Clock' : Unused code path elimination
 * Block '<S552>/Gain' : Unused code path elimination
 * Block '<S552>/Gain1' : Unused code path elimination
 * Block '<S552>/K2' : Unused code path elimination
 * Block '<S552>/Product' : Unused code path elimination
 * Block '<S552>/Relational Operator' : Unused code path elimination
 * Block '<S552>/Sum1' : Unused code path elimination
 * Block '<S552>/Sum5' : Unused code path elimination
 * Block '<S552>/Sum7' : Unused code path elimination
 * Block '<S552>/Switch' : Unused code path elimination
 * Block '<S552>/Unit Delay' : Unused code path elimination
 * Block '<S552>/Unit Delay1' : Unused code path elimination
 * Block '<S554>/Digital  Clock' : Unused code path elimination
 * Block '<S554>/Gain' : Unused code path elimination
 * Block '<S554>/Gain1' : Unused code path elimination
 * Block '<S554>/K2' : Unused code path elimination
 * Block '<S554>/Product' : Unused code path elimination
 * Block '<S554>/Relational Operator' : Unused code path elimination
 * Block '<S554>/Sum1' : Unused code path elimination
 * Block '<S554>/Sum5' : Unused code path elimination
 * Block '<S554>/Sum7' : Unused code path elimination
 * Block '<S554>/Switch' : Unused code path elimination
 * Block '<S554>/Unit Delay' : Unused code path elimination
 * Block '<S554>/Unit Delay1' : Unused code path elimination
 * Block '<S548>/Rad->Deg.' : Unused code path elimination
 * Block '<S548>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S549>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S558>/Digital  Clock' : Unused code path elimination
 * Block '<S558>/Gain' : Unused code path elimination
 * Block '<S558>/Gain1' : Unused code path elimination
 * Block '<S558>/K2' : Unused code path elimination
 * Block '<S558>/Product' : Unused code path elimination
 * Block '<S558>/Relational Operator' : Unused code path elimination
 * Block '<S558>/Sum1' : Unused code path elimination
 * Block '<S558>/Sum5' : Unused code path elimination
 * Block '<S558>/Sum7' : Unused code path elimination
 * Block '<S558>/Switch' : Unused code path elimination
 * Block '<S558>/Unit Delay' : Unused code path elimination
 * Block '<S558>/Unit Delay1' : Unused code path elimination
 * Block '<S560>/Digital  Clock' : Unused code path elimination
 * Block '<S560>/Gain' : Unused code path elimination
 * Block '<S560>/Gain1' : Unused code path elimination
 * Block '<S560>/K2' : Unused code path elimination
 * Block '<S560>/Product' : Unused code path elimination
 * Block '<S560>/Relational Operator' : Unused code path elimination
 * Block '<S560>/Sum1' : Unused code path elimination
 * Block '<S560>/Sum5' : Unused code path elimination
 * Block '<S560>/Sum7' : Unused code path elimination
 * Block '<S560>/Switch' : Unused code path elimination
 * Block '<S560>/Unit Delay' : Unused code path elimination
 * Block '<S560>/Unit Delay1' : Unused code path elimination
 * Block '<S549>/Rad->Deg.' : Unused code path elimination
 * Block '<S549>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S536>/Gain1' : Unused code path elimination
 * Block '<S536>/Product' : Unused code path elimination
 * Block '<S536>/Product1' : Unused code path elimination
 * Block '<S536>/Product3' : Unused code path elimination
 * Block '<S536>/Sum' : Unused code path elimination
 * Block '<S536>/Trigonometric Function2' : Unused code path elimination
 * Block '<S537>/Deg->Rad' : Unused code path elimination
 * Block '<S537>/Gain1' : Unused code path elimination
 * Block '<S537>/Product' : Unused code path elimination
 * Block '<S537>/Product1' : Unused code path elimination
 * Block '<S537>/Product3' : Unused code path elimination
 * Block '<S562>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S564>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S572>/Digital  Clock' : Unused code path elimination
 * Block '<S572>/Gain' : Unused code path elimination
 * Block '<S572>/Gain1' : Unused code path elimination
 * Block '<S572>/K2' : Unused code path elimination
 * Block '<S572>/Product' : Unused code path elimination
 * Block '<S572>/Relational Operator' : Unused code path elimination
 * Block '<S572>/Sum1' : Unused code path elimination
 * Block '<S572>/Sum5' : Unused code path elimination
 * Block '<S572>/Sum7' : Unused code path elimination
 * Block '<S572>/Switch' : Unused code path elimination
 * Block '<S572>/Unit Delay' : Unused code path elimination
 * Block '<S572>/Unit Delay1' : Unused code path elimination
 * Block '<S574>/Digital  Clock' : Unused code path elimination
 * Block '<S574>/Gain' : Unused code path elimination
 * Block '<S574>/Gain1' : Unused code path elimination
 * Block '<S574>/K2' : Unused code path elimination
 * Block '<S574>/Product' : Unused code path elimination
 * Block '<S574>/Relational Operator' : Unused code path elimination
 * Block '<S574>/Sum1' : Unused code path elimination
 * Block '<S574>/Sum5' : Unused code path elimination
 * Block '<S574>/Sum7' : Unused code path elimination
 * Block '<S574>/Switch' : Unused code path elimination
 * Block '<S574>/Unit Delay' : Unused code path elimination
 * Block '<S574>/Unit Delay1' : Unused code path elimination
 * Block '<S564>/Rad->Deg.' : Unused code path elimination
 * Block '<S564>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S565>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S578>/Digital  Clock' : Unused code path elimination
 * Block '<S578>/Gain' : Unused code path elimination
 * Block '<S578>/Gain1' : Unused code path elimination
 * Block '<S578>/K2' : Unused code path elimination
 * Block '<S578>/Product' : Unused code path elimination
 * Block '<S578>/Relational Operator' : Unused code path elimination
 * Block '<S578>/Sum1' : Unused code path elimination
 * Block '<S578>/Sum5' : Unused code path elimination
 * Block '<S578>/Sum7' : Unused code path elimination
 * Block '<S578>/Switch' : Unused code path elimination
 * Block '<S578>/Unit Delay' : Unused code path elimination
 * Block '<S578>/Unit Delay1' : Unused code path elimination
 * Block '<S580>/Digital  Clock' : Unused code path elimination
 * Block '<S580>/Gain' : Unused code path elimination
 * Block '<S580>/Gain1' : Unused code path elimination
 * Block '<S580>/K2' : Unused code path elimination
 * Block '<S580>/Product' : Unused code path elimination
 * Block '<S580>/Relational Operator' : Unused code path elimination
 * Block '<S580>/Sum1' : Unused code path elimination
 * Block '<S580>/Sum5' : Unused code path elimination
 * Block '<S580>/Sum7' : Unused code path elimination
 * Block '<S580>/Switch' : Unused code path elimination
 * Block '<S580>/Unit Delay' : Unused code path elimination
 * Block '<S580>/Unit Delay1' : Unused code path elimination
 * Block '<S565>/Rad->Deg.' : Unused code path elimination
 * Block '<S565>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S566>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S584>/Digital  Clock' : Unused code path elimination
 * Block '<S584>/Gain' : Unused code path elimination
 * Block '<S584>/Gain1' : Unused code path elimination
 * Block '<S584>/K2' : Unused code path elimination
 * Block '<S584>/Product' : Unused code path elimination
 * Block '<S584>/Relational Operator' : Unused code path elimination
 * Block '<S584>/Sum1' : Unused code path elimination
 * Block '<S584>/Sum5' : Unused code path elimination
 * Block '<S584>/Sum7' : Unused code path elimination
 * Block '<S584>/Switch' : Unused code path elimination
 * Block '<S584>/Unit Delay' : Unused code path elimination
 * Block '<S584>/Unit Delay1' : Unused code path elimination
 * Block '<S586>/Digital  Clock' : Unused code path elimination
 * Block '<S586>/Gain' : Unused code path elimination
 * Block '<S586>/Gain1' : Unused code path elimination
 * Block '<S586>/K2' : Unused code path elimination
 * Block '<S586>/Product' : Unused code path elimination
 * Block '<S586>/Relational Operator' : Unused code path elimination
 * Block '<S586>/Sum1' : Unused code path elimination
 * Block '<S586>/Sum5' : Unused code path elimination
 * Block '<S586>/Sum7' : Unused code path elimination
 * Block '<S586>/Switch' : Unused code path elimination
 * Block '<S586>/Unit Delay' : Unused code path elimination
 * Block '<S586>/Unit Delay1' : Unused code path elimination
 * Block '<S566>/Rad->Deg.' : Unused code path elimination
 * Block '<S566>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S562>/Magnitude-Angle to Complex' : Unused code path elimination
 * Block '<S562>/Magnitude-Angle to Complex1' : Unused code path elimination
 * Block '<S562>/Magnitude-Angle to Complex2' : Unused code path elimination
 * Block '<S567>/Gain1' : Unused code path elimination
 * Block '<S567>/Gain3' : Unused code path elimination
 * Block '<S567>/Sum' : Unused code path elimination
 * Block '<S568>/Gain1' : Unused code path elimination
 * Block '<S568>/Gain3' : Unused code path elimination
 * Block '<S568>/Sum' : Unused code path elimination
 * Block '<S569>/Gain3' : Unused code path elimination
 * Block '<S569>/Sum' : Unused code path elimination
 * Block '<S562>/deg->rad' : Unused code path elimination
 * Block '<S562>/deg->rad1' : Unused code path elimination
 * Block '<S562>/deg->rad2' : Unused code path elimination
 * Block '<S562>/rad->deg1' : Unused code path elimination
 * Block '<S563>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S588>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S596>/Digital  Clock' : Unused code path elimination
 * Block '<S596>/Gain' : Unused code path elimination
 * Block '<S596>/Gain1' : Unused code path elimination
 * Block '<S596>/K2' : Unused code path elimination
 * Block '<S596>/Product' : Unused code path elimination
 * Block '<S596>/Relational Operator' : Unused code path elimination
 * Block '<S596>/Sum1' : Unused code path elimination
 * Block '<S596>/Sum5' : Unused code path elimination
 * Block '<S596>/Sum7' : Unused code path elimination
 * Block '<S596>/Switch' : Unused code path elimination
 * Block '<S596>/Unit Delay' : Unused code path elimination
 * Block '<S596>/Unit Delay1' : Unused code path elimination
 * Block '<S598>/Digital  Clock' : Unused code path elimination
 * Block '<S598>/Gain' : Unused code path elimination
 * Block '<S598>/Gain1' : Unused code path elimination
 * Block '<S598>/K2' : Unused code path elimination
 * Block '<S598>/Product' : Unused code path elimination
 * Block '<S598>/Relational Operator' : Unused code path elimination
 * Block '<S598>/Sum1' : Unused code path elimination
 * Block '<S598>/Sum5' : Unused code path elimination
 * Block '<S598>/Sum7' : Unused code path elimination
 * Block '<S598>/Switch' : Unused code path elimination
 * Block '<S598>/Unit Delay' : Unused code path elimination
 * Block '<S598>/Unit Delay1' : Unused code path elimination
 * Block '<S588>/Rad->Deg.' : Unused code path elimination
 * Block '<S588>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S589>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S602>/Digital  Clock' : Unused code path elimination
 * Block '<S602>/Gain' : Unused code path elimination
 * Block '<S602>/Gain1' : Unused code path elimination
 * Block '<S602>/K2' : Unused code path elimination
 * Block '<S602>/Product' : Unused code path elimination
 * Block '<S602>/Relational Operator' : Unused code path elimination
 * Block '<S602>/Sum1' : Unused code path elimination
 * Block '<S602>/Sum5' : Unused code path elimination
 * Block '<S602>/Sum7' : Unused code path elimination
 * Block '<S602>/Switch' : Unused code path elimination
 * Block '<S602>/Unit Delay' : Unused code path elimination
 * Block '<S602>/Unit Delay1' : Unused code path elimination
 * Block '<S604>/Digital  Clock' : Unused code path elimination
 * Block '<S604>/Gain' : Unused code path elimination
 * Block '<S604>/Gain1' : Unused code path elimination
 * Block '<S604>/K2' : Unused code path elimination
 * Block '<S604>/Product' : Unused code path elimination
 * Block '<S604>/Relational Operator' : Unused code path elimination
 * Block '<S604>/Sum1' : Unused code path elimination
 * Block '<S604>/Sum5' : Unused code path elimination
 * Block '<S604>/Sum7' : Unused code path elimination
 * Block '<S604>/Switch' : Unused code path elimination
 * Block '<S604>/Unit Delay' : Unused code path elimination
 * Block '<S604>/Unit Delay1' : Unused code path elimination
 * Block '<S589>/Rad->Deg.' : Unused code path elimination
 * Block '<S589>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S590>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S608>/Digital  Clock' : Unused code path elimination
 * Block '<S608>/Gain' : Unused code path elimination
 * Block '<S608>/Gain1' : Unused code path elimination
 * Block '<S608>/K2' : Unused code path elimination
 * Block '<S608>/Product' : Unused code path elimination
 * Block '<S608>/Relational Operator' : Unused code path elimination
 * Block '<S608>/Sum1' : Unused code path elimination
 * Block '<S608>/Sum5' : Unused code path elimination
 * Block '<S608>/Sum7' : Unused code path elimination
 * Block '<S608>/Switch' : Unused code path elimination
 * Block '<S608>/Unit Delay' : Unused code path elimination
 * Block '<S608>/Unit Delay1' : Unused code path elimination
 * Block '<S610>/Digital  Clock' : Unused code path elimination
 * Block '<S610>/Gain' : Unused code path elimination
 * Block '<S610>/Gain1' : Unused code path elimination
 * Block '<S610>/K2' : Unused code path elimination
 * Block '<S610>/Product' : Unused code path elimination
 * Block '<S610>/Relational Operator' : Unused code path elimination
 * Block '<S610>/Sum1' : Unused code path elimination
 * Block '<S610>/Sum5' : Unused code path elimination
 * Block '<S610>/Sum7' : Unused code path elimination
 * Block '<S610>/Switch' : Unused code path elimination
 * Block '<S610>/Unit Delay' : Unused code path elimination
 * Block '<S610>/Unit Delay1' : Unused code path elimination
 * Block '<S590>/Rad->Deg.' : Unused code path elimination
 * Block '<S590>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S563>/Magnitude-Angle to Complex' : Unused code path elimination
 * Block '<S563>/Magnitude-Angle to Complex1' : Unused code path elimination
 * Block '<S563>/Magnitude-Angle to Complex2' : Unused code path elimination
 * Block '<S591>/Gain1' : Unused code path elimination
 * Block '<S591>/Gain3' : Unused code path elimination
 * Block '<S591>/Sum' : Unused code path elimination
 * Block '<S592>/Gain1' : Unused code path elimination
 * Block '<S592>/Gain3' : Unused code path elimination
 * Block '<S592>/Sum' : Unused code path elimination
 * Block '<S593>/Gain3' : Unused code path elimination
 * Block '<S593>/Sum' : Unused code path elimination
 * Block '<S563>/deg->rad' : Unused code path elimination
 * Block '<S563>/deg->rad1' : Unused code path elimination
 * Block '<S563>/deg->rad2' : Unused code path elimination
 * Block '<S563>/rad->deg1' : Unused code path elimination
 * Block '<S537>/Sum' : Unused code path elimination
 * Block '<S537>/Trigonometric Function2' : Unused code path elimination
 * Block '<S538>/Deg->Rad' : Unused code path elimination
 * Block '<S538>/Gain1' : Unused code path elimination
 * Block '<S538>/Product' : Unused code path elimination
 * Block '<S538>/Product1' : Unused code path elimination
 * Block '<S538>/Product3' : Unused code path elimination
 * Block '<S612>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S614>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S622>/Digital  Clock' : Unused code path elimination
 * Block '<S622>/Gain' : Unused code path elimination
 * Block '<S622>/Gain1' : Unused code path elimination
 * Block '<S622>/K2' : Unused code path elimination
 * Block '<S622>/Product' : Unused code path elimination
 * Block '<S622>/Relational Operator' : Unused code path elimination
 * Block '<S622>/Sum1' : Unused code path elimination
 * Block '<S622>/Sum5' : Unused code path elimination
 * Block '<S622>/Sum7' : Unused code path elimination
 * Block '<S622>/Switch' : Unused code path elimination
 * Block '<S622>/Unit Delay' : Unused code path elimination
 * Block '<S622>/Unit Delay1' : Unused code path elimination
 * Block '<S624>/Digital  Clock' : Unused code path elimination
 * Block '<S624>/Gain' : Unused code path elimination
 * Block '<S624>/Gain1' : Unused code path elimination
 * Block '<S624>/K2' : Unused code path elimination
 * Block '<S624>/Product' : Unused code path elimination
 * Block '<S624>/Relational Operator' : Unused code path elimination
 * Block '<S624>/Sum1' : Unused code path elimination
 * Block '<S624>/Sum5' : Unused code path elimination
 * Block '<S624>/Sum7' : Unused code path elimination
 * Block '<S624>/Switch' : Unused code path elimination
 * Block '<S624>/Unit Delay' : Unused code path elimination
 * Block '<S624>/Unit Delay1' : Unused code path elimination
 * Block '<S614>/Rad->Deg.' : Unused code path elimination
 * Block '<S614>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S615>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S628>/Digital  Clock' : Unused code path elimination
 * Block '<S628>/Gain' : Unused code path elimination
 * Block '<S628>/Gain1' : Unused code path elimination
 * Block '<S628>/K2' : Unused code path elimination
 * Block '<S628>/Product' : Unused code path elimination
 * Block '<S628>/Relational Operator' : Unused code path elimination
 * Block '<S628>/Sum1' : Unused code path elimination
 * Block '<S628>/Sum5' : Unused code path elimination
 * Block '<S628>/Sum7' : Unused code path elimination
 * Block '<S628>/Switch' : Unused code path elimination
 * Block '<S628>/Unit Delay' : Unused code path elimination
 * Block '<S628>/Unit Delay1' : Unused code path elimination
 * Block '<S630>/Digital  Clock' : Unused code path elimination
 * Block '<S630>/Gain' : Unused code path elimination
 * Block '<S630>/Gain1' : Unused code path elimination
 * Block '<S630>/K2' : Unused code path elimination
 * Block '<S630>/Product' : Unused code path elimination
 * Block '<S630>/Relational Operator' : Unused code path elimination
 * Block '<S630>/Sum1' : Unused code path elimination
 * Block '<S630>/Sum5' : Unused code path elimination
 * Block '<S630>/Sum7' : Unused code path elimination
 * Block '<S630>/Switch' : Unused code path elimination
 * Block '<S630>/Unit Delay' : Unused code path elimination
 * Block '<S630>/Unit Delay1' : Unused code path elimination
 * Block '<S615>/Rad->Deg.' : Unused code path elimination
 * Block '<S615>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S616>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S634>/Digital  Clock' : Unused code path elimination
 * Block '<S634>/Gain' : Unused code path elimination
 * Block '<S634>/Gain1' : Unused code path elimination
 * Block '<S634>/K2' : Unused code path elimination
 * Block '<S634>/Product' : Unused code path elimination
 * Block '<S634>/Relational Operator' : Unused code path elimination
 * Block '<S634>/Sum1' : Unused code path elimination
 * Block '<S634>/Sum5' : Unused code path elimination
 * Block '<S634>/Sum7' : Unused code path elimination
 * Block '<S634>/Switch' : Unused code path elimination
 * Block '<S634>/Unit Delay' : Unused code path elimination
 * Block '<S634>/Unit Delay1' : Unused code path elimination
 * Block '<S636>/Digital  Clock' : Unused code path elimination
 * Block '<S636>/Gain' : Unused code path elimination
 * Block '<S636>/Gain1' : Unused code path elimination
 * Block '<S636>/K2' : Unused code path elimination
 * Block '<S636>/Product' : Unused code path elimination
 * Block '<S636>/Relational Operator' : Unused code path elimination
 * Block '<S636>/Sum1' : Unused code path elimination
 * Block '<S636>/Sum5' : Unused code path elimination
 * Block '<S636>/Sum7' : Unused code path elimination
 * Block '<S636>/Switch' : Unused code path elimination
 * Block '<S636>/Unit Delay' : Unused code path elimination
 * Block '<S636>/Unit Delay1' : Unused code path elimination
 * Block '<S616>/Rad->Deg.' : Unused code path elimination
 * Block '<S616>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S612>/Magnitude-Angle to Complex' : Unused code path elimination
 * Block '<S612>/Magnitude-Angle to Complex1' : Unused code path elimination
 * Block '<S612>/Magnitude-Angle to Complex2' : Unused code path elimination
 * Block '<S617>/Gain1' : Unused code path elimination
 * Block '<S617>/Gain3' : Unused code path elimination
 * Block '<S617>/Sum' : Unused code path elimination
 * Block '<S618>/Gain1' : Unused code path elimination
 * Block '<S618>/Gain3' : Unused code path elimination
 * Block '<S618>/Sum' : Unused code path elimination
 * Block '<S619>/Gain3' : Unused code path elimination
 * Block '<S619>/Sum' : Unused code path elimination
 * Block '<S612>/deg->rad' : Unused code path elimination
 * Block '<S612>/deg->rad1' : Unused code path elimination
 * Block '<S612>/deg->rad2' : Unused code path elimination
 * Block '<S612>/rad->deg1' : Unused code path elimination
 * Block '<S613>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S638>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S646>/Digital  Clock' : Unused code path elimination
 * Block '<S646>/Gain' : Unused code path elimination
 * Block '<S646>/Gain1' : Unused code path elimination
 * Block '<S646>/K2' : Unused code path elimination
 * Block '<S646>/Product' : Unused code path elimination
 * Block '<S646>/Relational Operator' : Unused code path elimination
 * Block '<S646>/Sum1' : Unused code path elimination
 * Block '<S646>/Sum5' : Unused code path elimination
 * Block '<S646>/Sum7' : Unused code path elimination
 * Block '<S646>/Switch' : Unused code path elimination
 * Block '<S646>/Unit Delay' : Unused code path elimination
 * Block '<S646>/Unit Delay1' : Unused code path elimination
 * Block '<S648>/Digital  Clock' : Unused code path elimination
 * Block '<S648>/Gain' : Unused code path elimination
 * Block '<S648>/Gain1' : Unused code path elimination
 * Block '<S648>/K2' : Unused code path elimination
 * Block '<S648>/Product' : Unused code path elimination
 * Block '<S648>/Relational Operator' : Unused code path elimination
 * Block '<S648>/Sum1' : Unused code path elimination
 * Block '<S648>/Sum5' : Unused code path elimination
 * Block '<S648>/Sum7' : Unused code path elimination
 * Block '<S648>/Switch' : Unused code path elimination
 * Block '<S648>/Unit Delay' : Unused code path elimination
 * Block '<S648>/Unit Delay1' : Unused code path elimination
 * Block '<S638>/Rad->Deg.' : Unused code path elimination
 * Block '<S638>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S639>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S652>/Digital  Clock' : Unused code path elimination
 * Block '<S652>/Gain' : Unused code path elimination
 * Block '<S652>/Gain1' : Unused code path elimination
 * Block '<S652>/K2' : Unused code path elimination
 * Block '<S652>/Product' : Unused code path elimination
 * Block '<S652>/Relational Operator' : Unused code path elimination
 * Block '<S652>/Sum1' : Unused code path elimination
 * Block '<S652>/Sum5' : Unused code path elimination
 * Block '<S652>/Sum7' : Unused code path elimination
 * Block '<S652>/Switch' : Unused code path elimination
 * Block '<S652>/Unit Delay' : Unused code path elimination
 * Block '<S652>/Unit Delay1' : Unused code path elimination
 * Block '<S654>/Digital  Clock' : Unused code path elimination
 * Block '<S654>/Gain' : Unused code path elimination
 * Block '<S654>/Gain1' : Unused code path elimination
 * Block '<S654>/K2' : Unused code path elimination
 * Block '<S654>/Product' : Unused code path elimination
 * Block '<S654>/Relational Operator' : Unused code path elimination
 * Block '<S654>/Sum1' : Unused code path elimination
 * Block '<S654>/Sum5' : Unused code path elimination
 * Block '<S654>/Sum7' : Unused code path elimination
 * Block '<S654>/Switch' : Unused code path elimination
 * Block '<S654>/Unit Delay' : Unused code path elimination
 * Block '<S654>/Unit Delay1' : Unused code path elimination
 * Block '<S639>/Rad->Deg.' : Unused code path elimination
 * Block '<S639>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S640>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S658>/Digital  Clock' : Unused code path elimination
 * Block '<S658>/Gain' : Unused code path elimination
 * Block '<S658>/Gain1' : Unused code path elimination
 * Block '<S658>/K2' : Unused code path elimination
 * Block '<S658>/Product' : Unused code path elimination
 * Block '<S658>/Relational Operator' : Unused code path elimination
 * Block '<S658>/Sum1' : Unused code path elimination
 * Block '<S658>/Sum5' : Unused code path elimination
 * Block '<S658>/Sum7' : Unused code path elimination
 * Block '<S658>/Switch' : Unused code path elimination
 * Block '<S658>/Unit Delay' : Unused code path elimination
 * Block '<S658>/Unit Delay1' : Unused code path elimination
 * Block '<S660>/Digital  Clock' : Unused code path elimination
 * Block '<S660>/Gain' : Unused code path elimination
 * Block '<S660>/Gain1' : Unused code path elimination
 * Block '<S660>/K2' : Unused code path elimination
 * Block '<S660>/Product' : Unused code path elimination
 * Block '<S660>/Relational Operator' : Unused code path elimination
 * Block '<S660>/Sum1' : Unused code path elimination
 * Block '<S660>/Sum5' : Unused code path elimination
 * Block '<S660>/Sum7' : Unused code path elimination
 * Block '<S660>/Switch' : Unused code path elimination
 * Block '<S660>/Unit Delay' : Unused code path elimination
 * Block '<S660>/Unit Delay1' : Unused code path elimination
 * Block '<S640>/Rad->Deg.' : Unused code path elimination
 * Block '<S640>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S613>/Magnitude-Angle to Complex' : Unused code path elimination
 * Block '<S613>/Magnitude-Angle to Complex1' : Unused code path elimination
 * Block '<S613>/Magnitude-Angle to Complex2' : Unused code path elimination
 * Block '<S641>/Gain1' : Unused code path elimination
 * Block '<S641>/Gain3' : Unused code path elimination
 * Block '<S641>/Sum' : Unused code path elimination
 * Block '<S642>/Gain1' : Unused code path elimination
 * Block '<S642>/Gain3' : Unused code path elimination
 * Block '<S642>/Sum' : Unused code path elimination
 * Block '<S643>/Gain3' : Unused code path elimination
 * Block '<S643>/Sum' : Unused code path elimination
 * Block '<S613>/deg->rad' : Unused code path elimination
 * Block '<S613>/deg->rad1' : Unused code path elimination
 * Block '<S613>/deg->rad2' : Unused code path elimination
 * Block '<S613>/rad->deg1' : Unused code path elimination
 * Block '<S538>/Sum' : Unused code path elimination
 * Block '<S538>/Trigonometric Function2' : Unused code path elimination
 * Block '<S23>/Rate Transition1' : Unused code path elimination
 * Block '<S23>/Rate Transition2' : Unused code path elimination
 * Block '<S539>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S662>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S670>/Digital  Clock' : Unused code path elimination
 * Block '<S670>/Gain' : Unused code path elimination
 * Block '<S670>/Gain1' : Unused code path elimination
 * Block '<S670>/K2' : Unused code path elimination
 * Block '<S670>/Product' : Unused code path elimination
 * Block '<S670>/Relational Operator' : Unused code path elimination
 * Block '<S670>/Sum1' : Unused code path elimination
 * Block '<S670>/Sum5' : Unused code path elimination
 * Block '<S670>/Sum7' : Unused code path elimination
 * Block '<S670>/Switch' : Unused code path elimination
 * Block '<S670>/Unit Delay' : Unused code path elimination
 * Block '<S670>/Unit Delay1' : Unused code path elimination
 * Block '<S672>/Digital  Clock' : Unused code path elimination
 * Block '<S672>/Gain' : Unused code path elimination
 * Block '<S672>/Gain1' : Unused code path elimination
 * Block '<S672>/K2' : Unused code path elimination
 * Block '<S672>/Product' : Unused code path elimination
 * Block '<S672>/Relational Operator' : Unused code path elimination
 * Block '<S672>/Sum1' : Unused code path elimination
 * Block '<S672>/Sum5' : Unused code path elimination
 * Block '<S672>/Sum7' : Unused code path elimination
 * Block '<S672>/Switch' : Unused code path elimination
 * Block '<S672>/Unit Delay' : Unused code path elimination
 * Block '<S672>/Unit Delay1' : Unused code path elimination
 * Block '<S662>/Rad->Deg.' : Unused code path elimination
 * Block '<S662>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S663>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S676>/Digital  Clock' : Unused code path elimination
 * Block '<S676>/Gain' : Unused code path elimination
 * Block '<S676>/Gain1' : Unused code path elimination
 * Block '<S676>/K2' : Unused code path elimination
 * Block '<S676>/Product' : Unused code path elimination
 * Block '<S676>/Relational Operator' : Unused code path elimination
 * Block '<S676>/Sum1' : Unused code path elimination
 * Block '<S676>/Sum5' : Unused code path elimination
 * Block '<S676>/Sum7' : Unused code path elimination
 * Block '<S676>/Switch' : Unused code path elimination
 * Block '<S676>/Unit Delay' : Unused code path elimination
 * Block '<S676>/Unit Delay1' : Unused code path elimination
 * Block '<S678>/Digital  Clock' : Unused code path elimination
 * Block '<S678>/Gain' : Unused code path elimination
 * Block '<S678>/Gain1' : Unused code path elimination
 * Block '<S678>/K2' : Unused code path elimination
 * Block '<S678>/Product' : Unused code path elimination
 * Block '<S678>/Relational Operator' : Unused code path elimination
 * Block '<S678>/Sum1' : Unused code path elimination
 * Block '<S678>/Sum5' : Unused code path elimination
 * Block '<S678>/Sum7' : Unused code path elimination
 * Block '<S678>/Switch' : Unused code path elimination
 * Block '<S678>/Unit Delay' : Unused code path elimination
 * Block '<S678>/Unit Delay1' : Unused code path elimination
 * Block '<S663>/Rad->Deg.' : Unused code path elimination
 * Block '<S663>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S664>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S682>/Digital  Clock' : Unused code path elimination
 * Block '<S682>/Gain' : Unused code path elimination
 * Block '<S682>/Gain1' : Unused code path elimination
 * Block '<S682>/K2' : Unused code path elimination
 * Block '<S682>/Product' : Unused code path elimination
 * Block '<S682>/Relational Operator' : Unused code path elimination
 * Block '<S682>/Sum1' : Unused code path elimination
 * Block '<S682>/Sum5' : Unused code path elimination
 * Block '<S682>/Sum7' : Unused code path elimination
 * Block '<S682>/Switch' : Unused code path elimination
 * Block '<S682>/Unit Delay' : Unused code path elimination
 * Block '<S682>/Unit Delay1' : Unused code path elimination
 * Block '<S684>/Digital  Clock' : Unused code path elimination
 * Block '<S684>/Gain' : Unused code path elimination
 * Block '<S684>/Gain1' : Unused code path elimination
 * Block '<S684>/K2' : Unused code path elimination
 * Block '<S684>/Product' : Unused code path elimination
 * Block '<S684>/Relational Operator' : Unused code path elimination
 * Block '<S684>/Sum1' : Unused code path elimination
 * Block '<S684>/Sum5' : Unused code path elimination
 * Block '<S684>/Sum7' : Unused code path elimination
 * Block '<S684>/Switch' : Unused code path elimination
 * Block '<S684>/Unit Delay' : Unused code path elimination
 * Block '<S684>/Unit Delay1' : Unused code path elimination
 * Block '<S664>/Rad->Deg.' : Unused code path elimination
 * Block '<S664>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S539>/Magnitude-Angle to Complex' : Unused code path elimination
 * Block '<S539>/Magnitude-Angle to Complex1' : Unused code path elimination
 * Block '<S539>/Magnitude-Angle to Complex2' : Unused code path elimination
 * Block '<S665>/Gain1' : Unused code path elimination
 * Block '<S665>/Gain3' : Unused code path elimination
 * Block '<S665>/Sum' : Unused code path elimination
 * Block '<S666>/Gain1' : Unused code path elimination
 * Block '<S666>/Gain3' : Unused code path elimination
 * Block '<S666>/Sum' : Unused code path elimination
 * Block '<S667>/Gain3' : Unused code path elimination
 * Block '<S667>/Sum' : Unused code path elimination
 * Block '<S539>/deg->rad' : Unused code path elimination
 * Block '<S539>/deg->rad1' : Unused code path elimination
 * Block '<S539>/deg->rad2' : Unused code path elimination
 * Block '<S539>/rad->deg1' : Unused code path elimination
 * Block '<S23>/V1grid_pu' : Unused code path elimination
 * Block '<S23>/VIPmotor' : Unused code path elimination
 * Block '<S23>/VIgrid' : Unused code path elimination
 * Block '<S23>/VIstat' : Unused code path elimination
 * Block '<S23>/Vdc_3L' : Unused code path elimination
 * Block '<S23>/Vdc_stat' : Unused code path elimination
 * Block '<S23>/Vdcs' : Unused code path elimination
 * Block '<S23>/Vsec_3L_LL' : Unused code path elimination
 * Block '<S23>/motor_ctrl' : Unused code path elimination
 * Block '<S23>/stat_ctrl' : Unused code path elimination
 * Block '<S23>/to-pu3' : Unused code path elimination
 * Block '<S23>/w_motor' : Unused code path elimination
 * Block '<S705>/0 1' : Unused code path elimination
 * Block '<S705>/Gain' : Unused code path elimination
 * Block '<S705>/Saturation' : Unused code path elimination
 * Block '<S705>/Sum' : Unused code path elimination
 * Block '<S705>/Switch' : Unused code path elimination
 * Block '<S707>/0 1' : Unused code path elimination
 * Block '<S707>/Gain' : Unused code path elimination
 * Block '<S707>/Saturation' : Unused code path elimination
 * Block '<S707>/Sum' : Unused code path elimination
 * Block '<S707>/Switch' : Unused code path elimination
 * Block '<S727>/0 1' : Unused code path elimination
 * Block '<S727>/Gain' : Unused code path elimination
 * Block '<S727>/Saturation' : Unused code path elimination
 * Block '<S727>/Sum' : Unused code path elimination
 * Block '<S727>/Switch' : Unused code path elimination
 * Block '<S729>/0 1' : Unused code path elimination
 * Block '<S729>/Gain' : Unused code path elimination
 * Block '<S729>/Saturation' : Unused code path elimination
 * Block '<S729>/Sum' : Unused code path elimination
 * Block '<S729>/Switch' : Unused code path elimination
 * Block '<S749>/0 1' : Unused code path elimination
 * Block '<S749>/Gain' : Unused code path elimination
 * Block '<S749>/Saturation' : Unused code path elimination
 * Block '<S749>/Sum' : Unused code path elimination
 * Block '<S749>/Switch' : Unused code path elimination
 * Block '<S751>/0 1' : Unused code path elimination
 * Block '<S751>/Gain' : Unused code path elimination
 * Block '<S751>/Saturation' : Unused code path elimination
 * Block '<S751>/Sum' : Unused code path elimination
 * Block '<S751>/Switch' : Unused code path elimination
 * Block '<S779>/0 1' : Unused code path elimination
 * Block '<S779>/Gain' : Unused code path elimination
 * Block '<S779>/Saturation' : Unused code path elimination
 * Block '<S779>/Sum' : Unused code path elimination
 * Block '<S779>/Switch' : Unused code path elimination
 * Block '<S781>/0 1' : Unused code path elimination
 * Block '<S781>/Gain' : Unused code path elimination
 * Block '<S781>/Saturation' : Unused code path elimination
 * Block '<S781>/Sum' : Unused code path elimination
 * Block '<S781>/Switch' : Unused code path elimination
 * Block '<S798>/0 1' : Unused code path elimination
 * Block '<S798>/Gain' : Unused code path elimination
 * Block '<S798>/Saturation' : Unused code path elimination
 * Block '<S798>/Sum' : Unused code path elimination
 * Block '<S798>/Switch' : Unused code path elimination
 * Block '<S800>/0 1' : Unused code path elimination
 * Block '<S800>/Gain' : Unused code path elimination
 * Block '<S800>/Saturation' : Unused code path elimination
 * Block '<S800>/Sum' : Unused code path elimination
 * Block '<S800>/Switch' : Unused code path elimination
 * Block '<S817>/0 1' : Unused code path elimination
 * Block '<S817>/Gain' : Unused code path elimination
 * Block '<S817>/Saturation' : Unused code path elimination
 * Block '<S817>/Sum' : Unused code path elimination
 * Block '<S817>/Switch' : Unused code path elimination
 * Block '<S819>/0 1' : Unused code path elimination
 * Block '<S819>/Gain' : Unused code path elimination
 * Block '<S819>/Saturation' : Unused code path elimination
 * Block '<S819>/Sum' : Unused code path elimination
 * Block '<S819>/Switch' : Unused code path elimination
 * Block '<S839>/0 1' : Unused code path elimination
 * Block '<S839>/Gain' : Unused code path elimination
 * Block '<S839>/Saturation' : Unused code path elimination
 * Block '<S839>/Sum' : Unused code path elimination
 * Block '<S839>/Switch' : Unused code path elimination
 * Block '<S841>/0 1' : Unused code path elimination
 * Block '<S841>/Gain' : Unused code path elimination
 * Block '<S841>/Saturation' : Unused code path elimination
 * Block '<S841>/Sum' : Unused code path elimination
 * Block '<S841>/Switch' : Unused code path elimination
 * Block '<S858>/0 1' : Unused code path elimination
 * Block '<S858>/Gain' : Unused code path elimination
 * Block '<S858>/Saturation' : Unused code path elimination
 * Block '<S858>/Sum' : Unused code path elimination
 * Block '<S858>/Switch' : Unused code path elimination
 * Block '<S860>/0 1' : Unused code path elimination
 * Block '<S860>/Gain' : Unused code path elimination
 * Block '<S860>/Saturation' : Unused code path elimination
 * Block '<S860>/Sum' : Unused code path elimination
 * Block '<S860>/Switch' : Unused code path elimination
 * Block '<S877>/0 1' : Unused code path elimination
 * Block '<S877>/Gain' : Unused code path elimination
 * Block '<S877>/Saturation' : Unused code path elimination
 * Block '<S877>/Sum' : Unused code path elimination
 * Block '<S877>/Switch' : Unused code path elimination
 * Block '<S879>/0 1' : Unused code path elimination
 * Block '<S879>/Gain' : Unused code path elimination
 * Block '<S879>/Saturation' : Unused code path elimination
 * Block '<S879>/Sum' : Unused code path elimination
 * Block '<S879>/Switch' : Unused code path elimination
 * Block '<S897>/0 1' : Unused code path elimination
 * Block '<S897>/Gain' : Unused code path elimination
 * Block '<S897>/Saturation' : Unused code path elimination
 * Block '<S897>/Sum' : Unused code path elimination
 * Block '<S897>/Switch' : Unused code path elimination
 * Block '<S899>/0 1' : Unused code path elimination
 * Block '<S899>/Gain' : Unused code path elimination
 * Block '<S899>/Saturation' : Unused code path elimination
 * Block '<S899>/Sum' : Unused code path elimination
 * Block '<S899>/Switch' : Unused code path elimination
 * Block '<S32>/rad->deg1' : Unused code path elimination
 * Block '<S37>/Kv' : Unused code path elimination
 * Block '<S39>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S40>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S48>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S51>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S43>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S57>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S58>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S67>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S70>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S61>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S85>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S86>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S88>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S89>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S76>/Switch1' : Eliminated due to constant selection input
 * Block '<S76>/Switch2' : Eliminated due to constant selection input
 * Block '<S118>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S77>/Switch1' : Eliminated due to constant selection input
 * Block '<S131>/Multiport Switch' : Eliminated due to constant selection input
 * Block '<S131>/Multiport Switch1' : Eliminated due to constant selection input
 * Block '<S128>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S128>/Zero-Order Hold2' : Eliminated since input and output rates are identical
 * Block '<S78>/Switch' : Eliminated due to constant selection input
 * Block '<S79>/Switch1' : Eliminated due to constant selection input
 * Block '<S79>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S80>/Switch1' : Eliminated due to constant selection input
 * Block '<S80>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S158>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S158>/Zero-Order Hold2' : Eliminated since input and output rates are identical
 * Block '<S81>/Switch1' : Eliminated due to constant selection input
 * Block '<S176>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S82>/Switch1' : Eliminated due to constant selection input
 * Block '<S201>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S202>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S254>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S277>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S278>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S270>/Gain1' : Eliminated nontunable gain of 1
 * Block '<S333>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S349>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S350>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S356>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S357>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S360>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S362>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S363>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S366>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S371>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S372>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S376>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S386>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S387>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S390>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S395>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S396>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S400>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S686>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S693>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S694>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S699>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S700>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S687>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S715>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S716>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S721>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S722>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S688>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S737>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S738>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S743>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S744>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S762>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S769>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S770>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S774>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S763>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S788>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S789>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S793>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S764>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S807>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S808>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S812>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S822>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S829>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S830>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S834>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S823>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S848>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S849>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S853>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S824>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S867>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S868>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S872>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S882>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S887>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S888>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S892>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S929>/Gain1' : Eliminated nontunable gain of 1
 * Block '<S930>/Gain1' : Eliminated nontunable gain of 1
 * Block '<S932>/Data Type  Conversion1' : Eliminate redundant data type conversion
 * Block '<S932>/Multiport Switch1' : Eliminated due to constant selection input
 * Block '<S926>/Switch5' : Eliminated due to constant selection input
 * Block '<S34>/Kv' : Eliminated nontunable gain of 1
 * Block '<S34>/Kv1' : Eliminated nontunable gain of 1
 * Block '<S937>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S938>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S939>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S940>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S941>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S942>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S949>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S950>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S37>/Kv1' : Eliminated nontunable gain of 1
 * Block '<S969>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S970>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S971>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S38>/Kv' : Eliminated nontunable gain of 1
 * Block '<S38>/Kv1' : Eliminated nontunable gain of 1
 * Block '<S978>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S979>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S980>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S981>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S982>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S983>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S94>/Digital  Clock' : Unused code path elimination
 * Block '<S94>/Gain' : Unused code path elimination
 * Block '<S94>/Gain1' : Unused code path elimination
 * Block '<S94>/K2' : Unused code path elimination
 * Block '<S94>/Product' : Unused code path elimination
 * Block '<S94>/Relational Operator' : Unused code path elimination
 * Block '<S94>/Sum1' : Unused code path elimination
 * Block '<S94>/Sum5' : Unused code path elimination
 * Block '<S94>/Sum7' : Unused code path elimination
 * Block '<S94>/Switch' : Unused code path elimination
 * Block '<S94>/Unit Delay' : Unused code path elimination
 * Block '<S94>/Unit Delay1' : Unused code path elimination
 * Block '<S96>/Digital  Clock' : Unused code path elimination
 * Block '<S96>/Gain' : Unused code path elimination
 * Block '<S96>/Gain1' : Unused code path elimination
 * Block '<S96>/K2' : Unused code path elimination
 * Block '<S96>/Product' : Unused code path elimination
 * Block '<S96>/Relational Operator' : Unused code path elimination
 * Block '<S96>/Sum1' : Unused code path elimination
 * Block '<S96>/Sum5' : Unused code path elimination
 * Block '<S96>/Sum7' : Unused code path elimination
 * Block '<S96>/Switch' : Unused code path elimination
 * Block '<S96>/Unit Delay' : Unused code path elimination
 * Block '<S96>/Unit Delay1' : Unused code path elimination
 * Block '<S88>/Add2' : Unused code path elimination
 * Block '<S88>/k3' : Unused code path elimination
 * Block '<S89>/Add2' : Unused code path elimination
 * Block '<S89>/k3' : Unused code path elimination
 * Block '<S118>/Add2' : Unused code path elimination
 * Block '<S118>/k3' : Unused code path elimination
 * Block '<S122>/Digital  Clock' : Unused code path elimination
 * Block '<S122>/Gain' : Unused code path elimination
 * Block '<S122>/Gain1' : Unused code path elimination
 * Block '<S122>/K2' : Unused code path elimination
 * Block '<S122>/Product' : Unused code path elimination
 * Block '<S122>/Relational Operator' : Unused code path elimination
 * Block '<S122>/Sum1' : Unused code path elimination
 * Block '<S122>/Sum5' : Unused code path elimination
 * Block '<S122>/Sum7' : Unused code path elimination
 * Block '<S122>/Switch' : Unused code path elimination
 * Block '<S122>/Unit Delay' : Unused code path elimination
 * Block '<S122>/Unit Delay1' : Unused code path elimination
 * Block '<S132>/Digital  Clock' : Unused code path elimination
 * Block '<S132>/Gain' : Unused code path elimination
 * Block '<S132>/Gain1' : Unused code path elimination
 * Block '<S132>/K2' : Unused code path elimination
 * Block '<S132>/Product' : Unused code path elimination
 * Block '<S132>/Relational Operator' : Unused code path elimination
 * Block '<S132>/Sum1' : Unused code path elimination
 * Block '<S132>/Sum5' : Unused code path elimination
 * Block '<S132>/Sum7' : Unused code path elimination
 * Block '<S132>/Switch' : Unused code path elimination
 * Block '<S132>/Unit Delay' : Unused code path elimination
 * Block '<S132>/Unit Delay1' : Unused code path elimination
 * Block '<S134>/Digital  Clock' : Unused code path elimination
 * Block '<S134>/Gain' : Unused code path elimination
 * Block '<S134>/Gain1' : Unused code path elimination
 * Block '<S134>/K2' : Unused code path elimination
 * Block '<S134>/Product' : Unused code path elimination
 * Block '<S134>/Relational Operator' : Unused code path elimination
 * Block '<S134>/Sum1' : Unused code path elimination
 * Block '<S134>/Sum5' : Unused code path elimination
 * Block '<S134>/Sum7' : Unused code path elimination
 * Block '<S134>/Switch' : Unused code path elimination
 * Block '<S134>/Unit Delay' : Unused code path elimination
 * Block '<S134>/Unit Delay1' : Unused code path elimination
 * Block '<S131>/Constant1' : Unused code path elimination
 * Block '<S131>/Constant4' : Unused code path elimination
 * Block '<S131>/Constant5' : Unused code path elimination
 * Block '<S131>/Gain1' : Unused code path elimination
 * Block '<S131>/Gain2' : Unused code path elimination
 * Block '<S131>/Sine Wave' : Unused code path elimination
 * Block '<S131>/Sum1' : Unused code path elimination
 * Block '<S131>/Sum2' : Unused code path elimination
 * Block '<S131>/Trigonometric Function1' : Unused code path elimination
 * Block '<S131>/Trigonometric Function2' : Unused code path elimination
 * Block '<S128>/Add1' : Unused code path elimination
 * Block '<S128>/Add2' : Unused code path elimination
 * Block '<S128>/k1' : Unused code path elimination
 * Block '<S128>/k3' : Unused code path elimination
 * Block '<S144>/Digital  Clock' : Unused code path elimination
 * Block '<S144>/Gain' : Unused code path elimination
 * Block '<S144>/Gain1' : Unused code path elimination
 * Block '<S144>/K2' : Unused code path elimination
 * Block '<S144>/Product' : Unused code path elimination
 * Block '<S144>/Relational Operator' : Unused code path elimination
 * Block '<S144>/Sum1' : Unused code path elimination
 * Block '<S144>/Sum5' : Unused code path elimination
 * Block '<S144>/Sum7' : Unused code path elimination
 * Block '<S144>/Switch' : Unused code path elimination
 * Block '<S144>/Unit Delay' : Unused code path elimination
 * Block '<S144>/Unit Delay1' : Unused code path elimination
 * Block '<S152>/Digital  Clock' : Unused code path elimination
 * Block '<S152>/Gain' : Unused code path elimination
 * Block '<S152>/Gain1' : Unused code path elimination
 * Block '<S152>/K2' : Unused code path elimination
 * Block '<S152>/Product' : Unused code path elimination
 * Block '<S152>/Relational Operator' : Unused code path elimination
 * Block '<S152>/Sum1' : Unused code path elimination
 * Block '<S152>/Sum5' : Unused code path elimination
 * Block '<S152>/Sum7' : Unused code path elimination
 * Block '<S152>/Switch' : Unused code path elimination
 * Block '<S152>/Unit Delay' : Unused code path elimination
 * Block '<S152>/Unit Delay1' : Unused code path elimination
 * Block '<S162>/Digital  Clock' : Unused code path elimination
 * Block '<S162>/Gain' : Unused code path elimination
 * Block '<S162>/Gain1' : Unused code path elimination
 * Block '<S162>/K2' : Unused code path elimination
 * Block '<S162>/Product' : Unused code path elimination
 * Block '<S162>/Relational Operator' : Unused code path elimination
 * Block '<S162>/Sum1' : Unused code path elimination
 * Block '<S162>/Sum5' : Unused code path elimination
 * Block '<S162>/Sum7' : Unused code path elimination
 * Block '<S162>/Switch' : Unused code path elimination
 * Block '<S162>/Unit Delay' : Unused code path elimination
 * Block '<S162>/Unit Delay1' : Unused code path elimination
 * Block '<S164>/Digital  Clock' : Unused code path elimination
 * Block '<S164>/Gain' : Unused code path elimination
 * Block '<S164>/Gain1' : Unused code path elimination
 * Block '<S164>/K2' : Unused code path elimination
 * Block '<S164>/Product' : Unused code path elimination
 * Block '<S164>/Relational Operator' : Unused code path elimination
 * Block '<S164>/Sum1' : Unused code path elimination
 * Block '<S164>/Sum5' : Unused code path elimination
 * Block '<S164>/Sum7' : Unused code path elimination
 * Block '<S164>/Switch' : Unused code path elimination
 * Block '<S164>/Unit Delay' : Unused code path elimination
 * Block '<S164>/Unit Delay1' : Unused code path elimination
 * Block '<S158>/Add1' : Unused code path elimination
 * Block '<S158>/Add2' : Unused code path elimination
 * Block '<S158>/k1' : Unused code path elimination
 * Block '<S158>/k3' : Unused code path elimination
 * Block '<S176>/Add2' : Unused code path elimination
 * Block '<S176>/k3' : Unused code path elimination
 * Block '<S180>/Digital  Clock' : Unused code path elimination
 * Block '<S180>/Gain' : Unused code path elimination
 * Block '<S180>/Gain1' : Unused code path elimination
 * Block '<S180>/K2' : Unused code path elimination
 * Block '<S180>/Product' : Unused code path elimination
 * Block '<S180>/Relational Operator' : Unused code path elimination
 * Block '<S180>/Sum1' : Unused code path elimination
 * Block '<S180>/Sum5' : Unused code path elimination
 * Block '<S180>/Sum7' : Unused code path elimination
 * Block '<S180>/Switch' : Unused code path elimination
 * Block '<S180>/Unit Delay' : Unused code path elimination
 * Block '<S180>/Unit Delay1' : Unused code path elimination
 * Block '<S932>/Constant' : Unused code path elimination
 * Block '<S932>/Constant2' : Unused code path elimination
 * Block '<S932>/Constant4' : Unused code path elimination
 * Block '<S932>/Discrete-Time Integrator1' : Unused code path elimination
 * Block '<S932>/Gain1' : Unused code path elimination
 * Block '<S932>/Product' : Unused code path elimination
 * Block '<S932>/Product1' : Unused code path elimination
 * Block '<S932>/Product2' : Unused code path elimination
 * Block '<S932>/Relational Operator' : Unused code path elimination
 * Block '<S932>/Step' : Unused code path elimination
 * Block '<S932>/Switch' : Unused code path elimination
 * Block '<S932>/Switch1' : Unused code path elimination
 * Block '<S932>/Trigonometric Function1' : Unused code path elimination
 * Block '<S932>/valp_nom6' : Unused code path elimination
 * Block '<S932>/valp_nom7' : Unused code path elimination
 * Block '<S932>/valp_nom8' : Unused code path elimination
 * Block '<S932>/valp_nom9' : Unused code path elimination
 * Block '<S926>/SinglePhase' : Unused code path elimination
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
 * '<Root>' : 'power_converters_switching_function'
 * '<S1>'   : 'power_converters_switching_function/Boost'
 * '<S2>'   : 'power_converters_switching_function/Boost Converter'
 * '<S3>'   : 'power_converters_switching_function/Buck'
 * '<S4>'   : 'power_converters_switching_function/Buck Converter'
 * '<S5>'   : 'power_converters_switching_function/Control Systems'
 * '<S6>'   : 'power_converters_switching_function/Controlled Source1'
 * '<S7>'   : 'power_converters_switching_function/DC Machine'
 * '<S8>'   : 'power_converters_switching_function/DC Voltage Source2'
 * '<S9>'   : 'power_converters_switching_function/DC src'
 * '<S10>'  : 'power_converters_switching_function/DC_3L'
 * '<S11>'  : 'power_converters_switching_function/DC_stat'
 * '<S12>'  : 'power_converters_switching_function/FB'
 * '<S13>'  : 'power_converters_switching_function/Full-Bridge Converter'
 * '<S14>'  : 'power_converters_switching_function/HB'
 * '<S15>'  : 'power_converters_switching_function/Half-Bridge Converter'
 * '<S16>'  : 'power_converters_switching_function/Mean'
 * '<S17>'  : 'power_converters_switching_function/Mean1'
 * '<S18>'  : 'power_converters_switching_function/Mean2'
 * '<S19>'  : 'power_converters_switching_function/Mean3'
 * '<S20>'  : 'power_converters_switching_function/Power'
 * '<S21>'  : 'power_converters_switching_function/Power (Pos. Seq.)'
 * '<S22>'  : 'power_converters_switching_function/Power (Positive-Sequence)1'
 * '<S23>'  : 'power_converters_switching_function/Scopes'
 * '<S24>'  : 'power_converters_switching_function/Three-Level NPC Converter'
 * '<S25>'  : 'power_converters_switching_function/Tr A'
 * '<S26>'  : 'power_converters_switching_function/Tr B'
 * '<S27>'  : 'power_converters_switching_function/Tr C'
 * '<S28>'  : 'power_converters_switching_function/Tr1'
 * '<S29>'  : 'power_converters_switching_function/Two-Level Converter 1'
 * '<S30>'  : 'power_converters_switching_function/Two-Level Converter 2'
 * '<S31>'  : 'power_converters_switching_function/Two-Quadrant DC//DC Converter'
 * '<S32>'  : 'power_converters_switching_function/V1 meas'
 * '<S33>'  : 'power_converters_switching_function/Vgrid'
 * '<S34>'  : 'power_converters_switching_function/grid'
 * '<S35>'  : 'power_converters_switching_function/motor'
 * '<S36>'  : 'power_converters_switching_function/powergui'
 * '<S37>'  : 'power_converters_switching_function/sec'
 * '<S38>'  : 'power_converters_switching_function/stat'
 * '<S39>'  : 'power_converters_switching_function/Boost/CM'
 * '<S40>'  : 'power_converters_switching_function/Boost/VM1'
 * '<S41>'  : 'power_converters_switching_function/Boost/CM/Model'
 * '<S42>'  : 'power_converters_switching_function/Boost/VM1/Model'
 * '<S43>'  : 'power_converters_switching_function/Boost Converter/Model'
 * '<S44>'  : 'power_converters_switching_function/Boost Converter/Model/Boost_Power'
 * '<S45>'  : 'power_converters_switching_function/Boost Converter/Model/Compare To Constant'
 * '<S46>'  : 'power_converters_switching_function/Boost Converter/Model/MATLAB Function4'
 * '<S47>'  : 'power_converters_switching_function/Boost Converter/Model/Prediction_Vdc'
 * '<S48>'  : 'power_converters_switching_function/Boost Converter/Model/Boost_Power/Current Measurement8'
 * '<S49>'  : 'power_converters_switching_function/Boost Converter/Model/Boost_Power/D'
 * '<S50>'  : 'power_converters_switching_function/Boost Converter/Model/Boost_Power/Ip'
 * '<S51>'  : 'power_converters_switching_function/Boost Converter/Model/Boost_Power/Vdc1'
 * '<S52>'  : 'power_converters_switching_function/Boost Converter/Model/Boost_Power/Vp'
 * '<S53>'  : 'power_converters_switching_function/Boost Converter/Model/Boost_Power/Current Measurement8/Model'
 * '<S54>'  : 'power_converters_switching_function/Boost Converter/Model/Boost_Power/D/Model'
 * '<S55>'  : 'power_converters_switching_function/Boost Converter/Model/Boost_Power/D/Model/Measurement list'
 * '<S56>'  : 'power_converters_switching_function/Boost Converter/Model/Boost_Power/Vdc1/Model'
 * '<S57>'  : 'power_converters_switching_function/Buck/CM'
 * '<S58>'  : 'power_converters_switching_function/Buck/VM1'
 * '<S59>'  : 'power_converters_switching_function/Buck/CM/Model'
 * '<S60>'  : 'power_converters_switching_function/Buck/VM1/Model'
 * '<S61>'  : 'power_converters_switching_function/Buck Converter/Model'
 * '<S62>'  : 'power_converters_switching_function/Buck Converter/Model/Buck_Power'
 * '<S63>'  : 'power_converters_switching_function/Buck Converter/Model/Compare To Constant'
 * '<S64>'  : 'power_converters_switching_function/Buck Converter/Model/MATLAB Function4'
 * '<S65>'  : 'power_converters_switching_function/Buck Converter/Model/Prediction_Vdc'
 * '<S66>'  : 'power_converters_switching_function/Buck Converter/Model/Buck_Power/ V'
 * '<S67>'  : 'power_converters_switching_function/Buck Converter/Model/Buck_Power/Current Measurement7'
 * '<S68>'  : 'power_converters_switching_function/Buck Converter/Model/Buck_Power/D'
 * '<S69>'  : 'power_converters_switching_function/Buck Converter/Model/Buck_Power/Ip'
 * '<S70>'  : 'power_converters_switching_function/Buck Converter/Model/Buck_Power/Vdc1'
 * '<S71>'  : 'power_converters_switching_function/Buck Converter/Model/Buck_Power/Current Measurement7/Model'
 * '<S72>'  : 'power_converters_switching_function/Buck Converter/Model/Buck_Power/D/Model'
 * '<S73>'  : 'power_converters_switching_function/Buck Converter/Model/Buck_Power/D/Model/Measurement list'
 * '<S74>'  : 'power_converters_switching_function/Buck Converter/Model/Buck_Power/Vdc1/Model'
 * '<S75>'  : 'power_converters_switching_function/Control Systems/DC Motor Control'
 * '<S76>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L'
 * '<S77>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2Q'
 * '<S78>'  : 'power_converters_switching_function/Control Systems/PWM Gen 3L'
 * '<S79>'  : 'power_converters_switching_function/Control Systems/PWM Gen Boost'
 * '<S80>'  : 'power_converters_switching_function/Control Systems/PWM Gen Buck'
 * '<S81>'  : 'power_converters_switching_function/Control Systems/PWM Gen FB'
 * '<S82>'  : 'power_converters_switching_function/Control Systems/PWM Gen HB'
 * '<S83>'  : 'power_converters_switching_function/Control Systems/Rectifier Control System'
 * '<S84>'  : 'power_converters_switching_function/Control Systems/Statcom Control System'
 * '<S85>'  : 'power_converters_switching_function/Control Systems/DC Motor Control/Current regulator Ireg_motor'
 * '<S86>'  : 'power_converters_switching_function/Control Systems/DC Motor Control/Speed Regulator wreg'
 * '<S87>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging'
 * '<S88>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/Pavg_2L1'
 * '<S89>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/Pavg_2L2'
 * '<S90>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean2'
 * '<S91>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean3'
 * '<S92>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1'
 * '<S93>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2'
 * '<S94>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean2/Model'
 * '<S95>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean2/Model/Discrete Variable Time Delay'
 * '<S96>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean3/Model'
 * '<S97>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean3/Model/Discrete Variable Time Delay'
 * '<S98>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Cr_MinMax'
 * '<S99>'  : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Modulator type'
 * '<S100>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Reference signal'
 * '<S101>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Sampling'
 * '<S102>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Modulator type/One Three Phase Bridge'
 * '<S103>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Reference signal/External'
 * '<S104>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Sampling/Unsync Natural'
 * '<S105>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Sampling/Unsync Natural/Unsync_NaturalSampling'
 * '<S106>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator'
 * '<S107>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator/Model'
 * '<S108>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Cr_MinMax'
 * '<S109>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Modulator type'
 * '<S110>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Reference signal'
 * '<S111>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Sampling'
 * '<S112>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Modulator type/One Three Phase Bridge'
 * '<S113>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Reference signal/External'
 * '<S114>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Sampling/Unsync Natural'
 * '<S115>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Sampling/Unsync Natural/Unsync_NaturalSampling'
 * '<S116>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator'
 * '<S117>' : 'power_converters_switching_function/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator/Model'
 * '<S118>' : 'power_converters_switching_function/Control Systems/PWM Gen 2Q/Pavg_2Q'
 * '<S119>' : 'power_converters_switching_function/Control Systems/PWM Gen 2Q/Subsystem'
 * '<S120>' : 'power_converters_switching_function/Control Systems/PWM Gen 2Q/Subsystem/Mean'
 * '<S121>' : 'power_converters_switching_function/Control Systems/PWM Gen 2Q/Subsystem/PWM Gen 2Q '
 * '<S122>' : 'power_converters_switching_function/Control Systems/PWM Gen 2Q/Subsystem/Mean/Model'
 * '<S123>' : 'power_converters_switching_function/Control Systems/PWM Gen 2Q/Subsystem/Mean/Model/Discrete Variable Time Delay'
 * '<S124>' : 'power_converters_switching_function/Control Systems/PWM Gen 2Q/Subsystem/PWM Gen 2Q /Compare To Zero'
 * '<S125>' : 'power_converters_switching_function/Control Systems/PWM Gen 2Q/Subsystem/PWM Gen 2Q /Sawtooth Generator'
 * '<S126>' : 'power_converters_switching_function/Control Systems/PWM Gen 2Q/Subsystem/PWM Gen 2Q /Sawtooth Generator/Model'
 * '<S127>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging'
 * '<S128>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/Pavg_3L'
 * '<S129>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean'
 * '<S130>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean1'
 * '<S131>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L'
 * '<S132>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean/Model'
 * '<S133>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean/Model/Discrete Variable Time Delay'
 * '<S134>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean1/Model'
 * '<S135>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean1/Model/Discrete Variable Time Delay'
 * '<S136>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L/Full bridge (1-ph)'
 * '<S137>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L/Half bridge (1-ph) and 3-ph bridge'
 * '<S138>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L/State-to-Pulses Decoder'
 * '<S139>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L/Triangle Generator'
 * '<S140>' : 'power_converters_switching_function/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L/Triangle Generator/Model'
 * '<S141>' : 'power_converters_switching_function/Control Systems/PWM Gen Boost/PWM Gen'
 * '<S142>' : 'power_converters_switching_function/Control Systems/PWM Gen Boost/PWM Gen/Mean'
 * '<S143>' : 'power_converters_switching_function/Control Systems/PWM Gen Boost/PWM Gen/PWM Gen Buck '
 * '<S144>' : 'power_converters_switching_function/Control Systems/PWM Gen Boost/PWM Gen/Mean/Model'
 * '<S145>' : 'power_converters_switching_function/Control Systems/PWM Gen Boost/PWM Gen/Mean/Model/Discrete Variable Time Delay'
 * '<S146>' : 'power_converters_switching_function/Control Systems/PWM Gen Boost/PWM Gen/PWM Gen Buck /Compare To Zero'
 * '<S147>' : 'power_converters_switching_function/Control Systems/PWM Gen Boost/PWM Gen/PWM Gen Buck /Sawtooth Generator'
 * '<S148>' : 'power_converters_switching_function/Control Systems/PWM Gen Boost/PWM Gen/PWM Gen Buck /Sawtooth Generator/Model'
 * '<S149>' : 'power_converters_switching_function/Control Systems/PWM Gen Buck/PWM Gen'
 * '<S150>' : 'power_converters_switching_function/Control Systems/PWM Gen Buck/PWM Gen/Mean'
 * '<S151>' : 'power_converters_switching_function/Control Systems/PWM Gen Buck/PWM Gen/PWM Gen Buck '
 * '<S152>' : 'power_converters_switching_function/Control Systems/PWM Gen Buck/PWM Gen/Mean/Model'
 * '<S153>' : 'power_converters_switching_function/Control Systems/PWM Gen Buck/PWM Gen/Mean/Model/Discrete Variable Time Delay'
 * '<S154>' : 'power_converters_switching_function/Control Systems/PWM Gen Buck/PWM Gen/PWM Gen Buck /Compare To Zero'
 * '<S155>' : 'power_converters_switching_function/Control Systems/PWM Gen Buck/PWM Gen/PWM Gen Buck /Sawtooth Generator'
 * '<S156>' : 'power_converters_switching_function/Control Systems/PWM Gen Buck/PWM Gen/PWM Gen Buck /Sawtooth Generator/Model'
 * '<S157>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen'
 * '<S158>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/Pavg'
 * '<S159>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/Mean1'
 * '<S160>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/Mean2'
 * '<S161>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB'
 * '<S162>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/Mean1/Model'
 * '<S163>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/Mean1/Model/Discrete Variable Time Delay'
 * '<S164>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/Mean2/Model'
 * '<S165>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/Mean2/Model/Discrete Variable Time Delay'
 * '<S166>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Cr_MinMax'
 * '<S167>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Modulator type'
 * '<S168>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Reference signal'
 * '<S169>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Sampling'
 * '<S170>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Modulator type/Full Bridge Unipolar'
 * '<S171>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Reference signal/External'
 * '<S172>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Sampling/Unsync Natural'
 * '<S173>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Sampling/Unsync Natural/Unsync_NaturalSampling'
 * '<S174>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator'
 * '<S175>' : 'power_converters_switching_function/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator/Model'
 * '<S176>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Pavg_HB'
 * '<S177>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem'
 * '<S178>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/Mean'
 * '<S179>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB'
 * '<S180>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/Mean/Model'
 * '<S181>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/Mean/Model/Discrete Variable Time Delay'
 * '<S182>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Cr_MinMax'
 * '<S183>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Modulator type'
 * '<S184>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Reference signal'
 * '<S185>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Sampling'
 * '<S186>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Modulator type/One Three Phase Bridge'
 * '<S187>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Reference signal/External'
 * '<S188>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Sampling/Unsync Natural'
 * '<S189>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Sampling/Unsync Natural/Unsync_NaturalSampling'
 * '<S190>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator'
 * '<S191>' : 'power_converters_switching_function/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator/Model'
 * '<S192>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Current Regulator (Ireg)'
 * '<S193>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements'
 * '<S194>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Scaling'
 * '<S195>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Second-Order Filter'
 * '<S196>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Second-Order Filter1'
 * '<S197>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/VDC Regulator (VDCreg)'
 * '<S198>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/abc to dq0'
 * '<S199>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/dq0 to abc'
 * '<S200>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Current Regulator (Ireg)/Correction to VdVq due to delays + Transfo Connection'
 * '<S201>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Current Regulator (Ireg)/PI_d'
 * '<S202>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Current Regulator (Ireg)/PI_q'
 * '<S203>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)'
 * '<S204>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/abc to dq1'
 * '<S205>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model'
 * '<S206>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control'
 * '<S207>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Discrete'
 * '<S208>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Second-Order Filter'
 * '<S209>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value'
 * '<S210>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0'
 * '<S211>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)'
 * '<S212>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1'
 * '<S213>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2'
 * '<S214>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0'
 * '<S215>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model'
 * '<S216>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Correction subsystem'
 * '<S217>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay'
 * '<S218>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model'
 * '<S219>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Correction subsystem'
 * '<S220>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay'
 * '<S221>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0'
 * '<S222>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/abc to Alpha-Beta-Zero'
 * '<S223>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S224>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S225>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S226>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S227>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model'
 * '<S228>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/A*k(k-1)'
 * '<S229>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S230>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/C*x(k)'
 * '<S231>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model'
 * '<S232>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Correction subsystem'
 * '<S233>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay'
 * '<S234>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0'
 * '<S235>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/abc to Alpha-Beta-Zero'
 * '<S236>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S237>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S238>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S239>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S240>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0'
 * '<S241>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/abc to dq1/abc to Alpha-Beta-Zero'
 * '<S242>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S243>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S244>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S245>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S246>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Second-Order Filter/Model'
 * '<S247>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Second-Order Filter/Model/A*k(k-1)'
 * '<S248>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S249>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Second-Order Filter/Model/C*x(k)'
 * '<S250>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Second-Order Filter1/Model'
 * '<S251>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Second-Order Filter1/Model/A*k(k-1)'
 * '<S252>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Second-Order Filter1/Model/B*(u(k)+u(k-1))'
 * '<S253>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/Second-Order Filter1/Model/C*x(k)'
 * '<S254>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/VDC Regulator (VDCreg)/PI_d'
 * '<S255>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/abc to dq0/Alpha-Beta-Zero to dq0'
 * '<S256>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/abc to dq0/abc to Alpha-Beta-Zero'
 * '<S257>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S258>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S259>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S260>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S261>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/dq0 to abc/Alpha-Beta-Zero to abc'
 * '<S262>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/dq0 to abc/dq0 to Alpha-Beta-Zero'
 * '<S263>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Compare To Constant'
 * '<S264>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Compare To Constant1'
 * '<S265>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
 * '<S266>' : 'power_converters_switching_function/Control Systems/Rectifier Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Subsystem1'
 * '<S267>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Current Regulator (Ireg)'
 * '<S268>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Iq_ref generation'
 * '<S269>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements'
 * '<S270>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Scaling'
 * '<S271>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Second-Order Filter'
 * '<S272>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Second-Order Filter2'
 * '<S273>' : 'power_converters_switching_function/Control Systems/Statcom Control System/VDC Regulator (VDCreg)'
 * '<S274>' : 'power_converters_switching_function/Control Systems/Statcom Control System/abc to dq0'
 * '<S275>' : 'power_converters_switching_function/Control Systems/Statcom Control System/dq0 to abc'
 * '<S276>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Current Regulator (Ireg)/Correction to VdVq due to delays + Transfo Connection'
 * '<S277>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Current Regulator (Ireg)/PI_d'
 * '<S278>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Current Regulator (Ireg)/PI_q'
 * '<S279>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Iq_ref generation/Mean'
 * '<S280>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Iq_ref generation/Mean/Model'
 * '<S281>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Iq_ref generation/Mean/Model/Discrete Variable Time Delay'
 * '<S282>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)'
 * '<S283>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/abc to dq1'
 * '<S284>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model'
 * '<S285>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control'
 * '<S286>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Discrete'
 * '<S287>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Second-Order Filter'
 * '<S288>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value'
 * '<S289>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0'
 * '<S290>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)'
 * '<S291>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1'
 * '<S292>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2'
 * '<S293>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0'
 * '<S294>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model'
 * '<S295>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Correction subsystem'
 * '<S296>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay'
 * '<S297>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model'
 * '<S298>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Correction subsystem'
 * '<S299>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay'
 * '<S300>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0'
 * '<S301>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/abc to Alpha-Beta-Zero'
 * '<S302>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S303>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S304>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S305>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S306>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model'
 * '<S307>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/A*k(k-1)'
 * '<S308>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S309>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/C*x(k)'
 * '<S310>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model'
 * '<S311>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Correction subsystem'
 * '<S312>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay'
 * '<S313>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0'
 * '<S314>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/abc to Alpha-Beta-Zero'
 * '<S315>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S316>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S317>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S318>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S319>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0'
 * '<S320>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/abc to dq1/abc to Alpha-Beta-Zero'
 * '<S321>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S322>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S323>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S324>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S325>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Second-Order Filter/Model'
 * '<S326>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Second-Order Filter/Model/A*k(k-1)'
 * '<S327>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S328>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Second-Order Filter/Model/C*x(k)'
 * '<S329>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Second-Order Filter2/Model'
 * '<S330>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Second-Order Filter2/Model/A*k(k-1)'
 * '<S331>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Second-Order Filter2/Model/B*(u(k)+u(k-1))'
 * '<S332>' : 'power_converters_switching_function/Control Systems/Statcom Control System/Second-Order Filter2/Model/C*x(k)'
 * '<S333>' : 'power_converters_switching_function/Control Systems/Statcom Control System/VDC Regulator (VDCreg)/PI_d'
 * '<S334>' : 'power_converters_switching_function/Control Systems/Statcom Control System/abc to dq0/Alpha-Beta-Zero to dq0'
 * '<S335>' : 'power_converters_switching_function/Control Systems/Statcom Control System/abc to dq0/abc to Alpha-Beta-Zero'
 * '<S336>' : 'power_converters_switching_function/Control Systems/Statcom Control System/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S337>' : 'power_converters_switching_function/Control Systems/Statcom Control System/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S338>' : 'power_converters_switching_function/Control Systems/Statcom Control System/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S339>' : 'power_converters_switching_function/Control Systems/Statcom Control System/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S340>' : 'power_converters_switching_function/Control Systems/Statcom Control System/dq0 to abc/Alpha-Beta-Zero to abc'
 * '<S341>' : 'power_converters_switching_function/Control Systems/Statcom Control System/dq0 to abc/dq0 to Alpha-Beta-Zero'
 * '<S342>' : 'power_converters_switching_function/Control Systems/Statcom Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Compare To Constant'
 * '<S343>' : 'power_converters_switching_function/Control Systems/Statcom Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Compare To Constant1'
 * '<S344>' : 'power_converters_switching_function/Control Systems/Statcom Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
 * '<S345>' : 'power_converters_switching_function/Control Systems/Statcom Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Subsystem1'
 * '<S346>' : 'power_converters_switching_function/DC Machine/Electrical model'
 * '<S347>' : 'power_converters_switching_function/DC Machine/FCEM'
 * '<S348>' : 'power_converters_switching_function/DC Machine/Mechanical model'
 * '<S349>' : 'power_converters_switching_function/DC Machine/iA'
 * '<S350>' : 'power_converters_switching_function/DC Machine/iF'
 * '<S351>' : 'power_converters_switching_function/DC Machine/Electrical model/Coulomb (Tf) & Viscous ( Bm*w)  Friction Torques'
 * '<S352>' : 'power_converters_switching_function/DC Machine/iA/Model'
 * '<S353>' : 'power_converters_switching_function/DC Machine/iF/Model'
 * '<S354>' : 'power_converters_switching_function/DC Voltage Source2/Model'
 * '<S355>' : 'power_converters_switching_function/DC src/Model'
 * '<S356>' : 'power_converters_switching_function/DC_3L/VM1'
 * '<S357>' : 'power_converters_switching_function/DC_3L/VM2'
 * '<S358>' : 'power_converters_switching_function/DC_3L/VM1/Model'
 * '<S359>' : 'power_converters_switching_function/DC_3L/VM2/Model'
 * '<S360>' : 'power_converters_switching_function/DC_stat/VM1'
 * '<S361>' : 'power_converters_switching_function/DC_stat/VM1/Model'
 * '<S362>' : 'power_converters_switching_function/FB/CM'
 * '<S363>' : 'power_converters_switching_function/FB/VM1'
 * '<S364>' : 'power_converters_switching_function/FB/CM/Model'
 * '<S365>' : 'power_converters_switching_function/FB/VM1/Model'
 * '<S366>' : 'power_converters_switching_function/Full-Bridge Converter/Model'
 * '<S367>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Compare To Constant'
 * '<S368>' : 'power_converters_switching_function/Full-Bridge Converter/Model/MATLAB Function3'
 * '<S369>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power'
 * '<S370>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Prediction_Vdc'
 * '<S371>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Current Measurement7'
 * '<S372>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Current Measurement8'
 * '<S373>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Dm'
 * '<S374>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Dp'
 * '<S375>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Ip'
 * '<S376>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Vdc1'
 * '<S377>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Vm'
 * '<S378>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Vp'
 * '<S379>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Current Measurement7/Model'
 * '<S380>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Current Measurement8/Model'
 * '<S381>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Dm/Model'
 * '<S382>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Dm/Model/Measurement list'
 * '<S383>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Dp/Model'
 * '<S384>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Dp/Model/Measurement list'
 * '<S385>' : 'power_converters_switching_function/Full-Bridge Converter/Model/Power/Vdc1/Model'
 * '<S386>' : 'power_converters_switching_function/HB/CM'
 * '<S387>' : 'power_converters_switching_function/HB/VM1'
 * '<S388>' : 'power_converters_switching_function/HB/CM/Model'
 * '<S389>' : 'power_converters_switching_function/HB/VM1/Model'
 * '<S390>' : 'power_converters_switching_function/Half-Bridge Converter/Model'
 * '<S391>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Compare To Constant'
 * '<S392>' : 'power_converters_switching_function/Half-Bridge Converter/Model/MATLAB Function'
 * '<S393>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power'
 * '<S394>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Prediction_Vdc'
 * '<S395>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Current Measurement7'
 * '<S396>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Current Measurement8'
 * '<S397>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Dm'
 * '<S398>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Dp'
 * '<S399>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Ip'
 * '<S400>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Vdc1'
 * '<S401>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Vm'
 * '<S402>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Vp'
 * '<S403>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Current Measurement7/Model'
 * '<S404>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Current Measurement8/Model'
 * '<S405>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Dm/Model'
 * '<S406>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Dm/Model/Measurement list'
 * '<S407>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Dp/Model'
 * '<S408>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Dp/Model/Measurement list'
 * '<S409>' : 'power_converters_switching_function/Half-Bridge Converter/Model/Power/Vdc1/Model'
 * '<S410>' : 'power_converters_switching_function/Mean/Model'
 * '<S411>' : 'power_converters_switching_function/Mean/Model/Discrete Variable Time Delay'
 * '<S412>' : 'power_converters_switching_function/Mean1/Model'
 * '<S413>' : 'power_converters_switching_function/Mean1/Model/Discrete Variable Time Delay'
 * '<S414>' : 'power_converters_switching_function/Mean2/Model'
 * '<S415>' : 'power_converters_switching_function/Mean2/Model/Discrete Variable Time Delay'
 * '<S416>' : 'power_converters_switching_function/Mean3/Model'
 * '<S417>' : 'power_converters_switching_function/Mean3/Model/Discrete Variable Time Delay'
 * '<S418>' : 'power_converters_switching_function/Power/Fourier'
 * '<S419>' : 'power_converters_switching_function/Power/Fourier1'
 * '<S420>' : 'power_converters_switching_function/Power/Fourier/Mean'
 * '<S421>' : 'power_converters_switching_function/Power/Fourier/Mean value1'
 * '<S422>' : 'power_converters_switching_function/Power/Fourier/Mean/Model'
 * '<S423>' : 'power_converters_switching_function/Power/Fourier/Mean/Model/Discrete Variable Time Delay'
 * '<S424>' : 'power_converters_switching_function/Power/Fourier/Mean value1/Model'
 * '<S425>' : 'power_converters_switching_function/Power/Fourier/Mean value1/Model/Discrete Variable Time Delay'
 * '<S426>' : 'power_converters_switching_function/Power/Fourier1/Mean'
 * '<S427>' : 'power_converters_switching_function/Power/Fourier1/Mean value1'
 * '<S428>' : 'power_converters_switching_function/Power/Fourier1/Mean/Model'
 * '<S429>' : 'power_converters_switching_function/Power/Fourier1/Mean/Model/Discrete Variable Time Delay'
 * '<S430>' : 'power_converters_switching_function/Power/Fourier1/Mean value1/Model'
 * '<S431>' : 'power_converters_switching_function/Power/Fourier1/Mean value1/Model/Discrete Variable Time Delay'
 * '<S432>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer'
 * '<S433>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1'
 * '<S434>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A'
 * '<S435>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B'
 * '<S436>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C'
 * '<S437>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Neg. Seq. Computation'
 * '<S438>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Pos. Seq. Computation'
 * '<S439>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Zero Seq. Computation'
 * '<S440>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean'
 * '<S441>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1'
 * '<S442>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean/Model'
 * '<S443>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S444>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1/Model'
 * '<S445>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S446>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean'
 * '<S447>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1'
 * '<S448>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean/Model'
 * '<S449>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S450>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1/Model'
 * '<S451>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S452>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean'
 * '<S453>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1'
 * '<S454>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean/Model'
 * '<S455>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S456>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1/Model'
 * '<S457>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S458>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A'
 * '<S459>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B'
 * '<S460>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C'
 * '<S461>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Neg. Seq. Computation'
 * '<S462>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Pos. Seq. Computation'
 * '<S463>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Zero Seq. Computation'
 * '<S464>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean'
 * '<S465>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1'
 * '<S466>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean/Model'
 * '<S467>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S468>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1/Model'
 * '<S469>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S470>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean'
 * '<S471>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1'
 * '<S472>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean/Model'
 * '<S473>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S474>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1/Model'
 * '<S475>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S476>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean'
 * '<S477>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1'
 * '<S478>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean/Model'
 * '<S479>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S480>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1/Model'
 * '<S481>' : 'power_converters_switching_function/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S482>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer'
 * '<S483>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1'
 * '<S484>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A'
 * '<S485>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B'
 * '<S486>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C'
 * '<S487>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Neg. Seq. Computation'
 * '<S488>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Pos. Seq. Computation'
 * '<S489>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Zero Seq. Computation'
 * '<S490>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean'
 * '<S491>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1'
 * '<S492>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean/Model'
 * '<S493>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S494>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1/Model'
 * '<S495>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S496>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean'
 * '<S497>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1'
 * '<S498>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean/Model'
 * '<S499>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S500>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1/Model'
 * '<S501>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S502>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean'
 * '<S503>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1'
 * '<S504>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean/Model'
 * '<S505>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S506>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1/Model'
 * '<S507>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S508>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A'
 * '<S509>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B'
 * '<S510>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C'
 * '<S511>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Neg. Seq. Computation'
 * '<S512>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Pos. Seq. Computation'
 * '<S513>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Zero Seq. Computation'
 * '<S514>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean'
 * '<S515>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1'
 * '<S516>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean/Model'
 * '<S517>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S518>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1/Model'
 * '<S519>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S520>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean'
 * '<S521>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1'
 * '<S522>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean/Model'
 * '<S523>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S524>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1/Model'
 * '<S525>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S526>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean'
 * '<S527>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1'
 * '<S528>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean/Model'
 * '<S529>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S530>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1/Model'
 * '<S531>' : 'power_converters_switching_function/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S532>' : 'power_converters_switching_function/Scopes/Mean'
 * '<S533>' : 'power_converters_switching_function/Scopes/Mean1'
 * '<S534>' : 'power_converters_switching_function/Scopes/Mean2'
 * '<S535>' : 'power_converters_switching_function/Scopes/Mean3'
 * '<S536>' : 'power_converters_switching_function/Scopes/Power'
 * '<S537>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)'
 * '<S538>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1'
 * '<S539>' : 'power_converters_switching_function/Scopes/V1 meas'
 * '<S540>' : 'power_converters_switching_function/Scopes/Mean/Model'
 * '<S541>' : 'power_converters_switching_function/Scopes/Mean/Model/Discrete Variable Time Delay'
 * '<S542>' : 'power_converters_switching_function/Scopes/Mean1/Model'
 * '<S543>' : 'power_converters_switching_function/Scopes/Mean1/Model/Discrete Variable Time Delay'
 * '<S544>' : 'power_converters_switching_function/Scopes/Mean2/Model'
 * '<S545>' : 'power_converters_switching_function/Scopes/Mean2/Model/Discrete Variable Time Delay'
 * '<S546>' : 'power_converters_switching_function/Scopes/Mean3/Model'
 * '<S547>' : 'power_converters_switching_function/Scopes/Mean3/Model/Discrete Variable Time Delay'
 * '<S548>' : 'power_converters_switching_function/Scopes/Power/Fourier'
 * '<S549>' : 'power_converters_switching_function/Scopes/Power/Fourier1'
 * '<S550>' : 'power_converters_switching_function/Scopes/Power/Fourier/Mean'
 * '<S551>' : 'power_converters_switching_function/Scopes/Power/Fourier/Mean value1'
 * '<S552>' : 'power_converters_switching_function/Scopes/Power/Fourier/Mean/Model'
 * '<S553>' : 'power_converters_switching_function/Scopes/Power/Fourier/Mean/Model/Discrete Variable Time Delay'
 * '<S554>' : 'power_converters_switching_function/Scopes/Power/Fourier/Mean value1/Model'
 * '<S555>' : 'power_converters_switching_function/Scopes/Power/Fourier/Mean value1/Model/Discrete Variable Time Delay'
 * '<S556>' : 'power_converters_switching_function/Scopes/Power/Fourier1/Mean'
 * '<S557>' : 'power_converters_switching_function/Scopes/Power/Fourier1/Mean value1'
 * '<S558>' : 'power_converters_switching_function/Scopes/Power/Fourier1/Mean/Model'
 * '<S559>' : 'power_converters_switching_function/Scopes/Power/Fourier1/Mean/Model/Discrete Variable Time Delay'
 * '<S560>' : 'power_converters_switching_function/Scopes/Power/Fourier1/Mean value1/Model'
 * '<S561>' : 'power_converters_switching_function/Scopes/Power/Fourier1/Mean value1/Model/Discrete Variable Time Delay'
 * '<S562>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer'
 * '<S563>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1'
 * '<S564>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A'
 * '<S565>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B'
 * '<S566>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C'
 * '<S567>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Neg. Seq. Computation'
 * '<S568>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Pos. Seq. Computation'
 * '<S569>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Zero Seq. Computation'
 * '<S570>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean'
 * '<S571>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1'
 * '<S572>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean/Model'
 * '<S573>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S574>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1/Model'
 * '<S575>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S576>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean'
 * '<S577>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1'
 * '<S578>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean/Model'
 * '<S579>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S580>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1/Model'
 * '<S581>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S582>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean'
 * '<S583>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1'
 * '<S584>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean/Model'
 * '<S585>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S586>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1/Model'
 * '<S587>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S588>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A'
 * '<S589>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B'
 * '<S590>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C'
 * '<S591>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Neg. Seq. Computation'
 * '<S592>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Pos. Seq. Computation'
 * '<S593>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Zero Seq. Computation'
 * '<S594>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean'
 * '<S595>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1'
 * '<S596>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean/Model'
 * '<S597>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S598>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1/Model'
 * '<S599>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S600>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean'
 * '<S601>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1'
 * '<S602>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean/Model'
 * '<S603>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S604>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1/Model'
 * '<S605>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S606>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean'
 * '<S607>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1'
 * '<S608>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean/Model'
 * '<S609>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S610>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1/Model'
 * '<S611>' : 'power_converters_switching_function/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S612>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer'
 * '<S613>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1'
 * '<S614>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A'
 * '<S615>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B'
 * '<S616>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C'
 * '<S617>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Neg. Seq. Computation'
 * '<S618>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Pos. Seq. Computation'
 * '<S619>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Zero Seq. Computation'
 * '<S620>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean'
 * '<S621>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1'
 * '<S622>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean/Model'
 * '<S623>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S624>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1/Model'
 * '<S625>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S626>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean'
 * '<S627>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1'
 * '<S628>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean/Model'
 * '<S629>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S630>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1/Model'
 * '<S631>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S632>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean'
 * '<S633>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1'
 * '<S634>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean/Model'
 * '<S635>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S636>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1/Model'
 * '<S637>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S638>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A'
 * '<S639>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B'
 * '<S640>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C'
 * '<S641>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Neg. Seq. Computation'
 * '<S642>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Pos. Seq. Computation'
 * '<S643>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Zero Seq. Computation'
 * '<S644>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean'
 * '<S645>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1'
 * '<S646>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean/Model'
 * '<S647>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S648>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1/Model'
 * '<S649>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S650>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean'
 * '<S651>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1'
 * '<S652>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean/Model'
 * '<S653>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S654>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1/Model'
 * '<S655>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S656>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean'
 * '<S657>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1'
 * '<S658>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean/Model'
 * '<S659>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S660>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1/Model'
 * '<S661>' : 'power_converters_switching_function/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S662>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_A'
 * '<S663>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_B'
 * '<S664>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_C'
 * '<S665>' : 'power_converters_switching_function/Scopes/V1 meas/Neg. Seq. Computation'
 * '<S666>' : 'power_converters_switching_function/Scopes/V1 meas/Pos. Seq. Computation'
 * '<S667>' : 'power_converters_switching_function/Scopes/V1 meas/Zero Seq. Computation'
 * '<S668>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_A/Mean'
 * '<S669>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_A/Mean value1'
 * '<S670>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_A/Mean/Model'
 * '<S671>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S672>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_A/Mean value1/Model'
 * '<S673>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S674>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_B/Mean'
 * '<S675>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_B/Mean value1'
 * '<S676>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_B/Mean/Model'
 * '<S677>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S678>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_B/Mean value1/Model'
 * '<S679>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S680>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_C/Mean'
 * '<S681>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_C/Mean value1'
 * '<S682>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_C/Mean/Model'
 * '<S683>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S684>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_C/Mean value1/Model'
 * '<S685>' : 'power_converters_switching_function/Scopes/V1 meas/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S686>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1'
 * '<S687>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2'
 * '<S688>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3'
 * '<S689>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Compare To Constant'
 * '<S690>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/MATLAB Function1'
 * '<S691>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power'
 * '<S692>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Prediction_Vdc'
 * '<S693>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Current Measurement7'
 * '<S694>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Current Measurement8'
 * '<S695>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Dm'
 * '<S696>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Dp'
 * '<S697>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Ip'
 * '<S698>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Ip1'
 * '<S699>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Vdc1'
 * '<S700>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Vdc3'
 * '<S701>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Vm'
 * '<S702>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Vp'
 * '<S703>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Current Measurement7/Model'
 * '<S704>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Current Measurement8/Model'
 * '<S705>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Dm/Model'
 * '<S706>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Dm/Model/Measurement list'
 * '<S707>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Dp/Model'
 * '<S708>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Dp/Model/Measurement list'
 * '<S709>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Vdc1/Model'
 * '<S710>' : 'power_converters_switching_function/Three-Level NPC Converter/Model1/Power/Vdc3/Model'
 * '<S711>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Compare To Constant'
 * '<S712>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/MATLAB Function1'
 * '<S713>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power'
 * '<S714>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Prediction_Vdc'
 * '<S715>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Current Measurement7'
 * '<S716>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Current Measurement8'
 * '<S717>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Dm'
 * '<S718>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Dp'
 * '<S719>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Ip'
 * '<S720>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Ip1'
 * '<S721>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Vdc1'
 * '<S722>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Vdc3'
 * '<S723>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Vm'
 * '<S724>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Vp'
 * '<S725>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Current Measurement7/Model'
 * '<S726>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Current Measurement8/Model'
 * '<S727>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Dm/Model'
 * '<S728>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Dm/Model/Measurement list'
 * '<S729>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Dp/Model'
 * '<S730>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Dp/Model/Measurement list'
 * '<S731>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Vdc1/Model'
 * '<S732>' : 'power_converters_switching_function/Three-Level NPC Converter/Model2/Power/Vdc3/Model'
 * '<S733>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Compare To Constant'
 * '<S734>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/MATLAB Function1'
 * '<S735>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power'
 * '<S736>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Prediction_Vdc'
 * '<S737>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Current Measurement7'
 * '<S738>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Current Measurement8'
 * '<S739>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Dm'
 * '<S740>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Dp'
 * '<S741>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Ip'
 * '<S742>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Ip1'
 * '<S743>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Vdc1'
 * '<S744>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Vdc3'
 * '<S745>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Vm'
 * '<S746>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Vp'
 * '<S747>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Current Measurement7/Model'
 * '<S748>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Current Measurement8/Model'
 * '<S749>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Dm/Model'
 * '<S750>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Dm/Model/Measurement list'
 * '<S751>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Dp/Model'
 * '<S752>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Dp/Model/Measurement list'
 * '<S753>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Vdc1/Model'
 * '<S754>' : 'power_converters_switching_function/Three-Level NPC Converter/Model3/Power/Vdc3/Model'
 * '<S755>' : 'power_converters_switching_function/Tr A/Model'
 * '<S756>' : 'power_converters_switching_function/Tr B/Model'
 * '<S757>' : 'power_converters_switching_function/Tr C/Model'
 * '<S758>' : 'power_converters_switching_function/Tr1/Model'
 * '<S759>' : 'power_converters_switching_function/Tr1/Model/Linear'
 * '<S760>' : 'power_converters_switching_function/Tr1/Model/Linear1'
 * '<S761>' : 'power_converters_switching_function/Tr1/Model/Linear2'
 * '<S762>' : 'power_converters_switching_function/Two-Level Converter 1/Model1'
 * '<S763>' : 'power_converters_switching_function/Two-Level Converter 1/Model2'
 * '<S764>' : 'power_converters_switching_function/Two-Level Converter 1/Model3'
 * '<S765>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Compare To Constant'
 * '<S766>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/MATLAB Function'
 * '<S767>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power'
 * '<S768>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Prediction_Vdc'
 * '<S769>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Current Measurement7'
 * '<S770>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Current Measurement8'
 * '<S771>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Dm'
 * '<S772>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Dp'
 * '<S773>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Ip'
 * '<S774>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Vdc1'
 * '<S775>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Vm'
 * '<S776>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Vp'
 * '<S777>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Current Measurement7/Model'
 * '<S778>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Current Measurement8/Model'
 * '<S779>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Dm/Model'
 * '<S780>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Dm/Model/Measurement list'
 * '<S781>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Dp/Model'
 * '<S782>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Dp/Model/Measurement list'
 * '<S783>' : 'power_converters_switching_function/Two-Level Converter 1/Model1/Power/Vdc1/Model'
 * '<S784>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Compare To Constant'
 * '<S785>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/MATLAB Function'
 * '<S786>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power'
 * '<S787>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Prediction_Vdc'
 * '<S788>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Current Measurement7'
 * '<S789>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Current Measurement8'
 * '<S790>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Dm'
 * '<S791>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Dp'
 * '<S792>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Ip'
 * '<S793>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Vdc1'
 * '<S794>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Vm'
 * '<S795>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Vp'
 * '<S796>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Current Measurement7/Model'
 * '<S797>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Current Measurement8/Model'
 * '<S798>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Dm/Model'
 * '<S799>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Dm/Model/Measurement list'
 * '<S800>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Dp/Model'
 * '<S801>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Dp/Model/Measurement list'
 * '<S802>' : 'power_converters_switching_function/Two-Level Converter 1/Model2/Power/Vdc1/Model'
 * '<S803>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Compare To Constant'
 * '<S804>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/MATLAB Function'
 * '<S805>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power'
 * '<S806>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Prediction_Vdc'
 * '<S807>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Current Measurement7'
 * '<S808>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Current Measurement8'
 * '<S809>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Dm'
 * '<S810>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Dp'
 * '<S811>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Ip'
 * '<S812>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Vdc1'
 * '<S813>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Vm'
 * '<S814>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Vp'
 * '<S815>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Current Measurement7/Model'
 * '<S816>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Current Measurement8/Model'
 * '<S817>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Dm/Model'
 * '<S818>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Dm/Model/Measurement list'
 * '<S819>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Dp/Model'
 * '<S820>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Dp/Model/Measurement list'
 * '<S821>' : 'power_converters_switching_function/Two-Level Converter 1/Model3/Power/Vdc1/Model'
 * '<S822>' : 'power_converters_switching_function/Two-Level Converter 2/Model1'
 * '<S823>' : 'power_converters_switching_function/Two-Level Converter 2/Model2'
 * '<S824>' : 'power_converters_switching_function/Two-Level Converter 2/Model3'
 * '<S825>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Compare To Constant'
 * '<S826>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/MATLAB Function'
 * '<S827>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power'
 * '<S828>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Prediction_Vdc'
 * '<S829>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Current Measurement7'
 * '<S830>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Current Measurement8'
 * '<S831>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Dm'
 * '<S832>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Dp'
 * '<S833>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Ip'
 * '<S834>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Vdc1'
 * '<S835>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Vm'
 * '<S836>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Vp'
 * '<S837>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Current Measurement7/Model'
 * '<S838>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Current Measurement8/Model'
 * '<S839>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Dm/Model'
 * '<S840>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Dm/Model/Measurement list'
 * '<S841>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Dp/Model'
 * '<S842>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Dp/Model/Measurement list'
 * '<S843>' : 'power_converters_switching_function/Two-Level Converter 2/Model1/Power/Vdc1/Model'
 * '<S844>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Compare To Constant'
 * '<S845>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/MATLAB Function'
 * '<S846>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power'
 * '<S847>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Prediction_Vdc'
 * '<S848>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Current Measurement7'
 * '<S849>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Current Measurement8'
 * '<S850>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Dm'
 * '<S851>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Dp'
 * '<S852>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Ip'
 * '<S853>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Vdc1'
 * '<S854>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Vm'
 * '<S855>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Vp'
 * '<S856>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Current Measurement7/Model'
 * '<S857>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Current Measurement8/Model'
 * '<S858>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Dm/Model'
 * '<S859>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Dm/Model/Measurement list'
 * '<S860>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Dp/Model'
 * '<S861>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Dp/Model/Measurement list'
 * '<S862>' : 'power_converters_switching_function/Two-Level Converter 2/Model2/Power/Vdc1/Model'
 * '<S863>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Compare To Constant'
 * '<S864>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/MATLAB Function'
 * '<S865>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power'
 * '<S866>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Prediction_Vdc'
 * '<S867>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Current Measurement7'
 * '<S868>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Current Measurement8'
 * '<S869>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Dm'
 * '<S870>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Dp'
 * '<S871>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Ip'
 * '<S872>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Vdc1'
 * '<S873>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Vm'
 * '<S874>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Vp'
 * '<S875>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Current Measurement7/Model'
 * '<S876>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Current Measurement8/Model'
 * '<S877>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Dm/Model'
 * '<S878>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Dm/Model/Measurement list'
 * '<S879>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Dp/Model'
 * '<S880>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Dp/Model/Measurement list'
 * '<S881>' : 'power_converters_switching_function/Two-Level Converter 2/Model3/Power/Vdc1/Model'
 * '<S882>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model'
 * '<S883>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Compare To Constant'
 * '<S884>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/MATLAB Function'
 * '<S885>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power'
 * '<S886>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Prediction_Vdc'
 * '<S887>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Current Measurement7'
 * '<S888>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Current Measurement8'
 * '<S889>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Dm'
 * '<S890>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Dp'
 * '<S891>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Ip'
 * '<S892>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Vdc1'
 * '<S893>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Vm'
 * '<S894>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Vp'
 * '<S895>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Current Measurement7/Model'
 * '<S896>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Current Measurement8/Model'
 * '<S897>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Dm/Model'
 * '<S898>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Dm/Model/Measurement list'
 * '<S899>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Dp/Model'
 * '<S900>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Dp/Model/Measurement list'
 * '<S901>' : 'power_converters_switching_function/Two-Quadrant DC//DC Converter/Model/Power/Vdc1/Model'
 * '<S902>' : 'power_converters_switching_function/V1 meas/Fourier_A'
 * '<S903>' : 'power_converters_switching_function/V1 meas/Fourier_B'
 * '<S904>' : 'power_converters_switching_function/V1 meas/Fourier_C'
 * '<S905>' : 'power_converters_switching_function/V1 meas/Neg. Seq. Computation'
 * '<S906>' : 'power_converters_switching_function/V1 meas/Pos. Seq. Computation'
 * '<S907>' : 'power_converters_switching_function/V1 meas/Zero Seq. Computation'
 * '<S908>' : 'power_converters_switching_function/V1 meas/Fourier_A/Mean'
 * '<S909>' : 'power_converters_switching_function/V1 meas/Fourier_A/Mean value1'
 * '<S910>' : 'power_converters_switching_function/V1 meas/Fourier_A/Mean/Model'
 * '<S911>' : 'power_converters_switching_function/V1 meas/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S912>' : 'power_converters_switching_function/V1 meas/Fourier_A/Mean value1/Model'
 * '<S913>' : 'power_converters_switching_function/V1 meas/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S914>' : 'power_converters_switching_function/V1 meas/Fourier_B/Mean'
 * '<S915>' : 'power_converters_switching_function/V1 meas/Fourier_B/Mean value1'
 * '<S916>' : 'power_converters_switching_function/V1 meas/Fourier_B/Mean/Model'
 * '<S917>' : 'power_converters_switching_function/V1 meas/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S918>' : 'power_converters_switching_function/V1 meas/Fourier_B/Mean value1/Model'
 * '<S919>' : 'power_converters_switching_function/V1 meas/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S920>' : 'power_converters_switching_function/V1 meas/Fourier_C/Mean'
 * '<S921>' : 'power_converters_switching_function/V1 meas/Fourier_C/Mean value1'
 * '<S922>' : 'power_converters_switching_function/V1 meas/Fourier_C/Mean/Model'
 * '<S923>' : 'power_converters_switching_function/V1 meas/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S924>' : 'power_converters_switching_function/V1 meas/Fourier_C/Mean value1/Model'
 * '<S925>' : 'power_converters_switching_function/V1 meas/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S926>' : 'power_converters_switching_function/Vgrid/Model'
 * '<S927>' : 'power_converters_switching_function/Vgrid/Model/Harmonic Generator'
 * '<S928>' : 'power_converters_switching_function/Vgrid/Model/Signal generator'
 * '<S929>' : 'power_converters_switching_function/Vgrid/Model/Harmonic Generator/Harmonic A generation'
 * '<S930>' : 'power_converters_switching_function/Vgrid/Model/Harmonic Generator/Harmonic B generation'
 * '<S931>' : 'power_converters_switching_function/Vgrid/Model/Signal generator/Stair Generator'
 * '<S932>' : 'power_converters_switching_function/Vgrid/Model/Signal generator/Variation SubSystem'
 * '<S933>' : 'power_converters_switching_function/Vgrid/Model/Signal generator/Stair Generator/Model'
 * '<S934>' : 'power_converters_switching_function/grid/Mode I'
 * '<S935>' : 'power_converters_switching_function/grid/Mode V'
 * '<S936>' : 'power_converters_switching_function/grid/Model'
 * '<S937>' : 'power_converters_switching_function/grid/Model/I A:'
 * '<S938>' : 'power_converters_switching_function/grid/Model/I B:'
 * '<S939>' : 'power_converters_switching_function/grid/Model/I C:'
 * '<S940>' : 'power_converters_switching_function/grid/Model/U A:'
 * '<S941>' : 'power_converters_switching_function/grid/Model/U B:'
 * '<S942>' : 'power_converters_switching_function/grid/Model/U C:'
 * '<S943>' : 'power_converters_switching_function/grid/Model/I A:/Model'
 * '<S944>' : 'power_converters_switching_function/grid/Model/I B:/Model'
 * '<S945>' : 'power_converters_switching_function/grid/Model/I C:/Model'
 * '<S946>' : 'power_converters_switching_function/grid/Model/U A:/Model'
 * '<S947>' : 'power_converters_switching_function/grid/Model/U B:/Model'
 * '<S948>' : 'power_converters_switching_function/grid/Model/U C:/Model'
 * '<S949>' : 'power_converters_switching_function/motor/CM'
 * '<S950>' : 'power_converters_switching_function/motor/VM1'
 * '<S951>' : 'power_converters_switching_function/motor/CM/Model'
 * '<S952>' : 'power_converters_switching_function/motor/VM1/Model'
 * '<S953>' : 'power_converters_switching_function/powergui/EquivalentModel1'
 * '<S954>' : 'power_converters_switching_function/powergui/EquivalentModel2'
 * '<S955>' : 'power_converters_switching_function/powergui/EquivalentModel3'
 * '<S956>' : 'power_converters_switching_function/powergui/EquivalentModel1/Sources'
 * '<S957>' : 'power_converters_switching_function/powergui/EquivalentModel1/Yout'
 * '<S958>' : 'power_converters_switching_function/powergui/EquivalentModel2/Gates'
 * '<S959>' : 'power_converters_switching_function/powergui/EquivalentModel2/Sources'
 * '<S960>' : 'power_converters_switching_function/powergui/EquivalentModel2/Status'
 * '<S961>' : 'power_converters_switching_function/powergui/EquivalentModel2/Yout'
 * '<S962>' : 'power_converters_switching_function/powergui/EquivalentModel3/Gates'
 * '<S963>' : 'power_converters_switching_function/powergui/EquivalentModel3/Sources'
 * '<S964>' : 'power_converters_switching_function/powergui/EquivalentModel3/Status'
 * '<S965>' : 'power_converters_switching_function/powergui/EquivalentModel3/Yout'
 * '<S966>' : 'power_converters_switching_function/sec/Mode I'
 * '<S967>' : 'power_converters_switching_function/sec/Mode V'
 * '<S968>' : 'power_converters_switching_function/sec/Model'
 * '<S969>' : 'power_converters_switching_function/sec/Model/U AB:'
 * '<S970>' : 'power_converters_switching_function/sec/Model/U BC:'
 * '<S971>' : 'power_converters_switching_function/sec/Model/U CA:'
 * '<S972>' : 'power_converters_switching_function/sec/Model/U AB:/Model'
 * '<S973>' : 'power_converters_switching_function/sec/Model/U BC:/Model'
 * '<S974>' : 'power_converters_switching_function/sec/Model/U CA:/Model'
 * '<S975>' : 'power_converters_switching_function/stat/Mode I'
 * '<S976>' : 'power_converters_switching_function/stat/Mode V'
 * '<S977>' : 'power_converters_switching_function/stat/Model'
 * '<S978>' : 'power_converters_switching_function/stat/Model/I A:'
 * '<S979>' : 'power_converters_switching_function/stat/Model/I B:'
 * '<S980>' : 'power_converters_switching_function/stat/Model/I C:'
 * '<S981>' : 'power_converters_switching_function/stat/Model/U A:'
 * '<S982>' : 'power_converters_switching_function/stat/Model/U B:'
 * '<S983>' : 'power_converters_switching_function/stat/Model/U C:'
 * '<S984>' : 'power_converters_switching_function/stat/Model/I A:/Model'
 * '<S985>' : 'power_converters_switching_function/stat/Model/I B:/Model'
 * '<S986>' : 'power_converters_switching_function/stat/Model/I C:/Model'
 * '<S987>' : 'power_converters_switching_function/stat/Model/U A:/Model'
 * '<S988>' : 'power_converters_switching_function/stat/Model/U B:/Model'
 * '<S989>' : 'power_converters_switching_function/stat/Model/U C:/Model'
 */
#endif                   /* RTW_HEADER_power_converters_switching_function_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
