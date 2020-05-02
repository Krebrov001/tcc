/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_tdxf_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_tdxf_p(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_2[211] = { 1, 8, 16, 17, 22, 23, 28, 29, 30, 31, 36,
    37, 38, 39, 0, 8, 2, 3, 4, 5, 6, 7, 9, 10, 12, 14, 18, 24, 32, 2, 3, 4, 5, 6,
    7, 9, 10, 12, 14, 18, 24, 32, 2, 3, 4, 5, 6, 7, 9, 10, 12, 14, 18, 24, 32, 2,
    3, 4, 2, 3, 4, 2, 3, 4, 0, 1, 8, 16, 17, 22, 23, 28, 29, 30, 31, 36, 37, 38,
    39, 0, 8, 10, 16, 0, 8, 10, 17, 0, 8, 15, 22, 0, 8, 15, 23, 0, 8, 11, 28, 0,
    8, 11, 29, 0, 8, 12, 30, 0, 8, 12, 31, 0, 8, 13, 36, 0, 8, 13, 37, 0, 8, 14,
    38, 0, 8, 14, 39, 2, 3, 4, 2, 3, 4, 18, 19, 20, 21, 2, 3, 4, 24, 25, 26, 27,
    2, 3, 4, 32, 33, 34, 35, 10, 16, 17, 24, 25, 11, 26, 27, 28, 29, 12, 30, 31,
    32, 33, 13, 34, 35, 36, 37, 14, 18, 19, 38, 39, 15, 20, 21, 22, 23, 10, 11,
    24, 26, 10, 11, 24, 27, 12, 13, 32, 34, 12, 13, 32, 35, 14, 15, 18, 20, 14,
    15, 18, 21, 18, 19, 24, 25, 32, 33 };

  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 40ULL;
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 14;
  out.mJc[2] = 16;
  out.mJc[3] = 29;
  out.mJc[4] = 42;
  out.mJc[5] = 55;
  out.mJc[6] = 58;
  out.mJc[7] = 61;
  out.mJc[8] = 64;
  out.mJc[9] = 79;
  out.mJc[10] = 83;
  out.mJc[11] = 87;
  out.mJc[12] = 91;
  out.mJc[13] = 95;
  out.mJc[14] = 99;
  out.mJc[15] = 103;
  out.mJc[16] = 107;
  out.mJc[17] = 111;
  out.mJc[18] = 115;
  out.mJc[19] = 119;
  out.mJc[20] = 123;
  out.mJc[21] = 127;
  out.mJc[22] = 130;
  out.mJc[23] = 137;
  out.mJc[24] = 144;
  out.mJc[25] = 151;
  out.mJc[26] = 156;
  out.mJc[27] = 161;
  out.mJc[28] = 166;
  out.mJc[29] = 171;
  out.mJc[30] = 176;
  out.mJc[31] = 181;
  out.mJc[32] = 185;
  out.mJc[33] = 189;
  out.mJc[34] = 193;
  out.mJc[35] = 197;
  out.mJc[36] = 201;
  out.mJc[37] = 205;
  out.mJc[38] = 207;
  out.mJc[39] = 209;
  out.mJc[40] = 211;
  for (b = 0; b < 211; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
