/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_assert.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_assert(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t7, NeDsMethodOutput *t8)
{
  PmIntVector out;
  boolean_T t0;
  boolean_T t1;
  boolean_T t2;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T M_idx_39;
  int32_T M_idx_40;
  real_T X_idx_9;
  real_T X_idx_13;
  Q_idx_0 = t7->mQ.mX[0];
  Q_idx_1 = t7->mQ.mX[1];
  Q_idx_2 = t7->mQ.mX[2];
  M_idx_39 = t7->mM.mX[39];
  M_idx_40 = t7->mM.mX[40];
  X_idx_9 = t7->mX.mX[9];
  X_idx_13 = t7->mX.mX[13];
  out = t8->mASSERT;
  if (Q_idx_0 >= 1) {
    t0 = (Q_idx_0 <= 3);
  } else {
    t0 = false;
  }

  if (Q_idx_1 >= 1) {
    t1 = (Q_idx_1 <= 7);
  } else {
    t1 = false;
  }

  if (Q_idx_2 >= 1) {
    t2 = (Q_idx_2 <= 7);
  } else {
    t2 = false;
  }

  out.mX[0] = (int32_T)t0;
  out.mX[1] = (int32_T)t1;
  out.mX[2] = (int32_T)t2;
  out.mX[3] = (int32_T)(M_idx_39 != 0);
  out.mX[4] = (int32_T)(M_idx_40 != 0);
  out.mX[5] = 1;
  out.mX[6] = 1;
  out.mX[7] = 1;
  out.mX[8] = 1;
  out.mX[9] = 1;
  out.mX[10] = 1;
  out.mX[11] = 1;
  out.mX[12] = 1;
  out.mX[13] = (int32_T)(X_idx_9 / 298.15 != 0.0);
  out.mX[14] = (int32_T)(X_idx_9 / 298.15 >= 0.0);
  out.mX[15] = (int32_T)(X_idx_13 / 298.15 != 0.0);
  out.mX[16] = (int32_T)(X_idx_13 / 298.15 >= 0.0);
  out.mX[17] = 1;
  out.mX[18] = 1;
  out.mX[19] = 1;
  out.mX[20] = 1;
  out.mX[21] = 1;
  out.mX[22] = 1;
  out.mX[23] = 1;
  out.mX[24] = 1;
  out.mX[25] = 1;
  out.mX[26] = 1;
  out.mX[27] = 1;
  out.mX[28] = 1;
  out.mX[29] = 1;
  out.mX[30] = 1;
  out.mX[31] = 1;
  out.mX[32] = 1;
  out.mX[33] = 1;
  out.mX[34] = 1;
  out.mX[35] = 1;
  out.mX[36] = 1;
  out.mX[37] = 1;
  out.mX[38] = 1;
  out.mX[39] = 1;
  out.mX[40] = 1;
  out.mX[41] = 1;
  out.mX[42] = 1;
  out.mX[43] = 1;
  out.mX[44] = 1;
  out.mX[45] = 1;
  (void)sys;
  (void)t8;
  return 0;
}
