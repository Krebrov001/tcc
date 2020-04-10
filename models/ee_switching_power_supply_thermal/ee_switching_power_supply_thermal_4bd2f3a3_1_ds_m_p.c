/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_m_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_m_p(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mM_P;
  out.mNumCol = 38ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 7;
  out.mJc[8] = 8;
  out.mJc[9] = 9;
  out.mJc[10] = 10;
  out.mJc[11] = 11;
  out.mJc[12] = 12;
  out.mJc[13] = 13;
  out.mJc[14] = 14;
  out.mJc[15] = 14;
  out.mJc[16] = 14;
  out.mJc[17] = 14;
  out.mJc[18] = 14;
  out.mJc[19] = 14;
  out.mJc[20] = 14;
  out.mJc[21] = 14;
  out.mJc[22] = 14;
  out.mJc[23] = 14;
  out.mJc[24] = 14;
  out.mJc[25] = 14;
  out.mJc[26] = 14;
  out.mJc[27] = 14;
  out.mJc[28] = 14;
  out.mJc[29] = 14;
  out.mJc[30] = 14;
  out.mJc[31] = 14;
  out.mJc[32] = 14;
  out.mJc[33] = 14;
  out.mJc[34] = 14;
  out.mJc[35] = 14;
  out.mJc[36] = 14;
  out.mJc[37] = 14;
  out.mJc[38] = 14;
  out.mIr[0] = 0;
  out.mIr[1] = 2;
  out.mIr[2] = 3;
  out.mIr[3] = 1;
  out.mIr[4] = 5;
  out.mIr[5] = 9;
  out.mIr[6] = 4;
  out.mIr[7] = 7;
  out.mIr[8] = 12;
  out.mIr[9] = 6;
  out.mIr[10] = 8;
  out.mIr[11] = 11;
  out.mIr[12] = 13;
  out.mIr[13] = 10;
  (void)sys;
  (void)t2;
  return 0;
}
