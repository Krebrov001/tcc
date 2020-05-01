/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ee_marine_electrical_system_data.c
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

#include "ee_marine_electrical_system.h"

/* Constant parameters (default storage) */
const ConstP rtConstP = {
  /* Expression: rep_seq_y
   * Referenced by: '<S5>/Look-Up Table1'
   */
  { 100.0, 100.0, 10.0, 2.0, 2.0, 10.0, 100.0, 100.0 },

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S5>/Look-Up Table1'
   */
  { 0.0, 20.0, 27.0, 30.0, 40.0, 43.0, 50.0, 100.0 },

  /* Expression: rep_seq_y
   * Referenced by: '<S4>/Look-Up Table1'
   */
  { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S4>/Look-Up Table1'
   */
  { 0.0, 9.99, 10.0, 59.9, 60.0, 100.0 },

  /* Pooled Parameter (Expression: [0 E_2 E_1])
   * Referenced by:
   *   '<S35>/Saturation'
   *   '<S77>/Saturation'
   */
  { 0.0, 3.14, 4.18 },

  /* Pooled Parameter (Expression: [0 S_E_E2 S_E_E1])
   * Referenced by:
   *   '<S35>/Saturation'
   *   '<S77>/Saturation'
   */
  { 0.0, 0.03, 0.1 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
