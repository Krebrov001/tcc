/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slv.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slv(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = true;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  out.mX[31] = false;
  out.mX[32] = false;
  out.mX[33] = false;
  out.mX[34] = false;
  out.mX[35] = false;
  out.mX[36] = true;
  out.mX[37] = true;
  (void)sys;
  (void)t2;
  return 0;
}
