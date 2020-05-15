/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_dnf_p.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_dnf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDNF_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 42ULL;
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
  out.mJc[11] = 1;
  out.mJc[12] = 2;
  out.mJc[13] = 3;
  out.mJc[14] = 4;
  out.mJc[15] = 5;
  out.mJc[16] = 6;
  out.mJc[17] = 6;
  out.mJc[18] = 6;
  out.mJc[19] = 6;
  out.mJc[20] = 6;
  out.mJc[21] = 6;
  out.mJc[22] = 6;
  out.mJc[23] = 6;
  out.mJc[24] = 6;
  out.mJc[25] = 7;
  out.mJc[26] = 8;
  out.mJc[27] = 9;
  out.mJc[28] = 9;
  out.mJc[29] = 9;
  out.mJc[30] = 9;
  out.mJc[31] = 9;
  out.mIr[0] = 25;
  out.mIr[1] = 25;
  out.mIr[2] = 25;
  out.mIr[3] = 24;
  out.mIr[4] = 24;
  out.mIr[5] = 24;
  out.mIr[6] = 26;
  out.mIr[7] = 26;
  out.mIr[8] = 26;
  (void)sys;
  (void)t2;
  return 0;
}
