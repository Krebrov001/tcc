/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_a_p.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_a_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_2[191] = { 0, 6, 15, 16, 17, 18, 19, 20, 21, 22, 3,
    15, 16, 17, 18, 19, 20, 21, 22, 12, 2, 10, 13, 1, 11, 3, 7, 8, 9, 15, 16, 17,
    18, 19, 20, 21, 22, 23, 24, 25, 3, 7, 8, 9, 15, 16, 17, 18, 19, 20, 21, 22,
    23, 24, 25, 3, 7, 8, 9, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 7, 8, 9,
    23, 24, 25, 7, 8, 9, 23, 24, 25, 7, 8, 9, 23, 24, 25, 6, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 4, 10, 12, 1, 10, 12, 15, 16, 17, 18, 19, 20, 21, 22, 5, 11,
    13, 2, 11, 13, 15, 16, 17, 18, 19, 20, 21, 22, 15, 16, 17, 18, 19, 20, 21,
    22, 15, 16, 17, 18, 19, 20, 21, 22, 15, 16, 17, 18, 19, 20, 21, 22, 15, 16,
    17, 18, 19, 20, 21, 22, 15, 16, 17, 18, 19, 20, 21, 22, 15, 16, 17, 18, 19,
    20, 21, 22, 15, 16, 17, 18, 19, 20, 21, 22, 15, 16, 17, 18, 19, 20, 21, 22,
    26 };

  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 27ULL;
  out.mNumRow = 27ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 10;
  out.mJc[3] = 19;
  out.mJc[4] = 20;
  out.mJc[5] = 22;
  out.mJc[6] = 23;
  out.mJc[7] = 25;
  out.mJc[8] = 40;
  out.mJc[9] = 55;
  out.mJc[10] = 70;
  out.mJc[11] = 76;
  out.mJc[12] = 82;
  out.mJc[13] = 88;
  out.mJc[14] = 98;
  out.mJc[15] = 101;
  out.mJc[16] = 112;
  out.mJc[17] = 115;
  out.mJc[18] = 126;
  out.mJc[19] = 134;
  out.mJc[20] = 142;
  out.mJc[21] = 150;
  out.mJc[22] = 158;
  out.mJc[23] = 166;
  out.mJc[24] = 174;
  out.mJc[25] = 182;
  out.mJc[26] = 190;
  out.mJc[27] = 191;
  for (b = 0; b < 191; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
