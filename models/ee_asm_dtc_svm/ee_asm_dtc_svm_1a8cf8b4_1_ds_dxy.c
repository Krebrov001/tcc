/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_dxy.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_dxy(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDXY;
  out.mX[0] = -1.0E-12;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = 0.0;
  out.mX[4] = -1.0;
  out.mX[5] = -1.0;
  out.mX[6] = -0.0;
  out.mX[7] = -0.0;
  out.mX[8] = -0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 1.0;
  out.mX[11] = 0.0;
  out.mX[12] = -0.0;
  out.mX[13] = -0.0;
  out.mX[14] = -0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 1.0;
  out.mX[18] = 1.0E-12;
  out.mX[19] = -0.0;
  out.mX[20] = -0.0;
  out.mX[21] = 1.0;
  out.mX[22] = 1.0;
  out.mX[23] = 1.0;
  out.mX[24] = 1.0;
  out.mX[25] = -1.0;
  out.mX[26] = -0.0;
  out.mX[27] = 1.0;
  out.mX[28] = -0.0;
  out.mX[29] = -1.0;
  out.mX[30] = 1.0;
  out.mX[31] = 0.0;
  out.mX[32] = 0.0;
  out.mX[33] = 1.0;
  out.mX[34] = 0.0;
  out.mX[35] = 0.0;
  out.mX[36] = 0.0;
  out.mX[37] = 0.0;
  out.mX[38] = 0.0;
  out.mX[39] = 0.0;
  out.mX[40] = 0.0;
  out.mX[41] = 0.0;
  out.mX[42] = 0.0;
  out.mX[43] = 0.0;
  out.mX[44] = 0.0;
  out.mX[45] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}
