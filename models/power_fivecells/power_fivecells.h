/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: power_fivecells.h
 *
 * Code generated for Simulink model 'power_fivecells'.
 *
 * Model version                  : 1.105
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Sep  5 11:45:55 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_power_fivecells_h_
#define RTW_HEADER_power_fivecells_h_
#include <stddef.h>
#include <float.h>
#include <math.h>
#ifndef power_fivecells_COMMON_INCLUDES_
# define power_fivecells_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* power_fivecells_COMMON_INCLUDES_ */

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
  real_T StateSpace_o1[192];           /* '<S360>/State-Space' */
  real_T StateSpace_o2[150];           /* '<S360>/State-Space' */
  real_T StateSpace_DSTATE[242];       /* '<S360>/State-Space' */
  real_T AC;                           /* '<S11>/AC' */
  real_T AC_k;                         /* '<S10>/AC' */
  real_T AC_n;                         /* '<S9>/AC' */
  real_T Relay;                        /* '<S15>/Relay' */
  real_T Relay1;                       /* '<S15>/Relay1' */
  real_T Relay2;                       /* '<S15>/Relay2' */
  real_T Relay3;                       /* '<S15>/Relay3' */
  real_T Relay_p;                      /* '<S16>/Relay' */
  real_T Relay1_g;                     /* '<S16>/Relay1' */
  real_T Relay2_f;                     /* '<S16>/Relay2' */
  real_T Relay3_h;                     /* '<S16>/Relay3' */
  real_T Relay_l;                      /* '<S17>/Relay' */
  real_T Relay1_c;                     /* '<S17>/Relay1' */
  real_T Relay2_b;                     /* '<S17>/Relay2' */
  real_T Relay3_n;                     /* '<S17>/Relay3' */
  real_T Relay_a;                      /* '<S18>/Relay' */
  real_T Relay1_n;                     /* '<S18>/Relay1' */
  real_T Relay2_i;                     /* '<S18>/Relay2' */
  real_T Relay3_f;                     /* '<S18>/Relay3' */
  real_T Relay_m;                      /* '<S19>/Relay' */
  real_T Relay1_e;                     /* '<S19>/Relay1' */
  real_T Relay2_io;                    /* '<S19>/Relay2' */
  real_T Relay3_o;                     /* '<S19>/Relay3' */
  real_T Relay_n;                      /* '<S120>/Relay' */
  real_T Relay1_m;                     /* '<S120>/Relay1' */
  real_T Relay2_e;                     /* '<S120>/Relay2' */
  real_T Relay3_d;                     /* '<S120>/Relay3' */
  real_T Relay_k;                      /* '<S121>/Relay' */
  real_T Relay1_mk;                    /* '<S121>/Relay1' */
  real_T Relay2_j;                     /* '<S121>/Relay2' */
  real_T Relay3_m;                     /* '<S121>/Relay3' */
  real_T Relay_mm;                     /* '<S122>/Relay' */
  real_T Relay1_gm;                    /* '<S122>/Relay1' */
  real_T Relay2_fy;                    /* '<S122>/Relay2' */
  real_T Relay3_nm;                    /* '<S122>/Relay3' */
  real_T Relay_c;                      /* '<S123>/Relay' */
  real_T Relay1_p;                     /* '<S123>/Relay1' */
  real_T Relay2_c;                     /* '<S123>/Relay2' */
  real_T Relay3_my;                    /* '<S123>/Relay3' */
  real_T Relay_h;                      /* '<S124>/Relay' */
  real_T Relay1_f;                     /* '<S124>/Relay1' */
  real_T Relay2_m;                     /* '<S124>/Relay2' */
  real_T Relay3_b;                     /* '<S124>/Relay3' */
  real_T Relay_j;                      /* '<S225>/Relay' */
  real_T Relay1_gw;                    /* '<S225>/Relay1' */
  real_T Relay2_g;                     /* '<S225>/Relay2' */
  real_T Relay3_ob;                    /* '<S225>/Relay3' */
  real_T Relay_mu;                     /* '<S226>/Relay' */
  real_T Relay1_j;                     /* '<S226>/Relay1' */
  real_T Relay2_ex;                    /* '<S226>/Relay2' */
  real_T Relay3_c;                     /* '<S226>/Relay3' */
  real_T Relay_ca;                     /* '<S227>/Relay' */
  real_T Relay1_a;                     /* '<S227>/Relay1' */
  real_T Relay2_cb;                    /* '<S227>/Relay2' */
  real_T Relay3_nt;                    /* '<S227>/Relay3' */
  real_T Relay_hg;                     /* '<S228>/Relay' */
  real_T Relay1_o;                     /* '<S228>/Relay1' */
  real_T Relay2_p;                     /* '<S228>/Relay2' */
  real_T Relay3_p;                     /* '<S228>/Relay3' */
  real_T Relay_h2;                     /* '<S229>/Relay' */
  real_T Relay1_ca;                    /* '<S229>/Relay1' */
  real_T Relay2_bp;                    /* '<S229>/Relay2' */
  real_T Relay3_cq;                    /* '<S229>/Relay3' */
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
  } StateSpace_PWORK;                  /* '<S360>/State-Space' */

  int_T StateSpace_IWORK[11];          /* '<S360>/State-Space' */
  boolean_T Relay_Mode;                /* '<S15>/Relay' */
  boolean_T Relay1_Mode;               /* '<S15>/Relay1' */
  boolean_T Relay2_Mode;               /* '<S15>/Relay2' */
  boolean_T Relay3_Mode;               /* '<S15>/Relay3' */
  boolean_T Relay_Mode_l;              /* '<S16>/Relay' */
  boolean_T Relay1_Mode_m;             /* '<S16>/Relay1' */
  boolean_T Relay2_Mode_h;             /* '<S16>/Relay2' */
  boolean_T Relay3_Mode_d;             /* '<S16>/Relay3' */
  boolean_T Relay_Mode_p;              /* '<S17>/Relay' */
  boolean_T Relay1_Mode_m4;            /* '<S17>/Relay1' */
  boolean_T Relay2_Mode_p;             /* '<S17>/Relay2' */
  boolean_T Relay3_Mode_a;             /* '<S17>/Relay3' */
  boolean_T Relay_Mode_i;              /* '<S18>/Relay' */
  boolean_T Relay1_Mode_b;             /* '<S18>/Relay1' */
  boolean_T Relay2_Mode_i;             /* '<S18>/Relay2' */
  boolean_T Relay3_Mode_l;             /* '<S18>/Relay3' */
  boolean_T Relay_Mode_ib;             /* '<S19>/Relay' */
  boolean_T Relay1_Mode_g;             /* '<S19>/Relay1' */
  boolean_T Relay2_Mode_j;             /* '<S19>/Relay2' */
  boolean_T Relay3_Mode_j;             /* '<S19>/Relay3' */
  boolean_T Relay_Mode_j;              /* '<S120>/Relay' */
  boolean_T Relay1_Mode_e;             /* '<S120>/Relay1' */
  boolean_T Relay2_Mode_f;             /* '<S120>/Relay2' */
  boolean_T Relay3_Mode_n;             /* '<S120>/Relay3' */
  boolean_T Relay_Mode_o;              /* '<S121>/Relay' */
  boolean_T Relay1_Mode_a;             /* '<S121>/Relay1' */
  boolean_T Relay2_Mode_pv;            /* '<S121>/Relay2' */
  boolean_T Relay3_Mode_f;             /* '<S121>/Relay3' */
  boolean_T Relay_Mode_c;              /* '<S122>/Relay' */
  boolean_T Relay1_Mode_l;             /* '<S122>/Relay1' */
  boolean_T Relay2_Mode_jz;            /* '<S122>/Relay2' */
  boolean_T Relay3_Mode_b;             /* '<S122>/Relay3' */
  boolean_T Relay_Mode_js;             /* '<S123>/Relay' */
  boolean_T Relay1_Mode_h;             /* '<S123>/Relay1' */
  boolean_T Relay2_Mode_o;             /* '<S123>/Relay2' */
  boolean_T Relay3_Mode_i;             /* '<S123>/Relay3' */
  boolean_T Relay_Mode_pp;             /* '<S124>/Relay' */
  boolean_T Relay1_Mode_eq;            /* '<S124>/Relay1' */
  boolean_T Relay2_Mode_g;             /* '<S124>/Relay2' */
  boolean_T Relay3_Mode_g;             /* '<S124>/Relay3' */
  boolean_T Relay_Mode_e;              /* '<S225>/Relay' */
  boolean_T Relay1_Mode_h4;            /* '<S225>/Relay1' */
  boolean_T Relay2_Mode_gm;            /* '<S225>/Relay2' */
  boolean_T Relay3_Mode_c;             /* '<S225>/Relay3' */
  boolean_T Relay_Mode_ld;             /* '<S226>/Relay' */
  boolean_T Relay1_Mode_n;             /* '<S226>/Relay1' */
  boolean_T Relay2_Mode_ge;            /* '<S226>/Relay2' */
  boolean_T Relay3_Mode_e;             /* '<S226>/Relay3' */
  boolean_T Relay_Mode_b;              /* '<S227>/Relay' */
  boolean_T Relay1_Mode_o;             /* '<S227>/Relay1' */
  boolean_T Relay2_Mode_pm;            /* '<S227>/Relay2' */
  boolean_T Relay3_Mode_fz;            /* '<S227>/Relay3' */
  boolean_T Relay_Mode_jo;             /* '<S228>/Relay' */
  boolean_T Relay1_Mode_es;            /* '<S228>/Relay1' */
  boolean_T Relay2_Mode_c;             /* '<S228>/Relay2' */
  boolean_T Relay3_Mode_cr;            /* '<S228>/Relay3' */
  boolean_T Relay_Mode_g;              /* '<S229>/Relay' */
  boolean_T Relay1_Mode_g5;            /* '<S229>/Relay1' */
  boolean_T Relay2_Mode_n;             /* '<S229>/Relay2' */
  boolean_T Relay3_Mode_p;             /* '<S229>/Relay3' */
} DW;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: zeros(90,1)
   * Referenced by: '<S362>/SwitchCurrents'
   */
  real_T SwitchCurrents_Value[90];

  /* Expression: S.A
   * Referenced by: '<S360>/State-Space'
   */
  real_T StateSpace_AS_param[58564];

  /* Expression: S.B
   * Referenced by: '<S360>/State-Space'
   */
  real_T StateSpace_BS_param[37026];

  /* Expression: S.C
   * Referenced by: '<S360>/State-Space'
   */
  real_T StateSpace_CS_param[46464];

  /* Expression: S.D
   * Referenced by: '<S360>/State-Space'
   */
  real_T StateSpace_DS_param[29376];

  /* Expression: S.x0
   * Referenced by: '<S360>/State-Space'
   */
  real_T StateSpace_X0_param[242];

  /* Pooled Parameter (Expression: rep_seq_y)
   * Referenced by:
   *   '<S33>/Look-Up Table1'
   *   '<S138>/Look-Up Table1'
   *   '<S243>/Look-Up Table1'
   */
  real_T pooled5[4];

  /* Pooled Parameter (Expression: rep_seq_t - min(rep_seq_t))
   * Referenced by:
   *   '<S32>/Look-Up Table1'
   *   '<S33>/Look-Up Table1'
   *   '<S137>/Look-Up Table1'
   *   '<S138>/Look-Up Table1'
   *   '<S242>/Look-Up Table1'
   *   '<S243>/Look-Up Table1'
   */
  real_T pooled6[4];

  /* Pooled Parameter (Expression: rep_seq_y)
   * Referenced by:
   *   '<S32>/Look-Up Table1'
   *   '<S137>/Look-Up Table1'
   *   '<S242>/Look-Up Table1'
   */
  real_T pooled9[4];

  /* Pooled Parameter (Expression: rep_seq_y)
   * Referenced by:
   *   '<S37>/Look-Up Table1'
   *   '<S142>/Look-Up Table1'
   *   '<S247>/Look-Up Table1'
   */
  real_T pooled10[4];

  /* Pooled Parameter (Expression: rep_seq_t - min(rep_seq_t))
   * Referenced by:
   *   '<S36>/Look-Up Table1'
   *   '<S37>/Look-Up Table1'
   *   '<S141>/Look-Up Table1'
   *   '<S142>/Look-Up Table1'
   *   '<S246>/Look-Up Table1'
   *   '<S247>/Look-Up Table1'
   */
  real_T pooled11[4];

  /* Pooled Parameter (Expression: rep_seq_y)
   * Referenced by:
   *   '<S36>/Look-Up Table1'
   *   '<S141>/Look-Up Table1'
   *   '<S246>/Look-Up Table1'
   */
  real_T pooled12[4];

  /* Pooled Parameter (Expression: rep_seq_y)
   * Referenced by:
   *   '<S41>/Look-Up Table1'
   *   '<S146>/Look-Up Table1'
   *   '<S251>/Look-Up Table1'
   */
  real_T pooled13[4];

  /* Pooled Parameter (Expression: rep_seq_t - min(rep_seq_t))
   * Referenced by:
   *   '<S40>/Look-Up Table1'
   *   '<S41>/Look-Up Table1'
   *   '<S145>/Look-Up Table1'
   *   '<S146>/Look-Up Table1'
   *   '<S250>/Look-Up Table1'
   *   '<S251>/Look-Up Table1'
   */
  real_T pooled14[4];

  /* Pooled Parameter (Expression: rep_seq_y)
   * Referenced by:
   *   '<S40>/Look-Up Table1'
   *   '<S145>/Look-Up Table1'
   *   '<S250>/Look-Up Table1'
   */
  real_T pooled15[4];

  /* Pooled Parameter (Expression: rep_seq_y)
   * Referenced by:
   *   '<S45>/Look-Up Table1'
   *   '<S150>/Look-Up Table1'
   *   '<S255>/Look-Up Table1'
   */
  real_T pooled16[4];

  /* Pooled Parameter (Expression: rep_seq_t - min(rep_seq_t))
   * Referenced by:
   *   '<S44>/Look-Up Table1'
   *   '<S45>/Look-Up Table1'
   *   '<S149>/Look-Up Table1'
   *   '<S150>/Look-Up Table1'
   *   '<S254>/Look-Up Table1'
   *   '<S255>/Look-Up Table1'
   */
  real_T pooled17[4];

  /* Pooled Parameter (Expression: rep_seq_y)
   * Referenced by:
   *   '<S44>/Look-Up Table1'
   *   '<S149>/Look-Up Table1'
   *   '<S254>/Look-Up Table1'
   */
  real_T pooled18[4];

  /* Pooled Parameter (Expression: rep_seq_y)
   * Referenced by:
   *   '<S49>/Look-Up Table1'
   *   '<S154>/Look-Up Table1'
   *   '<S259>/Look-Up Table1'
   */
  real_T pooled19[4];

  /* Pooled Parameter (Expression: rep_seq_t - min(rep_seq_t))
   * Referenced by:
   *   '<S48>/Look-Up Table1'
   *   '<S49>/Look-Up Table1'
   *   '<S153>/Look-Up Table1'
   *   '<S154>/Look-Up Table1'
   *   '<S258>/Look-Up Table1'
   *   '<S259>/Look-Up Table1'
   */
  real_T pooled20[4];

  /* Pooled Parameter (Expression: rep_seq_y)
   * Referenced by:
   *   '<S48>/Look-Up Table1'
   *   '<S153>/Look-Up Table1'
   *   '<S258>/Look-Up Table1'
   */
  real_T pooled21[4];

  /* Pooled Parameter (Expression: zeros(1,6))
   * Referenced by:
   *   '<S51>/g'
   *   '<S60>/g'
   *   '<S69>/g'
   *   '<S78>/g'
   *   '<S87>/g'
   *   '<S156>/g'
   *   '<S165>/g'
   *   '<S174>/g'
   *   '<S183>/g'
   *   '<S192>/g'
   *   '<S261>/g'
   *   '<S270>/g'
   *   '<S279>/g'
   *   '<S288>/g'
   *   '<S297>/g'
   */
  real_T pooled22[6];
} ConstP;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T ISRC[3];                      /* '<Root>/Out1' */
  real_T VSRC[3];                      /* '<Root>/Out2' */
  real_T VLOAD[3];                     /* '<Root>/Out3' */
  real_T ILOAD[3];                     /* '<Root>/Out4' */
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
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
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
extern void power_fivecells_initialize(void);
extern void power_fivecells_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S50>/do not delete this gain' : Unused code path elimination
 * Block '<S55>/Constant' : Unused code path elimination
 * Block '<S56>/0 4' : Unused code path elimination
 * Block '<S56>/1//Ron' : Unused code path elimination
 * Block '<S56>/Saturation' : Unused code path elimination
 * Block '<S56>/Switch' : Unused code path elimination
 * Block '<S56>/Unit Delay' : Unused code path elimination
 * Block '<S57>/Switch' : Unused code path elimination
 * Block '<S57>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S57>/Vf Diodes' : Unused code path elimination
 * Block '<S53>/do not delete this gain' : Unused code path elimination
 * Block '<S59>/do not delete this gain' : Unused code path elimination
 * Block '<S64>/Constant' : Unused code path elimination
 * Block '<S65>/0 4' : Unused code path elimination
 * Block '<S65>/1//Ron' : Unused code path elimination
 * Block '<S65>/Saturation' : Unused code path elimination
 * Block '<S65>/Switch' : Unused code path elimination
 * Block '<S65>/Unit Delay' : Unused code path elimination
 * Block '<S66>/Switch' : Unused code path elimination
 * Block '<S66>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S66>/Vf Diodes' : Unused code path elimination
 * Block '<S62>/do not delete this gain' : Unused code path elimination
 * Block '<S68>/do not delete this gain' : Unused code path elimination
 * Block '<S73>/Constant' : Unused code path elimination
 * Block '<S74>/0 4' : Unused code path elimination
 * Block '<S74>/1//Ron' : Unused code path elimination
 * Block '<S74>/Saturation' : Unused code path elimination
 * Block '<S74>/Switch' : Unused code path elimination
 * Block '<S74>/Unit Delay' : Unused code path elimination
 * Block '<S75>/Switch' : Unused code path elimination
 * Block '<S75>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S75>/Vf Diodes' : Unused code path elimination
 * Block '<S71>/do not delete this gain' : Unused code path elimination
 * Block '<S77>/do not delete this gain' : Unused code path elimination
 * Block '<S82>/Constant' : Unused code path elimination
 * Block '<S83>/0 4' : Unused code path elimination
 * Block '<S83>/1//Ron' : Unused code path elimination
 * Block '<S83>/Saturation' : Unused code path elimination
 * Block '<S83>/Switch' : Unused code path elimination
 * Block '<S83>/Unit Delay' : Unused code path elimination
 * Block '<S84>/Switch' : Unused code path elimination
 * Block '<S84>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S84>/Vf Diodes' : Unused code path elimination
 * Block '<S80>/do not delete this gain' : Unused code path elimination
 * Block '<S86>/do not delete this gain' : Unused code path elimination
 * Block '<S91>/Constant' : Unused code path elimination
 * Block '<S92>/0 4' : Unused code path elimination
 * Block '<S92>/1//Ron' : Unused code path elimination
 * Block '<S92>/Saturation' : Unused code path elimination
 * Block '<S92>/Switch' : Unused code path elimination
 * Block '<S92>/Unit Delay' : Unused code path elimination
 * Block '<S93>/Switch' : Unused code path elimination
 * Block '<S93>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S93>/Vf Diodes' : Unused code path elimination
 * Block '<S89>/do not delete this gain' : Unused code path elimination
 * Block '<S155>/do not delete this gain' : Unused code path elimination
 * Block '<S160>/Constant' : Unused code path elimination
 * Block '<S161>/0 4' : Unused code path elimination
 * Block '<S161>/1//Ron' : Unused code path elimination
 * Block '<S161>/Saturation' : Unused code path elimination
 * Block '<S161>/Switch' : Unused code path elimination
 * Block '<S161>/Unit Delay' : Unused code path elimination
 * Block '<S162>/Switch' : Unused code path elimination
 * Block '<S162>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S162>/Vf Diodes' : Unused code path elimination
 * Block '<S158>/do not delete this gain' : Unused code path elimination
 * Block '<S164>/do not delete this gain' : Unused code path elimination
 * Block '<S169>/Constant' : Unused code path elimination
 * Block '<S170>/0 4' : Unused code path elimination
 * Block '<S170>/1//Ron' : Unused code path elimination
 * Block '<S170>/Saturation' : Unused code path elimination
 * Block '<S170>/Switch' : Unused code path elimination
 * Block '<S170>/Unit Delay' : Unused code path elimination
 * Block '<S171>/Switch' : Unused code path elimination
 * Block '<S171>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S171>/Vf Diodes' : Unused code path elimination
 * Block '<S167>/do not delete this gain' : Unused code path elimination
 * Block '<S173>/do not delete this gain' : Unused code path elimination
 * Block '<S178>/Constant' : Unused code path elimination
 * Block '<S179>/0 4' : Unused code path elimination
 * Block '<S179>/1//Ron' : Unused code path elimination
 * Block '<S179>/Saturation' : Unused code path elimination
 * Block '<S179>/Switch' : Unused code path elimination
 * Block '<S179>/Unit Delay' : Unused code path elimination
 * Block '<S180>/Switch' : Unused code path elimination
 * Block '<S180>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S180>/Vf Diodes' : Unused code path elimination
 * Block '<S176>/do not delete this gain' : Unused code path elimination
 * Block '<S182>/do not delete this gain' : Unused code path elimination
 * Block '<S187>/Constant' : Unused code path elimination
 * Block '<S188>/0 4' : Unused code path elimination
 * Block '<S188>/1//Ron' : Unused code path elimination
 * Block '<S188>/Saturation' : Unused code path elimination
 * Block '<S188>/Switch' : Unused code path elimination
 * Block '<S188>/Unit Delay' : Unused code path elimination
 * Block '<S189>/Switch' : Unused code path elimination
 * Block '<S189>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S189>/Vf Diodes' : Unused code path elimination
 * Block '<S185>/do not delete this gain' : Unused code path elimination
 * Block '<S191>/do not delete this gain' : Unused code path elimination
 * Block '<S196>/Constant' : Unused code path elimination
 * Block '<S197>/0 4' : Unused code path elimination
 * Block '<S197>/1//Ron' : Unused code path elimination
 * Block '<S197>/Saturation' : Unused code path elimination
 * Block '<S197>/Switch' : Unused code path elimination
 * Block '<S197>/Unit Delay' : Unused code path elimination
 * Block '<S198>/Switch' : Unused code path elimination
 * Block '<S198>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S198>/Vf Diodes' : Unused code path elimination
 * Block '<S194>/do not delete this gain' : Unused code path elimination
 * Block '<S260>/do not delete this gain' : Unused code path elimination
 * Block '<S265>/Constant' : Unused code path elimination
 * Block '<S266>/0 4' : Unused code path elimination
 * Block '<S266>/1//Ron' : Unused code path elimination
 * Block '<S266>/Saturation' : Unused code path elimination
 * Block '<S266>/Switch' : Unused code path elimination
 * Block '<S266>/Unit Delay' : Unused code path elimination
 * Block '<S267>/Switch' : Unused code path elimination
 * Block '<S267>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S267>/Vf Diodes' : Unused code path elimination
 * Block '<S263>/do not delete this gain' : Unused code path elimination
 * Block '<S269>/do not delete this gain' : Unused code path elimination
 * Block '<S274>/Constant' : Unused code path elimination
 * Block '<S275>/0 4' : Unused code path elimination
 * Block '<S275>/1//Ron' : Unused code path elimination
 * Block '<S275>/Saturation' : Unused code path elimination
 * Block '<S275>/Switch' : Unused code path elimination
 * Block '<S275>/Unit Delay' : Unused code path elimination
 * Block '<S276>/Switch' : Unused code path elimination
 * Block '<S276>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S276>/Vf Diodes' : Unused code path elimination
 * Block '<S272>/do not delete this gain' : Unused code path elimination
 * Block '<S278>/do not delete this gain' : Unused code path elimination
 * Block '<S283>/Constant' : Unused code path elimination
 * Block '<S284>/0 4' : Unused code path elimination
 * Block '<S284>/1//Ron' : Unused code path elimination
 * Block '<S284>/Saturation' : Unused code path elimination
 * Block '<S284>/Switch' : Unused code path elimination
 * Block '<S284>/Unit Delay' : Unused code path elimination
 * Block '<S285>/Switch' : Unused code path elimination
 * Block '<S285>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S285>/Vf Diodes' : Unused code path elimination
 * Block '<S281>/do not delete this gain' : Unused code path elimination
 * Block '<S287>/do not delete this gain' : Unused code path elimination
 * Block '<S292>/Constant' : Unused code path elimination
 * Block '<S293>/0 4' : Unused code path elimination
 * Block '<S293>/1//Ron' : Unused code path elimination
 * Block '<S293>/Saturation' : Unused code path elimination
 * Block '<S293>/Switch' : Unused code path elimination
 * Block '<S293>/Unit Delay' : Unused code path elimination
 * Block '<S294>/Switch' : Unused code path elimination
 * Block '<S294>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S294>/Vf Diodes' : Unused code path elimination
 * Block '<S290>/do not delete this gain' : Unused code path elimination
 * Block '<S296>/do not delete this gain' : Unused code path elimination
 * Block '<S301>/Constant' : Unused code path elimination
 * Block '<S302>/0 4' : Unused code path elimination
 * Block '<S302>/1//Ron' : Unused code path elimination
 * Block '<S302>/Saturation' : Unused code path elimination
 * Block '<S302>/Switch' : Unused code path elimination
 * Block '<S302>/Unit Delay' : Unused code path elimination
 * Block '<S303>/Switch' : Unused code path elimination
 * Block '<S303>/Vf Devices & Clamping Diodes' : Unused code path elimination
 * Block '<S303>/Vf Diodes' : Unused code path elimination
 * Block '<S299>/do not delete this gain' : Unused code path elimination
 * Block '<Root>/Floating Scope1' : Unused code path elimination
 * Block '<S32>/Output' : Eliminate redundant signal conversion block
 * Block '<S33>/Output' : Eliminate redundant signal conversion block
 * Block '<S36>/Output' : Eliminate redundant signal conversion block
 * Block '<S37>/Output' : Eliminate redundant signal conversion block
 * Block '<S40>/Output' : Eliminate redundant signal conversion block
 * Block '<S41>/Output' : Eliminate redundant signal conversion block
 * Block '<S44>/Output' : Eliminate redundant signal conversion block
 * Block '<S45>/Output' : Eliminate redundant signal conversion block
 * Block '<S48>/Output' : Eliminate redundant signal conversion block
 * Block '<S49>/Output' : Eliminate redundant signal conversion block
 * Block '<S55>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S56>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S64>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S65>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S73>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S74>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S82>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S83>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S91>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S92>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S137>/Output' : Eliminate redundant signal conversion block
 * Block '<S138>/Output' : Eliminate redundant signal conversion block
 * Block '<S141>/Output' : Eliminate redundant signal conversion block
 * Block '<S142>/Output' : Eliminate redundant signal conversion block
 * Block '<S145>/Output' : Eliminate redundant signal conversion block
 * Block '<S146>/Output' : Eliminate redundant signal conversion block
 * Block '<S149>/Output' : Eliminate redundant signal conversion block
 * Block '<S150>/Output' : Eliminate redundant signal conversion block
 * Block '<S153>/Output' : Eliminate redundant signal conversion block
 * Block '<S154>/Output' : Eliminate redundant signal conversion block
 * Block '<S160>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S161>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S169>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S170>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S178>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S179>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S187>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S188>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S196>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S197>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S242>/Output' : Eliminate redundant signal conversion block
 * Block '<S243>/Output' : Eliminate redundant signal conversion block
 * Block '<S246>/Output' : Eliminate redundant signal conversion block
 * Block '<S247>/Output' : Eliminate redundant signal conversion block
 * Block '<S250>/Output' : Eliminate redundant signal conversion block
 * Block '<S251>/Output' : Eliminate redundant signal conversion block
 * Block '<S254>/Output' : Eliminate redundant signal conversion block
 * Block '<S255>/Output' : Eliminate redundant signal conversion block
 * Block '<S258>/Output' : Eliminate redundant signal conversion block
 * Block '<S259>/Output' : Eliminate redundant signal conversion block
 * Block '<S265>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S266>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S274>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S275>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S283>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S284>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S292>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S293>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S301>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S302>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S5>/Kv' : Eliminated nontunable gain of 1
 * Block '<S5>/Kv1' : Eliminated nontunable gain of 1
 * Block '<S333>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S334>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S335>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S336>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S337>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S338>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S7>/Kv' : Eliminated nontunable gain of 1
 * Block '<S7>/Kv1' : Eliminated nontunable gain of 1
 * Block '<S348>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S349>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S350>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S351>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S352>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S353>/do not delete this gain' : Eliminated nontunable gain of 1
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
 * '<Root>' : 'power_fivecells'
 * '<S1>'   : 'power_fivecells/AC Voltage Source'
 * '<S2>'   : 'power_fivecells/AC Voltage Source1'
 * '<S3>'   : 'power_fivecells/AC Voltage Source2'
 * '<S4>'   : 'power_fivecells/Five Cell Multi-Level Converter'
 * '<S5>'   : 'power_fivecells/LOAD'
 * '<S6>'   : 'power_fivecells/Measurements'
 * '<S7>'   : 'power_fivecells/SRC'
 * '<S8>'   : 'power_fivecells/powergui'
 * '<S9>'   : 'power_fivecells/AC Voltage Source/Model'
 * '<S10>'  : 'power_fivecells/AC Voltage Source1/Model'
 * '<S11>'  : 'power_fivecells/AC Voltage Source2/Model'
 * '<S12>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A'
 * '<S13>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B'
 * '<S14>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C'
 * '<S15>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/0 deg.'
 * '<S16>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/180//5 deg.'
 * '<S17>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/2*180//5 deg'
 * '<S18>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/3*180//5 deg'
 * '<S19>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/4*180//5 deg'
 * '<S20>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 1'
 * '<S21>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 2'
 * '<S22>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 3'
 * '<S23>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 4'
 * '<S24>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 5'
 * '<S25>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 12 deg.'
 * '<S26>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 24 deg.'
 * '<S27>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 12 deg.'
 * '<S28>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 24 deg.'
 * '<S29>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer 0 deg.'
 * '<S30>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/0 deg./neg triang carrier2'
 * '<S31>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/0 deg./triang carrier'
 * '<S32>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/0 deg./neg triang carrier2/Repeating Sequence'
 * '<S33>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/0 deg./triang carrier/Repeating Sequence'
 * '<S34>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/180//5 deg./neg triang carrier2'
 * '<S35>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/180//5 deg./triang carrier'
 * '<S36>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/180//5 deg./neg triang carrier2/Repeating Sequence'
 * '<S37>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/180//5 deg./triang carrier/Repeating Sequence'
 * '<S38>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/2*180//5 deg/neg triang carrier2'
 * '<S39>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/2*180//5 deg/triang carrier'
 * '<S40>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/2*180//5 deg/neg triang carrier2/Repeating Sequence'
 * '<S41>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/2*180//5 deg/triang carrier/Repeating Sequence'
 * '<S42>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/3*180//5 deg/neg triang carrier2'
 * '<S43>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/3*180//5 deg/triang carrier'
 * '<S44>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/3*180//5 deg/neg triang carrier2/Repeating Sequence'
 * '<S45>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/3*180//5 deg/triang carrier/Repeating Sequence'
 * '<S46>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/4*180//5 deg/neg triang carrier2'
 * '<S47>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/4*180//5 deg/triang carrier'
 * '<S48>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/4*180//5 deg/neg triang carrier2/Repeating Sequence'
 * '<S49>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/4*180//5 deg/triang carrier/Repeating Sequence'
 * '<S50>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 1/Current Measurement1'
 * '<S51>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 1/GTO'
 * '<S52>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 1/IGBT H-Bridge'
 * '<S53>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 1/Voltage Measurement1'
 * '<S54>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 1/Current Measurement1/Model'
 * '<S55>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 1/GTO/Model'
 * '<S56>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 1/IGBT H-Bridge/Model'
 * '<S57>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 1/IGBT H-Bridge/Model/Vf 1'
 * '<S58>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 1/Voltage Measurement1/Model'
 * '<S59>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 2/Current Measurement1'
 * '<S60>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 2/GTO'
 * '<S61>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 2/IGBT H-Bridge'
 * '<S62>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 2/Voltage Measurement1'
 * '<S63>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 2/Current Measurement1/Model'
 * '<S64>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 2/GTO/Model'
 * '<S65>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 2/IGBT H-Bridge/Model'
 * '<S66>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 2/IGBT H-Bridge/Model/Vf 1'
 * '<S67>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 2/Voltage Measurement1/Model'
 * '<S68>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 3/Current Measurement1'
 * '<S69>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 3/GTO'
 * '<S70>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 3/IGBT H-Bridge'
 * '<S71>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 3/Voltage Measurement1'
 * '<S72>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 3/Current Measurement1/Model'
 * '<S73>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 3/GTO/Model'
 * '<S74>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 3/IGBT H-Bridge/Model'
 * '<S75>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 3/IGBT H-Bridge/Model/Vf 1'
 * '<S76>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 3/Voltage Measurement1/Model'
 * '<S77>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 4/Current Measurement1'
 * '<S78>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 4/GTO'
 * '<S79>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 4/IGBT H-Bridge'
 * '<S80>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 4/Voltage Measurement1'
 * '<S81>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 4/Current Measurement1/Model'
 * '<S82>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 4/GTO/Model'
 * '<S83>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 4/IGBT H-Bridge/Model'
 * '<S84>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 4/IGBT H-Bridge/Model/Vf 1'
 * '<S85>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 4/Voltage Measurement1/Model'
 * '<S86>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 5/Current Measurement1'
 * '<S87>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 5/GTO'
 * '<S88>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 5/IGBT H-Bridge'
 * '<S89>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 5/Voltage Measurement1'
 * '<S90>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 5/Current Measurement1/Model'
 * '<S91>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 5/GTO/Model'
 * '<S92>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 5/IGBT H-Bridge/Model'
 * '<S93>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 5/IGBT H-Bridge/Model/Vf 1'
 * '<S94>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/CELL 5/Voltage Measurement1/Model'
 * '<S95>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer'
 * '<S96>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S97>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S98>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S99>'  : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S100>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer'
 * '<S101>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S102>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S103>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S104>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S105>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer'
 * '<S106>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S107>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S108>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S109>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S110>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer'
 * '<S111>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S112>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S113>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S114>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S115>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer'
 * '<S116>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S117>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S118>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S119>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter A/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S120>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/0 deg.'
 * '<S121>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/180//5 deg.'
 * '<S122>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/2*180//5 deg'
 * '<S123>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/3*180//5 deg'
 * '<S124>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/4*180//5 deg'
 * '<S125>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 1'
 * '<S126>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 2'
 * '<S127>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 3'
 * '<S128>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 4'
 * '<S129>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 5'
 * '<S130>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 12 deg.'
 * '<S131>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 24 deg.'
 * '<S132>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 12 deg.'
 * '<S133>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 24 deg.'
 * '<S134>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer 0 deg.'
 * '<S135>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/0 deg./neg triang carrier2'
 * '<S136>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/0 deg./triang carrier'
 * '<S137>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/0 deg./neg triang carrier2/Repeating Sequence'
 * '<S138>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/0 deg./triang carrier/Repeating Sequence'
 * '<S139>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/180//5 deg./neg triang carrier2'
 * '<S140>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/180//5 deg./triang carrier'
 * '<S141>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/180//5 deg./neg triang carrier2/Repeating Sequence'
 * '<S142>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/180//5 deg./triang carrier/Repeating Sequence'
 * '<S143>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/2*180//5 deg/neg triang carrier2'
 * '<S144>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/2*180//5 deg/triang carrier'
 * '<S145>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/2*180//5 deg/neg triang carrier2/Repeating Sequence'
 * '<S146>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/2*180//5 deg/triang carrier/Repeating Sequence'
 * '<S147>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/3*180//5 deg/neg triang carrier2'
 * '<S148>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/3*180//5 deg/triang carrier'
 * '<S149>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/3*180//5 deg/neg triang carrier2/Repeating Sequence'
 * '<S150>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/3*180//5 deg/triang carrier/Repeating Sequence'
 * '<S151>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/4*180//5 deg/neg triang carrier2'
 * '<S152>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/4*180//5 deg/triang carrier'
 * '<S153>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/4*180//5 deg/neg triang carrier2/Repeating Sequence'
 * '<S154>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/4*180//5 deg/triang carrier/Repeating Sequence'
 * '<S155>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 1/Current Measurement1'
 * '<S156>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 1/GTO'
 * '<S157>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 1/IGBT H-Bridge'
 * '<S158>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 1/Voltage Measurement1'
 * '<S159>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 1/Current Measurement1/Model'
 * '<S160>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 1/GTO/Model'
 * '<S161>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 1/IGBT H-Bridge/Model'
 * '<S162>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 1/IGBT H-Bridge/Model/Vf 1'
 * '<S163>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 1/Voltage Measurement1/Model'
 * '<S164>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 2/Current Measurement1'
 * '<S165>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 2/GTO'
 * '<S166>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 2/IGBT H-Bridge'
 * '<S167>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 2/Voltage Measurement1'
 * '<S168>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 2/Current Measurement1/Model'
 * '<S169>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 2/GTO/Model'
 * '<S170>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 2/IGBT H-Bridge/Model'
 * '<S171>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 2/IGBT H-Bridge/Model/Vf 1'
 * '<S172>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 2/Voltage Measurement1/Model'
 * '<S173>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 3/Current Measurement1'
 * '<S174>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 3/GTO'
 * '<S175>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 3/IGBT H-Bridge'
 * '<S176>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 3/Voltage Measurement1'
 * '<S177>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 3/Current Measurement1/Model'
 * '<S178>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 3/GTO/Model'
 * '<S179>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 3/IGBT H-Bridge/Model'
 * '<S180>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 3/IGBT H-Bridge/Model/Vf 1'
 * '<S181>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 3/Voltage Measurement1/Model'
 * '<S182>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 4/Current Measurement1'
 * '<S183>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 4/GTO'
 * '<S184>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 4/IGBT H-Bridge'
 * '<S185>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 4/Voltage Measurement1'
 * '<S186>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 4/Current Measurement1/Model'
 * '<S187>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 4/GTO/Model'
 * '<S188>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 4/IGBT H-Bridge/Model'
 * '<S189>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 4/IGBT H-Bridge/Model/Vf 1'
 * '<S190>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 4/Voltage Measurement1/Model'
 * '<S191>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 5/Current Measurement1'
 * '<S192>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 5/GTO'
 * '<S193>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 5/IGBT H-Bridge'
 * '<S194>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 5/Voltage Measurement1'
 * '<S195>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 5/Current Measurement1/Model'
 * '<S196>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 5/GTO/Model'
 * '<S197>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 5/IGBT H-Bridge/Model'
 * '<S198>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 5/IGBT H-Bridge/Model/Vf 1'
 * '<S199>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/CELL 5/Voltage Measurement1/Model'
 * '<S200>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer'
 * '<S201>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S202>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S203>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S204>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S205>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer'
 * '<S206>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S207>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S208>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S209>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S210>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer'
 * '<S211>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S212>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S213>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S214>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S215>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer'
 * '<S216>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S217>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S218>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S219>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S220>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer'
 * '<S221>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S222>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S223>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S224>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter B/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S225>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/0 deg.'
 * '<S226>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/180//5 deg.'
 * '<S227>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/2*180//5 deg'
 * '<S228>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/3*180//5 deg'
 * '<S229>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/4*180//5 deg'
 * '<S230>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 1'
 * '<S231>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 2'
 * '<S232>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 3'
 * '<S233>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 4'
 * '<S234>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 5'
 * '<S235>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 12 deg.'
 * '<S236>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 24 deg.'
 * '<S237>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 12 deg.'
 * '<S238>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 24 deg.'
 * '<S239>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer 0 deg.'
 * '<S240>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/0 deg./neg triang carrier2'
 * '<S241>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/0 deg./triang carrier'
 * '<S242>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/0 deg./neg triang carrier2/Repeating Sequence'
 * '<S243>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/0 deg./triang carrier/Repeating Sequence'
 * '<S244>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/180//5 deg./neg triang carrier2'
 * '<S245>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/180//5 deg./triang carrier'
 * '<S246>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/180//5 deg./neg triang carrier2/Repeating Sequence'
 * '<S247>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/180//5 deg./triang carrier/Repeating Sequence'
 * '<S248>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/2*180//5 deg/neg triang carrier2'
 * '<S249>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/2*180//5 deg/triang carrier'
 * '<S250>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/2*180//5 deg/neg triang carrier2/Repeating Sequence'
 * '<S251>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/2*180//5 deg/triang carrier/Repeating Sequence'
 * '<S252>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/3*180//5 deg/neg triang carrier2'
 * '<S253>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/3*180//5 deg/triang carrier'
 * '<S254>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/3*180//5 deg/neg triang carrier2/Repeating Sequence'
 * '<S255>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/3*180//5 deg/triang carrier/Repeating Sequence'
 * '<S256>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/4*180//5 deg/neg triang carrier2'
 * '<S257>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/4*180//5 deg/triang carrier'
 * '<S258>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/4*180//5 deg/neg triang carrier2/Repeating Sequence'
 * '<S259>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/4*180//5 deg/triang carrier/Repeating Sequence'
 * '<S260>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 1/Current Measurement1'
 * '<S261>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 1/GTO'
 * '<S262>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 1/IGBT H-Bridge'
 * '<S263>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 1/Voltage Measurement1'
 * '<S264>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 1/Current Measurement1/Model'
 * '<S265>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 1/GTO/Model'
 * '<S266>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 1/IGBT H-Bridge/Model'
 * '<S267>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 1/IGBT H-Bridge/Model/Vf 1'
 * '<S268>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 1/Voltage Measurement1/Model'
 * '<S269>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 2/Current Measurement1'
 * '<S270>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 2/GTO'
 * '<S271>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 2/IGBT H-Bridge'
 * '<S272>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 2/Voltage Measurement1'
 * '<S273>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 2/Current Measurement1/Model'
 * '<S274>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 2/GTO/Model'
 * '<S275>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 2/IGBT H-Bridge/Model'
 * '<S276>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 2/IGBT H-Bridge/Model/Vf 1'
 * '<S277>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 2/Voltage Measurement1/Model'
 * '<S278>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 3/Current Measurement1'
 * '<S279>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 3/GTO'
 * '<S280>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 3/IGBT H-Bridge'
 * '<S281>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 3/Voltage Measurement1'
 * '<S282>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 3/Current Measurement1/Model'
 * '<S283>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 3/GTO/Model'
 * '<S284>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 3/IGBT H-Bridge/Model'
 * '<S285>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 3/IGBT H-Bridge/Model/Vf 1'
 * '<S286>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 3/Voltage Measurement1/Model'
 * '<S287>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 4/Current Measurement1'
 * '<S288>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 4/GTO'
 * '<S289>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 4/IGBT H-Bridge'
 * '<S290>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 4/Voltage Measurement1'
 * '<S291>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 4/Current Measurement1/Model'
 * '<S292>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 4/GTO/Model'
 * '<S293>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 4/IGBT H-Bridge/Model'
 * '<S294>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 4/IGBT H-Bridge/Model/Vf 1'
 * '<S295>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 4/Voltage Measurement1/Model'
 * '<S296>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 5/Current Measurement1'
 * '<S297>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 5/GTO'
 * '<S298>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 5/IGBT H-Bridge'
 * '<S299>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 5/Voltage Measurement1'
 * '<S300>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 5/Current Measurement1/Model'
 * '<S301>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 5/GTO/Model'
 * '<S302>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 5/IGBT H-Bridge/Model'
 * '<S303>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 5/IGBT H-Bridge/Model/Vf 1'
 * '<S304>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/CELL 5/Voltage Measurement1/Model'
 * '<S305>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer'
 * '<S306>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S307>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S308>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S309>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S310>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer'
 * '<S311>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S312>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S313>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S314>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer + 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S315>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer'
 * '<S316>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S317>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S318>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S319>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 12 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S320>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer'
 * '<S321>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S322>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S323>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S324>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer - 24 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S325>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer'
 * '<S326>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model'
 * '<S327>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model/Linear'
 * '<S328>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model/Linear1'
 * '<S329>' : 'power_fivecells/Five Cell Multi-Level Converter/Five cells converter C/Phase-shifting Transformer 0 deg./Zigzag Phase-Shifting Transformer/Model/Linear2'
 * '<S330>' : 'power_fivecells/LOAD/Mode I'
 * '<S331>' : 'power_fivecells/LOAD/Mode V'
 * '<S332>' : 'power_fivecells/LOAD/Model'
 * '<S333>' : 'power_fivecells/LOAD/Model/I A:'
 * '<S334>' : 'power_fivecells/LOAD/Model/I B:'
 * '<S335>' : 'power_fivecells/LOAD/Model/I C:'
 * '<S336>' : 'power_fivecells/LOAD/Model/U AB:'
 * '<S337>' : 'power_fivecells/LOAD/Model/U BC:'
 * '<S338>' : 'power_fivecells/LOAD/Model/U CA:'
 * '<S339>' : 'power_fivecells/LOAD/Model/I A:/Model'
 * '<S340>' : 'power_fivecells/LOAD/Model/I B:/Model'
 * '<S341>' : 'power_fivecells/LOAD/Model/I C:/Model'
 * '<S342>' : 'power_fivecells/LOAD/Model/U AB:/Model'
 * '<S343>' : 'power_fivecells/LOAD/Model/U BC:/Model'
 * '<S344>' : 'power_fivecells/LOAD/Model/U CA:/Model'
 * '<S345>' : 'power_fivecells/SRC/Mode I'
 * '<S346>' : 'power_fivecells/SRC/Mode V'
 * '<S347>' : 'power_fivecells/SRC/Model'
 * '<S348>' : 'power_fivecells/SRC/Model/I A:'
 * '<S349>' : 'power_fivecells/SRC/Model/I B:'
 * '<S350>' : 'power_fivecells/SRC/Model/I C:'
 * '<S351>' : 'power_fivecells/SRC/Model/U AB:'
 * '<S352>' : 'power_fivecells/SRC/Model/U BC:'
 * '<S353>' : 'power_fivecells/SRC/Model/U CA:'
 * '<S354>' : 'power_fivecells/SRC/Model/I A:/Model'
 * '<S355>' : 'power_fivecells/SRC/Model/I B:/Model'
 * '<S356>' : 'power_fivecells/SRC/Model/I C:/Model'
 * '<S357>' : 'power_fivecells/SRC/Model/U AB:/Model'
 * '<S358>' : 'power_fivecells/SRC/Model/U BC:/Model'
 * '<S359>' : 'power_fivecells/SRC/Model/U CA:/Model'
 * '<S360>' : 'power_fivecells/powergui/EquivalentModel1'
 * '<S361>' : 'power_fivecells/powergui/EquivalentModel1/Gates'
 * '<S362>' : 'power_fivecells/powergui/EquivalentModel1/Sources'
 * '<S363>' : 'power_fivecells/powergui/EquivalentModel1/Status'
 * '<S364>' : 'power_fivecells/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_power_fivecells_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
