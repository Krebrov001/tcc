/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_dxf_p.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_dxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 27ULL;
  out.mNumRow = 27ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 2;
  out.mJc[3] = 5;
  out.mJc[4] = 6;
  out.mJc[5] = 7;
  out.mJc[6] = 8;
  out.mJc[7] = 9;
  out.mJc[8] = 20;
  out.mJc[9] = 31;
  out.mJc[10] = 42;
  out.mJc[11] = 43;
  out.mJc[12] = 44;
  out.mJc[13] = 45;
  out.mJc[14] = 45;
  out.mJc[15] = 45;
  out.mJc[16] = 49;
  out.mJc[17] = 49;
  out.mJc[18] = 53;
  out.mJc[19] = 53;
  out.mJc[20] = 53;
  out.mJc[21] = 53;
  out.mJc[22] = 53;
  out.mJc[23] = 53;
  out.mJc[24] = 53;
  out.mJc[25] = 53;
  out.mJc[26] = 53;
  out.mJc[27] = 53;
  out.mIr[0] = 4;
  out.mIr[1] = 5;
  out.mIr[2] = 7;
  out.mIr[3] = 8;
  out.mIr[4] = 9;
  out.mIr[5] = 5;
  out.mIr[6] = 14;
  out.mIr[7] = 4;
  out.mIr[8] = 14;
  out.mIr[9] = 1;
  out.mIr[10] = 2;
  out.mIr[11] = 15;
  out.mIr[12] = 16;
  out.mIr[13] = 17;
  out.mIr[14] = 18;
  out.mIr[15] = 19;
  out.mIr[16] = 20;
  out.mIr[17] = 21;
  out.mIr[18] = 22;
  out.mIr[19] = 26;
  out.mIr[20] = 1;
  out.mIr[21] = 2;
  out.mIr[22] = 15;
  out.mIr[23] = 16;
  out.mIr[24] = 17;
  out.mIr[25] = 18;
  out.mIr[26] = 19;
  out.mIr[27] = 20;
  out.mIr[28] = 21;
  out.mIr[29] = 22;
  out.mIr[30] = 26;
  out.mIr[31] = 1;
  out.mIr[32] = 2;
  out.mIr[33] = 15;
  out.mIr[34] = 16;
  out.mIr[35] = 17;
  out.mIr[36] = 18;
  out.mIr[37] = 19;
  out.mIr[38] = 20;
  out.mIr[39] = 21;
  out.mIr[40] = 22;
  out.mIr[41] = 26;
  out.mIr[42] = 26;
  out.mIr[43] = 26;
  out.mIr[44] = 26;
  out.mIr[45] = 7;
  out.mIr[46] = 8;
  out.mIr[47] = 9;
  out.mIr[48] = 14;
  out.mIr[49] = 7;
  out.mIr[50] = 8;
  out.mIr[51] = 9;
  out.mIr[52] = 14;
  (void)sys;
  (void)t2;
  return 0;
}
