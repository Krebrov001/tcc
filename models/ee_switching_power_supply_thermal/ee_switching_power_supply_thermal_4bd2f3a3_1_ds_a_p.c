/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_a_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_a_p(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 38ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 3;
  out.mJc[2] = 9;
  out.mJc[3] = 12;
  out.mJc[4] = 14;
  out.mJc[5] = 16;
  out.mJc[6] = 18;
  out.mJc[7] = 20;
  out.mJc[8] = 23;
  out.mJc[9] = 25;
  out.mJc[10] = 27;
  out.mJc[11] = 29;
  out.mJc[12] = 32;
  out.mJc[13] = 34;
  out.mJc[14] = 36;
  out.mJc[15] = 41;
  out.mJc[16] = 47;
  out.mJc[17] = 50;
  out.mJc[18] = 52;
  out.mJc[19] = 55;
  out.mJc[20] = 59;
  out.mJc[21] = 59;
  out.mJc[22] = 60;
  out.mJc[23] = 61;
  out.mJc[24] = 63;
  out.mJc[25] = 63;
  out.mJc[26] = 63;
  out.mJc[27] = 65;
  out.mJc[28] = 67;
  out.mJc[29] = 69;
  out.mJc[30] = 71;
  out.mJc[31] = 73;
  out.mJc[32] = 75;
  out.mJc[33] = 77;
  out.mJc[34] = 79;
  out.mJc[35] = 81;
  out.mJc[36] = 83;
  out.mJc[37] = 85;
  out.mJc[38] = 87;
  out.mIr[0] = 0;
  out.mIr[1] = 3;
  out.mIr[2] = 14;
  out.mIr[3] = 0;
  out.mIr[4] = 2;
  out.mIr[5] = 3;
  out.mIr[6] = 14;
  out.mIr[7] = 24;
  out.mIr[8] = 30;
  out.mIr[9] = 0;
  out.mIr[10] = 3;
  out.mIr[11] = 14;
  out.mIr[12] = 1;
  out.mIr[13] = 14;
  out.mIr[14] = 5;
  out.mIr[15] = 24;
  out.mIr[16] = 9;
  out.mIr[17] = 30;
  out.mIr[18] = 4;
  out.mIr[19] = 24;
  out.mIr[20] = 6;
  out.mIr[21] = 7;
  out.mIr[22] = 36;
  out.mIr[23] = 7;
  out.mIr[24] = 36;
  out.mIr[25] = 6;
  out.mIr[26] = 7;
  out.mIr[27] = 8;
  out.mIr[28] = 30;
  out.mIr[29] = 10;
  out.mIr[30] = 11;
  out.mIr[31] = 37;
  out.mIr[32] = 11;
  out.mIr[33] = 37;
  out.mIr[34] = 10;
  out.mIr[35] = 11;
  out.mIr[36] = 0;
  out.mIr[37] = 3;
  out.mIr[38] = 14;
  out.mIr[39] = 24;
  out.mIr[40] = 30;
  out.mIr[41] = 0;
  out.mIr[42] = 2;
  out.mIr[43] = 3;
  out.mIr[44] = 14;
  out.mIr[45] = 24;
  out.mIr[46] = 30;
  out.mIr[47] = 8;
  out.mIr[48] = 14;
  out.mIr[49] = 30;
  out.mIr[50] = 1;
  out.mIr[51] = 14;
  out.mIr[52] = 4;
  out.mIr[53] = 14;
  out.mIr[54] = 24;
  out.mIr[55] = 4;
  out.mIr[56] = 5;
  out.mIr[57] = 14;
  out.mIr[58] = 24;
  out.mIr[59] = 19;
  out.mIr[60] = 17;
  out.mIr[61] = 9;
  out.mIr[62] = 30;
  out.mIr[63] = 4;
  out.mIr[64] = 5;
  out.mIr[65] = 25;
  out.mIr[66] = 26;
  out.mIr[67] = 25;
  out.mIr[68] = 28;
  out.mIr[69] = 25;
  out.mIr[70] = 29;
  out.mIr[71] = 6;
  out.mIr[72] = 25;
  out.mIr[73] = 8;
  out.mIr[74] = 9;
  out.mIr[75] = 31;
  out.mIr[76] = 32;
  out.mIr[77] = 31;
  out.mIr[78] = 34;
  out.mIr[79] = 31;
  out.mIr[80] = 35;
  out.mIr[81] = 10;
  out.mIr[82] = 31;
  out.mIr[83] = 12;
  out.mIr[84] = 36;
  out.mIr[85] = 13;
  out.mIr[86] = 37;
  (void)sys;
  (void)t2;
  return 0;
}
