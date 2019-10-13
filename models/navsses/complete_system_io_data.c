/*
 * complete_system_io_data.c
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
#include "complete_system_io.h"
#include "complete_system_io_private.h"

/* Block parameters (auto storage) */
P_complete_system_io_T complete_system_io_P = {
  3.7998479790239883,                  /* Expression: SM.Lm
                                        * Referenced by: '<S15>/Lm_nosat'
                                        */

  /*  Expression: SM.Linv
   * Referenced by: '<S15>/Constant2'
   */
  { 7.65751942808418, 0.0, -7.5270656823622577, 0.0, 0.0, 7.65751942808418, 0.0,
    -7.5270656823622577, -7.5270656823622577, 0.0, 7.65751942808418, 0.0, 0.0,
    -7.5270656823622577, 0.0, 7.65751942808418 },
  0.0,                                 /* Expression: SM.Lsat(1)
                                        * Referenced by: '<S21>/Constant1'
                                        */
  0.0,                                 /* Expression: SM.Lsat(1)
                                        * Referenced by: '<S21>/Delay'
                                        */

  /*  Expression: [ SM.Lls SM.Llr ]
   * Referenced by: '<S23>/u2'
   */
  { 0.065856260986151938, 0.065856260986151938 },

  /*  Expression: [1/SM.Lls 1/SM.Llr]
   * Referenced by: '<S25>/u1'
   */
  { 15.184585110446479, 15.184585110446479 },

  /*  Expression: SM.Phisat
   * Referenced by: '<S21>/Lookup Table'
   */
  { 0.0, 1.0 },

  /*  Expression: [ 0 SM.Phisat(2:end)./SM.Lsat(2:end) ]
   * Referenced by: '<S21>/Lookup Table'
   */
  { 0.0, 1.0 },

  /*  Expression: zeros(4,4)
   * Referenced by: '<S24>/u1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 },

  /*  Expression: SM.Ll
   * Referenced by: '<S24>/u5'
   */
  { 0.065856260986151938, 0.0, 0.0, 0.0, 0.0, 0.065856260986151938, 0.0, 0.0,
    0.0, 0.0, 0.065856260986151938, 0.0, 0.0, 0.0, 0.0, 0.065856260986151938 },

  /*  Expression: SM.R
   * Referenced by: '<S21>/u1'
   */
  { 0.00845078125, 0.0, 0.0, 0.0, 0.0, 0.00845078125, 0.0, 0.0, 0.0, 0.0,
    0.0064109374999999991, 0.0, 0.0, 0.0, 0.0, 0.0064109374999999991 },

  /*  Expression: SM.RLinv
   * Referenced by: '<S15>/Constant4'
   */
  { 0.064712021604364525, 0.0, -0.04825554764801928, 0.0, 0.0,
    0.064712021604364525, 0.0, -0.04825554764801928, -0.063609585536025429, 0.0,
    0.049091878458483416, 0.0, 0.0, -0.063609585536025429, 0.0,
    0.049091878458483416 },

  /*  Expression: eye(4,4)
   * Referenced by: '<S26>/I4'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 },
  0.018849555921538759,                /* Expression: SM.web*Ts
                                        * Referenced by: '<S26>/wbase*Ts//2 '
                                        */
  0.0,                                 /* Expression: SM.ensat
                                        * Referenced by: '<S15>/Constant3'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch1'
                                        */
  1.0,                                 /* Expression: SM.ctrl
                                        * Referenced by: '<S18>/Constant4'
                                        */
  0.018849555921538759,                /* Expression: SM.web*Ts
                                        * Referenced by: '<S26>/wbase*Ts'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S27>/vqr,vdr'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S27>/vqs,vds'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/vqr,vdr'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/vqs,vds'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S29>/vqr,vdr'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S29>/vqs,vds'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/ira,irb'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/isa,isb'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/ira,irb'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/isa,isb'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S33>/ira,irb'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S33>/isa,isb'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/sin(beta),cos(beta), sin(th),cos(th)'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/W'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S34>/we'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S34>/Gain2'
                                        */
  376.99111843077515,                  /* Expression: SM.web
                                        * Referenced by: '<S34>/web_psb'
                                        */

  /*  Expression: [ 0 1  0  0; -1  0  0  0;  0  0  0  0;  0  0  0  0]
   * Referenced by: '<S34>/u3'
   */
  { 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/sin(thr),cos(thr)'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/W'
                                        */

  /*  Expression: [0; 0]
   * Referenced by: '<S35>/Constant'
   */
  { 0.0, 0.0 },
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S35>/Gain1'
                                        */

  /*  Expression: zeros(4,4)
   * Referenced by: '<S35>/u1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S36>/sin(thr),cos(thr)'
                                        */

  /*  Expression: [0; 0]
   * Referenced by: '<S36>/Constant'
   */
  { 0.0, 0.0 },
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S36>/Gain3'
                                        */

  /*  Expression: zeros(4,4)
   * Referenced by: '<S36>/u4'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 },
  1.0,                                 /* Expression: 1.0
                                        * Referenced by: '<S56>/input2'
                                        */
  1.732,                               /* Expression: 1.732
                                        * Referenced by: '<S56>/Gain'
                                        */
  0.75,                                /* Expression: 0.75
                                        * Referenced by: '<S55>/input2'
                                        */
  0.577,                               /* Expression: 0.577
                                        * Referenced by: '<S57>/Gain'
                                        */
  1.0,                                 /* Expression: 1.0
                                        * Referenced by: '<S57>/input2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S58>/f(In)'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S58>/input2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S78>/Constant2'
                                        */

  /*  Expression: [SM.Lmq SM.Lmd]
   * Referenced by: '<S79>/Lmqd_nosat'
   */
  { 1.0288407376141093, 1.5288407376141093 },

  /*  Expression: SM.Linv
   * Referenced by: '<S79>/Constant4'
   */
  { 5.6497175141242915, 0.0, 0.0, 0.0, -4.848855981870031, 0.0,
    5.6497175141242835, -2.5660994773120396, -2.5446744115546518, 0.0, 0.0,
    -2.5660994773120396, 2.8653367225741282, -0.2469376401072414, 0.0, 0.0,
    -2.5446744115546518, -0.2469376401072414, 2.84347499312173, 0.0,
    -4.848855981870031, 0.0, 0.0, 0.0, 4.9957074529352763 },
  1.0288407376141093,                  /* Expression: SM.Lmq
                                        * Referenced by: '<S89>/u3'
                                        */
  1.5288407376141093,                  /* Expression: SM.Lmsatd(1)
                                        * Referenced by: '<S91>/Constant1'
                                        */
  1.0288407376141093,                  /* Expression: SM.Lmsatq(1)
                                        * Referenced by: '<S92>/Constant1'
                                        */

  /*  Expression: SM.One_Llq
   * Referenced by: '<S97>/1//Ll_q'
   */
  { 32.093185891743424, 5.8848269888890439 },

  /*  Expression: [ 1/SM.Ll 1/SM.Llkq1 1/SM.Llkq2]
   * Referenced by: '<S96>/u2'
   */
  { 32.093185891743424, 5.8848269888890439, 0.0 },
  1.0288407376141093,                  /* Expression: SM.Lmsatq(1)
                                        * Referenced by: '<S92>/Lmq_sat'
                                        */

  /*  Expression: SM.Phisat
   * Referenced by: '<S92>/Lookup Table'
   */
  { 0.0, 1.0 },

  /*  Expression: [ 0 SM.Phisat(2:end)./SM.Lmsatq(2:end)*SM.Lmq ]
   * Referenced by: '<S92>/Lookup Table'
   */
  { 0.0, 1.0 },
  1.0288407376141093,                  /* Expression: SM.Lmq
                                        * Referenced by: '<S92>/Lmq'
                                        */

  /*  Expression: [ 1/SM.Ll   1/SM.Llfd   1/SM.Llkd ]
   * Referenced by: '<S95>/1//Ll_d'
   */
  { 32.093185891743424, 3.1143534715658876, 3.0883508833926734 },

  /*  Expression: [1/SM.Ll 1/SM.Llkd 1/SM.Llfd]
   * Referenced by: '<S94>/u1'
   */
  { 32.093185891743424, 3.0883508833926734, 3.1143534715658876 },
  1.5288407376141093,                  /* Expression: SM.Lmsatd(1)
                                        * Referenced by: '<S91>/Lmd_sat'
                                        */

  /*  Expression: SM.Phisat
   * Referenced by: '<S91>/Lookup Table'
   */
  { 0.0, 1.0 },

  /*  Expression: [ 0 SM.Phisat(2:end)./SM.Lmsatd(2:end)*SM.Lmd ]
   * Referenced by: '<S91>/Lookup Table'
   */
  { 0.0, 1.0 },
  1.5288407376141093,                  /* Expression: SM.Lmd
                                        * Referenced by: '<S91>/Lmd'
                                        */

  /*  Expression: SM.R
   * Referenced by: '<S89>/u1'
   */
  { 0.0036, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0036, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.00025211516043886382, 0.0, 0.0, 0.0, 0.0, 0.0, 0.018655401280533064, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.063596684860083144 },

  /*  Expression: zeros(SM.nState,SM.nState)
   * Referenced by: '<S93>/u1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /*  Expression: SM.Llqd
   * Referenced by: '<S93>/u5'
   */
  { 0.031159262385890729, 0.0, 0.0, 0.0, 0.0, 0.0, 0.031159262385890729, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.32109393141466469, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.32379740442622928, 0.0, 0.0, 0.0, 0.0, 0.0, 0.16992853008050507 },

  /*  Expression: SM.RLinv
   * Referenced by: '<S79>/Constant6'
   */
  { 0.020338983050847449, 0.0, 0.0, 0.0, -0.30837116581091739, 0.0,
    0.020338983050847421, -0.00064695258142460942, -0.047471922275856372, 0.0,
    0.0, -0.0092379581183233417, 0.00072239482752314453, -0.0046067207674684437,
    0.0, 0.0, -0.0091608278815967469, -6.2256722754031572E-5,
    0.053046167027846862, 0.0, -0.017455881534732112, 0.0, 0.0, 0.0,
    0.31771043253749343 },

  /*  Expression: eye(SM.nState,SM.nState)
   * Referenced by: '<S98>/In'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },
  0.018849555921538759,                /* Expression: SM.web*Ts
                                        * Referenced by: '<S98>/wbase*Ts//2 '
                                        */
  0.0,                                 /* Expression: SM.Sat
                                        * Referenced by: '<S79>/Constant2'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S79>/Switch1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S87>/Gain1'
                                        */

  /*  Expression: zeros(SM.nState,SM.nState)
   * Referenced by: '<S87>/u1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.018849555921538759,                /* Expression: SM.web*Ts
                                        * Referenced by: '<S98>/wbase*Ts'
                                        */
  5.0E-5,                              /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                        * Referenced by: '<S99>/Discrete-Time Integrator1'
                                        */
  0.0,                                 /* Expression: SM.tho
                                        * Referenced by: '<S99>/Discrete-Time Integrator1'
                                        */
  376.99111843077515,                  /* Expression: SM.web
                                        * Referenced by: '<S99>/web2'
                                        */

  /*  Expression: SM.phiqd0
   * Referenced by: '<S90>/fluxes'
   */
  { -0.0, 1.0000000000000002, 1.2100244476188935, 1.0000000000000002, -0.0 },
  0.0,                                 /* Expression: SM.Sat
                                        * Referenced by: '<S79>/Constant1'
                                        */
  0.0,                                 /* Expression: SM.Sat
                                        * Referenced by: '<S79>/Constant3'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S79>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S99>/nom. speed'
                                        */
  5.0E-5,                              /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S99>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: SM.dwo
                                        * Referenced by: '<S99>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/voltages'
                                        */
  5.0E-5,                              /* Expression: Ts
                                        * Referenced by: '<S90>/IC'
                                        */

  /*  Expression: SM.IqdSign
   * Referenced by: '<S79>/change Iq Id  current signs'
   */
  { -1.0, -1.0, 1.0, 1.0, 1.0 },
  1063.1465897496432,                  /* Expression: SM.ib
                                        * Referenced by: '<S81>/ib'
                                        */
  1.0,                                 /* Expression: SM.ctrl
                                        * Referenced by: '<S17>/Constant3'
                                        */

  /*  Expression: SM.phiqd0
   * Referenced by: '<S22>/fluxes'
   */
  { 0.0, 0.0, 0.0, 0.0 },
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S20>/Gain'
                                        */

  /*  Expression: SM.phiqd0
   * Referenced by: '<S20>/fluxes'
   */
  { 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: SM.ensat
                                        * Referenced by: '<S15>/Constant'
                                        */
  0.0,                                 /* Expression: SM.ensat
                                        * Referenced by: '<S15>/Constant1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch'
                                        */
  5.0E-5,                              /* Computed Parameter: DiscreteTimeIntegrator1_gainval_o
                                        * Referenced by: '<S38>/Discrete-Time Integrator1'
                                        */
  0.0,                                 /* Expression: SM.tho
                                        * Referenced by: '<S38>/Discrete-Time Integrator1'
                                        */
  5.0E-5,                              /* Computed Parameter: DiscreteTimeIntegrator_gainval_h
                                        * Referenced by: '<S38>/Discrete-Time Integrator'
                                        */
  1.0,                                 /* Expression: SM.wmo
                                        * Referenced by: '<S38>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S22>/voltages'
                                        */
  5.0E-5,                              /* Expression: Ts
                                        * Referenced by: '<S22>/IC'
                                        */
  1.0,                                 /* Expression: SM.ctrl
                                        * Referenced by: '<S18>/Constant2'
                                        */
  1.0,                                 /* Expression: SM.ctrl
                                        * Referenced by: '<S17>/Constant4'
                                        */
  571.03729628632846,                  /* Expression: SM.ib
                                        * Referenced by: '<S17>/ib'
                                        */
  43.316488957426472,                  /* Expression: InitialFlux
                                        * Referenced by: '<S102>/break  Alg.Loop'
                                        */

  /*  Expression: ST.SaturationFlux
   * Referenced by: '<S102>/Look-Up Table'
   */
  { -75.803855675496322, -64.9747334361397, 64.9747334361397, 75.803855675496322
  },

  /*  Expression: ST.SaturationCurrent
   * Referenced by: '<S102>/Look-Up Table'
   */
  { -195.95917942265424, -0.9797958971132712, 0.9797958971132712,
    195.95917942265424 },
  -43.316488957426472,                 /* Expression: InitialFlux
                                        * Referenced by: '<S103>/break  Alg.Loop'
                                        */

  /*  Expression: ST.SaturationFlux
   * Referenced by: '<S103>/Look-Up Table'
   */
  { -75.803855675496322, -64.9747334361397, 64.9747334361397, 75.803855675496322
  },

  /*  Expression: ST.SaturationCurrent
   * Referenced by: '<S103>/Look-Up Table'
   */
  { -195.95917942265424, -0.9797958971132712, 0.9797958971132712,
    195.95917942265424 },
  37.901927837748161,                  /* Expression: InitialFlux
                                        * Referenced by: '<S104>/break  Alg.Loop'
                                        */

  /*  Expression: ST.SaturationFlux
   * Referenced by: '<S104>/Look-Up Table'
   */
  { -75.803855675496322, -64.9747334361397, 64.9747334361397, 75.803855675496322
  },

  /*  Expression: ST.SaturationCurrent
   * Referenced by: '<S104>/Look-Up Table'
   */
  { -195.95917942265424, -0.9797958971132712, 0.9797958971132712,
    195.95917942265424 },
  20412.414523193154,                  /* Expression: Amplitude
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  376.99111843077515,                  /* Expression: 2*pi*Frequency
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  0.018848439715408175,                /* Computed Parameter: SineWaveA_Hsin
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  0.999822352380809,                   /* Computed Parameter: SineWaveA_HCos
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  -0.018848066368549365,               /* Computed Parameter: SineWaveA_PSin
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  0.99982235941899533,                 /* Computed Parameter: SineWaveA_PCos
                                        * Referenced by: '<S10>/Sine Wave A'
                                        */
  20412.414523193154,                  /* Expression: Amplitude
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  376.99111843077515,                  /* Expression: 2*pi*Frequency
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  0.018848439715408175,                /* Computed Parameter: SineWaveB_Hsin
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  0.999822352380809,                   /* Computed Parameter: SineWaveB_HCos
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  -0.856447529344271,                  /* Computed Parameter: SineWaveB_PSin
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  -0.51623408399687631,                /* Computed Parameter: SineWaveB_PCos
                                        * Referenced by: '<S10>/Sine Wave B'
                                        */
  20412.414523193154,                  /* Expression: Amplitude
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  376.99111843077515,                  /* Expression: 2*pi*Frequency
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  0.018848439715408175,                /* Computed Parameter: SineWaveC_Hsin
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  0.999822352380809,                   /* Computed Parameter: SineWaveC_HCos
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  0.87529559571282034,                 /* Computed Parameter: SineWaveC_PSin
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  -0.48358827542211869,                /* Computed Parameter: SineWaveC_PCos
                                        * Referenced by: '<S10>/Sine Wave C'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S7>/do not delete this gain'
                                        */
  1.0,                                 /* Expression: SM.ctrl
                                        * Referenced by: '<S16>/Constant3'
                                        */

  /*  Expression: [0;0]
   * Referenced by: '<S30>/Constant6'
   */
  { 0.0, 0.0 },
  0.00051031036307982872,              /* Expression: 1/SM.Vb
                                        * Referenced by: '<S16>/1_Vb'
                                        */
  1.0,                                 /* Expression: SM.ctrl
                                        * Referenced by: '<S16>/Constant4'
                                        */
  0.0,                                 /* Expression: SM.ensat
                                        * Referenced by: '<S15>/Constant5'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch2'
                                        */

  /*  Expression: [SM.ib2*ones(5,1);SM.phib2;SM.phib2;SM.Vb2;SM.Vb2;SM.ib2*ones(5,1);SM.phib2;SM.phib2;SM.Vb2;SM.Vb2; SM.phib2/SM.ib2]
   * Referenced by: '<S14>/unit conversion'
   */
  { 571.03729628632846, 571.03729628632846, 571.03729628632846,
    571.03729628632846, 571.03729628632846, 5.1979786748911749,
    5.1979786748911749, 1959.5917942265426, 1959.5917942265426,
    571.03729628632846, 571.03729628632846, 571.03729628632846,
    571.03729628632846, 571.03729628632846, 5.1979786748911749,
    5.1979786748911749, 1959.5917942265426, 1959.5917942265426,
    0.0091026955834506724 },

  /*  Expression: [1 -1]
   * Referenced by: '<S19>/1-1'
   */
  { 1.0, -1.0 },
  0.5,                                 /* Expression: 1/SM.p
                                        * Referenced by: '<S38>/1\p'
                                        */

  /*  Expression: [SM.Nb2;SM.Tb2;1]
   * Referenced by: '<S38>/1\p1'
   */
  { 188.49555921538757, 8904.719065991545, 1.0 },
  9.5492965855137211,                  /* Expression: 60/2/pi
                                        * Referenced by: '<Root>/RPM'
                                        */
  7964.0,                              /* Expression: 7964
                                        * Referenced by: '<Root>/Torque (N.m)'
                                        */
  0.00011230000549025176,              /* Expression: 1/SM.Tb2
                                        * Referenced by: '<S38>/1_Tb2'
                                        */
  0.0,                                 /* Expression: SM.F
                                        * Referenced by: '<S38>/F'
                                        */
  0.739643054223266,                   /* Expression: 1/(2*SM.H)
                                        * Referenced by: '<S38>/1_2H'
                                        */
  376.99111843077515,                  /* Expression: SM.web
                                        * Referenced by: '<S38>/web_psb'
                                        */
  0.024,                               /* Expression: Td
                                        * Referenced by: '<S3>/ENGINE Td'
                                        */
  0.0,                                 /* Expression: Pm0
                                        * Referenced by: '<S3>/ENGINE Td'
                                        */
  1.0,                                 /* Expression: SM.Nb
                                        * Referenced by: '<S99>/units'
                                        */

  /*  Expression: [1 -1]
   * Referenced by: '<S86>/1-1'
   */
  { 1.0, -1.0 },
  1.0,                                 /* Expression: SM.Pb
                                        * Referenced by: '<S99>/units1'
                                        */
  5.0E-5,                              /* Computed Parameter: DiscreteTimeIntegrator2_gainval
                                        * Referenced by: '<S99>/Discrete-Time Integrator2'
                                        */
  0.0,                                 /* Expression: SM.tho
                                        * Referenced by: '<S99>/Discrete-Time Integrator2'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S99>/theta'
                                        */
  1.0,                                 /* Expression: SM.Pb/SM.Nb
                                        * Referenced by: '<S99>/units2'
                                        */
  1.4273,                              /* Expression: Efd0
                                        * Referenced by: '<S48>/Unit Delay'
                                        */

  /*  Expression: SM.Laq*SM.One_Llq
   * Referenced by: '<S88>/Laq//Ll_q'
   */
  { 0.82395896957123882, 0.15108677581048419 },

  /*  Expression: [ SM.Lad/SM.Ll   SM.Lad/SM.Llfd   SM.Lad/SM.Llkd ]
   * Referenced by: '<S88>/Lad//Ll_d'
   */
  { 0.82395896957123926, 0.079957766921862919, 0.079290177676293552 },
  0.00051031036307982872,              /* Expression: 1/SM.Vb
                                        * Referenced by: '<S80>/1_Vb'
                                        */
  0.0,                                 /* Expression: SM.Sat
                                        * Referenced by: '<S79>/Constant5'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S79>/Switch2'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S85>/Gain'
                                        */
  1.0,                                 /* Expression: SM.Gain1
                                        * Referenced by: '<S83>/Gain'
                                        */
  1.0,                                 /* Expression: SM.Gain1
                                        * Referenced by: '<S83>/Gain1'
                                        */

  /*  Expression: [SM.Ib2*ones(1,5),SM.N2,SM.Ib2,SM.Ib2,SM.Ib2,SM.phib,SM.phib,SM.Vb2,SM.Vb2,(SM.phib/SM.Ib2)*ones(1,2),1,1,1]
   * Referenced by: '<S78>/output formatting'
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.5288407376141093, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /*  Computed Parameter: CONTROLSYSTEM_A
   * Referenced by: '<S3>/CONTROL SYSTEM'
   */
  { -50.0, -5000.0 },

  /*  Computed Parameter: CONTROLSYSTEM_C
   * Referenced by: '<S3>/CONTROL SYSTEM'
   */
  { 1000.0, 5000.0 },
  40.0,                                /* Expression: K
                                        * Referenced by: '<S3>/Gain K'
                                        */
  0.0,                                 /* Expression: Pm0
                                        * Referenced by: '<S3>/Integrator'
                                        */
  1.1,                                 /* Expression: Tlim(2)
                                        * Referenced by: '<S3>/Integrator'
                                        */
  0.0,                                 /* Expression: Tlim(1)
                                        * Referenced by: '<S3>/Integrator'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/wref (pu)'
                                        */
  -111.11111111111111,                 /* Computed Parameter: TF1_A
                                        * Referenced by: '<S3>/TF1'
                                        */
  -2975.3086419753085,                 /* Computed Parameter: TF1_C
                                        * Referenced by: '<S3>/TF1'
                                        */
  27.777777777777779,                  /* Computed Parameter: TF1_D
                                        * Referenced by: '<S3>/TF1'
                                        */
  -26.041666666666668,                 /* Computed Parameter: TF2_A
                                        * Referenced by: '<S3>/TF2'
                                        */
  26.041666666666668,                  /* Computed Parameter: TF2_C
                                        * Referenced by: '<S3>/TF2'
                                        */
  5.0E-5,                              /* Computed Parameter: DiscreteTimeIntegrator_gainval_g
                                        * Referenced by: '<S48>/Discrete-Time Integrator'
                                        */
  1.59201042,                          /* Expression: Ve0
                                        * Referenced by: '<S48>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: inf
                                        * Referenced by: '<S48>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Discrete-Time Integrator'
                                        */
  5.0E-5,                              /* Computed Parameter: DiscreteTimeIntegrator_gainval_i
                                        * Referenced by: '<S53>/Discrete-Time Integrator'
                                        */
  2.1585993611852414,                  /* Expression: Vfe0
                                        * Referenced by: '<S53>/Discrete-Time Integrator'
                                        */
  14.5,                                /* Expression: VAmax
                                        * Referenced by: '<S53>/Discrete-Time Integrator'
                                        */
  -14.5,                               /* Expression: VAmin
                                        * Referenced by: '<S53>/Discrete-Time Integrator'
                                        */
  6.03,                                /* Expression: VRmax
                                        * Referenced by: '<S48>/VRmin'
                                        */
  -5.43,                               /* Expression: VRmin
                                        * Referenced by: '<S48>/VRmin'
                                        */

  /*  Expression: [0 Ve2 Ve1]
   * Referenced by: '<S51>/Saturation'
   */
  { 0.0, 3.14, 4.18 },

  /*  Expression: [0 SeVe2 SeVe1]
   * Referenced by: '<S51>/Saturation'
   */
  { 0.0, 0.03, 0.1 },
  1.0,                                 /* Expression: Ke
                                        * Referenced by: '<S48>/Gain3'
                                        */
  0.38,                                /* Expression: Kd
                                        * Referenced by: '<S48>/Gain1'
                                        */
  1.25,                                /* Expression: 1/Te
                                        * Referenced by: '<S48>/Gain'
                                        */
  0.99750312109862671,                 /* Computed Parameter: DiscreteStateSpace_A
                                        * Referenced by: '<S49>/Discrete State-Space'
                                        */
  0.99875156054931336,                 /* Computed Parameter: DiscreteStateSpace_B
                                        * Referenced by: '<S49>/Discrete State-Space'
                                        */
  0.0024968789013732834,               /* Computed Parameter: DiscreteStateSpace_C
                                        * Referenced by: '<S49>/Discrete State-Space'
                                        */
  0.0012484394506866417,               /* Computed Parameter: DiscreteStateSpace_D
                                        * Referenced by: '<S49>/Discrete State-Space'
                                        */
  400.0,                               /* Expression: x0d
                                        * Referenced by: '<S49>/Discrete State-Space'
                                        */
  0.2,                                 /* Expression: Kc
                                        * Referenced by: '<S50>/Gain'
                                        */
  0.433,                               /* Expression: 0.433
                                        * Referenced by: '<S50>/input'
                                        */
  0.75,                                /* Expression: 0.75
                                        * Referenced by: '<S50>/input1'
                                        */
  1.0,                                 /* Expression: 1.0
                                        * Referenced by: '<S50>/input2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Vtref (pu) '
                                        */
  0.0053964984029631034,               /* Expression: Vfe0/Ka
                                        * Referenced by: '<S48>/Vfe0//Ka'
                                        */
  0.03,                                /* Expression: Kf/Tf
                                        * Referenced by: '<S54>/Gain2'
                                        */
  0.99997500062497913,                 /* Expression: sps.D
                                        * Referenced by: '<S63>/D'
                                        */
  1295.1596167111447,                  /* Expression: sps.x0
                                        * Referenced by: '<S63>/Delay_x'
                                        */
  -4.9998750031248959E-5,              /* Expression: sps.C
                                        * Referenced by: '<S63>/C'
                                        */
  0.0,                                 /* Expression: sps.x0
                                        * Referenced by: '<S60>/Delay_x'
                                        */
  0.0,                                 /* Expression: sps.A
                                        * Referenced by: '<S60>/A'
                                        */
  0.0,                                 /* Expression: sps.B
                                        * Referenced by: '<S60>/B'
                                        */
  0.0,                                 /* Expression: sps.C
                                        * Referenced by: '<S60>/C'
                                        */
  1.0,                                 /* Expression: sps.D
                                        * Referenced by: '<S60>/D'
                                        */
  400.0,                               /* Expression: Ka
                                        * Referenced by: '<S53>/Gain2'
                                        */
  50.0,                                /* Expression: 1/Ta
                                        * Referenced by: '<S53>/Gain1'
                                        */
  0.99995000124995836,                 /* Expression: sps.A
                                        * Referenced by: '<S63>/A'
                                        */
  0.99997500083330726,                 /* Expression: sps.B
                                        * Referenced by: '<S63>/B'
                                        */
  0.00016490609795779759,              /* Expression: SM.N
                                        * Referenced by: '<S77>/N'
                                        */

  /*  Expression: zeros(1, SM.nState-3)
   * Referenced by: '<S77>/[ Vkd =0 Vkq1=0  Vkq2=0 ]'
   */
  { 0.0, 0.0 },
  1.0,                                 /* Expression: 1/SM.Pb
                                        * Referenced by: '<S99>/1_Pb'
                                        */
  0.0,                                 /* Expression: SM.F
                                        * Referenced by: '<S99>/F1'
                                        */
  0.46728971962616822,                 /* Expression: 1/(2*SM.H)
                                        * Referenced by: '<S99>/1_(2H)'
                                        */
  376.99111843077515,                  /* Expression: SM.web
                                        * Referenced by: '<S99>/web1'
                                        */
  376.99111843077515,                  /* Expression: SM.web
                                        * Referenced by: '<S99>/web3'
                                        */
  2.5E-5,                              /* Computed Parameter: DiscreteTimeIntegrator_gainval_m
                                        * Referenced by: '<S102>/Discrete-Time Integrator'
                                        */
  43.316488957426472,                  /* Expression: InitialFlux
                                        * Referenced by: '<S102>/Discrete-Time Integrator'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S102>/Gain'
                                        */
  43.316488957426472,                  /* Expression: InitialFlux
                                        * Referenced by: '<S102>/Prediction'
                                        */
  2.5E-5,                              /* Computed Parameter: DiscreteTimeIntegrator_gainval_mg
                                        * Referenced by: '<S103>/Discrete-Time Integrator'
                                        */
  -43.316488957426472,                 /* Expression: InitialFlux
                                        * Referenced by: '<S103>/Discrete-Time Integrator'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S103>/Gain'
                                        */
  -43.316488957426472,                 /* Expression: InitialFlux
                                        * Referenced by: '<S103>/Prediction'
                                        */
  2.5E-5,                              /* Computed Parameter: DiscreteTimeIntegrator_gainval_n
                                        * Referenced by: '<S104>/Discrete-Time Integrator'
                                        */
  37.901927837748161,                  /* Expression: InitialFlux
                                        * Referenced by: '<S104>/Discrete-Time Integrator'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S104>/Gain'
                                        */
  37.901927837748161,                  /* Expression: InitialFlux
                                        * Referenced by: '<S104>/Prediction'
                                        */
  0,                                   /* Expression: SM.nState==6
                                        * Referenced by: '<S89>/Constant1'
                                        */
  0,                                   /* Expression: SM.nState==6
                                        * Referenced by: '<S89>/Constant2'
                                        */
  1,                                   /* Expression: SM.ctrl==1
                                        * Referenced by: '<S18>/Constant'
                                        */
  0,                                   /* Expression: SM.ctrl==2
                                        * Referenced by: '<S18>/Constant1'
                                        */
  0,                                   /* Expression: SM.ctrl==3
                                        * Referenced by: '<S18>/Constant3'
                                        */
  1,                                   /* Expression: SM.ctrl==1
                                        * Referenced by: '<S17>/Constant'
                                        */
  0,                                   /* Expression: SM.ctrl==2
                                        * Referenced by: '<S17>/Constant1'
                                        */
  0,                                   /* Expression: SM.ctrl==3
                                        * Referenced by: '<S17>/Constant2'
                                        */
  1,                                   /* Expression: SM.ctrl==1
                                        * Referenced by: '<S16>/Constant'
                                        */
  0,                                   /* Expression: SM.ctrl==2
                                        * Referenced by: '<S16>/Constant1'
                                        */
  0,                                   /* Expression: SM.ctrl==3
                                        * Referenced by: '<S16>/Constant2'
                                        */
  0                                    /* Expression: SM.nState==6
                                        * Referenced by: '<S78>/Constant1'
                                        */
};
