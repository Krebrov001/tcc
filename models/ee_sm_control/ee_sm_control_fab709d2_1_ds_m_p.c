/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_m_p.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_m_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mM_P;
  out.mNumCol = 42ULL;
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 4;
  out.mJc[3] = 7;
  out.mJc[4] = 10;
  out.mJc[5] = 11;
  out.mJc[6] = 12;
  out.mJc[7] = 13;
  out.mJc[8] = 14;
  out.mJc[9] = 15;
  out.mJc[10] = 16;
  out.mJc[11] = 17;
  out.mJc[12] = 18;
  out.mJc[13] = 18;
  out.mJc[14] = 18;
  out.mJc[15] = 18;
  out.mJc[16] = 18;
  out.mJc[17] = 18;
  out.mJc[18] = 18;
  out.mJc[19] = 18;
  out.mJc[20] = 18;
  out.mJc[21] = 18;
  out.mJc[22] = 18;
  out.mJc[23] = 18;
  out.mJc[24] = 18;
  out.mJc[25] = 18;
  out.mJc[26] = 18;
  out.mJc[27] = 18;
  out.mJc[28] = 18;
  out.mJc[29] = 18;
  out.mJc[30] = 18;
  out.mJc[31] = 18;
  out.mJc[32] = 18;
  out.mJc[33] = 18;
  out.mJc[34] = 18;
  out.mJc[35] = 18;
  out.mJc[36] = 18;
  out.mJc[37] = 18;
  out.mJc[38] = 18;
  out.mJc[39] = 18;
  out.mJc[40] = 18;
  out.mJc[41] = 18;
  out.mJc[42] = 18;
  out.mIr[0] = 3;
  out.mIr[1] = 0;
  out.mIr[2] = 1;
  out.mIr[3] = 2;
  out.mIr[4] = 0;
  out.mIr[5] = 1;
  out.mIr[6] = 2;
  out.mIr[7] = 0;
  out.mIr[8] = 1;
  out.mIr[9] = 2;
  out.mIr[10] = 11;
  out.mIr[11] = 7;
  out.mIr[12] = 10;
  out.mIr[13] = 6;
  out.mIr[14] = 8;
  out.mIr[15] = 9;
  out.mIr[16] = 4;
  out.mIr[17] = 5;
  (void)sys;
  (void)t2;
  return 0;
}
