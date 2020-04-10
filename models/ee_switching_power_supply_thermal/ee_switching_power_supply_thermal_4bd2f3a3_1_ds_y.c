/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_y.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_y(const NeDynamicSystem *
  sys, const NeDynamicSystemInput *t2, NeDsMethodOutput *t3)
{
  PmRealVector out;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_2;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_36;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_37;
  X_idx_0 = t2->mX.mX[0];
  X_idx_1 = t2->mX.mX[1];
  X_idx_2 = t2->mX.mX[2];
  X_idx_7 = t2->mX.mX[7];
  X_idx_8 = t2->mX.mX[8];
  X_idx_11 = t2->mX.mX[11];
  X_idx_12 = t2->mX.mX[12];
  X_idx_14 = t2->mX.mX[14];
  X_idx_15 = t2->mX.mX[15];
  X_idx_16 = t2->mX.mX[16];
  X_idx_36 = t2->mX.mX[36];
  X_idx_37 = t2->mX.mX[37];
  out = t3->mY;
  out.mX[0] = ((((X_idx_0 * -0.0001 + X_idx_1 * -0.0001) + -X_idx_2) + X_idx_14 *
                -1.000001) + X_idx_15 * -1.0000010001) + X_idx_16;
  out.mX[1] = ((X_idx_7 * 0.00042016806722689078 + X_idx_8 *
                -0.00042016806722689078) + -X_idx_36) * 1000.0;
  out.mX[2] = ((X_idx_11 * 0.00042016806722689078 + X_idx_12 *
                -0.00042016806722689078) + -X_idx_37) * 1000.0;
  out.mX[3] = -X_idx_0 / -1.0;
  (void)sys;
  (void)t3;
  return 0;
}
