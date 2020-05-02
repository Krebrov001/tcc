/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_obs_il.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_obs_il(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[680];
  int32_T b;
  static boolean_T _cg_const_1[680] = { true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, false, true, true, true, true, true, true, true, false, true, true,
    true, true, true, true, true, false, true, true, true, true, true, true,
    true, false, true, true, true, true, true, true, true, false, true, true,
    true, true, true, true, true, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true, true,
    false, true, true, true, true, true, false, true, true, false, true, true,
    false, false, false, true, false, true, true, true, false, true, true, false,
    true, true, true, true, true, false, true, true, false, true, true, false,
    false, false, true, false, true, true, true, false, true, true, false, true,
    true, true, true, true, false, true, true, false, true, true, false, false,
    false, true, false, true, true, true, false, true, true, false, true, true,
    true, true, true, false, true, true, false, true, true, false, false, false,
    true, false, true, true, true, false, true, true, false, true, true, true,
    true, true, false, true, true, false, true, true, false, false, false, true,
    false, true, true, true, false, true, true, false, true, true, true, true,
    true, false, true, true, false, true, true, false, false, false, true, false,
    true, true, true, false, true, true, false, true, true, true, true, true,
    false, true, true, false, true, true, false, false, false, true, false, true,
    true, true, false, true, true, false, true, true, true, true, true, false,
    true, true, false, true, true, false, false, false, true, false, true, true,
    true, false, true, true, false, true, true, true, true, true, false, true,
    true, false, true, true, false, false, false, true, false, true, true, true,
    false, true, true, false, true, true, true, true, true, false, true, true,
    false, true, true, false, false, false, true, false, true, true, true, false,
    true, true, false, true, true, true, true, true, false, true, true, false,
    true, true, false, false, false, true, false, true, true, true, false, true,
    true, false, true, true, true, true, true, false, true, true, false, true,
    true, false, false, false, true, false, true, true, true, false, true, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true };

  (void)t1;
  out = t2->mOBS_IL;
  for (b = 0; b < 680; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 680; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
