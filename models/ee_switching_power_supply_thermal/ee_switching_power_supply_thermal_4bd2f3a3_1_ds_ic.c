/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_ic.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_ic(const NeDynamicSystem
  *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T P_R_idx_0;
  real_T P_R_idx_1;
  P_R_idx_0 = t1->mP_R.mX[0];
  P_R_idx_1 = t1->mP_R.mX[1];
  out = t2->mIC;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 373.0;
  out.mX[8] = P_R_idx_0;
  out.mX[9] = 431.0;
  out.mX[10] = 0.0;
  out.mX[11] = 332.0;
  out.mX[12] = P_R_idx_1;
  out.mX[13] = 358.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  out.mX[29] = 0.0;
  out.mX[30] = 0.0;
  out.mX[31] = 0.0;
  out.mX[32] = 0.0;
  out.mX[33] = 0.0;
  out.mX[34] = 0.0;
  out.mX[35] = 0.0;
  out.mX[36] = 0.0;
  out.mX[37] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}
