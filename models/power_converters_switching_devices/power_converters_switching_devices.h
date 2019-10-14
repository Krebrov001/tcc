/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: power_converters_switching_devices.h
 *
 * Code generated for Simulink model 'power_converters_switching_devices'.
 *
 * Model version                  : 1.1238
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 13:33:37 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_power_converters_switching_devices_h_
#define RTW_HEADER_power_converters_switching_devices_h_
#include <stddef.h>
#include <string.h>
#include <float.h>
#include <math.h>
#ifndef power_converters_switching_devices_COMMON_INCLUDES_
# define power_converters_switching_devices_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif                 /* power_converters_switching_devices_COMMON_INCLUDES_ */

#include "power_converters_switching_devices_types.h"
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
  creal_T Gain3_e;                     /* '<S783>/Gain3' */
  creal_T Gain3_f;                     /* '<S482>/Gain3' */
  creal_T Gain3_kl;                    /* '<S481>/Gain3' */
  creal_T Gain3_o;                     /* '<S459>/Gain3' */
  creal_T Gain3_en;                    /* '<S458>/Gain3' */
  creal_T Gain3_l;                     /* '<S457>/Gain3' */
  creal_T Gain3_fk;                    /* '<S432>/Gain3' */
  creal_T Gain3_n;                     /* '<S408>/Gain3' */
  real_T Sum5[3];                      /* '<S803>/Sum5' */
  real_T StateSpace_o1[71];            /* '<S831>/State-Space' */
  real_T StateSpace_o2[42];            /* '<S831>/State-Space' */
  real_T RateTransition3[2];           /* '<S71>/Rate Transition3' */
  real_T RateTransition3_a[2];         /* '<S72>/Rate Transition3' */
  real_T Product4_c[4];                /* '<S656>/Product4' */
  real_T Product4_d[4];                /* '<S657>/Product4' */
  real_T Product4_p[4];                /* '<S658>/Product4' */
  real_T Product4_i[2];                /* '<S771>/Product4' */
  real_T Product4_k[4];                /* '<S354>/Product4' */
  real_T Product4_e[2];                /* '<S372>/Product4' */
  real_T Product4_h[2];                /* '<S723>/Product4' */
  real_T Product4_it[2];               /* '<S724>/Product4' */
  real_T Product4_ij[2];               /* '<S725>/Product4' */
  real_T Product4_a[2];                /* '<S747>/Product4' */
  real_T Product4_az[2];               /* '<S748>/Product4' */
  real_T Product4_j[2];                /* '<S749>/Product4' */
  real_T Product1[3];                  /* '<S806>/Product1' */
  real_T Product1_o[3];                /* '<S807>/Product1' */
  real_T DataTypeConversion[2];        /* '<S167>/Data Type Conversion' */
  real_T DataTypeConversion_o[4];      /* '<S149>/Data Type Conversion' */
  real_T DataTypeConversion_or[12];    /* '<S119>/Data Type Conversion' */
  real_T Integ4_lh[3];                 /* '<S120>/Integ4' */
  real_T SFunction_bl[3];              /* '<S121>/S-Function' */
  real_T Integ4_fe[3];                 /* '<S122>/Integ4' */
  real_T SFunction_fj[3];              /* '<S123>/S-Function' */
  real_T DataTypeConversion_d[6];      /* '<S80>/Data Type Conversion' */
  real_T DataTypeConversion_do[6];     /* '<S81>/Data Type Conversion' */
  real_T Integ4_iy[3];                 /* '<S84>/Integ4' */
  real_T Integ4_im[3];                 /* '<S82>/Integ4' */
  real_T SFunction_nt[3];              /* '<S83>/S-Function' */
  real_T SFunction_id[3];              /* '<S85>/S-Function' */
  real_T StateSpace_DSTATE_d[40];      /* '<S831>/State-Space' */
  real_T UnitDelay1_DSTATE_o0[3];      /* '<S5>/Unit Delay1' */
  real_T Delay_x1_DSTATE[2];           /* '<S234>/Delay_x1' */
  real_T Delay_x2_DSTATE[2];           /* '<S234>/Delay_x2' */
  real_T UnitDelay4_DSTATE[3];         /* '<S5>/Unit Delay4' */
  real_T Delay_x1_DSTATE_p[2];         /* '<S313>/Delay_x1' */
  real_T Delay_x2_DSTATE_d[2];         /* '<S313>/Delay_x2' */
  real_T UnitDelay3_DSTATE[3];         /* '<S5>/Unit Delay3' */
  real_T UnitDelay_DSTATE_ds[3];       /* '<S5>/Unit Delay' */
  real_T Integ4_DSTATE_lf[3];          /* '<S120>/Integ4' */
  real_T Integ4_DSTATE_lk[3];          /* '<S122>/Integ4' */
  real_T Integ4_DSTATE_ey[3];          /* '<S84>/Integ4' */
  real_T Integ4_DSTATE_bk[3];          /* '<S82>/Integ4' */
  real_T RateTransition6_Buffer[3];    /* '<S71>/Rate Transition6' */
  real_T RateTransition3_Buffer0[2];   /* '<S71>/Rate Transition3' */
  real_T RateTransition1_Buffer[3];    /* '<S71>/Rate Transition1' */
  real_T RateTransition6_Buffer_d[3];  /* '<S72>/Rate Transition6' */
  real_T RateTransition3_Buffer0_a[2]; /* '<S72>/Rate Transition3' */
  real_T RateTransition1_Buffer_n[3];  /* '<S72>/Rate Transition1' */
  real_T RateTransition2_Buffer_g[3];  /* '<S72>/Rate Transition2' */
  real_T RateTransition2_Buffer_i[3];  /* '<S71>/Rate Transition2' */
  real_T StateSpace;                   /* '<S830>/State-Space' */
  real_T Vload;                        /* '<Root>/Vload' */
  real_T Product;                      /* '<S334>/Product' */
  real_T Integ4;                       /* '<S414>/Integ4' */
  real_T SFunction;                    /* '<S415>/S-Function' */
  real_T Integ4_p;                     /* '<S412>/Integ4' */
  real_T SFunction_e;                  /* '<S413>/S-Function' */
  real_T Integ4_d;                     /* '<S420>/Integ4' */
  real_T SFunction_em;                 /* '<S421>/S-Function' */
  real_T Integ4_h;                     /* '<S418>/Integ4' */
  real_T SFunction_c;                  /* '<S419>/S-Function' */
  real_T Integ4_a;                     /* '<S426>/Integ4' */
  real_T SFunction_l;                  /* '<S427>/S-Function' */
  real_T Integ4_c;                     /* '<S424>/Integ4' */
  real_T SFunction_h;                  /* '<S425>/S-Function' */
  real_T Integ4_ae;                    /* '<S438>/Integ4' */
  real_T SFunction_c5;                 /* '<S439>/S-Function' */
  real_T Integ4_k;                     /* '<S436>/Integ4' */
  real_T SFunction_c1;                 /* '<S437>/S-Function' */
  real_T Integ4_dh;                    /* '<S444>/Integ4' */
  real_T SFunction_g;                  /* '<S445>/S-Function' */
  real_T Integ4_b;                     /* '<S442>/Integ4' */
  real_T SFunction_gi;                 /* '<S443>/S-Function' */
  real_T Integ4_hq;                    /* '<S450>/Integ4' */
  real_T SFunction_lu;                 /* '<S451>/S-Function' */
  real_T Integ4_j;                     /* '<S448>/Integ4' */
  real_T SFunction_hd;                 /* '<S449>/S-Function' */
  real_T Integ4_f;                     /* '<S789>/Integ4' */
  real_T SFunction_ez;                 /* '<S790>/S-Function' */
  real_T Integ4_aa;                    /* '<S787>/Integ4' */
  real_T SFunction_d;                  /* '<S788>/S-Function' */
  real_T Integ4_f0;                    /* '<S795>/Integ4' */
  real_T SFunction_dm;                 /* '<S796>/S-Function' */
  real_T Integ4_i;                     /* '<S793>/Integ4' */
  real_T SFunction_gs;                 /* '<S794>/S-Function' */
  real_T Integ4_l;                     /* '<S801>/Integ4' */
  real_T SFunction_dy;                 /* '<S802>/S-Function' */
  real_T Integ4_g;                     /* '<S799>/Integ4' */
  real_T SFunction_p;                  /* '<S800>/S-Function' */
  real_T Integ4_m;                     /* '<S380>/Integ4' */
  real_T SFunction_f;                  /* '<S381>/S-Function' */
  real_T Integ4_fr;                    /* '<S382>/Integ4' */
  real_T SFunction_ct;                 /* '<S383>/S-Function' */
  real_T Integ4_mt;                    /* '<S384>/Integ4' */
  real_T SFunction_n;                  /* '<S385>/S-Function' */
  real_T Integ4_ge;                    /* '<S386>/Integ4' */
  real_T SFunction_k;                  /* '<S387>/S-Function' */
  real_T Integ4_lf;                    /* '<S394>/Integ4' */
  real_T SFunction_o;                  /* '<S395>/S-Function' */
  real_T Integ4_bp;                    /* '<S392>/Integ4' */
  real_T SFunction_c5r;                /* '<S393>/S-Function' */
  real_T Integ4_n;                     /* '<S400>/Integ4' */
  real_T SFunction_h1;                 /* '<S401>/S-Function' */
  real_T Integ4_o;                     /* '<S398>/Integ4' */
  real_T SFunction_j;                  /* '<S399>/S-Function' */
  real_T Integ4_mta;                   /* '<S464>/Integ4' */
  real_T SFunction_i;                  /* '<S465>/S-Function' */
  real_T Integ4_oc;                    /* '<S462>/Integ4' */
  real_T SFunction_ge;                 /* '<S463>/S-Function' */
  real_T Integ4_do;                    /* '<S470>/Integ4' */
  real_T SFunction_jm;                 /* '<S471>/S-Function' */
  real_T Integ4_nk;                    /* '<S468>/Integ4' */
  real_T SFunction_et;                 /* '<S469>/S-Function' */
  real_T Integ4_pl;                    /* '<S476>/Integ4' */
  real_T SFunction_ko;                 /* '<S477>/S-Function' */
  real_T Integ4_nkx;                   /* '<S474>/Integ4' */
  real_T SFunction_ey;                 /* '<S475>/S-Function' */
  real_T Integ4_mr;                    /* '<S488>/Integ4' */
  real_T SFunction_iz;                 /* '<S489>/S-Function' */
  real_T Integ4_dg;                    /* '<S486>/Integ4' */
  real_T SFunction_ff;                 /* '<S487>/S-Function' */
  real_T Integ4_e;                     /* '<S494>/Integ4' */
  real_T SFunction_b;                  /* '<S495>/S-Function' */
  real_T Integ4_g4;                    /* '<S492>/Integ4' */
  real_T SFunction_gv;                 /* '<S493>/S-Function' */
  real_T Integ4_ao;                    /* '<S500>/Integ4' */
  real_T SFunction_l5;                 /* '<S501>/S-Function' */
  real_T Integ4_mk;                    /* '<S498>/Integ4' */
  real_T SFunction_gy;                 /* '<S499>/S-Function' */
  real_T Integ4_j0;                    /* '<S268>/Integ4' */
  real_T SFunction_m;                  /* '<S269>/S-Function' */
  real_T RateTransition2;              /* '<S63>/Rate Transition2' */
  real_T Product4;                     /* '<S43>/Product4' */
  real_T Product4_o;                   /* '<S55>/Product4' */
  real_T RateTransition4;              /* '<S72>/Rate Transition4' */
  real_T Integ4_ll;                    /* '<S298>/Integ4' */
  real_T Delay;                        /* '<S298>/Gain' */
  real_T SFunction_ia;                 /* '<S300>/S-Function' */
  real_T RateTransition4_b;            /* '<S71>/Rate Transition4' */
  real_T Integ4_nt;                    /* '<S219>/Integ4' */
  real_T Delay_o;                      /* '<S219>/Gain' */
  real_T SFunction_gd;                 /* '<S221>/S-Function' */
  real_T Integ4_c1;                    /* '<S516>/Integ4' */
  real_T SFunction_b5;                 /* '<S517>/S-Function' */
  real_T Integ4_is;                    /* '<S592>/Integ4' */
  real_T SFunction_do;                 /* '<S593>/S-Function' */
  real_T Integ4_np;                    /* '<S594>/Integ4' */
  real_T SFunction_ks;                 /* '<S595>/S-Function' */
  real_T Integ4_nw;                    /* '<S598>/Integ4' */
  real_T SFunction_kof;                /* '<S599>/S-Function' */
  real_T Integ4_pz;                    /* '<S600>/Integ4' */
  real_T SFunction_oc;                 /* '<S601>/S-Function' */
  real_T Integ4_i0;                    /* '<S604>/Integ4' */
  real_T SFunction_ok;                 /* '<S605>/S-Function' */
  real_T Integ4_j1;                    /* '<S606>/Integ4' */
  real_T SFunction_i1;                 /* '<S607>/S-Function' */
  real_T Integ4_di;                    /* '<S616>/Integ4' */
  real_T SFunction_fd;                 /* '<S617>/S-Function' */
  real_T Integ4_dd;                    /* '<S618>/Integ4' */
  real_T SFunction_ig;                 /* '<S619>/S-Function' */
  real_T Integ4_a3;                    /* '<S622>/Integ4' */
  real_T SFunction_jc;                 /* '<S623>/S-Function' */
  real_T Integ4_lc;                    /* '<S624>/Integ4' */
  real_T SFunction_gh;                 /* '<S625>/S-Function' */
  real_T Integ4_hp;                    /* '<S628>/Integ4' */
  real_T SFunction_cu;                 /* '<S629>/S-Function' */
  real_T Integ4_ce;                    /* '<S630>/Integ4' */
  real_T SFunction_ck;                 /* '<S631>/S-Function' */
  real_T Integ4_mu;                    /* '<S522>/Integ4' */
  real_T SFunction_me;                 /* '<S523>/S-Function' */
  real_T Integ4_ddm;                   /* '<S524>/Integ4' */
  real_T SFunction_mk;                 /* '<S525>/S-Function' */
  real_T Integ4_m1;                    /* '<S528>/Integ4' */
  real_T SFunction_i11;                /* '<S529>/S-Function' */
  real_T Integ4_nr;                    /* '<S530>/Integ4' */
  real_T SFunction_ib;                 /* '<S531>/S-Function' */
  real_T Integ4_ab;                    /* '<S542>/Integ4' */
  real_T SFunction_kf;                 /* '<S543>/S-Function' */
  real_T Integ4_cc;                    /* '<S544>/Integ4' */
  real_T SFunction_nj;                 /* '<S545>/S-Function' */
  real_T Integ4_m3;                    /* '<S548>/Integ4' */
  real_T SFunction_ix;                 /* '<S549>/S-Function' */
  real_T Integ4_ocz;                   /* '<S550>/Integ4' */
  real_T SFunction_b3;                 /* '<S551>/S-Function' */
  real_T Integ4_frw;                   /* '<S554>/Integ4' */
  real_T SFunction_be;                 /* '<S555>/S-Function' */
  real_T Integ4_ah;                    /* '<S556>/Integ4' */
  real_T SFunction_cs;                 /* '<S557>/S-Function' */
  real_T Integ4_jz;                    /* '<S566>/Integ4' */
  real_T SFunction_kz;                 /* '<S567>/S-Function' */
  real_T Integ4_oe;                    /* '<S568>/Integ4' */
  real_T SFunction_ns;                 /* '<S569>/S-Function' */
  real_T Integ4_ea;                    /* '<S572>/Integ4' */
  real_T SFunction_f3;                 /* '<S573>/S-Function' */
  real_T Integ4_no;                    /* '<S574>/Integ4' */
  real_T SFunction_hx;                 /* '<S575>/S-Function' */
  real_T Integ4_ex;                    /* '<S578>/Integ4' */
  real_T SFunction_bh;                 /* '<S579>/S-Function' */
  real_T Integ4_ij;                    /* '<S580>/Integ4' */
  real_T SFunction_mr;                 /* '<S581>/S-Function' */
  real_T Integ4_fg;                    /* '<S640>/Integ4' */
  real_T SFunction_j4;                 /* '<S641>/S-Function' */
  real_T Integ4_kv;                    /* '<S642>/Integ4' */
  real_T SFunction_a;                  /* '<S643>/S-Function' */
  real_T Integ4_ks;                    /* '<S646>/Integ4' */
  real_T SFunction_h1o;                /* '<S647>/S-Function' */
  real_T Integ4_dl;                    /* '<S648>/Integ4' */
  real_T SFunction_ds;                 /* '<S649>/S-Function' */
  real_T Integ4_kd;                    /* '<S652>/Integ4' */
  real_T SFunction_in;                 /* '<S653>/S-Function' */
  real_T Integ4_id;                    /* '<S654>/Integ4' */
  real_T SFunction_ev;                 /* '<S655>/S-Function' */
  real_T Integ4_ddl;                   /* '<S514>/Integ4' */
  real_T SFunction_ga;                 /* '<S515>/S-Function' */
  real_T Integ4_pt;                    /* '<S510>/Integ4' */
  real_T SFunction_lh;                 /* '<S511>/S-Function' */
  real_T Integ4_pf;                    /* '<S512>/Integ4' */
  real_T SFunction_p2;                 /* '<S513>/S-Function' */
  real_T LookUpTable;                  /* '<S810>/Look-Up Table' */
  real_T Switch3;                      /* '<S805>/Switch3' */
  real_T Switch2;                      /* '<S805>/Switch2' */
  real_T DiscreteTimeIntegrator;       /* '<S805>/Discrete-Time Integrator' */
  real_T Fcn;                          /* '<S333>/Fcn' */
  real_T Fcn1;                         /* '<S333>/Fcn1' */
  real_T Fcn_f;                        /* '<S332>/Fcn' */
  real_T Fcn1_o;                       /* '<S332>/Fcn1' */
  real_T Fcn_j;                        /* '<S327>/Fcn' */
  real_T Fcn1_i;                       /* '<S327>/Fcn1' */
  real_T Fcn_d;                        /* '<S326>/Fcn' */
  real_T Fcn1_j;                       /* '<S326>/Fcn1' */
  real_T Fcn_m;                        /* '<S312>/Fcn' */
  real_T Fcn1_k;                       /* '<S312>/Fcn1' */
  real_T Fcn_g;                        /* '<S311>/Fcn' */
  real_T Fcn1_c;                       /* '<S311>/Fcn1' */
  real_T Fcn1_g;                       /* '<S306>/Fcn1' */
  real_T Fcn1_b;                       /* '<S305>/Fcn1' */
  real_T Integ4_cs;                    /* '<S282>/Integ4' */
  real_T Delay_f;                      /* '<S282>/Gain' */
  real_T SFunction_d4;                 /* '<S284>/S-Function' */
  real_T Integ4_ha;                    /* '<S285>/Integ4' */
  real_T Delay_l;                      /* '<S285>/Gain' */
  real_T SFunction_e5;                 /* '<S287>/S-Function' */
  real_T MathFunction;                 /* '<S273>/Math Function' */
  real_T Fcn_m5;                       /* '<S293>/Fcn' */
  real_T Fcn1_g1;                      /* '<S293>/Fcn1' */
  real_T Fcn_c;                        /* '<S292>/Fcn' */
  real_T Fcn1_d;                       /* '<S292>/Fcn1' */
  real_T Fcn_e;                        /* '<S254>/Fcn' */
  real_T Fcn1_a;                       /* '<S254>/Fcn1' */
  real_T Fcn_k;                        /* '<S253>/Fcn' */
  real_T Fcn1_jb;                      /* '<S253>/Fcn1' */
  real_T Fcn_g3;                       /* '<S248>/Fcn' */
  real_T Fcn1_gm;                      /* '<S248>/Fcn1' */
  real_T Fcn_jl;                       /* '<S247>/Fcn' */
  real_T Fcn1_on;                      /* '<S247>/Fcn1' */
  real_T Fcn_b;                        /* '<S233>/Fcn' */
  real_T Fcn1_n;                       /* '<S233>/Fcn1' */
  real_T Fcn_o;                        /* '<S232>/Fcn' */
  real_T Fcn1_om;                      /* '<S232>/Fcn1' */
  real_T Fcn1_n1;                      /* '<S227>/Fcn1' */
  real_T Fcn1_f;                       /* '<S226>/Fcn1' */
  real_T Integ4_cu;                    /* '<S203>/Integ4' */
  real_T Delay_ou;                     /* '<S203>/Gain' */
  real_T SFunction_lp;                 /* '<S205>/S-Function' */
  real_T Integ4_dh0;                   /* '<S206>/Integ4' */
  real_T Delay_lg;                     /* '<S206>/Gain' */
  real_T SFunction_ca;                 /* '<S208>/S-Function' */
  real_T MathFunction_h;               /* '<S194>/Math Function' */
  real_T Fcn_a;                        /* '<S214>/Fcn' */
  real_T Fcn1_l;                       /* '<S214>/Fcn1' */
  real_T Fcn_p;                        /* '<S213>/Fcn' */
  real_T Fcn1_h;                       /* '<S213>/Fcn1' */
  real_T Integ4_l1;                    /* '<S168>/Integ4' */
  real_T SFunction_bz;                 /* '<S169>/S-Function' */
  real_T Integ4_m0;                    /* '<S150>/Integ4' */
  real_T SFunction_eh;                 /* '<S151>/S-Function' */
  real_T Integ4_jq;                    /* '<S152>/Integ4' */
  real_T SFunction_be1;                /* '<S153>/S-Function' */
  real_T DataTypeConversion_j;         /* '<S139>/Data Type Conversion' */
  real_T Integ4_jx;                    /* '<S140>/Integ4' */
  real_T SFunction_bi;                 /* '<S141>/S-Function' */
  real_T DataTypeConversion_ob;        /* '<S131>/Data Type Conversion' */
  real_T Integ4_hv;                    /* '<S132>/Integ4' */
  real_T SFunction_bv;                 /* '<S133>/S-Function' */
  real_T DataTypeConversion_l;         /* '<S109>/Data Type Conversion' */
  real_T LogicalOperator;              /* '<S107>/Logical Operator' */
  real_T Integ4_md;                    /* '<S110>/Integ4' */
  real_T SFunction_ap;                 /* '<S111>/S-Function' */
  real_T StateSpace_DSTATE;            /* '<S830>/State-Space' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S334>/Discrete-Time Integrator' */
  real_T KEfilter_DSTATE;              /* '<S334>/KE filter' */
  real_T Integ4_DSTATE;                /* '<S414>/Integ4' */
  real_T UnitDelay_DSTATE;             /* '<S414>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S414>/Unit Delay1' */
  real_T Integ4_DSTATE_e;              /* '<S412>/Integ4' */
  real_T UnitDelay_DSTATE_c;           /* '<S412>/Unit Delay' */
  real_T UnitDelay1_DSTATE_l;          /* '<S412>/Unit Delay1' */
  real_T Integ4_DSTATE_d;              /* '<S420>/Integ4' */
  real_T UnitDelay_DSTATE_g;           /* '<S420>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S420>/Unit Delay1' */
  real_T Integ4_DSTATE_dw;             /* '<S418>/Integ4' */
  real_T UnitDelay_DSTATE_e;           /* '<S418>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j;          /* '<S418>/Unit Delay1' */
  real_T Integ4_DSTATE_p;              /* '<S426>/Integ4' */
  real_T UnitDelay_DSTATE_l;           /* '<S426>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S426>/Unit Delay1' */
  real_T Integ4_DSTATE_pr;             /* '<S424>/Integ4' */
  real_T UnitDelay_DSTATE_eo;          /* '<S424>/Unit Delay' */
  real_T UnitDelay1_DSTATE_h;          /* '<S424>/Unit Delay1' */
  real_T Integ4_DSTATE_o;              /* '<S438>/Integ4' */
  real_T UnitDelay_DSTATE_h;           /* '<S438>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a;          /* '<S438>/Unit Delay1' */
  real_T Integ4_DSTATE_i;              /* '<S436>/Integ4' */
  real_T UnitDelay_DSTATE_f;           /* '<S436>/Unit Delay' */
  real_T UnitDelay1_DSTATE_av;         /* '<S436>/Unit Delay1' */
  real_T Integ4_DSTATE_g;              /* '<S444>/Integ4' */
  real_T UnitDelay_DSTATE_b;           /* '<S444>/Unit Delay' */
  real_T UnitDelay1_DSTATE_m;          /* '<S444>/Unit Delay1' */
  real_T Integ4_DSTATE_m;              /* '<S442>/Integ4' */
  real_T UnitDelay_DSTATE_lm;          /* '<S442>/Unit Delay' */
  real_T UnitDelay1_DSTATE_o;          /* '<S442>/Unit Delay1' */
  real_T Integ4_DSTATE_j;              /* '<S450>/Integ4' */
  real_T UnitDelay_DSTATE_i;           /* '<S450>/Unit Delay' */
  real_T UnitDelay1_DSTATE_jl;         /* '<S450>/Unit Delay1' */
  real_T Integ4_DSTATE_l;              /* '<S448>/Integ4' */
  real_T UnitDelay_DSTATE_p;           /* '<S448>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ha;         /* '<S448>/Unit Delay1' */
  real_T Integ4_DSTATE_os;             /* '<S789>/Integ4' */
  real_T UnitDelay_DSTATE_o;           /* '<S789>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ay;         /* '<S789>/Unit Delay1' */
  real_T Integ4_DSTATE_lo;             /* '<S787>/Integ4' */
  real_T UnitDelay_DSTATE_a;           /* '<S787>/Unit Delay' */
  real_T UnitDelay1_DSTATE_e;          /* '<S787>/Unit Delay1' */
  real_T Integ4_DSTATE_n;              /* '<S795>/Integ4' */
  real_T UnitDelay_DSTATE_ln;          /* '<S795>/Unit Delay' */
  real_T UnitDelay1_DSTATE_c;          /* '<S795>/Unit Delay1' */
  real_T Integ4_DSTATE_lc;             /* '<S793>/Integ4' */
  real_T UnitDelay_DSTATE_n;           /* '<S793>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ag;         /* '<S793>/Unit Delay1' */
  real_T Integ4_DSTATE_o0;             /* '<S801>/Integ4' */
  real_T UnitDelay_DSTATE_gs;          /* '<S801>/Unit Delay' */
  real_T UnitDelay1_DSTATE_cr;         /* '<S801>/Unit Delay1' */
  real_T Integ4_DSTATE_pu;             /* '<S799>/Integ4' */
  real_T UnitDelay_DSTATE_p3;          /* '<S799>/Unit Delay' */
  real_T UnitDelay1_DSTATE_p;          /* '<S799>/Unit Delay1' */
  real_T Integ4_DSTATE_jc;             /* '<S380>/Integ4' */
  real_T UnitDelay_DSTATE_bm;          /* '<S380>/Unit Delay' */
  real_T UnitDelay1_DSTATE_m0;         /* '<S380>/Unit Delay1' */
  real_T Integ4_DSTATE_id;             /* '<S382>/Integ4' */
  real_T UnitDelay_DSTATE_cr;          /* '<S382>/Unit Delay' */
  real_T UnitDelay1_DSTATE_g;          /* '<S382>/Unit Delay1' */
  real_T Integ4_DSTATE_h;              /* '<S384>/Integ4' */
  real_T UnitDelay_DSTATE_m;           /* '<S384>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ags;        /* '<S384>/Unit Delay1' */
  real_T Integ4_DSTATE_oi;             /* '<S386>/Integ4' */
  real_T UnitDelay_DSTATE_ez;          /* '<S386>/Unit Delay' */
  real_T UnitDelay1_DSTATE_lg;         /* '<S386>/Unit Delay1' */
  real_T Integ4_DSTATE_pg;             /* '<S394>/Integ4' */
  real_T UnitDelay_DSTATE_aq;          /* '<S394>/Unit Delay' */
  real_T UnitDelay1_DSTATE_jx;         /* '<S394>/Unit Delay1' */
  real_T Integ4_DSTATE_oi0;            /* '<S392>/Integ4' */
  real_T UnitDelay_DSTATE_cn;          /* '<S392>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S392>/Unit Delay1' */
  real_T Integ4_DSTATE_io;             /* '<S400>/Integ4' */
  real_T UnitDelay_DSTATE_j;           /* '<S400>/Unit Delay' */
  real_T UnitDelay1_DSTATE_lz;         /* '<S400>/Unit Delay1' */
  real_T Integ4_DSTATE_hw;             /* '<S398>/Integ4' */
  real_T UnitDelay_DSTATE_hl;          /* '<S398>/Unit Delay' */
  real_T UnitDelay1_DSTATE_i;          /* '<S398>/Unit Delay1' */
  real_T Integ4_DSTATE_nf;             /* '<S464>/Integ4' */
  real_T UnitDelay_DSTATE_hw;          /* '<S464>/Unit Delay' */
  real_T UnitDelay1_DSTATE_gx;         /* '<S464>/Unit Delay1' */
  real_T Integ4_DSTATE_j5;             /* '<S462>/Integ4' */
  real_T UnitDelay_DSTATE_ai;          /* '<S462>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d;          /* '<S462>/Unit Delay1' */
  real_T Integ4_DSTATE_a;              /* '<S470>/Integ4' */
  real_T UnitDelay_DSTATE_lw;          /* '<S470>/Unit Delay' */
  real_T UnitDelay1_DSTATE_m5;         /* '<S470>/Unit Delay1' */
  real_T Integ4_DSTATE_k;              /* '<S468>/Integ4' */
  real_T UnitDelay_DSTATE_ei;          /* '<S468>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S468>/Unit Delay1' */
  real_T Integ4_DSTATE_kd;             /* '<S476>/Integ4' */
  real_T UnitDelay_DSTATE_jz;          /* '<S476>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a1;         /* '<S476>/Unit Delay1' */
  real_T Integ4_DSTATE_me;             /* '<S474>/Integ4' */
  real_T UnitDelay_DSTATE_b2;          /* '<S474>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ea;         /* '<S474>/Unit Delay1' */
  real_T Integ4_DSTATE_ip;             /* '<S488>/Integ4' */
  real_T UnitDelay_DSTATE_fp;          /* '<S488>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ma;         /* '<S488>/Unit Delay1' */
  real_T Integ4_DSTATE_dq;             /* '<S486>/Integ4' */
  real_T UnitDelay_DSTATE_gf;          /* '<S486>/Unit Delay' */
  real_T UnitDelay1_DSTATE_e2;         /* '<S486>/Unit Delay1' */
  real_T Integ4_DSTATE_le;             /* '<S494>/Integ4' */
  real_T UnitDelay_DSTATE_d;           /* '<S494>/Unit Delay' */
  real_T UnitDelay1_DSTATE_gb;         /* '<S494>/Unit Delay1' */
  real_T Integ4_DSTATE_ox;             /* '<S492>/Integ4' */
  real_T UnitDelay_DSTATE_hz;          /* '<S492>/Unit Delay' */
  real_T UnitDelay1_DSTATE_dz;         /* '<S492>/Unit Delay1' */
  real_T Integ4_DSTATE_gb;             /* '<S500>/Integ4' */
  real_T UnitDelay_DSTATE_cm;          /* '<S500>/Unit Delay' */
  real_T UnitDelay1_DSTATE_jz;         /* '<S500>/Unit Delay1' */
  real_T Integ4_DSTATE_ia;             /* '<S498>/Integ4' */
  real_T UnitDelay_DSTATE_lx;          /* '<S498>/Unit Delay' */
  real_T UnitDelay1_DSTATE_pq;         /* '<S498>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S5>/Unit Delay2' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S242>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_c;/* '<S193>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_dm;          /* '<S71>/Unit Delay' */
  real_T Delay_x1_DSTATE_o;            /* '<S238>/Delay_x1' */
  real_T Delay_x2_DSTATE_i;            /* '<S238>/Delay_x2' */
  real_T UnitDelay5_DSTATE;            /* '<S5>/Unit Delay5' */
  real_T DiscreteTimeIntegrator_DSTATE_j;/* '<S321>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_o;/* '<S272>/Discrete-Time Integrator' */
  real_T Integ4_DSTATE_gg;             /* '<S268>/Integ4' */
  real_T UnitDelay_DSTATE_pj;          /* '<S268>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ai;         /* '<S268>/Unit Delay1' */
  real_T UnitDelay_DSTATE_ok;          /* '<S72>/Unit Delay' */
  real_T Delay_x1_DSTATE_py;           /* '<S317>/Delay_x1' */
  real_T Delay_x2_DSTATE_c;            /* '<S317>/Delay_x2' */
  real_T UnitDelay6_DSTATE;            /* '<S5>/Unit Delay6' */
  real_T DiscreteTimeIntegrator_DSTAT_oe;/* '<S74>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTAT_ju;/* '<S265>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_cn4;         /* '<S272>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S266>/Discrete-Time Integrator' */
  real_T DiscreteDerivative_states;    /* '<S274>/Discrete Derivative ' */
  real_T DiscreteTimeIntegrator_DSTATE_n;/* '<S274>/Discrete-Time Integrator' */
  real_T Integ4_DSTATE_ad;             /* '<S298>/Integ4' */
  real_T UnitDelay_DSTATE_c3;          /* '<S299>/Unit Delay' */
  real_T UnitDelay1_DSTATE_o0e;        /* '<S298>/Unit Delay1' */
  real_T Delay_x1_DSTATE_l;            /* '<S294>/Delay_x1' */
  real_T Delay_x2_DSTATE_j;            /* '<S294>/Delay_x2' */
  real_T DiscreteTimeIntegrator_DSTAT_om;/* '<S73>/Discrete-Time Integrator' */
  real_T UnitDelay7_DSTATE;            /* '<S5>/Unit Delay7' */
  real_T DiscreteTimeIntegrator_DSTATE_e;/* '<S189>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_fu;          /* '<S193>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_l;/* '<S190>/Discrete-Time Integrator' */
  real_T DiscreteDerivative_states_l;  /* '<S195>/Discrete Derivative ' */
  real_T DiscreteTimeIntegrator_DSTATE_p;/* '<S195>/Discrete-Time Integrator' */
  real_T Integ4_DSTATE_o5;             /* '<S219>/Integ4' */
  real_T UnitDelay_DSTATE_k;           /* '<S220>/Unit Delay' */
  real_T UnitDelay1_DSTATE_lv;         /* '<S219>/Unit Delay1' */
  real_T Delay_x1_DSTATE_g;            /* '<S215>/Delay_x1' */
  real_T Delay_x2_DSTATE_ie;           /* '<S215>/Delay_x2' */
  real_T Integ4_DSTATE_oe;             /* '<S516>/Integ4' */
  real_T Integ4_DSTATE_n5;             /* '<S592>/Integ4' */
  real_T Integ4_DSTATE_c;              /* '<S594>/Integ4' */
  real_T Integ4_DSTATE_cd;             /* '<S598>/Integ4' */
  real_T Integ4_DSTATE_lz;             /* '<S600>/Integ4' */
  real_T Integ4_DSTATE_ne;             /* '<S604>/Integ4' */
  real_T Integ4_DSTATE_df;             /* '<S606>/Integ4' */
  real_T Integ4_DSTATE_am;             /* '<S616>/Integ4' */
  real_T Integ4_DSTATE_ct;             /* '<S618>/Integ4' */
  real_T Integ4_DSTATE_dn;             /* '<S622>/Integ4' */
  real_T Integ4_DSTATE_f;              /* '<S624>/Integ4' */
  real_T Integ4_DSTATE_fv;             /* '<S628>/Integ4' */
  real_T Integ4_DSTATE_ex;             /* '<S630>/Integ4' */
  real_T Integ4_DSTATE_nc;             /* '<S522>/Integ4' */
  real_T Integ4_DSTATE_nd;             /* '<S524>/Integ4' */
  real_T Integ4_DSTATE_li;             /* '<S528>/Integ4' */
  real_T Integ4_DSTATE_j5d;            /* '<S530>/Integ4' */
  real_T Integ4_DSTATE_av;             /* '<S542>/Integ4' */
  real_T Integ4_DSTATE_leb;            /* '<S544>/Integ4' */
  real_T Integ4_DSTATE_b;              /* '<S548>/Integ4' */
  real_T Integ4_DSTATE_e5;             /* '<S550>/Integ4' */
  real_T Integ4_DSTATE_eb;             /* '<S554>/Integ4' */
  real_T Integ4_DSTATE_cq;             /* '<S556>/Integ4' */
  real_T Integ4_DSTATE_hc;             /* '<S566>/Integ4' */
  real_T Integ4_DSTATE_m3;             /* '<S568>/Integ4' */
  real_T Integ4_DSTATE_bo;             /* '<S572>/Integ4' */
  real_T Integ4_DSTATE_jx;             /* '<S574>/Integ4' */
  real_T Integ4_DSTATE_g5;             /* '<S578>/Integ4' */
  real_T Integ4_DSTATE_my;             /* '<S580>/Integ4' */
  real_T Integ4_DSTATE_pv;             /* '<S640>/Integ4' */
  real_T Integ4_DSTATE_ij;             /* '<S642>/Integ4' */
  real_T Integ4_DSTATE_n2;             /* '<S646>/Integ4' */
  real_T Integ4_DSTATE_dy;             /* '<S648>/Integ4' */
  real_T Integ4_DSTATE_hd;             /* '<S652>/Integ4' */
  real_T Integ4_DSTATE_pa;             /* '<S654>/Integ4' */
  real_T Integ4_DSTATE_px;             /* '<S514>/Integ4' */
  real_T Integ4_DSTATE_exz;            /* '<S510>/Integ4' */
  real_T Integ4_DSTATE_hs;             /* '<S512>/Integ4' */
  real_T Integ4_DSTATE_md;             /* '<S282>/Integ4' */
  real_T UnitDelay_DSTATE_kr;          /* '<S283>/Unit Delay' */
  real_T UnitDelay1_DSTATE_hp;         /* '<S282>/Unit Delay1' */
  real_T Integ4_DSTATE_e5y;            /* '<S285>/Integ4' */
  real_T UnitDelay_DSTATE_ko;          /* '<S286>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j3;         /* '<S285>/Unit Delay1' */
  real_T Integ4_DSTATE_o3;             /* '<S203>/Integ4' */
  real_T UnitDelay_DSTATE_c2;          /* '<S204>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ia;         /* '<S203>/Unit Delay1' */
  real_T Integ4_DSTATE_ei;             /* '<S206>/Integ4' */
  real_T UnitDelay_DSTATE_m0;          /* '<S207>/Unit Delay' */
  real_T UnitDelay1_DSTATE_ou;         /* '<S206>/Unit Delay1' */
  real_T Integ4_DSTATE_go;             /* '<S168>/Integ4' */
  real_T Integ4_DSTATE_f0;             /* '<S150>/Integ4' */
  real_T Integ4_DSTATE_b0;             /* '<S152>/Integ4' */
  real_T Integ4_DSTATE_m0;             /* '<S140>/Integ4' */
  real_T Integ4_DSTATE_dd;             /* '<S132>/Integ4' */
  real_T Integ4_DSTATE_dt;             /* '<S110>/Integ4' */
  real_T lastSin;                      /* '<Root>/Vload' */
  real_T lastCos;                      /* '<Root>/Vload' */
  real_T lastSin_o;                    /* '<S404>/sin(wt)' */
  real_T lastCos_n;                    /* '<S404>/sin(wt)' */
  real_T lastSin_j;                    /* '<S404>/cos(wt)' */
  real_T lastCos_i;                    /* '<S404>/cos(wt)' */
  real_T lastSin_h;                    /* '<S405>/sin(wt)' */
  real_T lastCos_j;                    /* '<S405>/sin(wt)' */
  real_T lastSin_hi;                   /* '<S405>/cos(wt)' */
  real_T lastCos_o;                    /* '<S405>/cos(wt)' */
  real_T lastSin_e;                    /* '<S406>/sin(wt)' */
  real_T lastCos_f;                    /* '<S406>/sin(wt)' */
  real_T lastSin_k;                    /* '<S406>/cos(wt)' */
  real_T lastCos_g;                    /* '<S406>/cos(wt)' */
  real_T lastSin_ob;                   /* '<S428>/sin(wt)' */
  real_T lastCos_k;                    /* '<S428>/sin(wt)' */
  real_T lastSin_f;                    /* '<S428>/cos(wt)' */
  real_T lastCos_e;                    /* '<S428>/cos(wt)' */
  real_T lastSin_h0;                   /* '<S429>/sin(wt)' */
  real_T lastCos_ov;                   /* '<S429>/sin(wt)' */
  real_T lastSin_a;                    /* '<S429>/cos(wt)' */
  real_T lastCos_h;                    /* '<S429>/cos(wt)' */
  real_T lastSin_fx;                   /* '<S430>/sin(wt)' */
  real_T lastCos_c;                    /* '<S430>/sin(wt)' */
  real_T lastSin_f2;                   /* '<S430>/cos(wt)' */
  real_T lastCos_ni;                   /* '<S430>/cos(wt)' */
  real_T lastSin_fm;                   /* '<S779>/sin(wt)' */
  real_T lastCos_e4;                   /* '<S779>/sin(wt)' */
  real_T lastSin_f5;                   /* '<S779>/cos(wt)' */
  real_T lastCos_l;                    /* '<S779>/cos(wt)' */
  real_T lastSin_fmt;                  /* '<S780>/sin(wt)' */
  real_T lastCos_ns;                   /* '<S780>/sin(wt)' */
  real_T lastSin_d;                    /* '<S780>/cos(wt)' */
  real_T lastCos_a;                    /* '<S780>/cos(wt)' */
  real_T lastSin_d1;                   /* '<S781>/sin(wt)' */
  real_T lastCos_d;                    /* '<S781>/sin(wt)' */
  real_T lastSin_l;                    /* '<S781>/cos(wt)' */
  real_T lastCos_l0;                   /* '<S781>/cos(wt)' */
  real_T lastSin_m;                    /* '<S388>/sin(wt)' */
  real_T lastCos_ovt;                  /* '<S388>/sin(wt)' */
  real_T lastSin_fl;                   /* '<S388>/cos(wt)' */
  real_T lastCos_nl;                   /* '<S388>/cos(wt)' */
  real_T lastSin_p;                    /* '<S389>/sin(wt)' */
  real_T lastCos_fl;                   /* '<S389>/sin(wt)' */
  real_T lastSin_e1;                   /* '<S389>/cos(wt)' */
  real_T lastCos_h5;                   /* '<S389>/cos(wt)' */
  real_T lastSin_am;                   /* '<S454>/sin(wt)' */
  real_T lastCos_ny;                   /* '<S454>/sin(wt)' */
  real_T lastSin_jo;                   /* '<S454>/cos(wt)' */
  real_T lastCos_on;                   /* '<S454>/cos(wt)' */
  real_T lastSin_pp;                   /* '<S455>/sin(wt)' */
  real_T lastCos_ob;                   /* '<S455>/sin(wt)' */
  real_T lastSin_i;                    /* '<S455>/cos(wt)' */
  real_T lastCos_b;                    /* '<S455>/cos(wt)' */
  real_T lastSin_hb;                   /* '<S456>/sin(wt)' */
  real_T lastCos_i4;                   /* '<S456>/sin(wt)' */
  real_T lastSin_fw;                   /* '<S456>/cos(wt)' */
  real_T lastCos_p;                    /* '<S456>/cos(wt)' */
  real_T lastSin_dz;                   /* '<S478>/sin(wt)' */
  real_T lastCos_b4;                   /* '<S478>/sin(wt)' */
  real_T lastSin_jd;                   /* '<S478>/cos(wt)' */
  real_T lastCos_ih;                   /* '<S478>/cos(wt)' */
  real_T lastSin_n;                    /* '<S479>/sin(wt)' */
  real_T lastCos_hr;                   /* '<S479>/sin(wt)' */
  real_T lastSin_o2;                   /* '<S479>/cos(wt)' */
  real_T lastCos_dm;                   /* '<S479>/cos(wt)' */
  real_T lastSin_e2;                   /* '<S480>/sin(wt)' */
  real_T lastCos_m;                    /* '<S480>/sin(wt)' */
  real_T lastSin_dm;                   /* '<S480>/cos(wt)' */
  real_T lastCos_ie;                   /* '<S480>/cos(wt)' */
  real_T RateTransition5_Buffer;       /* '<S71>/Rate Transition5' */
  real_T RateTransition5_Buffer_a;     /* '<S72>/Rate Transition5' */
  real_T PrevY;                        /* '<S256>/Rate Limiter' */
  real_T RateTransition1_Buffer_b;     /* '<S63>/Rate Transition1' */
  real_T PrevY_k;                      /* '<S63>/Rate Limiter' */
  real_T PrevY_n;                      /* '<S63>/Rate Limiter1' */
  real_T RateTransition1_Buffer_p;     /* '<Root>/Rate Transition1' */
  real_T RateTransition2_Buffer0;      /* '<S63>/Rate Transition2' */
  real_T RateTransition2_Buffer;       /* '<Root>/Rate Transition2' */
  real_T RateTransition4_Buffer0;      /* '<S72>/Rate Transition4' */
  real_T PrevY_l;                      /* '<S272>/Rate Limiter' */
  real_T RateTransition3_Buffer;       /* '<S63>/Rate Transition3' */
  real_T RateTransition4_Buffer0_o;    /* '<S71>/Rate Transition4' */
  real_T PrevY_a;                      /* '<S193>/Rate Limiter' */
  real_T lastSin_b;                    /* '<S5>/Uref1' */
  real_T lastCos_he;                   /* '<S5>/Uref1' */
  real_T lastSin_o3;                   /* '<S5>/Uref2' */
  real_T lastCos_nyp;                  /* '<S5>/Uref2' */
  real_T lastSin_g;                    /* '<S584>/cos(wt)' */
  real_T lastCos_ko;                   /* '<S584>/cos(wt)' */
  real_T lastSin_ne;                   /* '<S584>/sin(wt)' */
  real_T lastCos_n3;                   /* '<S584>/sin(wt)' */
  real_T lastSin_am5;                  /* '<S585>/cos(wt)' */
  real_T lastCos_gn;                   /* '<S585>/cos(wt)' */
  real_T lastSin_on;                   /* '<S585>/sin(wt)' */
  real_T lastCos_gs;                   /* '<S585>/sin(wt)' */
  real_T lastSin_h5;                   /* '<S586>/cos(wt)' */
  real_T lastCos_pj;                   /* '<S586>/cos(wt)' */
  real_T lastSin_n1;                   /* '<S586>/sin(wt)' */
  real_T lastCos_ihc;                  /* '<S586>/sin(wt)' */
  real_T lastSin_ds;                   /* '<S608>/cos(wt)' */
  real_T lastCos_k2;                   /* '<S608>/cos(wt)' */
  real_T lastSin_ft;                   /* '<S608>/sin(wt)' */
  real_T lastCos_le;                   /* '<S608>/sin(wt)' */
  real_T lastSin_ik;                   /* '<S609>/cos(wt)' */
  real_T lastCos_gx;                   /* '<S609>/cos(wt)' */
  real_T lastSin_gg;                   /* '<S609>/sin(wt)' */
  real_T lastCos_kz;                   /* '<S609>/sin(wt)' */
  real_T lastSin_c;                    /* '<S610>/cos(wt)' */
  real_T lastCos_a5;                   /* '<S610>/cos(wt)' */
  real_T lastSin_mp;                   /* '<S610>/sin(wt)' */
  real_T lastCos_pe;                   /* '<S610>/sin(wt)' */
  real_T lastSin_nh;                   /* '<S518>/cos(wt)' */
  real_T lastCos_kw;                   /* '<S518>/cos(wt)' */
  real_T lastSin_mi;                   /* '<S518>/sin(wt)' */
  real_T lastCos_bb;                   /* '<S518>/sin(wt)' */
  real_T lastSin_et;                   /* '<S519>/cos(wt)' */
  real_T lastCos_ju;                   /* '<S519>/cos(wt)' */
  real_T lastSin_ac;                   /* '<S519>/sin(wt)' */
  real_T lastCos_bd;                   /* '<S519>/sin(wt)' */
  real_T lastSin_at;                   /* '<S534>/cos(wt)' */
  real_T lastCos_ci;                   /* '<S534>/cos(wt)' */
  real_T lastSin_la;                   /* '<S534>/sin(wt)' */
  real_T lastCos_bbd;                  /* '<S534>/sin(wt)' */
  real_T lastSin_gh;                   /* '<S535>/cos(wt)' */
  real_T lastCos_lz;                   /* '<S535>/cos(wt)' */
  real_T lastSin_lo;                   /* '<S535>/sin(wt)' */
  real_T lastCos_gsk;                  /* '<S535>/sin(wt)' */
  real_T lastSin_fa;                   /* '<S536>/cos(wt)' */
  real_T lastCos_hf;                   /* '<S536>/cos(wt)' */
  real_T lastSin_lk;                   /* '<S536>/sin(wt)' */
  real_T lastCos_ig;                   /* '<S536>/sin(wt)' */
  real_T lastSin_gh2;                  /* '<S558>/cos(wt)' */
  real_T lastCos_ew;                   /* '<S558>/cos(wt)' */
  real_T lastSin_nr;                   /* '<S558>/sin(wt)' */
  real_T lastCos_op;                   /* '<S558>/sin(wt)' */
  real_T lastSin_fxm;                  /* '<S559>/cos(wt)' */
  real_T lastCos_h0;                   /* '<S559>/cos(wt)' */
  real_T lastSin_o2f;                  /* '<S559>/sin(wt)' */
  real_T lastCos_niz;                  /* '<S559>/sin(wt)' */
  real_T lastSin_p0;                   /* '<S560>/cos(wt)' */
  real_T lastCos_fu;                   /* '<S560>/cos(wt)' */
  real_T lastSin_nx;                   /* '<S560>/sin(wt)' */
  real_T lastCos_ez;                   /* '<S560>/sin(wt)' */
  real_T lastSin_eb;                   /* '<S632>/cos(wt)' */
  real_T lastCos_h2;                   /* '<S632>/cos(wt)' */
  real_T lastSin_pc;                   /* '<S632>/sin(wt)' */
  real_T lastCos_fuy;                  /* '<S632>/sin(wt)' */
  real_T lastSin_ae;                   /* '<S633>/cos(wt)' */
  real_T lastCos_kf;                   /* '<S633>/cos(wt)' */
  real_T lastSin_mk;                   /* '<S633>/sin(wt)' */
  real_T lastCos_pk;                   /* '<S633>/sin(wt)' */
  real_T lastSin_pu;                   /* '<S634>/cos(wt)' */
  real_T lastCos_bdo;                  /* '<S634>/cos(wt)' */
  real_T lastSin_cp;                   /* '<S634>/sin(wt)' */
  real_T lastCos_k1;                   /* '<S634>/sin(wt)' */
  real_T SFunction_RWORK;              /* '<S415>/S-Function' */
  real_T SFunction_RWORK_f;            /* '<S413>/S-Function' */
  real_T SFunction_RWORK_o;            /* '<S421>/S-Function' */
  real_T SFunction_RWORK_m;            /* '<S419>/S-Function' */
  real_T SFunction_RWORK_l;            /* '<S427>/S-Function' */
  real_T SFunction_RWORK_f2;           /* '<S425>/S-Function' */
  real_T SFunction_RWORK_n;            /* '<S439>/S-Function' */
  real_T SFunction_RWORK_p;            /* '<S437>/S-Function' */
  real_T SFunction_RWORK_j;            /* '<S445>/S-Function' */
  real_T SFunction_RWORK_ps;           /* '<S443>/S-Function' */
  real_T SFunction_RWORK_la;           /* '<S451>/S-Function' */
  real_T SFunction_RWORK_o4;           /* '<S449>/S-Function' */
  real_T SFunction_RWORK_i;            /* '<S790>/S-Function' */
  real_T SFunction_RWORK_b;            /* '<S788>/S-Function' */
  real_T SFunction_RWORK_h;            /* '<S796>/S-Function' */
  real_T SFunction_RWORK_g;            /* '<S794>/S-Function' */
  real_T SFunction_RWORK_jh;           /* '<S802>/S-Function' */
  real_T SFunction_RWORK_hg;           /* '<S800>/S-Function' */
  real_T SFunction_RWORK_fx;           /* '<S381>/S-Function' */
  real_T SFunction_RWORK_n0;           /* '<S383>/S-Function' */
  real_T SFunction_RWORK_d;            /* '<S385>/S-Function' */
  real_T SFunction_RWORK_nd;           /* '<S387>/S-Function' */
  real_T SFunction_RWORK_pe;           /* '<S395>/S-Function' */
  real_T SFunction_RWORK_a;            /* '<S393>/S-Function' */
  real_T SFunction_RWORK_lf;           /* '<S401>/S-Function' */
  real_T SFunction_RWORK_e;            /* '<S399>/S-Function' */
  real_T SFunction_RWORK_h1;           /* '<S465>/S-Function' */
  real_T SFunction_RWORK_k;            /* '<S463>/S-Function' */
  real_T SFunction_RWORK_mo;           /* '<S471>/S-Function' */
  real_T SFunction_RWORK_mn;           /* '<S469>/S-Function' */
  real_T SFunction_RWORK_fu;           /* '<S477>/S-Function' */
  real_T SFunction_RWORK_eb;           /* '<S475>/S-Function' */
  real_T SFunction_RWORK_mi;           /* '<S489>/S-Function' */
  real_T SFunction_RWORK_eu;           /* '<S487>/S-Function' */
  real_T SFunction_RWORK_db;           /* '<S495>/S-Function' */
  real_T SFunction_RWORK_kh;           /* '<S493>/S-Function' */
  real_T SFunction_RWORK_ok;           /* '<S501>/S-Function' */
  real_T SFunction_RWORK_c;            /* '<S499>/S-Function' */
  real_T SFunction_RWORK_fc;           /* '<S269>/S-Function' */
  real_T SFunction_RWORK_ks;           /* '<S300>/S-Function' */
  real_T SFunction_RWORK_io;           /* '<S221>/S-Function' */
  real_T SFunction_RWORK_g0;           /* '<S517>/S-Function' */
  real_T SFunction_RWORK_md;           /* '<S593>/S-Function' */
  real_T SFunction_RWORK_k3;           /* '<S595>/S-Function' */
  real_T SFunction_RWORK_dl;           /* '<S599>/S-Function' */
  real_T SFunction_RWORK_nq;           /* '<S601>/S-Function' */
  real_T SFunction_RWORK_hw;           /* '<S605>/S-Function' */
  real_T SFunction_RWORK_jg;           /* '<S607>/S-Function' */
  real_T SFunction_RWORK_pu;           /* '<S617>/S-Function' */
  real_T SFunction_RWORK_ku;           /* '<S619>/S-Function' */
  real_T SFunction_RWORK_kw;           /* '<S623>/S-Function' */
  real_T SFunction_RWORK_ii;           /* '<S625>/S-Function' */
  real_T SFunction_RWORK_os;           /* '<S629>/S-Function' */
  real_T SFunction_RWORK_l2;           /* '<S631>/S-Function' */
  real_T SFunction_RWORK_ez;           /* '<S523>/S-Function' */
  real_T SFunction_RWORK_h3;           /* '<S525>/S-Function' */
  real_T SFunction_RWORK_bg;           /* '<S529>/S-Function' */
  real_T SFunction_RWORK_jq;           /* '<S531>/S-Function' */
  real_T SFunction_RWORK_dv;           /* '<S543>/S-Function' */
  real_T SFunction_RWORK_g0s;          /* '<S545>/S-Function' */
  real_T SFunction_RWORK_be;           /* '<S549>/S-Function' */
  real_T SFunction_RWORK_ab;           /* '<S551>/S-Function' */
  real_T SFunction_RWORK_cp;           /* '<S555>/S-Function' */
  real_T SFunction_RWORK_i2;           /* '<S557>/S-Function' */
  real_T SFunction_RWORK_lp;           /* '<S567>/S-Function' */
  real_T SFunction_RWORK_ct;           /* '<S569>/S-Function' */
  real_T SFunction_RWORK_kb;           /* '<S573>/S-Function' */
  real_T SFunction_RWORK_nz;           /* '<S575>/S-Function' */
  real_T SFunction_RWORK_hp;           /* '<S579>/S-Function' */
  real_T SFunction_RWORK_ay;           /* '<S581>/S-Function' */
  real_T SFunction_RWORK_nv;           /* '<S641>/S-Function' */
  real_T SFunction_RWORK_fc1;          /* '<S643>/S-Function' */
  real_T SFunction_RWORK_dva;          /* '<S647>/S-Function' */
  real_T SFunction_RWORK_ox;           /* '<S649>/S-Function' */
  real_T SFunction_RWORK_bj;           /* '<S653>/S-Function' */
  real_T SFunction_RWORK_lr;           /* '<S655>/S-Function' */
  real_T SFunction_RWORK_e3;           /* '<S515>/S-Function' */
  real_T SFunction_RWORK_fch;          /* '<S511>/S-Function' */
  real_T SFunction_RWORK_lq;           /* '<S513>/S-Function' */
  real_T SFunction_RWORK_nb;           /* '<S284>/S-Function' */
  real_T SFunction_RWORK_pl;           /* '<S287>/S-Function' */
  real_T SFunction_RWORK_abb;          /* '<S205>/S-Function' */
  real_T SFunction_RWORK_az;           /* '<S208>/S-Function' */
  real_T SFunction_RWORK_h4;           /* '<S169>/S-Function' */
  real_T SFunction_RWORK_fn;           /* '<S151>/S-Function' */
  real_T SFunction_RWORK_lp2;          /* '<S153>/S-Function' */
  real_T SFunction_RWORK_gs;           /* '<S141>/S-Function' */
  real_T SFunction_RWORK_nz1;          /* '<S133>/S-Function' */
  real_T SFunction_RWORK_me;           /* '<S121>/S-Function' */
  real_T SFunction_RWORK_np;           /* '<S123>/S-Function' */
  real_T SFunction_RWORK_hgx;          /* '<S111>/S-Function' */
  real_T SFunction_RWORK_hh;           /* '<S83>/S-Function' */
  real_T SFunction_RWORK_ov;           /* '<S85>/S-Function' */
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
  } StateSpace_PWORK;                  /* '<S830>/State-Space' */

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
  } StateSpace_PWORK_n;                /* '<S831>/State-Space' */

  void *SFunction_PWORK_hs[3];         /* '<S121>/S-Function' */
  void *SFunction_PWORK_bd[3];         /* '<S123>/S-Function' */
  void *SFunction_PWORK_jk[3];         /* '<S83>/S-Function' */
  void *SFunction_PWORK_nr[3];         /* '<S85>/S-Function' */
  void *SFunction_PWORK;               /* '<S415>/S-Function' */
  void *SFunction_PWORK_b;             /* '<S413>/S-Function' */
  void *SFunction_PWORK_i;             /* '<S421>/S-Function' */
  void *SFunction_PWORK_bv;            /* '<S419>/S-Function' */
  void *SFunction_PWORK_f;             /* '<S427>/S-Function' */
  void *SFunction_PWORK_bi;            /* '<S425>/S-Function' */
  void *SFunction_PWORK_o;             /* '<S439>/S-Function' */
  void *SFunction_PWORK_bf;            /* '<S437>/S-Function' */
  void *SFunction_PWORK_a;             /* '<S445>/S-Function' */
  void *SFunction_PWORK_j;             /* '<S443>/S-Function' */
  void *SFunction_PWORK_m;             /* '<S451>/S-Function' */
  void *SFunction_PWORK_fu;            /* '<S449>/S-Function' */
  void *SFunction_PWORK_ii;            /* '<S790>/S-Function' */
  void *SFunction_PWORK_ib;            /* '<S788>/S-Function' */
  void *SFunction_PWORK_at;            /* '<S796>/S-Function' */
  void *SFunction_PWORK_og;            /* '<S794>/S-Function' */
  void *SFunction_PWORK_k;             /* '<S802>/S-Function' */
  void *SFunction_PWORK_ac;            /* '<S800>/S-Function' */
  void *SFunction_PWORK_g;             /* '<S381>/S-Function' */
  void *SFunction_PWORK_oa;            /* '<S383>/S-Function' */
  void *SFunction_PWORK_m3;            /* '<S385>/S-Function' */
  void *SFunction_PWORK_e;             /* '<S387>/S-Function' */
  void *SFunction_PWORK_c;             /* '<S395>/S-Function' */
  void *SFunction_PWORK_ki;            /* '<S393>/S-Function' */
  void *SFunction_PWORK_p;             /* '<S401>/S-Function' */
  void *SFunction_PWORK_h;             /* '<S399>/S-Function' */
  void *SFunction_PWORK_l;             /* '<S465>/S-Function' */
  void *SFunction_PWORK_ml;            /* '<S463>/S-Function' */
  void *SFunction_PWORK_k4;            /* '<S471>/S-Function' */
  void *SFunction_PWORK_kd;            /* '<S469>/S-Function' */
  void *SFunction_PWORK_ge;            /* '<S477>/S-Function' */
  void *SFunction_PWORK_by;            /* '<S475>/S-Function' */
  void *SFunction_PWORK_d;             /* '<S489>/S-Function' */
  void *SFunction_PWORK_f3;            /* '<S487>/S-Function' */
  void *SFunction_PWORK_hm;            /* '<S495>/S-Function' */
  void *SFunction_PWORK_m4;            /* '<S493>/S-Function' */
  void *SFunction_PWORK_hv;            /* '<S501>/S-Function' */
  void *SFunction_PWORK_lp;            /* '<S499>/S-Function' */
  void *SFunction_PWORK_fi;            /* '<S269>/S-Function' */
  void *SFunction_PWORK_gw;            /* '<S300>/S-Function' */
  void *SFunction_PWORK_n;             /* '<S221>/S-Function' */
  void *SFunction_PWORK_eq;            /* '<S517>/S-Function' */
  void *SFunction_PWORK_bfq;           /* '<S593>/S-Function' */
  void *SFunction_PWORK_ll;            /* '<S595>/S-Function' */
  void *SFunction_PWORK_ky;            /* '<S599>/S-Function' */
  void *SFunction_PWORK_cy;            /* '<S601>/S-Function' */
  void *SFunction_PWORK_cu;            /* '<S605>/S-Function' */
  void *SFunction_PWORK_pj;            /* '<S607>/S-Function' */
  void *SFunction_PWORK_hq;            /* '<S617>/S-Function' */
  void *SFunction_PWORK_gn;            /* '<S619>/S-Function' */
  void *SFunction_PWORK_nt;            /* '<S623>/S-Function' */
  void *SFunction_PWORK_nk;            /* '<S625>/S-Function' */
  void *SFunction_PWORK_jf;            /* '<S629>/S-Function' */
  void *SFunction_PWORK_ag;            /* '<S631>/S-Function' */
  void *SFunction_PWORK_cc;            /* '<S523>/S-Function' */
  void *SFunction_PWORK_ea;            /* '<S525>/S-Function' */
  void *SFunction_PWORK_bh;            /* '<S529>/S-Function' */
  void *SFunction_PWORK_fn;            /* '<S531>/S-Function' */
  void *SFunction_PWORK_km;            /* '<S543>/S-Function' */
  void *SFunction_PWORK_pi;            /* '<S545>/S-Function' */
  void *SFunction_PWORK_k4k;           /* '<S549>/S-Function' */
  void *SFunction_PWORK_ju;            /* '<S551>/S-Function' */
  void *SFunction_PWORK_kx;            /* '<S555>/S-Function' */
  void *SFunction_PWORK_j3;            /* '<S557>/S-Function' */
  void *SFunction_PWORK_dd;            /* '<S567>/S-Function' */
  void *SFunction_PWORK_p2;            /* '<S569>/S-Function' */
  void *SFunction_PWORK_pw;            /* '<S573>/S-Function' */
  void *SFunction_PWORK_dh;            /* '<S575>/S-Function' */
  void *SFunction_PWORK_cs;            /* '<S579>/S-Function' */
  void *SFunction_PWORK_n5;            /* '<S581>/S-Function' */
  void *SFunction_PWORK_dx;            /* '<S641>/S-Function' */
  void *SFunction_PWORK_ce;            /* '<S643>/S-Function' */
  void *SFunction_PWORK_fnk;           /* '<S647>/S-Function' */
  void *SFunction_PWORK_jv;            /* '<S649>/S-Function' */
  void *SFunction_PWORK_k41;           /* '<S653>/S-Function' */
  void *SFunction_PWORK_bfb;           /* '<S655>/S-Function' */
  void *SFunction_PWORK_kq;            /* '<S515>/S-Function' */
  void *SFunction_PWORK_pv;            /* '<S511>/S-Function' */
  void *SFunction_PWORK_n1;            /* '<S513>/S-Function' */
  void *SFunction_PWORK_lz;            /* '<S284>/S-Function' */
  void *SFunction_PWORK_ft;            /* '<S287>/S-Function' */
  void *SFunction_PWORK_jd;            /* '<S205>/S-Function' */
  void *SFunction_PWORK_lw;            /* '<S208>/S-Function' */
  void *SFunction_PWORK_nv;            /* '<S169>/S-Function' */
  void *SFunction_PWORK_pv4;           /* '<S151>/S-Function' */
  void *SFunction_PWORK_c3;            /* '<S153>/S-Function' */
  void *SFunction_PWORK_je;            /* '<S141>/S-Function' */
  void *SFunction_PWORK_db;            /* '<S133>/S-Function' */
  void *SFunction_PWORK_d2;            /* '<S111>/S-Function' */
  int_T StateSpace_IWORK[11];          /* '<S830>/State-Space' */
  int_T StateSpace_IWORK_e[11];        /* '<S831>/State-Space' */
  int_T SFunction_IWORK_iu[3];         /* '<S121>/S-Function' */
  int_T SFunction_IWORK_m1b[3];        /* '<S123>/S-Function' */
  int_T SFunction_IWORK_l2[3];         /* '<S83>/S-Function' */
  int_T SFunction_IWORK_mqk[3];        /* '<S85>/S-Function' */
  int32_T systemEnable;                /* '<Root>/Vload' */
  int32_T systemEnable_f;              /* '<S404>/sin(wt)' */
  int32_T systemEnable_b;              /* '<S404>/cos(wt)' */
  int32_T systemEnable_n;              /* '<S405>/sin(wt)' */
  int32_T systemEnable_c;              /* '<S405>/cos(wt)' */
  int32_T systemEnable_a;              /* '<S406>/sin(wt)' */
  int32_T systemEnable_d;              /* '<S406>/cos(wt)' */
  int32_T systemEnable_fb;             /* '<S428>/sin(wt)' */
  int32_T systemEnable_o;              /* '<S428>/cos(wt)' */
  int32_T systemEnable_p;              /* '<S429>/sin(wt)' */
  int32_T systemEnable_e;              /* '<S429>/cos(wt)' */
  int32_T systemEnable_l;              /* '<S430>/sin(wt)' */
  int32_T systemEnable_g;              /* '<S430>/cos(wt)' */
  int32_T systemEnable_nr;             /* '<S779>/sin(wt)' */
  int32_T systemEnable_nk;             /* '<S779>/cos(wt)' */
  int32_T systemEnable_lm;             /* '<S780>/sin(wt)' */
  int32_T systemEnable_fk;             /* '<S780>/cos(wt)' */
  int32_T systemEnable_es;             /* '<S781>/sin(wt)' */
  int32_T systemEnable_eq;             /* '<S781>/cos(wt)' */
  int32_T systemEnable_m;              /* '<S388>/sin(wt)' */
  int32_T systemEnable_e2;             /* '<S388>/cos(wt)' */
  int32_T systemEnable_aq;             /* '<S389>/sin(wt)' */
  int32_T systemEnable_ac;             /* '<S389>/cos(wt)' */
  int32_T systemEnable_j;              /* '<S454>/sin(wt)' */
  int32_T systemEnable_gz;             /* '<S454>/cos(wt)' */
  int32_T systemEnable_lb;             /* '<S455>/sin(wt)' */
  int32_T systemEnable_i;              /* '<S455>/cos(wt)' */
  int32_T systemEnable_bk;             /* '<S456>/sin(wt)' */
  int32_T systemEnable_oz;             /* '<S456>/cos(wt)' */
  int32_T systemEnable_cd;             /* '<S478>/sin(wt)' */
  int32_T systemEnable_jg;             /* '<S478>/cos(wt)' */
  int32_T systemEnable_av;             /* '<S479>/sin(wt)' */
  int32_T systemEnable_oh;             /* '<S479>/cos(wt)' */
  int32_T systemEnable_bn;             /* '<S480>/sin(wt)' */
  int32_T systemEnable_na;             /* '<S480>/cos(wt)' */
  int32_T systemEnable_h;              /* '<S5>/Uref1' */
  int32_T systemEnable_ia;             /* '<S5>/Uref2' */
  int32_T systemEnable_bz;             /* '<S584>/cos(wt)' */
  int32_T systemEnable_e5;             /* '<S584>/sin(wt)' */
  int32_T systemEnable_bj;             /* '<S585>/cos(wt)' */
  int32_T systemEnable_di;             /* '<S585>/sin(wt)' */
  int32_T systemEnable_k;              /* '<S586>/cos(wt)' */
  int32_T systemEnable_go;             /* '<S586>/sin(wt)' */
  int32_T systemEnable_fq;             /* '<S608>/cos(wt)' */
  int32_T systemEnable_kf;             /* '<S608>/sin(wt)' */
  int32_T systemEnable_ip;             /* '<S609>/cos(wt)' */
  int32_T systemEnable_g1;             /* '<S609>/sin(wt)' */
  int32_T systemEnable_e3;             /* '<S610>/cos(wt)' */
  int32_T systemEnable_bl;             /* '<S610>/sin(wt)' */
  int32_T systemEnable_pz;             /* '<S518>/cos(wt)' */
  int32_T systemEnable_avi;            /* '<S518>/sin(wt)' */
  int32_T systemEnable_ci;             /* '<S519>/cos(wt)' */
  int32_T systemEnable_bj1;            /* '<S519>/sin(wt)' */
  int32_T systemEnable_co;             /* '<S534>/cos(wt)' */
  int32_T systemEnable_pd;             /* '<S534>/sin(wt)' */
  int32_T systemEnable_i2;             /* '<S535>/cos(wt)' */
  int32_T systemEnable_ov;             /* '<S535>/sin(wt)' */
  int32_T systemEnable_mj;             /* '<S536>/cos(wt)' */
  int32_T systemEnable_nf;             /* '<S536>/sin(wt)' */
  int32_T systemEnable_mx;             /* '<S558>/cos(wt)' */
  int32_T systemEnable_mx0;            /* '<S558>/sin(wt)' */
  int32_T systemEnable_gl;             /* '<S559>/cos(wt)' */
  int32_T systemEnable_df;             /* '<S559>/sin(wt)' */
  int32_T systemEnable_h1;             /* '<S560>/cos(wt)' */
  int32_T systemEnable_iv;             /* '<S560>/sin(wt)' */
  int32_T systemEnable_jo;             /* '<S632>/cos(wt)' */
  int32_T systemEnable_fh;             /* '<S632>/sin(wt)' */
  int32_T systemEnable_lo;             /* '<S633>/cos(wt)' */
  int32_T systemEnable_jc;             /* '<S633>/sin(wt)' */
  int32_T systemEnable_pq;             /* '<S634>/cos(wt)' */
  int32_T systemEnable_n5;             /* '<S634>/sin(wt)' */
  int_T SFunction_IWORK;               /* '<S415>/S-Function' */
  int_T SFunction_IWORK_m;             /* '<S413>/S-Function' */
  int_T SFunction_IWORK_l;             /* '<S421>/S-Function' */
  int_T SFunction_IWORK_b;             /* '<S419>/S-Function' */
  int_T SFunction_IWORK_c;             /* '<S427>/S-Function' */
  int_T SFunction_IWORK_bh;            /* '<S425>/S-Function' */
  int_T SFunction_IWORK_e;             /* '<S439>/S-Function' */
  int_T SFunction_IWORK_a;             /* '<S437>/S-Function' */
  int_T SFunction_IWORK_at;            /* '<S445>/S-Function' */
  int_T SFunction_IWORK_n;             /* '<S443>/S-Function' */
  int_T SFunction_IWORK_li;            /* '<S451>/S-Function' */
  int_T SFunction_IWORK_k;             /* '<S449>/S-Function' */
  int_T SFunction_IWORK_j;             /* '<S790>/S-Function' */
  int_T SFunction_IWORK_lt;            /* '<S788>/S-Function' */
  int_T SFunction_IWORK_k0;            /* '<S796>/S-Function' */
  int_T SFunction_IWORK_mp;            /* '<S794>/S-Function' */
  int_T SFunction_IWORK_af;            /* '<S802>/S-Function' */
  int_T SFunction_IWORK_o;             /* '<S800>/S-Function' */
  int_T SFunction_IWORK_i;             /* '<S381>/S-Function' */
  int_T SFunction_IWORK_ci;            /* '<S383>/S-Function' */
  int_T SFunction_IWORK_h;             /* '<S385>/S-Function' */
  int_T SFunction_IWORK_os;            /* '<S387>/S-Function' */
  int_T SFunction_IWORK_f;             /* '<S395>/S-Function' */
  int_T SFunction_IWORK_ow;            /* '<S393>/S-Function' */
  int_T SFunction_IWORK_ny;            /* '<S401>/S-Function' */
  int_T SFunction_IWORK_my;            /* '<S399>/S-Function' */
  int_T SFunction_IWORK_d;             /* '<S465>/S-Function' */
  int_T SFunction_IWORK_d4;            /* '<S463>/S-Function' */
  int_T SFunction_IWORK_g;             /* '<S471>/S-Function' */
  int_T SFunction_IWORK_ip;            /* '<S469>/S-Function' */
  int_T SFunction_IWORK_gi;            /* '<S477>/S-Function' */
  int_T SFunction_IWORK_eq;            /* '<S475>/S-Function' */
  int_T SFunction_IWORK_ln;            /* '<S489>/S-Function' */
  int_T SFunction_IWORK_od;            /* '<S487>/S-Function' */
  int_T SFunction_IWORK_nf;            /* '<S495>/S-Function' */
  int_T SFunction_IWORK_hg;            /* '<S493>/S-Function' */
  int_T SFunction_IWORK_hn;            /* '<S501>/S-Function' */
  int_T SFunction_IWORK_av;            /* '<S499>/S-Function' */
  int_T SFunction_IWORK_cv;            /* '<S269>/S-Function' */
  int_T SFunction_IWORK_nz;            /* '<S300>/S-Function' */
  int_T SFunction_IWORK_g3;            /* '<S221>/S-Function' */
  int_T SFunction_IWORK_g2;            /* '<S517>/S-Function' */
  int_T SFunction_IWORK_nk;            /* '<S593>/S-Function' */
  int_T SFunction_IWORK_lg;            /* '<S595>/S-Function' */
  int_T SFunction_IWORK_cj;            /* '<S599>/S-Function' */
  int_T SFunction_IWORK_jj;            /* '<S601>/S-Function' */
  int_T SFunction_IWORK_e1;            /* '<S605>/S-Function' */
  int_T SFunction_IWORK_ll;            /* '<S607>/S-Function' */
  int_T SFunction_IWORK_k2;            /* '<S617>/S-Function' */
  int_T SFunction_IWORK_bk;            /* '<S619>/S-Function' */
  int_T SFunction_IWORK_mq;            /* '<S623>/S-Function' */
  int_T SFunction_IWORK_bo;            /* '<S625>/S-Function' */
  int_T SFunction_IWORK_o3;            /* '<S629>/S-Function' */
  int_T SFunction_IWORK_ht;            /* '<S631>/S-Function' */
  int_T SFunction_IWORK_ba;            /* '<S523>/S-Function' */
  int_T SFunction_IWORK_p;             /* '<S525>/S-Function' */
  int_T SFunction_IWORK_da;            /* '<S529>/S-Function' */
  int_T SFunction_IWORK_m1;            /* '<S531>/S-Function' */
  int_T SFunction_IWORK_bz;            /* '<S543>/S-Function' */
  int_T SFunction_IWORK_llq;           /* '<S545>/S-Function' */
  int_T SFunction_IWORK_ks;            /* '<S549>/S-Function' */
  int_T SFunction_IWORK_gl;            /* '<S551>/S-Function' */
  int_T SFunction_IWORK_ik;            /* '<S555>/S-Function' */
  int_T SFunction_IWORK_cd;            /* '<S557>/S-Function' */
  int_T SFunction_IWORK_a3;            /* '<S567>/S-Function' */
  int_T SFunction_IWORK_nzb;           /* '<S569>/S-Function' */
  int_T SFunction_IWORK_l3;            /* '<S573>/S-Function' */
  int_T SFunction_IWORK_gw;            /* '<S575>/S-Function' */
  int_T SFunction_IWORK_bq;            /* '<S579>/S-Function' */
  int_T SFunction_IWORK_oh;            /* '<S581>/S-Function' */
  int_T SFunction_IWORK_i5;            /* '<S641>/S-Function' */
  int_T SFunction_IWORK_nc;            /* '<S643>/S-Function' */
  int_T SFunction_IWORK_ed;            /* '<S647>/S-Function' */
  int_T SFunction_IWORK_avv;           /* '<S649>/S-Function' */
  int_T SFunction_IWORK_cq;            /* '<S653>/S-Function' */
  int_T SFunction_IWORK_dk;            /* '<S655>/S-Function' */
  int_T SFunction_IWORK_aa;            /* '<S515>/S-Function' */
  int_T SFunction_IWORK_f3;            /* '<S511>/S-Function' */
  int_T SFunction_IWORK_hj;            /* '<S513>/S-Function' */
  int_T SFunction_IWORK_kk;            /* '<S284>/S-Function' */
  int_T SFunction_IWORK_cl;            /* '<S287>/S-Function' */
  int_T SFunction_IWORK_kh;            /* '<S205>/S-Function' */
  int_T SFunction_IWORK_e3;            /* '<S208>/S-Function' */
  int_T SFunction_IWORK_pe;            /* '<S169>/S-Function' */
  int_T SFunction_IWORK_nq;            /* '<S151>/S-Function' */
  int_T SFunction_IWORK_mt;            /* '<S153>/S-Function' */
  int_T SFunction_IWORK_khs;           /* '<S141>/S-Function' */
  int_T SFunction_IWORK_pa;            /* '<S133>/S-Function' */
  int_T SFunction_IWORK_fd;            /* '<S111>/S-Function' */
  uint32_T m_bpIndex;                  /* '<S179>/1-D Lookup Table' */
  uint32_T m_bpIndex_c;                /* '<S163>/1-D Lookup Table' */
  uint32_T m_bpIndex_b;                /* '<S128>/1-D Lookup Table' */
  uint32_T m_bpIndex_k;                /* '<S95>/1-D Lookup Table' */
  uint32_T m_bpIndex_n;                /* '<S105>/1-D Lookup Table' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S193>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_g;/* '<S272>/Discrete-Time Integrator' */
  uint8_T Integ4_SYSTEM_ENABLE;        /* '<S414>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_e;      /* '<S412>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_c;      /* '<S420>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i;      /* '<S418>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_n;      /* '<S426>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_k;      /* '<S424>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_g;      /* '<S438>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ex;     /* '<S436>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_kl;     /* '<S444>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_l;      /* '<S442>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_k2;     /* '<S450>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_j;      /* '<S448>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_o;      /* '<S789>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_km;     /* '<S787>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_f;      /* '<S795>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_fy;     /* '<S793>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_n0;     /* '<S801>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_d;      /* '<S799>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_a;      /* '<S380>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_h;      /* '<S382>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_m;      /* '<S384>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_o0;     /* '<S386>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_b;      /* '<S394>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_en;     /* '<S392>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_a3;     /* '<S400>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_kb;     /* '<S398>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_cl;     /* '<S464>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i2;     /* '<S462>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bc;     /* '<S470>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_gs;     /* '<S468>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_jz;     /* '<S476>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bm;     /* '<S474>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ke;     /* '<S488>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_oh;     /* '<S486>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_lx;     /* '<S494>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_of;     /* '<S492>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_p;      /* '<S500>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_on;     /* '<S498>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ei;     /* '<S268>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_nm;     /* '<S298>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_nr;     /* '<S219>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_o3;     /* '<S516>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_og;     /* '<S592>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_gy;     /* '<S594>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_nt;     /* '<S598>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ax;     /* '<S600>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ob;     /* '<S604>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_pc;     /* '<S606>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ka;     /* '<S616>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ft;     /* '<S618>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_js;     /* '<S622>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_jw;     /* '<S624>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_h5;     /* '<S628>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_k5;     /* '<S630>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bj;     /* '<S522>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ba;     /* '<S524>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_gl;     /* '<S528>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_fs;     /* '<S530>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_cm;     /* '<S542>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_cc;     /* '<S544>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ix;     /* '<S548>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_jo;     /* '<S550>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bu;     /* '<S554>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i0;     /* '<S556>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_af;     /* '<S566>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ks;     /* '<S568>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_fu;     /* '<S572>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ns;     /* '<S574>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_or;     /* '<S578>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_a0;     /* '<S580>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ic;     /* '<S640>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bz;     /* '<S642>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ds;     /* '<S646>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ow;     /* '<S648>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i1;     /* '<S652>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_oo;     /* '<S654>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_co;     /* '<S514>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_pb;     /* '<S510>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_bzw;    /* '<S512>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_oq;     /* '<S282>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ez;     /* '<S285>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ck;     /* '<S203>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ly;     /* '<S206>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ji;     /* '<S168>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_b4;     /* '<S150>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ke4;    /* '<S152>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_lr;     /* '<S140>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_gy2;    /* '<S132>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_jm;     /* '<S120>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_h0;     /* '<S122>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_ae;     /* '<S110>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i3;     /* '<S84>/Integ4' */
  uint8_T Integ4_SYSTEM_ENABLE_i05;    /* '<S82>/Integ4' */
  boolean_T LogicalOperator1;          /* '<S805>/Logical Operator1' */
  boolean_T Initial_FirstOutputTime;   /* '<S193>/Initial' */
  boolean_T Initial_FirstOutputTime_m; /* '<S272>/Initial' */
  boolean_T Signalgenerator_MODE;      /* '<S803>/Signal generator' */
  boolean_T HarmonicGenerator_MODE;    /* '<S803>/Harmonic Generator' */
  boolean_T AutomaticGainControl_MODE; /* '<S272>/Automatic Gain Control' */
  boolean_T AutomaticGainControl_MODE_p;/* '<S193>/Automatic Gain Control' */
  boolean_T Subsystem_MODE;            /* '<S70>/Subsystem' */
  boolean_T PWMgen_MODE;               /* '<S69>/PWM gen' */
  boolean_T PWMGen_MODE;               /* '<S68>/PWM Gen' */
  boolean_T PWMGen_MODE_e;             /* '<S67>/PWM Gen' */
  boolean_T PWMgenAveraging_MODE;      /* '<S66>/PWMgen - Averaging' */
  boolean_T Subsystem_MODE_n;          /* '<S65>/Subsystem' */
  boolean_T PWMgenAveraging_MODE_e;    /* '<S64>/PWMgen - Averaging' */
} DW;

/* Invariant block signals (default storage) */
typedef struct {
  const uint8_T Compare_p;             /* '<S246>/Compare' */
  const uint8_T Compare_n;             /* '<S325>/Compare' */
  const uint8_T Compare_o;             /* '<S331>/Compare' */
  const uint8_T Compare_g;             /* '<S310>/Compare' */
  const uint8_T Compare_pj;            /* '<S304>/Compare' */
  const uint8_T Compare_pi;            /* '<S252>/Compare' */
  const uint8_T Compare_k;             /* '<S231>/Compare' */
  const uint8_T Compare_a;             /* '<S225>/Compare' */
  const uint8_T Compare_i;             /* '<S291>/Compare' */
  const uint8_T Compare_au;            /* '<S212>/Compare' */
} ConstB;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [0 2 0])
   * Referenced by:
   *   '<S128>/1-D Lookup Table'
   *   '<S95>/1-D Lookup Table'
   *   '<S105>/1-D Lookup Table'
   *   '<S163>/1-D Lookup Table'
   *   '<S179>/1-D Lookup Table'
   */
  real_T pooled7[3];

  /* Pooled Parameter (Expression: [0 .5 1])
   * Referenced by:
   *   '<S128>/1-D Lookup Table'
   *   '<S95>/1-D Lookup Table'
   *   '<S105>/1-D Lookup Table'
   *   '<S163>/1-D Lookup Table'
   *   '<S179>/1-D Lookup Table'
   */
  real_T pooled8[3];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S334>/Discrete-Time Integrator'
   *   '<S805>/Discrete-Time Integrator'
   *   '<S82>/K1'
   *   '<S84>/K1'
   *   '<S110>/K1'
   *   '<S120>/K1'
   *   '<S122>/K1'
   *   '<S132>/K1'
   *   '<S140>/K1'
   *   '<S150>/K1'
   *   '<S152>/K1'
   *   '<S168>/K1'
   */
  real_T pooled12;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S83>/S-Function'
   *   '<S85>/S-Function'
   *   '<S111>/S-Function'
   *   '<S121>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S141>/S-Function'
   *   '<S151>/S-Function'
   *   '<S153>/S-Function'
   *   '<S169>/S-Function'
   */
  real_T pooled13[2];

  /* Pooled Parameter (Expression: MaxDelay)
   * Referenced by:
   *   '<S83>/S-Function'
   *   '<S85>/S-Function'
   *   '<S111>/S-Function'
   *   '<S121>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S141>/S-Function'
   *   '<S151>/S-Function'
   *   '<S153>/S-Function'
   *   '<S169>/S-Function'
   */
  real_T pooled14;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S381>/S-Function'
   *   '<S383>/S-Function'
   *   '<S385>/S-Function'
   *   '<S387>/S-Function'
   *   '<S511>/S-Function'
   *   '<S513>/S-Function'
   *   '<S515>/S-Function'
   *   '<S517>/S-Function'
   *   '<S393>/S-Function'
   *   '<S395>/S-Function'
   *   '<S399>/S-Function'
   *   '<S401>/S-Function'
   *   '<S788>/S-Function'
   *   '<S790>/S-Function'
   *   '<S794>/S-Function'
   *   '<S796>/S-Function'
   *   '<S800>/S-Function'
   *   '<S802>/S-Function'
   *   '<S83>/S-Function'
   *   '<S85>/S-Function'
   *   '<S111>/S-Function'
   *   '<S121>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S141>/S-Function'
   *   '<S151>/S-Function'
   *   '<S153>/S-Function'
   *   '<S169>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S419>/S-Function'
   *   '<S421>/S-Function'
   *   '<S425>/S-Function'
   *   '<S427>/S-Function'
   *   '<S437>/S-Function'
   *   '<S439>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S463>/S-Function'
   *   '<S465>/S-Function'
   *   '<S469>/S-Function'
   *   '<S471>/S-Function'
   *   '<S475>/S-Function'
   *   '<S477>/S-Function'
   *   '<S487>/S-Function'
   *   '<S489>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S641>/S-Function'
   *   '<S643>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S549>/S-Function'
   *   '<S551>/S-Function'
   *   '<S555>/S-Function'
   *   '<S557>/S-Function'
   *   '<S567>/S-Function'
   *   '<S569>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S593>/S-Function'
   *   '<S595>/S-Function'
   *   '<S599>/S-Function'
   *   '<S601>/S-Function'
   *   '<S605>/S-Function'
   *   '<S607>/S-Function'
   *   '<S617>/S-Function'
   *   '<S619>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   */
  real_T pooled15[2];

  /* Pooled Parameter (Expression: Ts)
   * Referenced by:
   *   '<S381>/S-Function'
   *   '<S383>/S-Function'
   *   '<S385>/S-Function'
   *   '<S387>/S-Function'
   *   '<S511>/S-Function'
   *   '<S513>/S-Function'
   *   '<S515>/S-Function'
   *   '<S517>/S-Function'
   *   '<S393>/S-Function'
   *   '<S395>/S-Function'
   *   '<S399>/S-Function'
   *   '<S401>/S-Function'
   *   '<S788>/S-Function'
   *   '<S790>/S-Function'
   *   '<S794>/S-Function'
   *   '<S796>/S-Function'
   *   '<S800>/S-Function'
   *   '<S802>/S-Function'
   *   '<S83>/S-Function'
   *   '<S85>/S-Function'
   *   '<S111>/S-Function'
   *   '<S121>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S141>/S-Function'
   *   '<S151>/S-Function'
   *   '<S153>/S-Function'
   *   '<S169>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S419>/S-Function'
   *   '<S421>/S-Function'
   *   '<S425>/S-Function'
   *   '<S427>/S-Function'
   *   '<S437>/S-Function'
   *   '<S439>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S463>/S-Function'
   *   '<S465>/S-Function'
   *   '<S469>/S-Function'
   *   '<S471>/S-Function'
   *   '<S475>/S-Function'
   *   '<S477>/S-Function'
   *   '<S487>/S-Function'
   *   '<S489>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S641>/S-Function'
   *   '<S643>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S549>/S-Function'
   *   '<S551>/S-Function'
   *   '<S555>/S-Function'
   *   '<S557>/S-Function'
   *   '<S567>/S-Function'
   *   '<S569>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S593>/S-Function'
   *   '<S595>/S-Function'
   *   '<S599>/S-Function'
   *   '<S601>/S-Function'
   *   '<S605>/S-Function'
   *   '<S607>/S-Function'
   *   '<S617>/S-Function'
   *   '<S619>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   */
  real_T pooled16;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S381>/S-Function'
   *   '<S383>/S-Function'
   *   '<S385>/S-Function'
   *   '<S387>/S-Function'
   *   '<S511>/S-Function'
   *   '<S513>/S-Function'
   *   '<S515>/S-Function'
   *   '<S517>/S-Function'
   *   '<S393>/S-Function'
   *   '<S395>/S-Function'
   *   '<S399>/S-Function'
   *   '<S401>/S-Function'
   *   '<S788>/S-Function'
   *   '<S790>/S-Function'
   *   '<S794>/S-Function'
   *   '<S796>/S-Function'
   *   '<S800>/S-Function'
   *   '<S802>/S-Function'
   *   '<S83>/S-Function'
   *   '<S85>/S-Function'
   *   '<S111>/S-Function'
   *   '<S121>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S141>/S-Function'
   *   '<S151>/S-Function'
   *   '<S153>/S-Function'
   *   '<S169>/S-Function'
   *   '<S269>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S419>/S-Function'
   *   '<S421>/S-Function'
   *   '<S425>/S-Function'
   *   '<S427>/S-Function'
   *   '<S437>/S-Function'
   *   '<S439>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S463>/S-Function'
   *   '<S465>/S-Function'
   *   '<S469>/S-Function'
   *   '<S471>/S-Function'
   *   '<S475>/S-Function'
   *   '<S477>/S-Function'
   *   '<S487>/S-Function'
   *   '<S489>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S641>/S-Function'
   *   '<S643>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S549>/S-Function'
   *   '<S551>/S-Function'
   *   '<S555>/S-Function'
   *   '<S557>/S-Function'
   *   '<S567>/S-Function'
   *   '<S569>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S593>/S-Function'
   *   '<S595>/S-Function'
   *   '<S599>/S-Function'
   *   '<S601>/S-Function'
   *   '<S605>/S-Function'
   *   '<S607>/S-Function'
   *   '<S617>/S-Function'
   *   '<S619>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S221>/S-Function'
   *   '<S300>/S-Function'
   *   '<S205>/S-Function'
   *   '<S208>/S-Function'
   *   '<S284>/S-Function'
   *   '<S287>/S-Function'
   */
  real_T pooled17[2];

  /* Pooled Parameter (Expression: InitialValue)
   * Referenced by:
   *   '<S381>/S-Function'
   *   '<S383>/S-Function'
   *   '<S385>/S-Function'
   *   '<S387>/S-Function'
   *   '<S511>/S-Function'
   *   '<S513>/S-Function'
   *   '<S515>/S-Function'
   *   '<S517>/S-Function'
   *   '<S393>/S-Function'
   *   '<S395>/S-Function'
   *   '<S399>/S-Function'
   *   '<S401>/S-Function'
   *   '<S788>/S-Function'
   *   '<S790>/S-Function'
   *   '<S794>/S-Function'
   *   '<S796>/S-Function'
   *   '<S800>/S-Function'
   *   '<S802>/S-Function'
   *   '<S83>/S-Function'
   *   '<S85>/S-Function'
   *   '<S111>/S-Function'
   *   '<S121>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S141>/S-Function'
   *   '<S151>/S-Function'
   *   '<S153>/S-Function'
   *   '<S169>/S-Function'
   *   '<S269>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S419>/S-Function'
   *   '<S421>/S-Function'
   *   '<S425>/S-Function'
   *   '<S427>/S-Function'
   *   '<S437>/S-Function'
   *   '<S439>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S463>/S-Function'
   *   '<S465>/S-Function'
   *   '<S469>/S-Function'
   *   '<S471>/S-Function'
   *   '<S475>/S-Function'
   *   '<S477>/S-Function'
   *   '<S487>/S-Function'
   *   '<S489>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S641>/S-Function'
   *   '<S643>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S549>/S-Function'
   *   '<S551>/S-Function'
   *   '<S555>/S-Function'
   *   '<S557>/S-Function'
   *   '<S567>/S-Function'
   *   '<S569>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S593>/S-Function'
   *   '<S595>/S-Function'
   *   '<S599>/S-Function'
   *   '<S601>/S-Function'
   *   '<S605>/S-Function'
   *   '<S607>/S-Function'
   *   '<S617>/S-Function'
   *   '<S619>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S221>/S-Function'
   *   '<S300>/S-Function'
   *   '<S205>/S-Function'
   *   '<S208>/S-Function'
   *   '<S284>/S-Function'
   *   '<S287>/S-Function'
   */
  real_T pooled18;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S381>/S-Function'
   *   '<S383>/S-Function'
   *   '<S385>/S-Function'
   *   '<S387>/S-Function'
   *   '<S511>/S-Function'
   *   '<S513>/S-Function'
   *   '<S515>/S-Function'
   *   '<S517>/S-Function'
   *   '<S393>/S-Function'
   *   '<S395>/S-Function'
   *   '<S399>/S-Function'
   *   '<S401>/S-Function'
   *   '<S788>/S-Function'
   *   '<S790>/S-Function'
   *   '<S794>/S-Function'
   *   '<S796>/S-Function'
   *   '<S800>/S-Function'
   *   '<S802>/S-Function'
   *   '<S83>/S-Function'
   *   '<S85>/S-Function'
   *   '<S111>/S-Function'
   *   '<S121>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S141>/S-Function'
   *   '<S151>/S-Function'
   *   '<S153>/S-Function'
   *   '<S169>/S-Function'
   *   '<S269>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S419>/S-Function'
   *   '<S421>/S-Function'
   *   '<S425>/S-Function'
   *   '<S427>/S-Function'
   *   '<S437>/S-Function'
   *   '<S439>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S463>/S-Function'
   *   '<S465>/S-Function'
   *   '<S469>/S-Function'
   *   '<S471>/S-Function'
   *   '<S475>/S-Function'
   *   '<S477>/S-Function'
   *   '<S487>/S-Function'
   *   '<S489>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S641>/S-Function'
   *   '<S643>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S549>/S-Function'
   *   '<S551>/S-Function'
   *   '<S555>/S-Function'
   *   '<S557>/S-Function'
   *   '<S567>/S-Function'
   *   '<S569>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S593>/S-Function'
   *   '<S595>/S-Function'
   *   '<S599>/S-Function'
   *   '<S601>/S-Function'
   *   '<S605>/S-Function'
   *   '<S607>/S-Function'
   *   '<S617>/S-Function'
   *   '<S619>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S221>/S-Function'
   *   '<S300>/S-Function'
   *   '<S205>/S-Function'
   *   '<S208>/S-Function'
   *   '<S284>/S-Function'
   *   '<S287>/S-Function'
   */
  real_T pooled19[2];

  /* Pooled Parameter (Expression: DFT)
   * Referenced by:
   *   '<S381>/S-Function'
   *   '<S383>/S-Function'
   *   '<S385>/S-Function'
   *   '<S387>/S-Function'
   *   '<S511>/S-Function'
   *   '<S513>/S-Function'
   *   '<S515>/S-Function'
   *   '<S517>/S-Function'
   *   '<S393>/S-Function'
   *   '<S395>/S-Function'
   *   '<S399>/S-Function'
   *   '<S401>/S-Function'
   *   '<S788>/S-Function'
   *   '<S790>/S-Function'
   *   '<S794>/S-Function'
   *   '<S796>/S-Function'
   *   '<S800>/S-Function'
   *   '<S802>/S-Function'
   *   '<S83>/S-Function'
   *   '<S85>/S-Function'
   *   '<S111>/S-Function'
   *   '<S121>/S-Function'
   *   '<S123>/S-Function'
   *   '<S133>/S-Function'
   *   '<S141>/S-Function'
   *   '<S151>/S-Function'
   *   '<S153>/S-Function'
   *   '<S169>/S-Function'
   *   '<S269>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S419>/S-Function'
   *   '<S421>/S-Function'
   *   '<S425>/S-Function'
   *   '<S427>/S-Function'
   *   '<S437>/S-Function'
   *   '<S439>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S463>/S-Function'
   *   '<S465>/S-Function'
   *   '<S469>/S-Function'
   *   '<S471>/S-Function'
   *   '<S475>/S-Function'
   *   '<S477>/S-Function'
   *   '<S487>/S-Function'
   *   '<S489>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S641>/S-Function'
   *   '<S643>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S549>/S-Function'
   *   '<S551>/S-Function'
   *   '<S555>/S-Function'
   *   '<S557>/S-Function'
   *   '<S567>/S-Function'
   *   '<S569>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S593>/S-Function'
   *   '<S595>/S-Function'
   *   '<S599>/S-Function'
   *   '<S601>/S-Function'
   *   '<S605>/S-Function'
   *   '<S607>/S-Function'
   *   '<S617>/S-Function'
   *   '<S619>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   *   '<S221>/S-Function'
   *   '<S300>/S-Function'
   *   '<S205>/S-Function'
   *   '<S208>/S-Function'
   *   '<S284>/S-Function'
   *   '<S287>/S-Function'
   */
  real_T pooled20;

  /* Pooled Parameter (Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ] )
   * Referenced by:
   *   '<S244>/Gain3'
   *   '<S323>/Gain3'
   *   '<S229>/Gain3'
   *   '<S308>/Gain3'
   *   '<S223>/Gain3'
   *   '<S302>/Gain3'
   *   '<S210>/Gain3'
   *   '<S289>/Gain3'
   */
  real_T pooled30[9];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S221>/S-Function'
   *   '<S300>/S-Function'
   *   '<S205>/S-Function'
   *   '<S208>/S-Function'
   *   '<S284>/S-Function'
   *   '<S287>/S-Function'
   */
  real_T pooled35[2];

  /* Pooled Parameter (Expression: MaxDelay)
   * Referenced by:
   *   '<S221>/S-Function'
   *   '<S300>/S-Function'
   *   '<S205>/S-Function'
   *   '<S208>/S-Function'
   *   '<S284>/S-Function'
   *   '<S287>/S-Function'
   */
  real_T pooled36;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S269>/S-Function'
   *   '<S221>/S-Function'
   *   '<S300>/S-Function'
   *   '<S205>/S-Function'
   *   '<S208>/S-Function'
   *   '<S284>/S-Function'
   *   '<S287>/S-Function'
   */
  real_T pooled37[2];

  /* Pooled Parameter (Expression: Ts)
   * Referenced by:
   *   '<S269>/S-Function'
   *   '<S221>/S-Function'
   *   '<S300>/S-Function'
   *   '<S205>/S-Function'
   *   '<S208>/S-Function'
   *   '<S284>/S-Function'
   *   '<S287>/S-Function'
   */
  real_T pooled38;

  /* Expression: zeros(40,1)
   * Referenced by: '<S835>/SwitchCurrents'
   */
  real_T SwitchCurrents_Value[40];

  /* Expression: S.A
   * Referenced by: '<S831>/State-Space'
   */
  real_T StateSpace_AS_param_h[1600];

  /* Expression: S.B
   * Referenced by: '<S831>/State-Space'
   */
  real_T StateSpace_BS_param_k[1920];

  /* Expression: S.C
   * Referenced by: '<S831>/State-Space'
   */
  real_T StateSpace_CS_param_i[2840];

  /* Expression: S.D
   * Referenced by: '<S831>/State-Space'
   */
  real_T StateSpace_DS_param_f[3408];

  /* Expression: S.x0
   * Referenced by: '<S831>/State-Space'
   */
  real_T StateSpace_X0_param_o[40];

  /* Pooled Parameter (Expression: sps.Delay)
   * Referenced by:
   *   '<S380>/K1'
   *   '<S382>/K1'
   *   '<S384>/K1'
   *   '<S510>/K1'
   *   '<S512>/K1'
   *   '<S514>/K1'
   *   '<S392>/K1'
   *   '<S394>/K1'
   *   '<S398>/K1'
   *   '<S400>/K1'
   *   '<S787>/K1'
   *   '<S789>/K1'
   *   '<S793>/K1'
   *   '<S795>/K1'
   *   '<S799>/K1'
   *   '<S801>/K1'
   *   '<S412>/K1'
   *   '<S414>/K1'
   *   '<S418>/K1'
   *   '<S420>/K1'
   *   '<S424>/K1'
   *   '<S426>/K1'
   *   '<S436>/K1'
   *   '<S438>/K1'
   *   '<S442>/K1'
   *   '<S444>/K1'
   *   '<S448>/K1'
   *   '<S450>/K1'
   *   '<S462>/K1'
   *   '<S464>/K1'
   *   '<S468>/K1'
   *   '<S470>/K1'
   *   '<S474>/K1'
   *   '<S476>/K1'
   *   '<S486>/K1'
   *   '<S488>/K1'
   *   '<S492>/K1'
   *   '<S494>/K1'
   *   '<S498>/K1'
   *   '<S500>/K1'
   *   '<S522>/K1'
   *   '<S524>/K1'
   *   '<S528>/K1'
   *   '<S530>/K1'
   *   '<S640>/K1'
   *   '<S642>/K1'
   *   '<S646>/K1'
   *   '<S648>/K1'
   *   '<S652>/K1'
   *   '<S654>/K1'
   *   '<S542>/K1'
   *   '<S544>/K1'
   *   '<S548>/K1'
   *   '<S550>/K1'
   *   '<S554>/K1'
   *   '<S556>/K1'
   *   '<S566>/K1'
   *   '<S568>/K1'
   *   '<S572>/K1'
   *   '<S574>/K1'
   *   '<S578>/K1'
   *   '<S580>/K1'
   *   '<S592>/K1'
   *   '<S594>/K1'
   *   '<S598>/K1'
   *   '<S600>/K1'
   *   '<S604>/K1'
   *   '<S606>/K1'
   *   '<S616>/K1'
   *   '<S618>/K1'
   *   '<S622>/K1'
   *   '<S624>/K1'
   *   '<S628>/K1'
   *   '<S630>/K1'
   */
  real_T pooled59;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S381>/S-Function'
   *   '<S383>/S-Function'
   *   '<S385>/S-Function'
   *   '<S511>/S-Function'
   *   '<S513>/S-Function'
   *   '<S515>/S-Function'
   *   '<S393>/S-Function'
   *   '<S395>/S-Function'
   *   '<S399>/S-Function'
   *   '<S401>/S-Function'
   *   '<S788>/S-Function'
   *   '<S790>/S-Function'
   *   '<S794>/S-Function'
   *   '<S796>/S-Function'
   *   '<S800>/S-Function'
   *   '<S802>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S419>/S-Function'
   *   '<S421>/S-Function'
   *   '<S425>/S-Function'
   *   '<S427>/S-Function'
   *   '<S437>/S-Function'
   *   '<S439>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S463>/S-Function'
   *   '<S465>/S-Function'
   *   '<S469>/S-Function'
   *   '<S471>/S-Function'
   *   '<S475>/S-Function'
   *   '<S477>/S-Function'
   *   '<S487>/S-Function'
   *   '<S489>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S641>/S-Function'
   *   '<S643>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S549>/S-Function'
   *   '<S551>/S-Function'
   *   '<S555>/S-Function'
   *   '<S557>/S-Function'
   *   '<S567>/S-Function'
   *   '<S569>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S593>/S-Function'
   *   '<S595>/S-Function'
   *   '<S599>/S-Function'
   *   '<S601>/S-Function'
   *   '<S605>/S-Function'
   *   '<S607>/S-Function'
   *   '<S617>/S-Function'
   *   '<S619>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   */
  real_T pooled60[2];

  /* Pooled Parameter (Expression: MaxDelay)
   * Referenced by:
   *   '<S381>/S-Function'
   *   '<S383>/S-Function'
   *   '<S385>/S-Function'
   *   '<S511>/S-Function'
   *   '<S513>/S-Function'
   *   '<S515>/S-Function'
   *   '<S393>/S-Function'
   *   '<S395>/S-Function'
   *   '<S399>/S-Function'
   *   '<S401>/S-Function'
   *   '<S788>/S-Function'
   *   '<S790>/S-Function'
   *   '<S794>/S-Function'
   *   '<S796>/S-Function'
   *   '<S800>/S-Function'
   *   '<S802>/S-Function'
   *   '<S413>/S-Function'
   *   '<S415>/S-Function'
   *   '<S419>/S-Function'
   *   '<S421>/S-Function'
   *   '<S425>/S-Function'
   *   '<S427>/S-Function'
   *   '<S437>/S-Function'
   *   '<S439>/S-Function'
   *   '<S443>/S-Function'
   *   '<S445>/S-Function'
   *   '<S449>/S-Function'
   *   '<S451>/S-Function'
   *   '<S463>/S-Function'
   *   '<S465>/S-Function'
   *   '<S469>/S-Function'
   *   '<S471>/S-Function'
   *   '<S475>/S-Function'
   *   '<S477>/S-Function'
   *   '<S487>/S-Function'
   *   '<S489>/S-Function'
   *   '<S493>/S-Function'
   *   '<S495>/S-Function'
   *   '<S499>/S-Function'
   *   '<S501>/S-Function'
   *   '<S523>/S-Function'
   *   '<S525>/S-Function'
   *   '<S529>/S-Function'
   *   '<S531>/S-Function'
   *   '<S641>/S-Function'
   *   '<S643>/S-Function'
   *   '<S647>/S-Function'
   *   '<S649>/S-Function'
   *   '<S653>/S-Function'
   *   '<S655>/S-Function'
   *   '<S543>/S-Function'
   *   '<S545>/S-Function'
   *   '<S549>/S-Function'
   *   '<S551>/S-Function'
   *   '<S555>/S-Function'
   *   '<S557>/S-Function'
   *   '<S567>/S-Function'
   *   '<S569>/S-Function'
   *   '<S573>/S-Function'
   *   '<S575>/S-Function'
   *   '<S579>/S-Function'
   *   '<S581>/S-Function'
   *   '<S593>/S-Function'
   *   '<S595>/S-Function'
   *   '<S599>/S-Function'
   *   '<S601>/S-Function'
   *   '<S605>/S-Function'
   *   '<S607>/S-Function'
   *   '<S617>/S-Function'
   *   '<S619>/S-Function'
   *   '<S623>/S-Function'
   *   '<S625>/S-Function'
   *   '<S629>/S-Function'
   *   '<S631>/S-Function'
   */
  real_T pooled61;

  /* Pooled Parameter (Expression: sps.Delay)
   * Referenced by:
   *   '<S386>/K1'
   *   '<S516>/K1'
   */
  real_T pooled69;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S387>/S-Function'
   *   '<S517>/S-Function'
   */
  real_T pooled70[2];

  /* Pooled Parameter (Expression: MaxDelay)
   * Referenced by:
   *   '<S387>/S-Function'
   *   '<S517>/S-Function'
   */
  real_T pooled71;

  /* Expression: sps.Delay
   * Referenced by: '<S268>/K1'
   */
  real_T K1_Value;

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S269>/S-Function'
   */
  real_T SFunction_P1_Size[2];

  /* Expression: MaxDelay
   * Referenced by: '<S269>/S-Function'
   */
  real_T SFunction_P1;

  /* Pooled Parameter (Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ] )
   * Referenced by:
   *   '<S249>/Gain3'
   *   '<S328>/Gain3'
   */
  real_T pooled88[9];
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
  //real_T 3LId[2];                      /* '<Root>/Out11' */
  //real_T 3LIq;                         /* '<Root>/Out12' */
  //real_T 3Lm;                          /* '<Root>/Out13' */
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
extern void power_converters_switching_devices_initialize(void);
extern void power_converters_switching_devices_step0(void);
extern void power_converters_switching_devices_step1(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S47>/0 1' : Unused code path elimination
 * Block '<S47>/Gain' : Unused code path elimination
 * Block '<S47>/Saturation' : Unused code path elimination
 * Block '<S47>/Sum' : Unused code path elimination
 * Block '<S47>/Switch' : Unused code path elimination
 * Block '<S47>/eee' : Unused code path elimination
 * Block '<S49>/0 4' : Unused code path elimination
 * Block '<S49>/1//Rsw' : Unused code path elimination
 * Block '<S49>/Saturation' : Unused code path elimination
 * Block '<S49>/Sum' : Unused code path elimination
 * Block '<S49>/Switch' : Unused code path elimination
 * Block '<S49>/wtt' : Unused code path elimination
 * Block '<S59>/0 1' : Unused code path elimination
 * Block '<S59>/Gain' : Unused code path elimination
 * Block '<S59>/Saturation' : Unused code path elimination
 * Block '<S59>/Sum' : Unused code path elimination
 * Block '<S59>/Switch' : Unused code path elimination
 * Block '<S59>/eee' : Unused code path elimination
 * Block '<S61>/0 4' : Unused code path elimination
 * Block '<S61>/1//Rsw' : Unused code path elimination
 * Block '<S61>/Saturation' : Unused code path elimination
 * Block '<S61>/Sum' : Unused code path elimination
 * Block '<S61>/Switch' : Unused code path elimination
 * Block '<S61>/wtt' : Unused code path elimination
 * Block '<S180>/PI_Ireg' : Unused code path elimination
 * Block '<S199>/Rad->Deg.' : Unused code path elimination
 * Block '<S255>/PI_Ireg' : Unused code path elimination
 * Block '<S278>/Rad->Deg.' : Unused code path elimination
 * Block '<S360>/0 4' : Unused code path elimination
 * Block '<S360>/1//Rsw' : Unused code path elimination
 * Block '<S360>/Switch' : Unused code path elimination
 * Block '<S362>/0 4' : Unused code path elimination
 * Block '<S362>/1//Rsw' : Unused code path elimination
 * Block '<S362>/Switch' : Unused code path elimination
 * Block '<S364>/0 4' : Unused code path elimination
 * Block '<S364>/1//Rsw' : Unused code path elimination
 * Block '<S364>/Switch' : Unused code path elimination
 * Block '<S366>/0 4' : Unused code path elimination
 * Block '<S366>/1//Rsw' : Unused code path elimination
 * Block '<S366>/Switch' : Unused code path elimination
 * Block '<S376>/0 4' : Unused code path elimination
 * Block '<S376>/1//Rsw' : Unused code path elimination
 * Block '<S376>/Switch' : Unused code path elimination
 * Block '<S378>/0 4' : Unused code path elimination
 * Block '<S378>/1//Rsw' : Unused code path elimination
 * Block '<S378>/Switch' : Unused code path elimination
 * Block '<S23>/3L_Rectifier_Control' : Unused code path elimination
 * Block '<S23>/All_Power's (W)' : Unused code path elimination
 * Block '<S23>/Boost' : Unused code path elimination
 * Block '<S23>/Buck' : Unused code path elimination
 * Block '<S23>/FB' : Unused code path elimination
 * Block '<S23>/HB' : Unused code path elimination
 * Block '<S510>/Digital  Clock' : Unused code path elimination
 * Block '<S510>/Gain' : Unused code path elimination
 * Block '<S510>/Gain1' : Unused code path elimination
 * Block '<S510>/K2' : Unused code path elimination
 * Block '<S510>/Product' : Unused code path elimination
 * Block '<S510>/Relational Operator' : Unused code path elimination
 * Block '<S510>/Sum1' : Unused code path elimination
 * Block '<S510>/Sum5' : Unused code path elimination
 * Block '<S510>/Sum7' : Unused code path elimination
 * Block '<S510>/Switch' : Unused code path elimination
 * Block '<S510>/Unit Delay' : Unused code path elimination
 * Block '<S510>/Unit Delay1' : Unused code path elimination
 * Block '<S512>/Digital  Clock' : Unused code path elimination
 * Block '<S512>/Gain' : Unused code path elimination
 * Block '<S512>/Gain1' : Unused code path elimination
 * Block '<S512>/K2' : Unused code path elimination
 * Block '<S512>/Product' : Unused code path elimination
 * Block '<S512>/Relational Operator' : Unused code path elimination
 * Block '<S512>/Sum1' : Unused code path elimination
 * Block '<S512>/Sum5' : Unused code path elimination
 * Block '<S512>/Sum7' : Unused code path elimination
 * Block '<S512>/Switch' : Unused code path elimination
 * Block '<S512>/Unit Delay' : Unused code path elimination
 * Block '<S512>/Unit Delay1' : Unused code path elimination
 * Block '<S514>/Digital  Clock' : Unused code path elimination
 * Block '<S514>/Gain' : Unused code path elimination
 * Block '<S514>/Gain1' : Unused code path elimination
 * Block '<S514>/K2' : Unused code path elimination
 * Block '<S514>/Product' : Unused code path elimination
 * Block '<S514>/Relational Operator' : Unused code path elimination
 * Block '<S514>/Sum1' : Unused code path elimination
 * Block '<S514>/Sum5' : Unused code path elimination
 * Block '<S514>/Sum7' : Unused code path elimination
 * Block '<S514>/Switch' : Unused code path elimination
 * Block '<S514>/Unit Delay' : Unused code path elimination
 * Block '<S514>/Unit Delay1' : Unused code path elimination
 * Block '<S516>/Digital  Clock' : Unused code path elimination
 * Block '<S516>/Gain' : Unused code path elimination
 * Block '<S516>/Gain1' : Unused code path elimination
 * Block '<S516>/K2' : Unused code path elimination
 * Block '<S516>/Product' : Unused code path elimination
 * Block '<S516>/Relational Operator' : Unused code path elimination
 * Block '<S516>/Sum1' : Unused code path elimination
 * Block '<S516>/Sum5' : Unused code path elimination
 * Block '<S516>/Sum7' : Unused code path elimination
 * Block '<S516>/Switch' : Unused code path elimination
 * Block '<S516>/Unit Delay' : Unused code path elimination
 * Block '<S516>/Unit Delay1' : Unused code path elimination
 * Block '<S23>/PQgrid' : Unused code path elimination
 * Block '<S23>/PQstat' : Unused code path elimination
 * Block '<S506>/Deg->Rad' : Unused code path elimination
 * Block '<S518>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S522>/Digital  Clock' : Unused code path elimination
 * Block '<S522>/Gain' : Unused code path elimination
 * Block '<S522>/Gain1' : Unused code path elimination
 * Block '<S522>/K2' : Unused code path elimination
 * Block '<S522>/Product' : Unused code path elimination
 * Block '<S522>/Relational Operator' : Unused code path elimination
 * Block '<S522>/Sum1' : Unused code path elimination
 * Block '<S522>/Sum5' : Unused code path elimination
 * Block '<S522>/Sum7' : Unused code path elimination
 * Block '<S522>/Switch' : Unused code path elimination
 * Block '<S522>/Unit Delay' : Unused code path elimination
 * Block '<S522>/Unit Delay1' : Unused code path elimination
 * Block '<S524>/Digital  Clock' : Unused code path elimination
 * Block '<S524>/Gain' : Unused code path elimination
 * Block '<S524>/Gain1' : Unused code path elimination
 * Block '<S524>/K2' : Unused code path elimination
 * Block '<S524>/Product' : Unused code path elimination
 * Block '<S524>/Relational Operator' : Unused code path elimination
 * Block '<S524>/Sum1' : Unused code path elimination
 * Block '<S524>/Sum5' : Unused code path elimination
 * Block '<S524>/Sum7' : Unused code path elimination
 * Block '<S524>/Switch' : Unused code path elimination
 * Block '<S524>/Unit Delay' : Unused code path elimination
 * Block '<S524>/Unit Delay1' : Unused code path elimination
 * Block '<S518>/Rad->Deg.' : Unused code path elimination
 * Block '<S518>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S519>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S528>/Digital  Clock' : Unused code path elimination
 * Block '<S528>/Gain' : Unused code path elimination
 * Block '<S528>/Gain1' : Unused code path elimination
 * Block '<S528>/K2' : Unused code path elimination
 * Block '<S528>/Product' : Unused code path elimination
 * Block '<S528>/Relational Operator' : Unused code path elimination
 * Block '<S528>/Sum1' : Unused code path elimination
 * Block '<S528>/Sum5' : Unused code path elimination
 * Block '<S528>/Sum7' : Unused code path elimination
 * Block '<S528>/Switch' : Unused code path elimination
 * Block '<S528>/Unit Delay' : Unused code path elimination
 * Block '<S528>/Unit Delay1' : Unused code path elimination
 * Block '<S530>/Digital  Clock' : Unused code path elimination
 * Block '<S530>/Gain' : Unused code path elimination
 * Block '<S530>/Gain1' : Unused code path elimination
 * Block '<S530>/K2' : Unused code path elimination
 * Block '<S530>/Product' : Unused code path elimination
 * Block '<S530>/Relational Operator' : Unused code path elimination
 * Block '<S530>/Sum1' : Unused code path elimination
 * Block '<S530>/Sum5' : Unused code path elimination
 * Block '<S530>/Sum7' : Unused code path elimination
 * Block '<S530>/Switch' : Unused code path elimination
 * Block '<S530>/Unit Delay' : Unused code path elimination
 * Block '<S530>/Unit Delay1' : Unused code path elimination
 * Block '<S519>/Rad->Deg.' : Unused code path elimination
 * Block '<S519>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S506>/Gain1' : Unused code path elimination
 * Block '<S506>/Product' : Unused code path elimination
 * Block '<S506>/Product1' : Unused code path elimination
 * Block '<S506>/Product3' : Unused code path elimination
 * Block '<S506>/Sum' : Unused code path elimination
 * Block '<S506>/Trigonometric Function2' : Unused code path elimination
 * Block '<S507>/Deg->Rad' : Unused code path elimination
 * Block '<S507>/Gain1' : Unused code path elimination
 * Block '<S507>/Product' : Unused code path elimination
 * Block '<S507>/Product1' : Unused code path elimination
 * Block '<S507>/Product3' : Unused code path elimination
 * Block '<S532>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S534>/Complex to Magnitude-Angle' : Unused code path elimination
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
 * Block '<S534>/Rad->Deg.' : Unused code path elimination
 * Block '<S534>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S535>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S548>/Digital  Clock' : Unused code path elimination
 * Block '<S548>/Gain' : Unused code path elimination
 * Block '<S548>/Gain1' : Unused code path elimination
 * Block '<S548>/K2' : Unused code path elimination
 * Block '<S548>/Product' : Unused code path elimination
 * Block '<S548>/Relational Operator' : Unused code path elimination
 * Block '<S548>/Sum1' : Unused code path elimination
 * Block '<S548>/Sum5' : Unused code path elimination
 * Block '<S548>/Sum7' : Unused code path elimination
 * Block '<S548>/Switch' : Unused code path elimination
 * Block '<S548>/Unit Delay' : Unused code path elimination
 * Block '<S548>/Unit Delay1' : Unused code path elimination
 * Block '<S550>/Digital  Clock' : Unused code path elimination
 * Block '<S550>/Gain' : Unused code path elimination
 * Block '<S550>/Gain1' : Unused code path elimination
 * Block '<S550>/K2' : Unused code path elimination
 * Block '<S550>/Product' : Unused code path elimination
 * Block '<S550>/Relational Operator' : Unused code path elimination
 * Block '<S550>/Sum1' : Unused code path elimination
 * Block '<S550>/Sum5' : Unused code path elimination
 * Block '<S550>/Sum7' : Unused code path elimination
 * Block '<S550>/Switch' : Unused code path elimination
 * Block '<S550>/Unit Delay' : Unused code path elimination
 * Block '<S550>/Unit Delay1' : Unused code path elimination
 * Block '<S535>/Rad->Deg.' : Unused code path elimination
 * Block '<S535>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S536>/Complex to Magnitude-Angle' : Unused code path elimination
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
 * Block '<S556>/Digital  Clock' : Unused code path elimination
 * Block '<S556>/Gain' : Unused code path elimination
 * Block '<S556>/Gain1' : Unused code path elimination
 * Block '<S556>/K2' : Unused code path elimination
 * Block '<S556>/Product' : Unused code path elimination
 * Block '<S556>/Relational Operator' : Unused code path elimination
 * Block '<S556>/Sum1' : Unused code path elimination
 * Block '<S556>/Sum5' : Unused code path elimination
 * Block '<S556>/Sum7' : Unused code path elimination
 * Block '<S556>/Switch' : Unused code path elimination
 * Block '<S556>/Unit Delay' : Unused code path elimination
 * Block '<S556>/Unit Delay1' : Unused code path elimination
 * Block '<S536>/Rad->Deg.' : Unused code path elimination
 * Block '<S536>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S532>/Magnitude-Angle to Complex' : Unused code path elimination
 * Block '<S532>/Magnitude-Angle to Complex1' : Unused code path elimination
 * Block '<S532>/Magnitude-Angle to Complex2' : Unused code path elimination
 * Block '<S537>/Gain1' : Unused code path elimination
 * Block '<S537>/Gain3' : Unused code path elimination
 * Block '<S537>/Sum' : Unused code path elimination
 * Block '<S538>/Gain1' : Unused code path elimination
 * Block '<S538>/Gain3' : Unused code path elimination
 * Block '<S538>/Sum' : Unused code path elimination
 * Block '<S539>/Gain3' : Unused code path elimination
 * Block '<S539>/Sum' : Unused code path elimination
 * Block '<S532>/deg->rad' : Unused code path elimination
 * Block '<S532>/deg->rad1' : Unused code path elimination
 * Block '<S532>/deg->rad2' : Unused code path elimination
 * Block '<S532>/rad->deg1' : Unused code path elimination
 * Block '<S533>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S558>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S566>/Digital  Clock' : Unused code path elimination
 * Block '<S566>/Gain' : Unused code path elimination
 * Block '<S566>/Gain1' : Unused code path elimination
 * Block '<S566>/K2' : Unused code path elimination
 * Block '<S566>/Product' : Unused code path elimination
 * Block '<S566>/Relational Operator' : Unused code path elimination
 * Block '<S566>/Sum1' : Unused code path elimination
 * Block '<S566>/Sum5' : Unused code path elimination
 * Block '<S566>/Sum7' : Unused code path elimination
 * Block '<S566>/Switch' : Unused code path elimination
 * Block '<S566>/Unit Delay' : Unused code path elimination
 * Block '<S566>/Unit Delay1' : Unused code path elimination
 * Block '<S568>/Digital  Clock' : Unused code path elimination
 * Block '<S568>/Gain' : Unused code path elimination
 * Block '<S568>/Gain1' : Unused code path elimination
 * Block '<S568>/K2' : Unused code path elimination
 * Block '<S568>/Product' : Unused code path elimination
 * Block '<S568>/Relational Operator' : Unused code path elimination
 * Block '<S568>/Sum1' : Unused code path elimination
 * Block '<S568>/Sum5' : Unused code path elimination
 * Block '<S568>/Sum7' : Unused code path elimination
 * Block '<S568>/Switch' : Unused code path elimination
 * Block '<S568>/Unit Delay' : Unused code path elimination
 * Block '<S568>/Unit Delay1' : Unused code path elimination
 * Block '<S558>/Rad->Deg.' : Unused code path elimination
 * Block '<S558>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S559>/Complex to Magnitude-Angle' : Unused code path elimination
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
 * Block '<S559>/Rad->Deg.' : Unused code path elimination
 * Block '<S559>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S560>/Complex to Magnitude-Angle' : Unused code path elimination
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
 * Block '<S560>/Rad->Deg.' : Unused code path elimination
 * Block '<S560>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S533>/Magnitude-Angle to Complex' : Unused code path elimination
 * Block '<S533>/Magnitude-Angle to Complex1' : Unused code path elimination
 * Block '<S533>/Magnitude-Angle to Complex2' : Unused code path elimination
 * Block '<S561>/Gain1' : Unused code path elimination
 * Block '<S561>/Gain3' : Unused code path elimination
 * Block '<S561>/Sum' : Unused code path elimination
 * Block '<S562>/Gain1' : Unused code path elimination
 * Block '<S562>/Gain3' : Unused code path elimination
 * Block '<S562>/Sum' : Unused code path elimination
 * Block '<S563>/Gain3' : Unused code path elimination
 * Block '<S563>/Sum' : Unused code path elimination
 * Block '<S533>/deg->rad' : Unused code path elimination
 * Block '<S533>/deg->rad1' : Unused code path elimination
 * Block '<S533>/deg->rad2' : Unused code path elimination
 * Block '<S533>/rad->deg1' : Unused code path elimination
 * Block '<S507>/Sum' : Unused code path elimination
 * Block '<S507>/Trigonometric Function2' : Unused code path elimination
 * Block '<S508>/Deg->Rad' : Unused code path elimination
 * Block '<S508>/Gain1' : Unused code path elimination
 * Block '<S508>/Product' : Unused code path elimination
 * Block '<S508>/Product1' : Unused code path elimination
 * Block '<S508>/Product3' : Unused code path elimination
 * Block '<S582>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S584>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S592>/Digital  Clock' : Unused code path elimination
 * Block '<S592>/Gain' : Unused code path elimination
 * Block '<S592>/Gain1' : Unused code path elimination
 * Block '<S592>/K2' : Unused code path elimination
 * Block '<S592>/Product' : Unused code path elimination
 * Block '<S592>/Relational Operator' : Unused code path elimination
 * Block '<S592>/Sum1' : Unused code path elimination
 * Block '<S592>/Sum5' : Unused code path elimination
 * Block '<S592>/Sum7' : Unused code path elimination
 * Block '<S592>/Switch' : Unused code path elimination
 * Block '<S592>/Unit Delay' : Unused code path elimination
 * Block '<S592>/Unit Delay1' : Unused code path elimination
 * Block '<S594>/Digital  Clock' : Unused code path elimination
 * Block '<S594>/Gain' : Unused code path elimination
 * Block '<S594>/Gain1' : Unused code path elimination
 * Block '<S594>/K2' : Unused code path elimination
 * Block '<S594>/Product' : Unused code path elimination
 * Block '<S594>/Relational Operator' : Unused code path elimination
 * Block '<S594>/Sum1' : Unused code path elimination
 * Block '<S594>/Sum5' : Unused code path elimination
 * Block '<S594>/Sum7' : Unused code path elimination
 * Block '<S594>/Switch' : Unused code path elimination
 * Block '<S594>/Unit Delay' : Unused code path elimination
 * Block '<S594>/Unit Delay1' : Unused code path elimination
 * Block '<S584>/Rad->Deg.' : Unused code path elimination
 * Block '<S584>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S585>/Complex to Magnitude-Angle' : Unused code path elimination
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
 * Block '<S600>/Digital  Clock' : Unused code path elimination
 * Block '<S600>/Gain' : Unused code path elimination
 * Block '<S600>/Gain1' : Unused code path elimination
 * Block '<S600>/K2' : Unused code path elimination
 * Block '<S600>/Product' : Unused code path elimination
 * Block '<S600>/Relational Operator' : Unused code path elimination
 * Block '<S600>/Sum1' : Unused code path elimination
 * Block '<S600>/Sum5' : Unused code path elimination
 * Block '<S600>/Sum7' : Unused code path elimination
 * Block '<S600>/Switch' : Unused code path elimination
 * Block '<S600>/Unit Delay' : Unused code path elimination
 * Block '<S600>/Unit Delay1' : Unused code path elimination
 * Block '<S585>/Rad->Deg.' : Unused code path elimination
 * Block '<S585>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S586>/Complex to Magnitude-Angle' : Unused code path elimination
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
 * Block '<S606>/Digital  Clock' : Unused code path elimination
 * Block '<S606>/Gain' : Unused code path elimination
 * Block '<S606>/Gain1' : Unused code path elimination
 * Block '<S606>/K2' : Unused code path elimination
 * Block '<S606>/Product' : Unused code path elimination
 * Block '<S606>/Relational Operator' : Unused code path elimination
 * Block '<S606>/Sum1' : Unused code path elimination
 * Block '<S606>/Sum5' : Unused code path elimination
 * Block '<S606>/Sum7' : Unused code path elimination
 * Block '<S606>/Switch' : Unused code path elimination
 * Block '<S606>/Unit Delay' : Unused code path elimination
 * Block '<S606>/Unit Delay1' : Unused code path elimination
 * Block '<S586>/Rad->Deg.' : Unused code path elimination
 * Block '<S586>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S582>/Magnitude-Angle to Complex' : Unused code path elimination
 * Block '<S582>/Magnitude-Angle to Complex1' : Unused code path elimination
 * Block '<S582>/Magnitude-Angle to Complex2' : Unused code path elimination
 * Block '<S587>/Gain1' : Unused code path elimination
 * Block '<S587>/Gain3' : Unused code path elimination
 * Block '<S587>/Sum' : Unused code path elimination
 * Block '<S588>/Gain1' : Unused code path elimination
 * Block '<S588>/Gain3' : Unused code path elimination
 * Block '<S588>/Sum' : Unused code path elimination
 * Block '<S589>/Gain3' : Unused code path elimination
 * Block '<S589>/Sum' : Unused code path elimination
 * Block '<S582>/deg->rad' : Unused code path elimination
 * Block '<S582>/deg->rad1' : Unused code path elimination
 * Block '<S582>/deg->rad2' : Unused code path elimination
 * Block '<S582>/rad->deg1' : Unused code path elimination
 * Block '<S583>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S608>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S616>/Digital  Clock' : Unused code path elimination
 * Block '<S616>/Gain' : Unused code path elimination
 * Block '<S616>/Gain1' : Unused code path elimination
 * Block '<S616>/K2' : Unused code path elimination
 * Block '<S616>/Product' : Unused code path elimination
 * Block '<S616>/Relational Operator' : Unused code path elimination
 * Block '<S616>/Sum1' : Unused code path elimination
 * Block '<S616>/Sum5' : Unused code path elimination
 * Block '<S616>/Sum7' : Unused code path elimination
 * Block '<S616>/Switch' : Unused code path elimination
 * Block '<S616>/Unit Delay' : Unused code path elimination
 * Block '<S616>/Unit Delay1' : Unused code path elimination
 * Block '<S618>/Digital  Clock' : Unused code path elimination
 * Block '<S618>/Gain' : Unused code path elimination
 * Block '<S618>/Gain1' : Unused code path elimination
 * Block '<S618>/K2' : Unused code path elimination
 * Block '<S618>/Product' : Unused code path elimination
 * Block '<S618>/Relational Operator' : Unused code path elimination
 * Block '<S618>/Sum1' : Unused code path elimination
 * Block '<S618>/Sum5' : Unused code path elimination
 * Block '<S618>/Sum7' : Unused code path elimination
 * Block '<S618>/Switch' : Unused code path elimination
 * Block '<S618>/Unit Delay' : Unused code path elimination
 * Block '<S618>/Unit Delay1' : Unused code path elimination
 * Block '<S608>/Rad->Deg.' : Unused code path elimination
 * Block '<S608>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S609>/Complex to Magnitude-Angle' : Unused code path elimination
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
 * Block '<S609>/Rad->Deg.' : Unused code path elimination
 * Block '<S609>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S610>/Complex to Magnitude-Angle' : Unused code path elimination
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
 * Block '<S610>/Rad->Deg.' : Unused code path elimination
 * Block '<S610>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S583>/Magnitude-Angle to Complex' : Unused code path elimination
 * Block '<S583>/Magnitude-Angle to Complex1' : Unused code path elimination
 * Block '<S583>/Magnitude-Angle to Complex2' : Unused code path elimination
 * Block '<S611>/Gain1' : Unused code path elimination
 * Block '<S611>/Gain3' : Unused code path elimination
 * Block '<S611>/Sum' : Unused code path elimination
 * Block '<S612>/Gain1' : Unused code path elimination
 * Block '<S612>/Gain3' : Unused code path elimination
 * Block '<S612>/Sum' : Unused code path elimination
 * Block '<S613>/Gain3' : Unused code path elimination
 * Block '<S613>/Sum' : Unused code path elimination
 * Block '<S583>/deg->rad' : Unused code path elimination
 * Block '<S583>/deg->rad1' : Unused code path elimination
 * Block '<S583>/deg->rad2' : Unused code path elimination
 * Block '<S583>/rad->deg1' : Unused code path elimination
 * Block '<S508>/Sum' : Unused code path elimination
 * Block '<S508>/Trigonometric Function2' : Unused code path elimination
 * Block '<S23>/Rate Transition1' : Unused code path elimination
 * Block '<S23>/Rate Transition2' : Unused code path elimination
 * Block '<S509>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S632>/Complex to Magnitude-Angle' : Unused code path elimination
 * Block '<S640>/Digital  Clock' : Unused code path elimination
 * Block '<S640>/Gain' : Unused code path elimination
 * Block '<S640>/Gain1' : Unused code path elimination
 * Block '<S640>/K2' : Unused code path elimination
 * Block '<S640>/Product' : Unused code path elimination
 * Block '<S640>/Relational Operator' : Unused code path elimination
 * Block '<S640>/Sum1' : Unused code path elimination
 * Block '<S640>/Sum5' : Unused code path elimination
 * Block '<S640>/Sum7' : Unused code path elimination
 * Block '<S640>/Switch' : Unused code path elimination
 * Block '<S640>/Unit Delay' : Unused code path elimination
 * Block '<S640>/Unit Delay1' : Unused code path elimination
 * Block '<S642>/Digital  Clock' : Unused code path elimination
 * Block '<S642>/Gain' : Unused code path elimination
 * Block '<S642>/Gain1' : Unused code path elimination
 * Block '<S642>/K2' : Unused code path elimination
 * Block '<S642>/Product' : Unused code path elimination
 * Block '<S642>/Relational Operator' : Unused code path elimination
 * Block '<S642>/Sum1' : Unused code path elimination
 * Block '<S642>/Sum5' : Unused code path elimination
 * Block '<S642>/Sum7' : Unused code path elimination
 * Block '<S642>/Switch' : Unused code path elimination
 * Block '<S642>/Unit Delay' : Unused code path elimination
 * Block '<S642>/Unit Delay1' : Unused code path elimination
 * Block '<S632>/Rad->Deg.' : Unused code path elimination
 * Block '<S632>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S633>/Complex to Magnitude-Angle' : Unused code path elimination
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
 * Block '<S633>/Rad->Deg.' : Unused code path elimination
 * Block '<S633>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S634>/Complex to Magnitude-Angle' : Unused code path elimination
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
 * Block '<S634>/Rad->Deg.' : Unused code path elimination
 * Block '<S634>/Real-Imag to Complex' : Unused code path elimination
 * Block '<S509>/Magnitude-Angle to Complex' : Unused code path elimination
 * Block '<S509>/Magnitude-Angle to Complex1' : Unused code path elimination
 * Block '<S509>/Magnitude-Angle to Complex2' : Unused code path elimination
 * Block '<S635>/Gain1' : Unused code path elimination
 * Block '<S635>/Gain3' : Unused code path elimination
 * Block '<S635>/Sum' : Unused code path elimination
 * Block '<S636>/Gain1' : Unused code path elimination
 * Block '<S636>/Gain3' : Unused code path elimination
 * Block '<S636>/Sum' : Unused code path elimination
 * Block '<S637>/Gain3' : Unused code path elimination
 * Block '<S637>/Sum' : Unused code path elimination
 * Block '<S509>/deg->rad' : Unused code path elimination
 * Block '<S509>/deg->rad1' : Unused code path elimination
 * Block '<S509>/deg->rad2' : Unused code path elimination
 * Block '<S509>/rad->deg1' : Unused code path elimination
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
 * Block '<S666>/0 1' : Unused code path elimination
 * Block '<S666>/Gain' : Unused code path elimination
 * Block '<S666>/Saturation' : Unused code path elimination
 * Block '<S666>/Sum' : Unused code path elimination
 * Block '<S666>/Switch' : Unused code path elimination
 * Block '<S666>/eee' : Unused code path elimination
 * Block '<S668>/0 1' : Unused code path elimination
 * Block '<S668>/Gain' : Unused code path elimination
 * Block '<S668>/Saturation' : Unused code path elimination
 * Block '<S668>/Sum' : Unused code path elimination
 * Block '<S668>/Switch' : Unused code path elimination
 * Block '<S668>/eee' : Unused code path elimination
 * Block '<S670>/0 4' : Unused code path elimination
 * Block '<S670>/1//Rsw' : Unused code path elimination
 * Block '<S670>/Switch' : Unused code path elimination
 * Block '<S672>/0 4' : Unused code path elimination
 * Block '<S672>/1//Rsw' : Unused code path elimination
 * Block '<S672>/Switch' : Unused code path elimination
 * Block '<S674>/0 4' : Unused code path elimination
 * Block '<S674>/1//Rsw' : Unused code path elimination
 * Block '<S674>/Switch' : Unused code path elimination
 * Block '<S676>/0 4' : Unused code path elimination
 * Block '<S676>/1//Rsw' : Unused code path elimination
 * Block '<S676>/Switch' : Unused code path elimination
 * Block '<S685>/0 1' : Unused code path elimination
 * Block '<S685>/Gain' : Unused code path elimination
 * Block '<S685>/Saturation' : Unused code path elimination
 * Block '<S685>/Sum' : Unused code path elimination
 * Block '<S685>/Switch' : Unused code path elimination
 * Block '<S685>/eee' : Unused code path elimination
 * Block '<S687>/0 1' : Unused code path elimination
 * Block '<S687>/Gain' : Unused code path elimination
 * Block '<S687>/Saturation' : Unused code path elimination
 * Block '<S687>/Sum' : Unused code path elimination
 * Block '<S687>/Switch' : Unused code path elimination
 * Block '<S687>/eee' : Unused code path elimination
 * Block '<S689>/0 4' : Unused code path elimination
 * Block '<S689>/1//Rsw' : Unused code path elimination
 * Block '<S689>/Switch' : Unused code path elimination
 * Block '<S691>/0 4' : Unused code path elimination
 * Block '<S691>/1//Rsw' : Unused code path elimination
 * Block '<S691>/Switch' : Unused code path elimination
 * Block '<S693>/0 4' : Unused code path elimination
 * Block '<S693>/1//Rsw' : Unused code path elimination
 * Block '<S693>/Switch' : Unused code path elimination
 * Block '<S695>/0 4' : Unused code path elimination
 * Block '<S695>/1//Rsw' : Unused code path elimination
 * Block '<S695>/Switch' : Unused code path elimination
 * Block '<S704>/0 1' : Unused code path elimination
 * Block '<S704>/Gain' : Unused code path elimination
 * Block '<S704>/Saturation' : Unused code path elimination
 * Block '<S704>/Sum' : Unused code path elimination
 * Block '<S704>/Switch' : Unused code path elimination
 * Block '<S704>/eee' : Unused code path elimination
 * Block '<S706>/0 1' : Unused code path elimination
 * Block '<S706>/Gain' : Unused code path elimination
 * Block '<S706>/Saturation' : Unused code path elimination
 * Block '<S706>/Sum' : Unused code path elimination
 * Block '<S706>/Switch' : Unused code path elimination
 * Block '<S706>/eee' : Unused code path elimination
 * Block '<S708>/0 4' : Unused code path elimination
 * Block '<S708>/1//Rsw' : Unused code path elimination
 * Block '<S708>/Switch' : Unused code path elimination
 * Block '<S710>/0 4' : Unused code path elimination
 * Block '<S710>/1//Rsw' : Unused code path elimination
 * Block '<S710>/Switch' : Unused code path elimination
 * Block '<S712>/0 4' : Unused code path elimination
 * Block '<S712>/1//Rsw' : Unused code path elimination
 * Block '<S712>/Switch' : Unused code path elimination
 * Block '<S714>/0 4' : Unused code path elimination
 * Block '<S714>/1//Rsw' : Unused code path elimination
 * Block '<S714>/Switch' : Unused code path elimination
 * Block '<S729>/0 4' : Unused code path elimination
 * Block '<S729>/1//Rsw' : Unused code path elimination
 * Block '<S729>/Switch' : Unused code path elimination
 * Block '<S731>/0 4' : Unused code path elimination
 * Block '<S731>/1//Rsw' : Unused code path elimination
 * Block '<S731>/Switch' : Unused code path elimination
 * Block '<S736>/0 4' : Unused code path elimination
 * Block '<S736>/1//Rsw' : Unused code path elimination
 * Block '<S736>/Switch' : Unused code path elimination
 * Block '<S738>/0 4' : Unused code path elimination
 * Block '<S738>/1//Rsw' : Unused code path elimination
 * Block '<S738>/Switch' : Unused code path elimination
 * Block '<S743>/0 4' : Unused code path elimination
 * Block '<S743>/1//Rsw' : Unused code path elimination
 * Block '<S743>/Switch' : Unused code path elimination
 * Block '<S745>/0 4' : Unused code path elimination
 * Block '<S745>/1//Rsw' : Unused code path elimination
 * Block '<S745>/Switch' : Unused code path elimination
 * Block '<S753>/0 4' : Unused code path elimination
 * Block '<S753>/1//Rsw' : Unused code path elimination
 * Block '<S753>/Switch' : Unused code path elimination
 * Block '<S755>/0 4' : Unused code path elimination
 * Block '<S755>/1//Rsw' : Unused code path elimination
 * Block '<S755>/Switch' : Unused code path elimination
 * Block '<S760>/0 4' : Unused code path elimination
 * Block '<S760>/1//Rsw' : Unused code path elimination
 * Block '<S760>/Switch' : Unused code path elimination
 * Block '<S762>/0 4' : Unused code path elimination
 * Block '<S762>/1//Rsw' : Unused code path elimination
 * Block '<S762>/Switch' : Unused code path elimination
 * Block '<S767>/0 4' : Unused code path elimination
 * Block '<S767>/1//Rsw' : Unused code path elimination
 * Block '<S767>/Switch' : Unused code path elimination
 * Block '<S769>/0 4' : Unused code path elimination
 * Block '<S769>/1//Rsw' : Unused code path elimination
 * Block '<S769>/Switch' : Unused code path elimination
 * Block '<S775>/0 4' : Unused code path elimination
 * Block '<S775>/1//Rsw' : Unused code path elimination
 * Block '<S775>/Switch' : Unused code path elimination
 * Block '<S777>/0 4' : Unused code path elimination
 * Block '<S777>/1//Rsw' : Unused code path elimination
 * Block '<S777>/Switch' : Unused code path elimination
 * Block '<S32>/rad->deg1' : Unused code path elimination
 * Block '<S37>/Kv' : Unused code path elimination
 * Block '<S39>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S40>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S43>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S49>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S51>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S52>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S55>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S61>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S73>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S74>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S76>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S77>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S64>/Switch1' : Eliminated due to constant selection input
 * Block '<S64>/Switch2' : Eliminated due to constant selection input
 * Block '<S106>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S65>/Switch1' : Eliminated due to constant selection input
 * Block '<S119>/Multiport Switch' : Eliminated due to constant selection input
 * Block '<S119>/Multiport Switch1' : Eliminated due to constant selection input
 * Block '<S116>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S116>/Zero-Order Hold2' : Eliminated since input and output rates are identical
 * Block '<S66>/Switch' : Eliminated due to constant selection input
 * Block '<S67>/Switch1' : Eliminated due to constant selection input
 * Block '<S67>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S68>/Switch1' : Eliminated due to constant selection input
 * Block '<S68>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S146>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S146>/Zero-Order Hold2' : Eliminated since input and output rates are identical
 * Block '<S69>/Switch1' : Eliminated due to constant selection input
 * Block '<S164>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S70>/Switch1' : Eliminated due to constant selection input
 * Block '<S189>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S190>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S242>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S265>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S266>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S258>/Gain1' : Eliminated nontunable gain of 1
 * Block '<S321>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S337>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S338>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S344>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S345>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S348>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S350>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S351>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S354>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S360>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S362>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S364>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S366>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S368>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S369>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S372>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S376>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S378>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S656>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S670>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S672>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S674>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S676>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S657>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S689>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S691>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S693>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S695>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S658>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S708>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S710>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S712>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S714>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S723>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S729>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S731>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S724>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S736>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S738>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S725>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S743>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S745>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S747>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S753>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S755>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S748>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S760>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S762>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S749>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S767>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S769>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S771>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S775>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S777>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S806>/Gain1' : Eliminated nontunable gain of 1
 * Block '<S807>/Gain1' : Eliminated nontunable gain of 1
 * Block '<S809>/Data Type  Conversion1' : Eliminate redundant data type conversion
 * Block '<S809>/Multiport Switch1' : Eliminated due to constant selection input
 * Block '<S803>/Switch5' : Eliminated due to constant selection input
 * Block '<S34>/Kv' : Eliminated nontunable gain of 1
 * Block '<S34>/Kv1' : Eliminated nontunable gain of 1
 * Block '<S814>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S815>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S816>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S817>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S818>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S819>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S826>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S827>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S37>/Kv1' : Eliminated nontunable gain of 1
 * Block '<S841>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S842>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S843>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S38>/Kv' : Eliminated nontunable gain of 1
 * Block '<S38>/Kv1' : Eliminated nontunable gain of 1
 * Block '<S850>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S851>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S852>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S853>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S854>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S855>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S82>/Digital  Clock' : Unused code path elimination
 * Block '<S82>/Gain' : Unused code path elimination
 * Block '<S82>/Gain1' : Unused code path elimination
 * Block '<S82>/K2' : Unused code path elimination
 * Block '<S82>/Product' : Unused code path elimination
 * Block '<S82>/Relational Operator' : Unused code path elimination
 * Block '<S82>/Sum1' : Unused code path elimination
 * Block '<S82>/Sum5' : Unused code path elimination
 * Block '<S82>/Sum7' : Unused code path elimination
 * Block '<S82>/Switch' : Unused code path elimination
 * Block '<S82>/Unit Delay' : Unused code path elimination
 * Block '<S82>/Unit Delay1' : Unused code path elimination
 * Block '<S84>/Digital  Clock' : Unused code path elimination
 * Block '<S84>/Gain' : Unused code path elimination
 * Block '<S84>/Gain1' : Unused code path elimination
 * Block '<S84>/K2' : Unused code path elimination
 * Block '<S84>/Product' : Unused code path elimination
 * Block '<S84>/Relational Operator' : Unused code path elimination
 * Block '<S84>/Sum1' : Unused code path elimination
 * Block '<S84>/Sum5' : Unused code path elimination
 * Block '<S84>/Sum7' : Unused code path elimination
 * Block '<S84>/Switch' : Unused code path elimination
 * Block '<S84>/Unit Delay' : Unused code path elimination
 * Block '<S84>/Unit Delay1' : Unused code path elimination
 * Block '<S76>/Add2' : Unused code path elimination
 * Block '<S76>/k3' : Unused code path elimination
 * Block '<S77>/Add2' : Unused code path elimination
 * Block '<S77>/k3' : Unused code path elimination
 * Block '<S106>/Add2' : Unused code path elimination
 * Block '<S106>/k3' : Unused code path elimination
 * Block '<S110>/Digital  Clock' : Unused code path elimination
 * Block '<S110>/Gain' : Unused code path elimination
 * Block '<S110>/Gain1' : Unused code path elimination
 * Block '<S110>/K2' : Unused code path elimination
 * Block '<S110>/Product' : Unused code path elimination
 * Block '<S110>/Relational Operator' : Unused code path elimination
 * Block '<S110>/Sum1' : Unused code path elimination
 * Block '<S110>/Sum5' : Unused code path elimination
 * Block '<S110>/Sum7' : Unused code path elimination
 * Block '<S110>/Switch' : Unused code path elimination
 * Block '<S110>/Unit Delay' : Unused code path elimination
 * Block '<S110>/Unit Delay1' : Unused code path elimination
 * Block '<S120>/Digital  Clock' : Unused code path elimination
 * Block '<S120>/Gain' : Unused code path elimination
 * Block '<S120>/Gain1' : Unused code path elimination
 * Block '<S120>/K2' : Unused code path elimination
 * Block '<S120>/Product' : Unused code path elimination
 * Block '<S120>/Relational Operator' : Unused code path elimination
 * Block '<S120>/Sum1' : Unused code path elimination
 * Block '<S120>/Sum5' : Unused code path elimination
 * Block '<S120>/Sum7' : Unused code path elimination
 * Block '<S120>/Switch' : Unused code path elimination
 * Block '<S120>/Unit Delay' : Unused code path elimination
 * Block '<S120>/Unit Delay1' : Unused code path elimination
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
 * Block '<S119>/Constant1' : Unused code path elimination
 * Block '<S119>/Constant4' : Unused code path elimination
 * Block '<S119>/Constant5' : Unused code path elimination
 * Block '<S119>/Gain1' : Unused code path elimination
 * Block '<S119>/Gain2' : Unused code path elimination
 * Block '<S119>/Sine Wave' : Unused code path elimination
 * Block '<S119>/Sum1' : Unused code path elimination
 * Block '<S119>/Sum2' : Unused code path elimination
 * Block '<S119>/Trigonometric Function1' : Unused code path elimination
 * Block '<S119>/Trigonometric Function2' : Unused code path elimination
 * Block '<S116>/Add1' : Unused code path elimination
 * Block '<S116>/Add2' : Unused code path elimination
 * Block '<S116>/k1' : Unused code path elimination
 * Block '<S116>/k3' : Unused code path elimination
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
 * Block '<S140>/Digital  Clock' : Unused code path elimination
 * Block '<S140>/Gain' : Unused code path elimination
 * Block '<S140>/Gain1' : Unused code path elimination
 * Block '<S140>/K2' : Unused code path elimination
 * Block '<S140>/Product' : Unused code path elimination
 * Block '<S140>/Relational Operator' : Unused code path elimination
 * Block '<S140>/Sum1' : Unused code path elimination
 * Block '<S140>/Sum5' : Unused code path elimination
 * Block '<S140>/Sum7' : Unused code path elimination
 * Block '<S140>/Switch' : Unused code path elimination
 * Block '<S140>/Unit Delay' : Unused code path elimination
 * Block '<S140>/Unit Delay1' : Unused code path elimination
 * Block '<S150>/Digital  Clock' : Unused code path elimination
 * Block '<S150>/Gain' : Unused code path elimination
 * Block '<S150>/Gain1' : Unused code path elimination
 * Block '<S150>/K2' : Unused code path elimination
 * Block '<S150>/Product' : Unused code path elimination
 * Block '<S150>/Relational Operator' : Unused code path elimination
 * Block '<S150>/Sum1' : Unused code path elimination
 * Block '<S150>/Sum5' : Unused code path elimination
 * Block '<S150>/Sum7' : Unused code path elimination
 * Block '<S150>/Switch' : Unused code path elimination
 * Block '<S150>/Unit Delay' : Unused code path elimination
 * Block '<S150>/Unit Delay1' : Unused code path elimination
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
 * Block '<S146>/Add1' : Unused code path elimination
 * Block '<S146>/Add2' : Unused code path elimination
 * Block '<S146>/k1' : Unused code path elimination
 * Block '<S146>/k3' : Unused code path elimination
 * Block '<S164>/Add2' : Unused code path elimination
 * Block '<S164>/k3' : Unused code path elimination
 * Block '<S168>/Digital  Clock' : Unused code path elimination
 * Block '<S168>/Gain' : Unused code path elimination
 * Block '<S168>/Gain1' : Unused code path elimination
 * Block '<S168>/K2' : Unused code path elimination
 * Block '<S168>/Product' : Unused code path elimination
 * Block '<S168>/Relational Operator' : Unused code path elimination
 * Block '<S168>/Sum1' : Unused code path elimination
 * Block '<S168>/Sum5' : Unused code path elimination
 * Block '<S168>/Sum7' : Unused code path elimination
 * Block '<S168>/Switch' : Unused code path elimination
 * Block '<S168>/Unit Delay' : Unused code path elimination
 * Block '<S168>/Unit Delay1' : Unused code path elimination
 * Block '<S809>/Constant' : Unused code path elimination
 * Block '<S809>/Constant2' : Unused code path elimination
 * Block '<S809>/Constant4' : Unused code path elimination
 * Block '<S809>/Discrete-Time Integrator1' : Unused code path elimination
 * Block '<S809>/Gain1' : Unused code path elimination
 * Block '<S809>/Product' : Unused code path elimination
 * Block '<S809>/Product1' : Unused code path elimination
 * Block '<S809>/Product2' : Unused code path elimination
 * Block '<S809>/Relational Operator' : Unused code path elimination
 * Block '<S809>/Step' : Unused code path elimination
 * Block '<S809>/Switch' : Unused code path elimination
 * Block '<S809>/Switch1' : Unused code path elimination
 * Block '<S809>/Trigonometric Function1' : Unused code path elimination
 * Block '<S809>/valp_nom6' : Unused code path elimination
 * Block '<S809>/valp_nom7' : Unused code path elimination
 * Block '<S809>/valp_nom8' : Unused code path elimination
 * Block '<S809>/valp_nom9' : Unused code path elimination
 * Block '<S803>/SinglePhase' : Unused code path elimination
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
 * '<Root>' : 'power_converters_switching_devices'
 * '<S1>'   : 'power_converters_switching_devices/Boost'
 * '<S2>'   : 'power_converters_switching_devices/Boost Converter'
 * '<S3>'   : 'power_converters_switching_devices/Buck'
 * '<S4>'   : 'power_converters_switching_devices/Buck Converter'
 * '<S5>'   : 'power_converters_switching_devices/Control Systems'
 * '<S6>'   : 'power_converters_switching_devices/Controlled Source1'
 * '<S7>'   : 'power_converters_switching_devices/DC Machine'
 * '<S8>'   : 'power_converters_switching_devices/DC Voltage Source2'
 * '<S9>'   : 'power_converters_switching_devices/DC src'
 * '<S10>'  : 'power_converters_switching_devices/DC_3L'
 * '<S11>'  : 'power_converters_switching_devices/DC_stat'
 * '<S12>'  : 'power_converters_switching_devices/FB'
 * '<S13>'  : 'power_converters_switching_devices/Full-Bridge Converter'
 * '<S14>'  : 'power_converters_switching_devices/HB'
 * '<S15>'  : 'power_converters_switching_devices/Half-Bridge Converter'
 * '<S16>'  : 'power_converters_switching_devices/Mean'
 * '<S17>'  : 'power_converters_switching_devices/Mean1'
 * '<S18>'  : 'power_converters_switching_devices/Mean2'
 * '<S19>'  : 'power_converters_switching_devices/Mean3'
 * '<S20>'  : 'power_converters_switching_devices/Power'
 * '<S21>'  : 'power_converters_switching_devices/Power (Pos. Seq.)'
 * '<S22>'  : 'power_converters_switching_devices/Power (Positive-Sequence)1'
 * '<S23>'  : 'power_converters_switching_devices/Scopes'
 * '<S24>'  : 'power_converters_switching_devices/Three-Level NPC Converter'
 * '<S25>'  : 'power_converters_switching_devices/Tr A'
 * '<S26>'  : 'power_converters_switching_devices/Tr B'
 * '<S27>'  : 'power_converters_switching_devices/Tr C'
 * '<S28>'  : 'power_converters_switching_devices/Tr1'
 * '<S29>'  : 'power_converters_switching_devices/Two-Level Converter 1'
 * '<S30>'  : 'power_converters_switching_devices/Two-Level Converter 2'
 * '<S31>'  : 'power_converters_switching_devices/Two-Quadrant DC//DC Converter'
 * '<S32>'  : 'power_converters_switching_devices/V1 meas'
 * '<S33>'  : 'power_converters_switching_devices/Vgrid'
 * '<S34>'  : 'power_converters_switching_devices/grid'
 * '<S35>'  : 'power_converters_switching_devices/motor'
 * '<S36>'  : 'power_converters_switching_devices/powergui'
 * '<S37>'  : 'power_converters_switching_devices/sec'
 * '<S38>'  : 'power_converters_switching_devices/stat'
 * '<S39>'  : 'power_converters_switching_devices/Boost/CM'
 * '<S40>'  : 'power_converters_switching_devices/Boost/VM1'
 * '<S41>'  : 'power_converters_switching_devices/Boost/CM/Model'
 * '<S42>'  : 'power_converters_switching_devices/Boost/VM1/Model'
 * '<S43>'  : 'power_converters_switching_devices/Boost Converter/Model'
 * '<S44>'  : 'power_converters_switching_devices/Boost Converter/Model/Compare To Constant'
 * '<S45>'  : 'power_converters_switching_devices/Boost Converter/Model/D1'
 * '<S46>'  : 'power_converters_switching_devices/Boost Converter/Model/Q2'
 * '<S47>'  : 'power_converters_switching_devices/Boost Converter/Model/D1/Model'
 * '<S48>'  : 'power_converters_switching_devices/Boost Converter/Model/D1/Model/Measurement list'
 * '<S49>'  : 'power_converters_switching_devices/Boost Converter/Model/Q2/Model'
 * '<S50>'  : 'power_converters_switching_devices/Boost Converter/Model/Q2/Model/Measurement list'
 * '<S51>'  : 'power_converters_switching_devices/Buck/CM'
 * '<S52>'  : 'power_converters_switching_devices/Buck/VM1'
 * '<S53>'  : 'power_converters_switching_devices/Buck/CM/Model'
 * '<S54>'  : 'power_converters_switching_devices/Buck/VM1/Model'
 * '<S55>'  : 'power_converters_switching_devices/Buck Converter/Model'
 * '<S56>'  : 'power_converters_switching_devices/Buck Converter/Model/Compare To Constant'
 * '<S57>'  : 'power_converters_switching_devices/Buck Converter/Model/D2'
 * '<S58>'  : 'power_converters_switching_devices/Buck Converter/Model/Q1'
 * '<S59>'  : 'power_converters_switching_devices/Buck Converter/Model/D2/Model'
 * '<S60>'  : 'power_converters_switching_devices/Buck Converter/Model/D2/Model/Measurement list'
 * '<S61>'  : 'power_converters_switching_devices/Buck Converter/Model/Q1/Model'
 * '<S62>'  : 'power_converters_switching_devices/Buck Converter/Model/Q1/Model/Measurement list'
 * '<S63>'  : 'power_converters_switching_devices/Control Systems/DC Motor Control'
 * '<S64>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L'
 * '<S65>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2Q'
 * '<S66>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 3L'
 * '<S67>'  : 'power_converters_switching_devices/Control Systems/PWM Gen Boost'
 * '<S68>'  : 'power_converters_switching_devices/Control Systems/PWM Gen Buck'
 * '<S69>'  : 'power_converters_switching_devices/Control Systems/PWM Gen FB'
 * '<S70>'  : 'power_converters_switching_devices/Control Systems/PWM Gen HB'
 * '<S71>'  : 'power_converters_switching_devices/Control Systems/Rectifier Control System'
 * '<S72>'  : 'power_converters_switching_devices/Control Systems/Statcom Control System'
 * '<S73>'  : 'power_converters_switching_devices/Control Systems/DC Motor Control/Current regulator Ireg_motor'
 * '<S74>'  : 'power_converters_switching_devices/Control Systems/DC Motor Control/Speed Regulator wreg'
 * '<S75>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging'
 * '<S76>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/Pavg_2L1'
 * '<S77>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/Pavg_2L2'
 * '<S78>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean2'
 * '<S79>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean3'
 * '<S80>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1'
 * '<S81>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2'
 * '<S82>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean2/Model'
 * '<S83>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean2/Model/Discrete Variable Time Delay'
 * '<S84>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean3/Model'
 * '<S85>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/Mean3/Model/Discrete Variable Time Delay'
 * '<S86>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Cr_MinMax'
 * '<S87>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Modulator type'
 * '<S88>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Reference signal'
 * '<S89>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Sampling'
 * '<S90>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Modulator type/One Three Phase Bridge'
 * '<S91>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Reference signal/External'
 * '<S92>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Sampling/Unsync Natural'
 * '<S93>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Sampling/Unsync Natural/Unsync_NaturalSampling'
 * '<S94>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator'
 * '<S95>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 1/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator/Model'
 * '<S96>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Cr_MinMax'
 * '<S97>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Modulator type'
 * '<S98>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Reference signal'
 * '<S99>'  : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Sampling'
 * '<S100>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Modulator type/One Three Phase Bridge'
 * '<S101>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Reference signal/External'
 * '<S102>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Sampling/Unsync Natural'
 * '<S103>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Sampling/Unsync Natural/Unsync_NaturalSampling'
 * '<S104>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator'
 * '<S105>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2L/PWMgen - Averaging/PWM Gen 2L 2/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator/Model'
 * '<S106>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2Q/Pavg_2Q'
 * '<S107>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2Q/Subsystem'
 * '<S108>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2Q/Subsystem/Mean'
 * '<S109>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2Q/Subsystem/PWM Gen 2Q '
 * '<S110>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2Q/Subsystem/Mean/Model'
 * '<S111>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2Q/Subsystem/Mean/Model/Discrete Variable Time Delay'
 * '<S112>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2Q/Subsystem/PWM Gen 2Q /Compare To Zero'
 * '<S113>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2Q/Subsystem/PWM Gen 2Q /Sawtooth Generator'
 * '<S114>' : 'power_converters_switching_devices/Control Systems/PWM Gen 2Q/Subsystem/PWM Gen 2Q /Sawtooth Generator/Model'
 * '<S115>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging'
 * '<S116>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/Pavg_3L'
 * '<S117>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean'
 * '<S118>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean1'
 * '<S119>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L'
 * '<S120>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean/Model'
 * '<S121>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean/Model/Discrete Variable Time Delay'
 * '<S122>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean1/Model'
 * '<S123>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/Mean1/Model/Discrete Variable Time Delay'
 * '<S124>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L/Full bridge (1-ph)'
 * '<S125>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L/Half bridge (1-ph) and 3-ph bridge'
 * '<S126>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L/State-to-Pulses Decoder'
 * '<S127>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L/Triangle Generator'
 * '<S128>' : 'power_converters_switching_devices/Control Systems/PWM Gen 3L/PWMgen - Averaging/PWM Gen 3L/Triangle Generator/Model'
 * '<S129>' : 'power_converters_switching_devices/Control Systems/PWM Gen Boost/PWM Gen'
 * '<S130>' : 'power_converters_switching_devices/Control Systems/PWM Gen Boost/PWM Gen/Mean'
 * '<S131>' : 'power_converters_switching_devices/Control Systems/PWM Gen Boost/PWM Gen/PWM Gen Buck '
 * '<S132>' : 'power_converters_switching_devices/Control Systems/PWM Gen Boost/PWM Gen/Mean/Model'
 * '<S133>' : 'power_converters_switching_devices/Control Systems/PWM Gen Boost/PWM Gen/Mean/Model/Discrete Variable Time Delay'
 * '<S134>' : 'power_converters_switching_devices/Control Systems/PWM Gen Boost/PWM Gen/PWM Gen Buck /Compare To Zero'
 * '<S135>' : 'power_converters_switching_devices/Control Systems/PWM Gen Boost/PWM Gen/PWM Gen Buck /Sawtooth Generator'
 * '<S136>' : 'power_converters_switching_devices/Control Systems/PWM Gen Boost/PWM Gen/PWM Gen Buck /Sawtooth Generator/Model'
 * '<S137>' : 'power_converters_switching_devices/Control Systems/PWM Gen Buck/PWM Gen'
 * '<S138>' : 'power_converters_switching_devices/Control Systems/PWM Gen Buck/PWM Gen/Mean'
 * '<S139>' : 'power_converters_switching_devices/Control Systems/PWM Gen Buck/PWM Gen/PWM Gen Buck '
 * '<S140>' : 'power_converters_switching_devices/Control Systems/PWM Gen Buck/PWM Gen/Mean/Model'
 * '<S141>' : 'power_converters_switching_devices/Control Systems/PWM Gen Buck/PWM Gen/Mean/Model/Discrete Variable Time Delay'
 * '<S142>' : 'power_converters_switching_devices/Control Systems/PWM Gen Buck/PWM Gen/PWM Gen Buck /Compare To Zero'
 * '<S143>' : 'power_converters_switching_devices/Control Systems/PWM Gen Buck/PWM Gen/PWM Gen Buck /Sawtooth Generator'
 * '<S144>' : 'power_converters_switching_devices/Control Systems/PWM Gen Buck/PWM Gen/PWM Gen Buck /Sawtooth Generator/Model'
 * '<S145>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen'
 * '<S146>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/Pavg'
 * '<S147>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/Mean1'
 * '<S148>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/Mean2'
 * '<S149>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB'
 * '<S150>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/Mean1/Model'
 * '<S151>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/Mean1/Model/Discrete Variable Time Delay'
 * '<S152>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/Mean2/Model'
 * '<S153>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/Mean2/Model/Discrete Variable Time Delay'
 * '<S154>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Cr_MinMax'
 * '<S155>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Modulator type'
 * '<S156>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Reference signal'
 * '<S157>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Sampling'
 * '<S158>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Modulator type/Full Bridge Unipolar'
 * '<S159>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Reference signal/External'
 * '<S160>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Sampling/Unsync Natural'
 * '<S161>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Sampling/Unsync Natural/Unsync_NaturalSampling'
 * '<S162>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator'
 * '<S163>' : 'power_converters_switching_devices/Control Systems/PWM Gen FB/PWM gen/PWM Gen FB/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator/Model'
 * '<S164>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Pavg_HB'
 * '<S165>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem'
 * '<S166>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/Mean'
 * '<S167>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB'
 * '<S168>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/Mean/Model'
 * '<S169>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/Mean/Model/Discrete Variable Time Delay'
 * '<S170>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Cr_MinMax'
 * '<S171>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Modulator type'
 * '<S172>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Reference signal'
 * '<S173>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Sampling'
 * '<S174>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Modulator type/One Three Phase Bridge'
 * '<S175>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Reference signal/External'
 * '<S176>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Sampling/Unsync Natural'
 * '<S177>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Sampling/Unsync Natural/Unsync_NaturalSampling'
 * '<S178>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator'
 * '<S179>' : 'power_converters_switching_devices/Control Systems/PWM Gen HB/Subsystem/PWM Gen HB/Sampling/Unsync Natural/Unsync_NaturalSampling/Triangle Generator/Model'
 * '<S180>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Current Regulator (Ireg)'
 * '<S181>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements'
 * '<S182>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Scaling'
 * '<S183>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Second-Order Filter'
 * '<S184>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Second-Order Filter1'
 * '<S185>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/VDC Regulator (VDCreg)'
 * '<S186>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/abc to dq0'
 * '<S187>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/dq0 to abc'
 * '<S188>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Current Regulator (Ireg)/Correction to VdVq due to delays + Transfo Connection'
 * '<S189>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Current Regulator (Ireg)/PI_d'
 * '<S190>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Current Regulator (Ireg)/PI_q'
 * '<S191>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)'
 * '<S192>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/abc to dq1'
 * '<S193>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model'
 * '<S194>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control'
 * '<S195>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Discrete'
 * '<S196>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Second-Order Filter'
 * '<S197>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value'
 * '<S198>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0'
 * '<S199>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)'
 * '<S200>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1'
 * '<S201>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2'
 * '<S202>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0'
 * '<S203>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model'
 * '<S204>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Correction subsystem'
 * '<S205>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay'
 * '<S206>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model'
 * '<S207>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Correction subsystem'
 * '<S208>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay'
 * '<S209>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0'
 * '<S210>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/abc to Alpha-Beta-Zero'
 * '<S211>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S212>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S213>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S214>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S215>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model'
 * '<S216>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/A*k(k-1)'
 * '<S217>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S218>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/C*x(k)'
 * '<S219>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model'
 * '<S220>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Correction subsystem'
 * '<S221>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay'
 * '<S222>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0'
 * '<S223>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/abc to Alpha-Beta-Zero'
 * '<S224>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S225>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S226>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S227>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S228>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0'
 * '<S229>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/abc to dq1/abc to Alpha-Beta-Zero'
 * '<S230>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S231>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S232>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S233>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S234>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Second-Order Filter/Model'
 * '<S235>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Second-Order Filter/Model/A*k(k-1)'
 * '<S236>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S237>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Second-Order Filter/Model/C*x(k)'
 * '<S238>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Second-Order Filter1/Model'
 * '<S239>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Second-Order Filter1/Model/A*k(k-1)'
 * '<S240>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Second-Order Filter1/Model/B*(u(k)+u(k-1))'
 * '<S241>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/Second-Order Filter1/Model/C*x(k)'
 * '<S242>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/VDC Regulator (VDCreg)/PI_d'
 * '<S243>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/abc to dq0/Alpha-Beta-Zero to dq0'
 * '<S244>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/abc to dq0/abc to Alpha-Beta-Zero'
 * '<S245>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S246>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S247>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S248>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S249>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/dq0 to abc/Alpha-Beta-Zero to abc'
 * '<S250>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/dq0 to abc/dq0 to Alpha-Beta-Zero'
 * '<S251>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Compare To Constant'
 * '<S252>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Compare To Constant1'
 * '<S253>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
 * '<S254>' : 'power_converters_switching_devices/Control Systems/Rectifier Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Subsystem1'
 * '<S255>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Current Regulator (Ireg)'
 * '<S256>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Iq_ref generation'
 * '<S257>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements'
 * '<S258>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Scaling'
 * '<S259>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Second-Order Filter'
 * '<S260>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Second-Order Filter2'
 * '<S261>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/VDC Regulator (VDCreg)'
 * '<S262>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/abc to dq0'
 * '<S263>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/dq0 to abc'
 * '<S264>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Current Regulator (Ireg)/Correction to VdVq due to delays + Transfo Connection'
 * '<S265>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Current Regulator (Ireg)/PI_d'
 * '<S266>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Current Regulator (Ireg)/PI_q'
 * '<S267>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Iq_ref generation/Mean'
 * '<S268>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Iq_ref generation/Mean/Model'
 * '<S269>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Iq_ref generation/Mean/Model/Discrete Variable Time Delay'
 * '<S270>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)'
 * '<S271>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/abc to dq1'
 * '<S272>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model'
 * '<S273>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control'
 * '<S274>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Discrete'
 * '<S275>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Second-Order Filter'
 * '<S276>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value'
 * '<S277>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0'
 * '<S278>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)'
 * '<S279>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1'
 * '<S280>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2'
 * '<S281>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0'
 * '<S282>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model'
 * '<S283>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Correction subsystem'
 * '<S284>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay'
 * '<S285>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model'
 * '<S286>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Correction subsystem'
 * '<S287>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay'
 * '<S288>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0'
 * '<S289>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/abc to Alpha-Beta-Zero'
 * '<S290>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S291>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S292>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S293>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S294>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model'
 * '<S295>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/A*k(k-1)'
 * '<S296>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S297>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Second-Order Filter/Model/C*x(k)'
 * '<S298>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model'
 * '<S299>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Correction subsystem'
 * '<S300>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay'
 * '<S301>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0'
 * '<S302>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/abc to Alpha-Beta-Zero'
 * '<S303>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S304>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S305>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S306>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S307>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0'
 * '<S308>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/abc to dq1/abc to Alpha-Beta-Zero'
 * '<S309>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S310>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S311>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S312>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S313>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Second-Order Filter/Model'
 * '<S314>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Second-Order Filter/Model/A*k(k-1)'
 * '<S315>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S316>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Second-Order Filter/Model/C*x(k)'
 * '<S317>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Second-Order Filter2/Model'
 * '<S318>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Second-Order Filter2/Model/A*k(k-1)'
 * '<S319>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Second-Order Filter2/Model/B*(u(k)+u(k-1))'
 * '<S320>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/Second-Order Filter2/Model/C*x(k)'
 * '<S321>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/VDC Regulator (VDCreg)/PI_d'
 * '<S322>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/abc to dq0/Alpha-Beta-Zero to dq0'
 * '<S323>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/abc to dq0/abc to Alpha-Beta-Zero'
 * '<S324>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S325>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S326>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S327>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S328>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/dq0 to abc/Alpha-Beta-Zero to abc'
 * '<S329>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/dq0 to abc/dq0 to Alpha-Beta-Zero'
 * '<S330>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Compare To Constant'
 * '<S331>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Compare To Constant1'
 * '<S332>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
 * '<S333>' : 'power_converters_switching_devices/Control Systems/Statcom Control System/dq0 to abc/dq0 to Alpha-Beta-Zero/Subsystem1'
 * '<S334>' : 'power_converters_switching_devices/DC Machine/Electrical model'
 * '<S335>' : 'power_converters_switching_devices/DC Machine/FCEM'
 * '<S336>' : 'power_converters_switching_devices/DC Machine/Mechanical model'
 * '<S337>' : 'power_converters_switching_devices/DC Machine/iA'
 * '<S338>' : 'power_converters_switching_devices/DC Machine/iF'
 * '<S339>' : 'power_converters_switching_devices/DC Machine/Electrical model/Coulomb (Tf) & Viscous ( Bm*w)  Friction Torques'
 * '<S340>' : 'power_converters_switching_devices/DC Machine/iA/Model'
 * '<S341>' : 'power_converters_switching_devices/DC Machine/iF/Model'
 * '<S342>' : 'power_converters_switching_devices/DC Voltage Source2/Model'
 * '<S343>' : 'power_converters_switching_devices/DC src/Model'
 * '<S344>' : 'power_converters_switching_devices/DC_3L/VM1'
 * '<S345>' : 'power_converters_switching_devices/DC_3L/VM2'
 * '<S346>' : 'power_converters_switching_devices/DC_3L/VM1/Model'
 * '<S347>' : 'power_converters_switching_devices/DC_3L/VM2/Model'
 * '<S348>' : 'power_converters_switching_devices/DC_stat/VM1'
 * '<S349>' : 'power_converters_switching_devices/DC_stat/VM1/Model'
 * '<S350>' : 'power_converters_switching_devices/FB/CM'
 * '<S351>' : 'power_converters_switching_devices/FB/VM1'
 * '<S352>' : 'power_converters_switching_devices/FB/CM/Model'
 * '<S353>' : 'power_converters_switching_devices/FB/VM1/Model'
 * '<S354>' : 'power_converters_switching_devices/Full-Bridge Converter/Model'
 * '<S355>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Compare To Constant'
 * '<S356>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw1'
 * '<S357>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw2'
 * '<S358>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw3'
 * '<S359>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw4'
 * '<S360>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw1/Model'
 * '<S361>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw1/Model/Measurement list'
 * '<S362>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw2/Model'
 * '<S363>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw2/Model/Measurement list'
 * '<S364>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw3/Model'
 * '<S365>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw3/Model/Measurement list'
 * '<S366>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw4/Model'
 * '<S367>' : 'power_converters_switching_devices/Full-Bridge Converter/Model/Sw4/Model/Measurement list'
 * '<S368>' : 'power_converters_switching_devices/HB/CM'
 * '<S369>' : 'power_converters_switching_devices/HB/VM1'
 * '<S370>' : 'power_converters_switching_devices/HB/CM/Model'
 * '<S371>' : 'power_converters_switching_devices/HB/VM1/Model'
 * '<S372>' : 'power_converters_switching_devices/Half-Bridge Converter/Model'
 * '<S373>' : 'power_converters_switching_devices/Half-Bridge Converter/Model/Compare To Constant'
 * '<S374>' : 'power_converters_switching_devices/Half-Bridge Converter/Model/Sw1'
 * '<S375>' : 'power_converters_switching_devices/Half-Bridge Converter/Model/Sw2'
 * '<S376>' : 'power_converters_switching_devices/Half-Bridge Converter/Model/Sw1/Model'
 * '<S377>' : 'power_converters_switching_devices/Half-Bridge Converter/Model/Sw1/Model/Measurement list'
 * '<S378>' : 'power_converters_switching_devices/Half-Bridge Converter/Model/Sw2/Model'
 * '<S379>' : 'power_converters_switching_devices/Half-Bridge Converter/Model/Sw2/Model/Measurement list'
 * '<S380>' : 'power_converters_switching_devices/Mean/Model'
 * '<S381>' : 'power_converters_switching_devices/Mean/Model/Discrete Variable Time Delay'
 * '<S382>' : 'power_converters_switching_devices/Mean1/Model'
 * '<S383>' : 'power_converters_switching_devices/Mean1/Model/Discrete Variable Time Delay'
 * '<S384>' : 'power_converters_switching_devices/Mean2/Model'
 * '<S385>' : 'power_converters_switching_devices/Mean2/Model/Discrete Variable Time Delay'
 * '<S386>' : 'power_converters_switching_devices/Mean3/Model'
 * '<S387>' : 'power_converters_switching_devices/Mean3/Model/Discrete Variable Time Delay'
 * '<S388>' : 'power_converters_switching_devices/Power/Fourier'
 * '<S389>' : 'power_converters_switching_devices/Power/Fourier1'
 * '<S390>' : 'power_converters_switching_devices/Power/Fourier/Mean'
 * '<S391>' : 'power_converters_switching_devices/Power/Fourier/Mean value1'
 * '<S392>' : 'power_converters_switching_devices/Power/Fourier/Mean/Model'
 * '<S393>' : 'power_converters_switching_devices/Power/Fourier/Mean/Model/Discrete Variable Time Delay'
 * '<S394>' : 'power_converters_switching_devices/Power/Fourier/Mean value1/Model'
 * '<S395>' : 'power_converters_switching_devices/Power/Fourier/Mean value1/Model/Discrete Variable Time Delay'
 * '<S396>' : 'power_converters_switching_devices/Power/Fourier1/Mean'
 * '<S397>' : 'power_converters_switching_devices/Power/Fourier1/Mean value1'
 * '<S398>' : 'power_converters_switching_devices/Power/Fourier1/Mean/Model'
 * '<S399>' : 'power_converters_switching_devices/Power/Fourier1/Mean/Model/Discrete Variable Time Delay'
 * '<S400>' : 'power_converters_switching_devices/Power/Fourier1/Mean value1/Model'
 * '<S401>' : 'power_converters_switching_devices/Power/Fourier1/Mean value1/Model/Discrete Variable Time Delay'
 * '<S402>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer'
 * '<S403>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1'
 * '<S404>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A'
 * '<S405>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B'
 * '<S406>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C'
 * '<S407>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Neg. Seq. Computation'
 * '<S408>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Pos. Seq. Computation'
 * '<S409>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Zero Seq. Computation'
 * '<S410>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean'
 * '<S411>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1'
 * '<S412>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean/Model'
 * '<S413>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S414>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1/Model'
 * '<S415>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S416>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean'
 * '<S417>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1'
 * '<S418>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean/Model'
 * '<S419>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S420>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1/Model'
 * '<S421>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S422>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean'
 * '<S423>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1'
 * '<S424>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean/Model'
 * '<S425>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S426>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1/Model'
 * '<S427>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S428>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A'
 * '<S429>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B'
 * '<S430>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C'
 * '<S431>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Neg. Seq. Computation'
 * '<S432>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Pos. Seq. Computation'
 * '<S433>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Zero Seq. Computation'
 * '<S434>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean'
 * '<S435>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1'
 * '<S436>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean/Model'
 * '<S437>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S438>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1/Model'
 * '<S439>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S440>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean'
 * '<S441>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1'
 * '<S442>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean/Model'
 * '<S443>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S444>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1/Model'
 * '<S445>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S446>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean'
 * '<S447>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1'
 * '<S448>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean/Model'
 * '<S449>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S450>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1/Model'
 * '<S451>' : 'power_converters_switching_devices/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S452>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer'
 * '<S453>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1'
 * '<S454>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A'
 * '<S455>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B'
 * '<S456>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C'
 * '<S457>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Neg. Seq. Computation'
 * '<S458>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Pos. Seq. Computation'
 * '<S459>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Zero Seq. Computation'
 * '<S460>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean'
 * '<S461>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1'
 * '<S462>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean/Model'
 * '<S463>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S464>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1/Model'
 * '<S465>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S466>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean'
 * '<S467>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1'
 * '<S468>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean/Model'
 * '<S469>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S470>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1/Model'
 * '<S471>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S472>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean'
 * '<S473>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1'
 * '<S474>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean/Model'
 * '<S475>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S476>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1/Model'
 * '<S477>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S478>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A'
 * '<S479>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B'
 * '<S480>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C'
 * '<S481>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Neg. Seq. Computation'
 * '<S482>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Pos. Seq. Computation'
 * '<S483>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Zero Seq. Computation'
 * '<S484>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean'
 * '<S485>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1'
 * '<S486>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean/Model'
 * '<S487>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S488>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1/Model'
 * '<S489>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S490>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean'
 * '<S491>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1'
 * '<S492>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean/Model'
 * '<S493>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S494>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1/Model'
 * '<S495>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S496>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean'
 * '<S497>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1'
 * '<S498>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean/Model'
 * '<S499>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S500>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1/Model'
 * '<S501>' : 'power_converters_switching_devices/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S502>' : 'power_converters_switching_devices/Scopes/Mean'
 * '<S503>' : 'power_converters_switching_devices/Scopes/Mean1'
 * '<S504>' : 'power_converters_switching_devices/Scopes/Mean2'
 * '<S505>' : 'power_converters_switching_devices/Scopes/Mean3'
 * '<S506>' : 'power_converters_switching_devices/Scopes/Power'
 * '<S507>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)'
 * '<S508>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1'
 * '<S509>' : 'power_converters_switching_devices/Scopes/V1 meas'
 * '<S510>' : 'power_converters_switching_devices/Scopes/Mean/Model'
 * '<S511>' : 'power_converters_switching_devices/Scopes/Mean/Model/Discrete Variable Time Delay'
 * '<S512>' : 'power_converters_switching_devices/Scopes/Mean1/Model'
 * '<S513>' : 'power_converters_switching_devices/Scopes/Mean1/Model/Discrete Variable Time Delay'
 * '<S514>' : 'power_converters_switching_devices/Scopes/Mean2/Model'
 * '<S515>' : 'power_converters_switching_devices/Scopes/Mean2/Model/Discrete Variable Time Delay'
 * '<S516>' : 'power_converters_switching_devices/Scopes/Mean3/Model'
 * '<S517>' : 'power_converters_switching_devices/Scopes/Mean3/Model/Discrete Variable Time Delay'
 * '<S518>' : 'power_converters_switching_devices/Scopes/Power/Fourier'
 * '<S519>' : 'power_converters_switching_devices/Scopes/Power/Fourier1'
 * '<S520>' : 'power_converters_switching_devices/Scopes/Power/Fourier/Mean'
 * '<S521>' : 'power_converters_switching_devices/Scopes/Power/Fourier/Mean value1'
 * '<S522>' : 'power_converters_switching_devices/Scopes/Power/Fourier/Mean/Model'
 * '<S523>' : 'power_converters_switching_devices/Scopes/Power/Fourier/Mean/Model/Discrete Variable Time Delay'
 * '<S524>' : 'power_converters_switching_devices/Scopes/Power/Fourier/Mean value1/Model'
 * '<S525>' : 'power_converters_switching_devices/Scopes/Power/Fourier/Mean value1/Model/Discrete Variable Time Delay'
 * '<S526>' : 'power_converters_switching_devices/Scopes/Power/Fourier1/Mean'
 * '<S527>' : 'power_converters_switching_devices/Scopes/Power/Fourier1/Mean value1'
 * '<S528>' : 'power_converters_switching_devices/Scopes/Power/Fourier1/Mean/Model'
 * '<S529>' : 'power_converters_switching_devices/Scopes/Power/Fourier1/Mean/Model/Discrete Variable Time Delay'
 * '<S530>' : 'power_converters_switching_devices/Scopes/Power/Fourier1/Mean value1/Model'
 * '<S531>' : 'power_converters_switching_devices/Scopes/Power/Fourier1/Mean value1/Model/Discrete Variable Time Delay'
 * '<S532>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer'
 * '<S533>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1'
 * '<S534>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A'
 * '<S535>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B'
 * '<S536>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C'
 * '<S537>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Neg. Seq. Computation'
 * '<S538>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Pos. Seq. Computation'
 * '<S539>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Zero Seq. Computation'
 * '<S540>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean'
 * '<S541>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1'
 * '<S542>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean/Model'
 * '<S543>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S544>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1/Model'
 * '<S545>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S546>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean'
 * '<S547>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1'
 * '<S548>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean/Model'
 * '<S549>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S550>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1/Model'
 * '<S551>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S552>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean'
 * '<S553>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1'
 * '<S554>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean/Model'
 * '<S555>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S556>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1/Model'
 * '<S557>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S558>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A'
 * '<S559>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B'
 * '<S560>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C'
 * '<S561>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Neg. Seq. Computation'
 * '<S562>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Pos. Seq. Computation'
 * '<S563>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Zero Seq. Computation'
 * '<S564>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean'
 * '<S565>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1'
 * '<S566>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean/Model'
 * '<S567>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S568>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1/Model'
 * '<S569>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S570>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean'
 * '<S571>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1'
 * '<S572>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean/Model'
 * '<S573>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S574>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1/Model'
 * '<S575>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S576>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean'
 * '<S577>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1'
 * '<S578>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean/Model'
 * '<S579>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S580>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1/Model'
 * '<S581>' : 'power_converters_switching_devices/Scopes/Power (Pos. Seq.)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S582>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer'
 * '<S583>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1'
 * '<S584>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A'
 * '<S585>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B'
 * '<S586>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C'
 * '<S587>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Neg. Seq. Computation'
 * '<S588>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Pos. Seq. Computation'
 * '<S589>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Zero Seq. Computation'
 * '<S590>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean'
 * '<S591>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1'
 * '<S592>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean/Model'
 * '<S593>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S594>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1/Model'
 * '<S595>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S596>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean'
 * '<S597>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1'
 * '<S598>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean/Model'
 * '<S599>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S600>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1/Model'
 * '<S601>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S602>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean'
 * '<S603>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1'
 * '<S604>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean/Model'
 * '<S605>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S606>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1/Model'
 * '<S607>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S608>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A'
 * '<S609>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B'
 * '<S610>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C'
 * '<S611>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Neg. Seq. Computation'
 * '<S612>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Pos. Seq. Computation'
 * '<S613>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Zero Seq. Computation'
 * '<S614>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean'
 * '<S615>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1'
 * '<S616>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean/Model'
 * '<S617>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S618>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1/Model'
 * '<S619>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S620>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean'
 * '<S621>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1'
 * '<S622>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean/Model'
 * '<S623>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S624>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1/Model'
 * '<S625>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S626>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean'
 * '<S627>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1'
 * '<S628>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean/Model'
 * '<S629>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S630>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1/Model'
 * '<S631>' : 'power_converters_switching_devices/Scopes/Power (Positive-Sequence)1/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S632>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_A'
 * '<S633>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_B'
 * '<S634>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_C'
 * '<S635>' : 'power_converters_switching_devices/Scopes/V1 meas/Neg. Seq. Computation'
 * '<S636>' : 'power_converters_switching_devices/Scopes/V1 meas/Pos. Seq. Computation'
 * '<S637>' : 'power_converters_switching_devices/Scopes/V1 meas/Zero Seq. Computation'
 * '<S638>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_A/Mean'
 * '<S639>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_A/Mean value1'
 * '<S640>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_A/Mean/Model'
 * '<S641>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S642>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_A/Mean value1/Model'
 * '<S643>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S644>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_B/Mean'
 * '<S645>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_B/Mean value1'
 * '<S646>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_B/Mean/Model'
 * '<S647>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S648>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_B/Mean value1/Model'
 * '<S649>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S650>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_C/Mean'
 * '<S651>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_C/Mean value1'
 * '<S652>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_C/Mean/Model'
 * '<S653>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S654>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_C/Mean value1/Model'
 * '<S655>' : 'power_converters_switching_devices/Scopes/V1 meas/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S656>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1'
 * '<S657>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2'
 * '<S658>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3'
 * '<S659>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Compare To Constant'
 * '<S660>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/D5a'
 * '<S661>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/D6a'
 * '<S662>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q1'
 * '<S663>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q2'
 * '<S664>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q3'
 * '<S665>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q4'
 * '<S666>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/D5a/Model'
 * '<S667>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/D5a/Model/Measurement list'
 * '<S668>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/D6a/Model'
 * '<S669>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/D6a/Model/Measurement list'
 * '<S670>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q1/Model'
 * '<S671>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q1/Model/Measurement list'
 * '<S672>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q2/Model'
 * '<S673>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q2/Model/Measurement list'
 * '<S674>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q3/Model'
 * '<S675>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q3/Model/Measurement list'
 * '<S676>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q4/Model'
 * '<S677>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model1/Q4/Model/Measurement list'
 * '<S678>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Compare To Constant'
 * '<S679>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/D5a'
 * '<S680>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/D6a'
 * '<S681>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q1'
 * '<S682>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q2'
 * '<S683>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q3'
 * '<S684>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q4'
 * '<S685>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/D5a/Model'
 * '<S686>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/D5a/Model/Measurement list'
 * '<S687>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/D6a/Model'
 * '<S688>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/D6a/Model/Measurement list'
 * '<S689>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q1/Model'
 * '<S690>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q1/Model/Measurement list'
 * '<S691>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q2/Model'
 * '<S692>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q2/Model/Measurement list'
 * '<S693>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q3/Model'
 * '<S694>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q3/Model/Measurement list'
 * '<S695>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q4/Model'
 * '<S696>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model2/Q4/Model/Measurement list'
 * '<S697>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Compare To Constant'
 * '<S698>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/D5a'
 * '<S699>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/D6a'
 * '<S700>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q1'
 * '<S701>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q2'
 * '<S702>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q3'
 * '<S703>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q4'
 * '<S704>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/D5a/Model'
 * '<S705>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/D5a/Model/Measurement list'
 * '<S706>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/D6a/Model'
 * '<S707>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/D6a/Model/Measurement list'
 * '<S708>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q1/Model'
 * '<S709>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q1/Model/Measurement list'
 * '<S710>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q2/Model'
 * '<S711>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q2/Model/Measurement list'
 * '<S712>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q3/Model'
 * '<S713>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q3/Model/Measurement list'
 * '<S714>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q4/Model'
 * '<S715>' : 'power_converters_switching_devices/Three-Level NPC Converter/Model3/Q4/Model/Measurement list'
 * '<S716>' : 'power_converters_switching_devices/Tr A/Model'
 * '<S717>' : 'power_converters_switching_devices/Tr B/Model'
 * '<S718>' : 'power_converters_switching_devices/Tr C/Model'
 * '<S719>' : 'power_converters_switching_devices/Tr1/Model'
 * '<S720>' : 'power_converters_switching_devices/Tr1/Model/Linear'
 * '<S721>' : 'power_converters_switching_devices/Tr1/Model/Linear1'
 * '<S722>' : 'power_converters_switching_devices/Tr1/Model/Linear2'
 * '<S723>' : 'power_converters_switching_devices/Two-Level Converter 1/Model1'
 * '<S724>' : 'power_converters_switching_devices/Two-Level Converter 1/Model2'
 * '<S725>' : 'power_converters_switching_devices/Two-Level Converter 1/Model3'
 * '<S726>' : 'power_converters_switching_devices/Two-Level Converter 1/Model1/Compare To Constant'
 * '<S727>' : 'power_converters_switching_devices/Two-Level Converter 1/Model1/Sw1'
 * '<S728>' : 'power_converters_switching_devices/Two-Level Converter 1/Model1/Sw2'
 * '<S729>' : 'power_converters_switching_devices/Two-Level Converter 1/Model1/Sw1/Model'
 * '<S730>' : 'power_converters_switching_devices/Two-Level Converter 1/Model1/Sw1/Model/Measurement list'
 * '<S731>' : 'power_converters_switching_devices/Two-Level Converter 1/Model1/Sw2/Model'
 * '<S732>' : 'power_converters_switching_devices/Two-Level Converter 1/Model1/Sw2/Model/Measurement list'
 * '<S733>' : 'power_converters_switching_devices/Two-Level Converter 1/Model2/Compare To Constant'
 * '<S734>' : 'power_converters_switching_devices/Two-Level Converter 1/Model2/Sw1'
 * '<S735>' : 'power_converters_switching_devices/Two-Level Converter 1/Model2/Sw2'
 * '<S736>' : 'power_converters_switching_devices/Two-Level Converter 1/Model2/Sw1/Model'
 * '<S737>' : 'power_converters_switching_devices/Two-Level Converter 1/Model2/Sw1/Model/Measurement list'
 * '<S738>' : 'power_converters_switching_devices/Two-Level Converter 1/Model2/Sw2/Model'
 * '<S739>' : 'power_converters_switching_devices/Two-Level Converter 1/Model2/Sw2/Model/Measurement list'
 * '<S740>' : 'power_converters_switching_devices/Two-Level Converter 1/Model3/Compare To Constant'
 * '<S741>' : 'power_converters_switching_devices/Two-Level Converter 1/Model3/Sw1'
 * '<S742>' : 'power_converters_switching_devices/Two-Level Converter 1/Model3/Sw2'
 * '<S743>' : 'power_converters_switching_devices/Two-Level Converter 1/Model3/Sw1/Model'
 * '<S744>' : 'power_converters_switching_devices/Two-Level Converter 1/Model3/Sw1/Model/Measurement list'
 * '<S745>' : 'power_converters_switching_devices/Two-Level Converter 1/Model3/Sw2/Model'
 * '<S746>' : 'power_converters_switching_devices/Two-Level Converter 1/Model3/Sw2/Model/Measurement list'
 * '<S747>' : 'power_converters_switching_devices/Two-Level Converter 2/Model1'
 * '<S748>' : 'power_converters_switching_devices/Two-Level Converter 2/Model2'
 * '<S749>' : 'power_converters_switching_devices/Two-Level Converter 2/Model3'
 * '<S750>' : 'power_converters_switching_devices/Two-Level Converter 2/Model1/Compare To Constant'
 * '<S751>' : 'power_converters_switching_devices/Two-Level Converter 2/Model1/Sw1'
 * '<S752>' : 'power_converters_switching_devices/Two-Level Converter 2/Model1/Sw2'
 * '<S753>' : 'power_converters_switching_devices/Two-Level Converter 2/Model1/Sw1/Model'
 * '<S754>' : 'power_converters_switching_devices/Two-Level Converter 2/Model1/Sw1/Model/Measurement list'
 * '<S755>' : 'power_converters_switching_devices/Two-Level Converter 2/Model1/Sw2/Model'
 * '<S756>' : 'power_converters_switching_devices/Two-Level Converter 2/Model1/Sw2/Model/Measurement list'
 * '<S757>' : 'power_converters_switching_devices/Two-Level Converter 2/Model2/Compare To Constant'
 * '<S758>' : 'power_converters_switching_devices/Two-Level Converter 2/Model2/Sw1'
 * '<S759>' : 'power_converters_switching_devices/Two-Level Converter 2/Model2/Sw2'
 * '<S760>' : 'power_converters_switching_devices/Two-Level Converter 2/Model2/Sw1/Model'
 * '<S761>' : 'power_converters_switching_devices/Two-Level Converter 2/Model2/Sw1/Model/Measurement list'
 * '<S762>' : 'power_converters_switching_devices/Two-Level Converter 2/Model2/Sw2/Model'
 * '<S763>' : 'power_converters_switching_devices/Two-Level Converter 2/Model2/Sw2/Model/Measurement list'
 * '<S764>' : 'power_converters_switching_devices/Two-Level Converter 2/Model3/Compare To Constant'
 * '<S765>' : 'power_converters_switching_devices/Two-Level Converter 2/Model3/Sw1'
 * '<S766>' : 'power_converters_switching_devices/Two-Level Converter 2/Model3/Sw2'
 * '<S767>' : 'power_converters_switching_devices/Two-Level Converter 2/Model3/Sw1/Model'
 * '<S768>' : 'power_converters_switching_devices/Two-Level Converter 2/Model3/Sw1/Model/Measurement list'
 * '<S769>' : 'power_converters_switching_devices/Two-Level Converter 2/Model3/Sw2/Model'
 * '<S770>' : 'power_converters_switching_devices/Two-Level Converter 2/Model3/Sw2/Model/Measurement list'
 * '<S771>' : 'power_converters_switching_devices/Two-Quadrant DC//DC Converter/Model'
 * '<S772>' : 'power_converters_switching_devices/Two-Quadrant DC//DC Converter/Model/Compare To Constant'
 * '<S773>' : 'power_converters_switching_devices/Two-Quadrant DC//DC Converter/Model/Sw1'
 * '<S774>' : 'power_converters_switching_devices/Two-Quadrant DC//DC Converter/Model/Sw2'
 * '<S775>' : 'power_converters_switching_devices/Two-Quadrant DC//DC Converter/Model/Sw1/Model'
 * '<S776>' : 'power_converters_switching_devices/Two-Quadrant DC//DC Converter/Model/Sw1/Model/Measurement list'
 * '<S777>' : 'power_converters_switching_devices/Two-Quadrant DC//DC Converter/Model/Sw2/Model'
 * '<S778>' : 'power_converters_switching_devices/Two-Quadrant DC//DC Converter/Model/Sw2/Model/Measurement list'
 * '<S779>' : 'power_converters_switching_devices/V1 meas/Fourier_A'
 * '<S780>' : 'power_converters_switching_devices/V1 meas/Fourier_B'
 * '<S781>' : 'power_converters_switching_devices/V1 meas/Fourier_C'
 * '<S782>' : 'power_converters_switching_devices/V1 meas/Neg. Seq. Computation'
 * '<S783>' : 'power_converters_switching_devices/V1 meas/Pos. Seq. Computation'
 * '<S784>' : 'power_converters_switching_devices/V1 meas/Zero Seq. Computation'
 * '<S785>' : 'power_converters_switching_devices/V1 meas/Fourier_A/Mean'
 * '<S786>' : 'power_converters_switching_devices/V1 meas/Fourier_A/Mean value1'
 * '<S787>' : 'power_converters_switching_devices/V1 meas/Fourier_A/Mean/Model'
 * '<S788>' : 'power_converters_switching_devices/V1 meas/Fourier_A/Mean/Model/Discrete Variable Time Delay'
 * '<S789>' : 'power_converters_switching_devices/V1 meas/Fourier_A/Mean value1/Model'
 * '<S790>' : 'power_converters_switching_devices/V1 meas/Fourier_A/Mean value1/Model/Discrete Variable Time Delay'
 * '<S791>' : 'power_converters_switching_devices/V1 meas/Fourier_B/Mean'
 * '<S792>' : 'power_converters_switching_devices/V1 meas/Fourier_B/Mean value1'
 * '<S793>' : 'power_converters_switching_devices/V1 meas/Fourier_B/Mean/Model'
 * '<S794>' : 'power_converters_switching_devices/V1 meas/Fourier_B/Mean/Model/Discrete Variable Time Delay'
 * '<S795>' : 'power_converters_switching_devices/V1 meas/Fourier_B/Mean value1/Model'
 * '<S796>' : 'power_converters_switching_devices/V1 meas/Fourier_B/Mean value1/Model/Discrete Variable Time Delay'
 * '<S797>' : 'power_converters_switching_devices/V1 meas/Fourier_C/Mean'
 * '<S798>' : 'power_converters_switching_devices/V1 meas/Fourier_C/Mean value1'
 * '<S799>' : 'power_converters_switching_devices/V1 meas/Fourier_C/Mean/Model'
 * '<S800>' : 'power_converters_switching_devices/V1 meas/Fourier_C/Mean/Model/Discrete Variable Time Delay'
 * '<S801>' : 'power_converters_switching_devices/V1 meas/Fourier_C/Mean value1/Model'
 * '<S802>' : 'power_converters_switching_devices/V1 meas/Fourier_C/Mean value1/Model/Discrete Variable Time Delay'
 * '<S803>' : 'power_converters_switching_devices/Vgrid/Model'
 * '<S804>' : 'power_converters_switching_devices/Vgrid/Model/Harmonic Generator'
 * '<S805>' : 'power_converters_switching_devices/Vgrid/Model/Signal generator'
 * '<S806>' : 'power_converters_switching_devices/Vgrid/Model/Harmonic Generator/Harmonic A generation'
 * '<S807>' : 'power_converters_switching_devices/Vgrid/Model/Harmonic Generator/Harmonic B generation'
 * '<S808>' : 'power_converters_switching_devices/Vgrid/Model/Signal generator/Stair Generator'
 * '<S809>' : 'power_converters_switching_devices/Vgrid/Model/Signal generator/Variation SubSystem'
 * '<S810>' : 'power_converters_switching_devices/Vgrid/Model/Signal generator/Stair Generator/Model'
 * '<S811>' : 'power_converters_switching_devices/grid/Mode I'
 * '<S812>' : 'power_converters_switching_devices/grid/Mode V'
 * '<S813>' : 'power_converters_switching_devices/grid/Model'
 * '<S814>' : 'power_converters_switching_devices/grid/Model/I A:'
 * '<S815>' : 'power_converters_switching_devices/grid/Model/I B:'
 * '<S816>' : 'power_converters_switching_devices/grid/Model/I C:'
 * '<S817>' : 'power_converters_switching_devices/grid/Model/U A:'
 * '<S818>' : 'power_converters_switching_devices/grid/Model/U B:'
 * '<S819>' : 'power_converters_switching_devices/grid/Model/U C:'
 * '<S820>' : 'power_converters_switching_devices/grid/Model/I A:/Model'
 * '<S821>' : 'power_converters_switching_devices/grid/Model/I B:/Model'
 * '<S822>' : 'power_converters_switching_devices/grid/Model/I C:/Model'
 * '<S823>' : 'power_converters_switching_devices/grid/Model/U A:/Model'
 * '<S824>' : 'power_converters_switching_devices/grid/Model/U B:/Model'
 * '<S825>' : 'power_converters_switching_devices/grid/Model/U C:/Model'
 * '<S826>' : 'power_converters_switching_devices/motor/CM'
 * '<S827>' : 'power_converters_switching_devices/motor/VM1'
 * '<S828>' : 'power_converters_switching_devices/motor/CM/Model'
 * '<S829>' : 'power_converters_switching_devices/motor/VM1/Model'
 * '<S830>' : 'power_converters_switching_devices/powergui/EquivalentModel1'
 * '<S831>' : 'power_converters_switching_devices/powergui/EquivalentModel2'
 * '<S832>' : 'power_converters_switching_devices/powergui/EquivalentModel1/Sources'
 * '<S833>' : 'power_converters_switching_devices/powergui/EquivalentModel1/Yout'
 * '<S834>' : 'power_converters_switching_devices/powergui/EquivalentModel2/Gates'
 * '<S835>' : 'power_converters_switching_devices/powergui/EquivalentModel2/Sources'
 * '<S836>' : 'power_converters_switching_devices/powergui/EquivalentModel2/Status'
 * '<S837>' : 'power_converters_switching_devices/powergui/EquivalentModel2/Yout'
 * '<S838>' : 'power_converters_switching_devices/sec/Mode I'
 * '<S839>' : 'power_converters_switching_devices/sec/Mode V'
 * '<S840>' : 'power_converters_switching_devices/sec/Model'
 * '<S841>' : 'power_converters_switching_devices/sec/Model/U AB:'
 * '<S842>' : 'power_converters_switching_devices/sec/Model/U BC:'
 * '<S843>' : 'power_converters_switching_devices/sec/Model/U CA:'
 * '<S844>' : 'power_converters_switching_devices/sec/Model/U AB:/Model'
 * '<S845>' : 'power_converters_switching_devices/sec/Model/U BC:/Model'
 * '<S846>' : 'power_converters_switching_devices/sec/Model/U CA:/Model'
 * '<S847>' : 'power_converters_switching_devices/stat/Mode I'
 * '<S848>' : 'power_converters_switching_devices/stat/Mode V'
 * '<S849>' : 'power_converters_switching_devices/stat/Model'
 * '<S850>' : 'power_converters_switching_devices/stat/Model/I A:'
 * '<S851>' : 'power_converters_switching_devices/stat/Model/I B:'
 * '<S852>' : 'power_converters_switching_devices/stat/Model/I C:'
 * '<S853>' : 'power_converters_switching_devices/stat/Model/U A:'
 * '<S854>' : 'power_converters_switching_devices/stat/Model/U B:'
 * '<S855>' : 'power_converters_switching_devices/stat/Model/U C:'
 * '<S856>' : 'power_converters_switching_devices/stat/Model/I A:/Model'
 * '<S857>' : 'power_converters_switching_devices/stat/Model/I B:/Model'
 * '<S858>' : 'power_converters_switching_devices/stat/Model/I C:/Model'
 * '<S859>' : 'power_converters_switching_devices/stat/Model/U A:/Model'
 * '<S860>' : 'power_converters_switching_devices/stat/Model/U B:/Model'
 * '<S861>' : 'power_converters_switching_devices/stat/Model/U C:/Model'
 */
#endif                    /* RTW_HEADER_power_converters_switching_devices_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
