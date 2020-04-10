/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_il.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_il(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  boolean_T t0[254];
  int32_T b;
  static boolean_T _cg_const_1[254] = { false, true, true, true, true, true,
    true, true, true, true, true, true, true, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, true, true, true, true, true, true, true, true, true, false, true,
    false, false, true, true, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  (void)t1;
  out = t2->mOBS_IL;
  for (b = 0; b < 254; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 254; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
