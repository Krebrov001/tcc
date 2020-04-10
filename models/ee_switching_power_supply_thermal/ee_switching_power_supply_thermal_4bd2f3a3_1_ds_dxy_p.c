/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxy_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxy_p(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXY_P;
  out.mNumCol = 38ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 3;
  out.mJc[3] = 4;
  out.mJc[4] = 4;
  out.mJc[5] = 4;
  out.mJc[6] = 4;
  out.mJc[7] = 4;
  out.mJc[8] = 5;
  out.mJc[9] = 6;
  out.mJc[10] = 6;
  out.mJc[11] = 6;
  out.mJc[12] = 7;
  out.mJc[13] = 8;
  out.mJc[14] = 8;
  out.mJc[15] = 9;
  out.mJc[16] = 10;
  out.mJc[17] = 11;
  out.mJc[18] = 11;
  out.mJc[19] = 11;
  out.mJc[20] = 11;
  out.mJc[21] = 11;
  out.mJc[22] = 11;
  out.mJc[23] = 11;
  out.mJc[24] = 11;
  out.mJc[25] = 11;
  out.mJc[26] = 11;
  out.mJc[27] = 11;
  out.mJc[28] = 11;
  out.mJc[29] = 11;
  out.mJc[30] = 11;
  out.mJc[31] = 11;
  out.mJc[32] = 11;
  out.mJc[33] = 11;
  out.mJc[34] = 11;
  out.mJc[35] = 11;
  out.mJc[36] = 11;
  out.mJc[37] = 12;
  out.mJc[38] = 13;
  out.mIr[0] = 0;
  out.mIr[1] = 3;
  out.mIr[2] = 0;
  out.mIr[3] = 0;
  out.mIr[4] = 1;
  out.mIr[5] = 1;
  out.mIr[6] = 2;
  out.mIr[7] = 2;
  out.mIr[8] = 0;
  out.mIr[9] = 0;
  out.mIr[10] = 0;
  out.mIr[11] = 1;
  out.mIr[12] = 2;
  (void)sys;
  (void)t2;
  return 0;
}
