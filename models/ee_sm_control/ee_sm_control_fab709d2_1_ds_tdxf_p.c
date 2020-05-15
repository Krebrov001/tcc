/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_tdxf_p.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_tdxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_2[382] = { 3, 4, 5, 11, 32, 33, 34, 35, 36, 37, 38,
    39, 40, 41, 0, 1, 2, 24, 25, 26, 0, 1, 2, 24, 25, 26, 0, 1, 2, 24, 25, 26, 4,
    5, 24, 25, 26, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 8, 27, 29, 10, 28, 30,
    6, 24, 25, 26, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 29, 30, 5, 27, 31, 4,
    28, 31, 7, 8, 27, 29, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 33, 34, 35,
    36, 37, 38, 39, 40, 41, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 33, 34,
    35, 36, 37, 38, 39, 40, 41, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 33,
    34, 35, 36, 37, 38, 39, 40, 41, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    41, 0, 1, 2, 4, 5, 6, 18, 19, 20, 21, 22, 23, 24, 25, 26, 32, 33, 34, 35, 36,
    37, 38, 39, 40, 41, 0, 1, 2, 4, 5, 6, 18, 19, 20, 21, 22, 23, 24, 25, 26, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 0, 1, 2, 4, 5, 6, 18, 19, 20, 21, 22, 23,
    24, 25, 26, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 12, 18, 19, 20, 13, 18,
    19, 20, 14, 18, 19, 20, 12, 18, 19, 20, 24, 25, 26, 13, 18, 19, 20, 24, 25,
    26, 14, 18, 19, 20, 24, 25, 26, 15, 21, 22, 23, 16, 21, 22, 23, 17, 21, 22,
    23, 15, 21, 22, 23, 24, 25, 26, 16, 21, 22, 23, 24, 25, 26, 17, 21, 22, 23,
    24, 25, 26, 3, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 4, 8, 24, 25, 26,
    27, 29, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 9, 10, 28, 30, 5, 10, 24,
    25, 26, 28, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41 };

  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 42ULL;
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 14;
  out.mJc[2] = 20;
  out.mJc[3] = 26;
  out.mJc[4] = 32;
  out.mJc[5] = 47;
  out.mJc[6] = 50;
  out.mJc[7] = 53;
  out.mJc[8] = 67;
  out.mJc[9] = 68;
  out.mJc[10] = 69;
  out.mJc[11] = 72;
  out.mJc[12] = 75;
  out.mJc[13] = 89;
  out.mJc[14] = 99;
  out.mJc[15] = 109;
  out.mJc[16] = 119;
  out.mJc[17] = 129;
  out.mJc[18] = 139;
  out.mJc[19] = 149;
  out.mJc[20] = 159;
  out.mJc[21] = 169;
  out.mJc[22] = 179;
  out.mJc[23] = 189;
  out.mJc[24] = 214;
  out.mJc[25] = 239;
  out.mJc[26] = 264;
  out.mJc[27] = 268;
  out.mJc[28] = 272;
  out.mJc[29] = 276;
  out.mJc[30] = 283;
  out.mJc[31] = 290;
  out.mJc[32] = 297;
  out.mJc[33] = 301;
  out.mJc[34] = 305;
  out.mJc[35] = 309;
  out.mJc[36] = 316;
  out.mJc[37] = 323;
  out.mJc[38] = 330;
  out.mJc[39] = 342;
  out.mJc[40] = 360;
  out.mJc[41] = 364;
  out.mJc[42] = 382;
  for (b = 0; b < 382; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
