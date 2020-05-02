/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_a_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_a_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 40ULL;
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 4;
  out.mJc[3] = 11;
  out.mJc[4] = 18;
  out.mJc[5] = 25;
  out.mJc[6] = 28;
  out.mJc[7] = 31;
  out.mJc[8] = 34;
  out.mJc[9] = 37;
  out.mJc[10] = 39;
  out.mJc[11] = 41;
  out.mJc[12] = 43;
  out.mJc[13] = 45;
  out.mJc[14] = 47;
  out.mJc[15] = 49;
  out.mJc[16] = 51;
  out.mJc[17] = 53;
  out.mJc[18] = 55;
  out.mJc[19] = 57;
  out.mJc[20] = 59;
  out.mJc[21] = 61;
  out.mJc[22] = 64;
  out.mJc[23] = 67;
  out.mJc[24] = 70;
  out.mJc[25] = 73;
  out.mJc[26] = 73;
  out.mJc[27] = 73;
  out.mJc[28] = 73;
  out.mJc[29] = 73;
  out.mJc[30] = 73;
  out.mJc[31] = 73;
  out.mJc[32] = 73;
  out.mJc[33] = 73;
  out.mJc[34] = 73;
  out.mJc[35] = 73;
  out.mJc[36] = 73;
  out.mJc[37] = 73;
  out.mJc[38] = 73;
  out.mJc[39] = 73;
  out.mJc[40] = 73;
  out.mIr[0] = 1;
  out.mIr[1] = 8;
  out.mIr[2] = 0;
  out.mIr[3] = 8;
  out.mIr[4] = 2;
  out.mIr[5] = 3;
  out.mIr[6] = 4;
  out.mIr[7] = 5;
  out.mIr[8] = 6;
  out.mIr[9] = 7;
  out.mIr[10] = 9;
  out.mIr[11] = 2;
  out.mIr[12] = 3;
  out.mIr[13] = 4;
  out.mIr[14] = 5;
  out.mIr[15] = 6;
  out.mIr[16] = 7;
  out.mIr[17] = 9;
  out.mIr[18] = 2;
  out.mIr[19] = 3;
  out.mIr[20] = 4;
  out.mIr[21] = 5;
  out.mIr[22] = 6;
  out.mIr[23] = 7;
  out.mIr[24] = 9;
  out.mIr[25] = 2;
  out.mIr[26] = 3;
  out.mIr[27] = 4;
  out.mIr[28] = 2;
  out.mIr[29] = 3;
  out.mIr[30] = 4;
  out.mIr[31] = 2;
  out.mIr[32] = 3;
  out.mIr[33] = 4;
  out.mIr[34] = 0;
  out.mIr[35] = 1;
  out.mIr[36] = 8;
  out.mIr[37] = 0;
  out.mIr[38] = 8;
  out.mIr[39] = 0;
  out.mIr[40] = 8;
  out.mIr[41] = 0;
  out.mIr[42] = 8;
  out.mIr[43] = 0;
  out.mIr[44] = 8;
  out.mIr[45] = 0;
  out.mIr[46] = 8;
  out.mIr[47] = 0;
  out.mIr[48] = 8;
  out.mIr[49] = 0;
  out.mIr[50] = 8;
  out.mIr[51] = 0;
  out.mIr[52] = 8;
  out.mIr[53] = 0;
  out.mIr[54] = 8;
  out.mIr[55] = 0;
  out.mIr[56] = 8;
  out.mIr[57] = 0;
  out.mIr[58] = 8;
  out.mIr[59] = 0;
  out.mIr[60] = 8;
  out.mIr[61] = 2;
  out.mIr[62] = 3;
  out.mIr[63] = 4;
  out.mIr[64] = 2;
  out.mIr[65] = 3;
  out.mIr[66] = 4;
  out.mIr[67] = 2;
  out.mIr[68] = 3;
  out.mIr[69] = 4;
  out.mIr[70] = 2;
  out.mIr[71] = 3;
  out.mIr[72] = 4;
  (void)sys;
  (void)t2;
  return 0;
}
