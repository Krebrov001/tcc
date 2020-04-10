/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxf_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxf_p(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 38ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 6;
  out.mJc[3] = 7;
  out.mJc[4] = 7;
  out.mJc[5] = 10;
  out.mJc[6] = 12;
  out.mJc[7] = 14;
  out.mJc[8] = 14;
  out.mJc[9] = 14;
  out.mJc[10] = 15;
  out.mJc[11] = 15;
  out.mJc[12] = 15;
  out.mJc[13] = 15;
  out.mJc[14] = 16;
  out.mJc[15] = 21;
  out.mJc[16] = 26;
  out.mJc[17] = 33;
  out.mJc[18] = 34;
  out.mJc[19] = 39;
  out.mJc[20] = 43;
  out.mJc[21] = 44;
  out.mJc[22] = 45;
  out.mJc[23] = 45;
  out.mJc[24] = 51;
  out.mJc[25] = 52;
  out.mJc[26] = 53;
  out.mJc[27] = 55;
  out.mJc[28] = 55;
  out.mJc[29] = 55;
  out.mJc[30] = 55;
  out.mJc[31] = 55;
  out.mJc[32] = 57;
  out.mJc[33] = 57;
  out.mJc[34] = 57;
  out.mJc[35] = 57;
  out.mJc[36] = 57;
  out.mJc[37] = 57;
  out.mJc[38] = 57;
  out.mIr[0] = 15;
  out.mIr[1] = 15;
  out.mIr[2] = 16;
  out.mIr[3] = 20;
  out.mIr[4] = 33;
  out.mIr[5] = 34;
  out.mIr[6] = 15;
  out.mIr[7] = 20;
  out.mIr[8] = 27;
  out.mIr[9] = 28;
  out.mIr[10] = 22;
  out.mIr[11] = 33;
  out.mIr[12] = 27;
  out.mIr[13] = 28;
  out.mIr[14] = 27;
  out.mIr[15] = 33;
  out.mIr[16] = 15;
  out.mIr[17] = 16;
  out.mIr[18] = 20;
  out.mIr[19] = 33;
  out.mIr[20] = 34;
  out.mIr[21] = 15;
  out.mIr[22] = 16;
  out.mIr[23] = 20;
  out.mIr[24] = 33;
  out.mIr[25] = 34;
  out.mIr[26] = 15;
  out.mIr[27] = 22;
  out.mIr[28] = 23;
  out.mIr[29] = 31;
  out.mIr[30] = 32;
  out.mIr[31] = 33;
  out.mIr[32] = 34;
  out.mIr[33] = 15;
  out.mIr[34] = 15;
  out.mIr[35] = 20;
  out.mIr[36] = 21;
  out.mIr[37] = 25;
  out.mIr[38] = 26;
  out.mIr[39] = 15;
  out.mIr[40] = 20;
  out.mIr[41] = 25;
  out.mIr[42] = 29;
  out.mIr[43] = 18;
  out.mIr[44] = 17;
  out.mIr[45] = 22;
  out.mIr[46] = 23;
  out.mIr[47] = 32;
  out.mIr[48] = 33;
  out.mIr[49] = 34;
  out.mIr[50] = 35;
  out.mIr[51] = 21;
  out.mIr[52] = 23;
  out.mIr[53] = 27;
  out.mIr[54] = 28;
  out.mIr[55] = 33;
  out.mIr[56] = 34;
  (void)sys;
  (void)t2;
  return 0;
}
