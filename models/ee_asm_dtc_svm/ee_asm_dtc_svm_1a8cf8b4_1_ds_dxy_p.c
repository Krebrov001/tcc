/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_dxy_p.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_dxy_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXY_P;
  out.mNumCol = 27ULL;
  out.mNumRow = 8ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 6;
  out.mJc[9] = 12;
  out.mJc[10] = 18;
  out.mJc[11] = 24;
  out.mJc[12] = 27;
  out.mJc[13] = 30;
  out.mJc[14] = 30;
  out.mJc[15] = 30;
  out.mJc[16] = 30;
  out.mJc[17] = 30;
  out.mJc[18] = 30;
  out.mJc[19] = 32;
  out.mJc[20] = 34;
  out.mJc[21] = 36;
  out.mJc[22] = 38;
  out.mJc[23] = 40;
  out.mJc[24] = 42;
  out.mJc[25] = 44;
  out.mJc[26] = 46;
  out.mJc[27] = 46;
  out.mIr[0] = 2;
  out.mIr[1] = 3;
  out.mIr[2] = 4;
  out.mIr[3] = 5;
  out.mIr[4] = 6;
  out.mIr[5] = 7;
  out.mIr[6] = 2;
  out.mIr[7] = 3;
  out.mIr[8] = 4;
  out.mIr[9] = 5;
  out.mIr[10] = 6;
  out.mIr[11] = 7;
  out.mIr[12] = 2;
  out.mIr[13] = 3;
  out.mIr[14] = 4;
  out.mIr[15] = 5;
  out.mIr[16] = 6;
  out.mIr[17] = 7;
  out.mIr[18] = 2;
  out.mIr[19] = 3;
  out.mIr[20] = 4;
  out.mIr[21] = 5;
  out.mIr[22] = 6;
  out.mIr[23] = 7;
  out.mIr[24] = 2;
  out.mIr[25] = 3;
  out.mIr[26] = 4;
  out.mIr[27] = 2;
  out.mIr[28] = 3;
  out.mIr[29] = 4;
  out.mIr[30] = 0;
  out.mIr[31] = 1;
  out.mIr[32] = 0;
  out.mIr[33] = 1;
  out.mIr[34] = 0;
  out.mIr[35] = 1;
  out.mIr[36] = 0;
  out.mIr[37] = 1;
  out.mIr[38] = 0;
  out.mIr[39] = 1;
  out.mIr[40] = 0;
  out.mIr[41] = 1;
  out.mIr[42] = 0;
  out.mIr[43] = 1;
  out.mIr[44] = 0;
  out.mIr[45] = 1;
  (void)sys;
  (void)t2;
  return 0;
}
