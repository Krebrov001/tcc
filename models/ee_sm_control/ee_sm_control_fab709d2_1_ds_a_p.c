/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_a_p.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_a_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_2[332] = { 3, 11, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    41, 0, 1, 2, 24, 25, 26, 0, 1, 2, 24, 25, 26, 0, 1, 2, 24, 25, 26, 8, 27, 29,
    10, 28, 30, 6, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 29, 30, 27, 28, 7, 8,
    27, 29, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 33, 34, 35, 36, 37, 38,
    39, 40, 41, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 33, 34, 35, 36, 37,
    38, 39, 40, 41, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 33, 34, 35, 36,
    37, 38, 39, 40, 41, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 33, 34, 35,
    36, 37, 38, 39, 40, 41, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 33, 34,
    35, 36, 37, 38, 39, 40, 41, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 0, 1, 2,
    6, 18, 19, 20, 21, 22, 23, 24, 25, 26, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    41, 0, 1, 2, 6, 18, 19, 20, 21, 22, 23, 24, 25, 26, 32, 33, 34, 35, 36, 37,
    38, 39, 40, 41, 0, 1, 2, 6, 18, 19, 20, 21, 22, 23, 24, 25, 26, 32, 33, 34,
    35, 36, 37, 38, 39, 40, 41, 18, 19, 20, 18, 19, 20, 18, 19, 20, 18, 19, 20,
    24, 25, 26, 18, 19, 20, 24, 25, 26, 18, 19, 20, 24, 25, 26, 21, 22, 23, 21,
    22, 23, 21, 22, 23, 21, 22, 23, 24, 25, 26, 21, 22, 23, 24, 25, 26, 21, 22,
    23, 24, 25, 26, 3, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 4, 8, 27, 29,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 9, 10, 28, 30, 5, 10, 28, 30, 32, 33,
    34, 35, 36, 37, 38, 39, 40, 41 };

  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 42ULL;
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 12;
  out.mJc[2] = 18;
  out.mJc[3] = 24;
  out.mJc[4] = 30;
  out.mJc[5] = 30;
  out.mJc[6] = 33;
  out.mJc[7] = 36;
  out.mJc[8] = 47;
  out.mJc[9] = 48;
  out.mJc[10] = 49;
  out.mJc[11] = 50;
  out.mJc[12] = 51;
  out.mJc[13] = 65;
  out.mJc[14] = 75;
  out.mJc[15] = 85;
  out.mJc[16] = 95;
  out.mJc[17] = 105;
  out.mJc[18] = 115;
  out.mJc[19] = 125;
  out.mJc[20] = 135;
  out.mJc[21] = 145;
  out.mJc[22] = 155;
  out.mJc[23] = 165;
  out.mJc[24] = 188;
  out.mJc[25] = 211;
  out.mJc[26] = 234;
  out.mJc[27] = 237;
  out.mJc[28] = 240;
  out.mJc[29] = 243;
  out.mJc[30] = 249;
  out.mJc[31] = 255;
  out.mJc[32] = 261;
  out.mJc[33] = 264;
  out.mJc[34] = 267;
  out.mJc[35] = 270;
  out.mJc[36] = 276;
  out.mJc[37] = 282;
  out.mJc[38] = 288;
  out.mJc[39] = 300;
  out.mJc[40] = 314;
  out.mJc[41] = 318;
  out.mJc[42] = 332;
  for (b = 0; b < 332; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
