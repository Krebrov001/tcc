/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_dnf_p.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_dnf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDNF_P;
  out.mNumCol = 30ULL;
  out.mNumRow = 27ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 3;
  out.mJc[5] = 6;
  out.mJc[6] = 6;
  out.mJc[7] = 6;
  out.mJc[8] = 6;
  out.mJc[9] = 14;
  out.mJc[10] = 22;
  out.mJc[11] = 22;
  out.mJc[12] = 22;
  out.mJc[13] = 22;
  out.mJc[14] = 22;
  out.mJc[15] = 22;
  out.mJc[16] = 22;
  out.mJc[17] = 22;
  out.mJc[18] = 22;
  out.mJc[19] = 22;
  out.mJc[20] = 22;
  out.mJc[21] = 22;
  out.mJc[22] = 22;
  out.mJc[23] = 25;
  out.mJc[24] = 25;
  out.mJc[25] = 25;
  out.mJc[26] = 25;
  out.mJc[27] = 25;
  out.mJc[28] = 25;
  out.mJc[29] = 25;
  out.mJc[30] = 26;
  out.mIr[0] = 23;
  out.mIr[1] = 24;
  out.mIr[2] = 25;
  out.mIr[3] = 23;
  out.mIr[4] = 24;
  out.mIr[5] = 25;
  out.mIr[6] = 15;
  out.mIr[7] = 16;
  out.mIr[8] = 17;
  out.mIr[9] = 18;
  out.mIr[10] = 19;
  out.mIr[11] = 20;
  out.mIr[12] = 21;
  out.mIr[13] = 22;
  out.mIr[14] = 15;
  out.mIr[15] = 16;
  out.mIr[16] = 17;
  out.mIr[17] = 18;
  out.mIr[18] = 19;
  out.mIr[19] = 20;
  out.mIr[20] = 21;
  out.mIr[21] = 22;
  out.mIr[22] = 23;
  out.mIr[23] = 24;
  out.mIr[24] = 25;
  out.mIr[25] = 26;
  (void)sys;
  (void)t2;
  return 0;
}
