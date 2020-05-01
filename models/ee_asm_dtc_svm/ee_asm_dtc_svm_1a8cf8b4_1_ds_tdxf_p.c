/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_tdxf_p.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_tdxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_2[220] = { 0, 4, 5, 6, 15, 16, 17, 18, 19, 20, 21, 22,
    3, 7, 8, 9, 15, 16, 17, 18, 19, 20, 21, 22, 5, 12, 2, 10, 14, 4, 13, 1, 11,
    14, 1, 2, 3, 7, 8, 9, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 1, 2,
    3, 7, 8, 9, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 1, 2, 3, 7, 8, 9,
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 7, 8, 9, 23, 24, 25, 26, 7,
    8, 9, 23, 24, 25, 26, 7, 8, 9, 23, 24, 25, 26, 6, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 4, 10, 12, 1, 7, 8, 9, 10, 12, 14, 15, 16, 17, 18, 19, 20, 21, 22, 5,
    11, 13, 2, 7, 8, 9, 11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 15, 16, 17,
    18, 19, 20, 21, 22, 15, 16, 17, 18, 19, 20, 21, 22, 15, 16, 17, 18, 19, 20,
    21, 22, 15, 16, 17, 18, 19, 20, 21, 22, 15, 16, 17, 18, 19, 20, 21, 22, 15,
    16, 17, 18, 19, 20, 21, 22, 15, 16, 17, 18, 19, 20, 21, 22, 15, 16, 17, 18,
    19, 20, 21, 22, 26 };

  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 27ULL;
  out.mNumRow = 27ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 12;
  out.mJc[3] = 24;
  out.mJc[4] = 26;
  out.mJc[5] = 29;
  out.mJc[6] = 31;
  out.mJc[7] = 34;
  out.mJc[8] = 52;
  out.mJc[9] = 70;
  out.mJc[10] = 88;
  out.mJc[11] = 95;
  out.mJc[12] = 102;
  out.mJc[13] = 109;
  out.mJc[14] = 119;
  out.mJc[15] = 122;
  out.mJc[16] = 137;
  out.mJc[17] = 140;
  out.mJc[18] = 155;
  out.mJc[19] = 163;
  out.mJc[20] = 171;
  out.mJc[21] = 179;
  out.mJc[22] = 187;
  out.mJc[23] = 195;
  out.mJc[24] = 203;
  out.mJc[25] = 211;
  out.mJc[26] = 219;
  out.mJc[27] = 220;
  for (b = 0; b < 220; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
