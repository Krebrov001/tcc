/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_dxy_p.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_dxy_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXY_P;
  out.mNumCol = 42ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 1;
  out.mJc[14] = 6;
  out.mJc[15] = 11;
  out.mJc[16] = 16;
  out.mJc[17] = 21;
  out.mJc[18] = 26;
  out.mJc[19] = 31;
  out.mJc[20] = 36;
  out.mJc[21] = 41;
  out.mJc[22] = 46;
  out.mJc[23] = 51;
  out.mJc[24] = 51;
  out.mJc[25] = 51;
  out.mJc[26] = 51;
  out.mJc[27] = 51;
  out.mJc[28] = 51;
  out.mJc[29] = 51;
  out.mJc[30] = 51;
  out.mJc[31] = 51;
  out.mJc[32] = 51;
  out.mJc[33] = 51;
  out.mJc[34] = 51;
  out.mJc[35] = 51;
  out.mJc[36] = 51;
  out.mJc[37] = 51;
  out.mJc[38] = 51;
  out.mJc[39] = 51;
  out.mJc[40] = 51;
  out.mJc[41] = 51;
  out.mJc[42] = 51;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 1;
  out.mIr[7] = 2;
  out.mIr[8] = 3;
  out.mIr[9] = 4;
  out.mIr[10] = 5;
  out.mIr[11] = 1;
  out.mIr[12] = 2;
  out.mIr[13] = 3;
  out.mIr[14] = 4;
  out.mIr[15] = 5;
  out.mIr[16] = 1;
  out.mIr[17] = 2;
  out.mIr[18] = 3;
  out.mIr[19] = 4;
  out.mIr[20] = 5;
  out.mIr[21] = 1;
  out.mIr[22] = 2;
  out.mIr[23] = 3;
  out.mIr[24] = 4;
  out.mIr[25] = 5;
  out.mIr[26] = 1;
  out.mIr[27] = 2;
  out.mIr[28] = 3;
  out.mIr[29] = 4;
  out.mIr[30] = 5;
  out.mIr[31] = 1;
  out.mIr[32] = 2;
  out.mIr[33] = 3;
  out.mIr[34] = 4;
  out.mIr[35] = 5;
  out.mIr[36] = 1;
  out.mIr[37] = 2;
  out.mIr[38] = 3;
  out.mIr[39] = 4;
  out.mIr[40] = 5;
  out.mIr[41] = 1;
  out.mIr[42] = 2;
  out.mIr[43] = 3;
  out.mIr[44] = 4;
  out.mIr[45] = 5;
  out.mIr[46] = 1;
  out.mIr[47] = 2;
  out.mIr[48] = 3;
  out.mIr[49] = 4;
  out.mIr[50] = 5;
  (void)sys;
  (void)t2;
  return 0;
}
