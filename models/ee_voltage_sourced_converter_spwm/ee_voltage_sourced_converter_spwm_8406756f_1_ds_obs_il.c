/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_obs_il.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_obs_il(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[374];
  int32_T b;
  static boolean_T _cg_const_1[374] = { true, true, true, true, true, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, true, false, true, true, true, true, true, true,
    false, true, true, false, true, true, false, false, false, true, true, false,
    true, true, true, false, true, false, true, true, true, true, true, true,
    false, true, true, false, true, true, false, false, false, true, true, false,
    true, true, true, false, true, false, true, true, true, true, true, true,
    false, true, true, false, true, true, false, false, false, true, true, false,
    true, true, true, false, true, false, true, true, true, true, true, true,
    false, true, true, false, true, true, false, false, false, true, true, false,
    true, true, true, false, true, false, true, true, true, true, true, true,
    false, true, true, false, true, true, false, false, false, true, true, false,
    true, true, true, false, true, false, true, true, true, true, true, true,
    false, true, true, false, true, true, false, false, false, true, true, false,
    true, true, true, false, true, true, true, true, false, true, false, true,
    false, true, false, true, false, true, false, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, false, true, true, true, true, true, true, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false };

  (void)t1;
  out = t2->mOBS_IL;
  for (b = 0; b < 374; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 374; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
