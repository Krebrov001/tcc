/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_dxf_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_dxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_2[138] = { 16, 17, 22, 23, 28, 29, 30, 31, 36, 37, 38,
    39, 10, 12, 14, 18, 24, 32, 10, 12, 14, 18, 24, 32, 10, 12, 14, 18, 24, 32,
    16, 17, 22, 23, 28, 29, 30, 31, 36, 37, 38, 39, 10, 16, 10, 17, 15, 22, 15,
    23, 11, 28, 11, 29, 12, 30, 12, 31, 13, 36, 13, 37, 14, 38, 14, 39, 18, 19,
    20, 21, 24, 25, 26, 27, 32, 33, 34, 35, 10, 16, 17, 24, 25, 11, 26, 27, 28,
    29, 12, 30, 31, 32, 33, 13, 34, 35, 36, 37, 14, 18, 19, 38, 39, 15, 20, 21,
    22, 23, 10, 11, 24, 26, 10, 11, 24, 27, 12, 13, 32, 34, 12, 13, 32, 35, 14,
    15, 18, 20, 14, 15, 18, 21, 18, 19, 24, 25, 32, 33 };

  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 40ULL;
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 12;
  out.mJc[2] = 12;
  out.mJc[3] = 18;
  out.mJc[4] = 24;
  out.mJc[5] = 30;
  out.mJc[6] = 30;
  out.mJc[7] = 30;
  out.mJc[8] = 30;
  out.mJc[9] = 42;
  out.mJc[10] = 44;
  out.mJc[11] = 46;
  out.mJc[12] = 48;
  out.mJc[13] = 50;
  out.mJc[14] = 52;
  out.mJc[15] = 54;
  out.mJc[16] = 56;
  out.mJc[17] = 58;
  out.mJc[18] = 60;
  out.mJc[19] = 62;
  out.mJc[20] = 64;
  out.mJc[21] = 66;
  out.mJc[22] = 66;
  out.mJc[23] = 70;
  out.mJc[24] = 74;
  out.mJc[25] = 78;
  out.mJc[26] = 83;
  out.mJc[27] = 88;
  out.mJc[28] = 93;
  out.mJc[29] = 98;
  out.mJc[30] = 103;
  out.mJc[31] = 108;
  out.mJc[32] = 112;
  out.mJc[33] = 116;
  out.mJc[34] = 120;
  out.mJc[35] = 124;
  out.mJc[36] = 128;
  out.mJc[37] = 132;
  out.mJc[38] = 134;
  out.mJc[39] = 136;
  out.mJc[40] = 138;
  for (b = 0; b < 138; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
