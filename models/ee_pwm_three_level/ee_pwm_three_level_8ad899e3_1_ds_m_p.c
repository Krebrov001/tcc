/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_m_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_m_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mM_P;
  out.mNumCol = 40ULL;
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 5;
  out.mJc[4] = 8;
  out.mJc[5] = 11;
  out.mJc[6] = 14;
  out.mJc[7] = 17;
  out.mJc[8] = 20;
  out.mJc[9] = 20;
  out.mJc[10] = 20;
  out.mJc[11] = 20;
  out.mJc[12] = 20;
  out.mJc[13] = 20;
  out.mJc[14] = 20;
  out.mJc[15] = 20;
  out.mJc[16] = 20;
  out.mJc[17] = 20;
  out.mJc[18] = 20;
  out.mJc[19] = 20;
  out.mJc[20] = 20;
  out.mJc[21] = 20;
  out.mJc[22] = 20;
  out.mJc[23] = 20;
  out.mJc[24] = 20;
  out.mJc[25] = 20;
  out.mJc[26] = 20;
  out.mJc[27] = 20;
  out.mJc[28] = 20;
  out.mJc[29] = 20;
  out.mJc[30] = 20;
  out.mJc[31] = 20;
  out.mJc[32] = 20;
  out.mJc[33] = 20;
  out.mJc[34] = 20;
  out.mJc[35] = 20;
  out.mJc[36] = 20;
  out.mJc[37] = 20;
  out.mJc[38] = 20;
  out.mJc[39] = 20;
  out.mJc[40] = 20;
  out.mIr[0] = 1;
  out.mIr[1] = 0;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 2;
  out.mIr[6] = 3;
  out.mIr[7] = 4;
  out.mIr[8] = 2;
  out.mIr[9] = 3;
  out.mIr[10] = 4;
  out.mIr[11] = 5;
  out.mIr[12] = 6;
  out.mIr[13] = 7;
  out.mIr[14] = 5;
  out.mIr[15] = 6;
  out.mIr[16] = 7;
  out.mIr[17] = 5;
  out.mIr[18] = 6;
  out.mIr[19] = 7;
  (void)sys;
  (void)t2;
  return 0;
}
