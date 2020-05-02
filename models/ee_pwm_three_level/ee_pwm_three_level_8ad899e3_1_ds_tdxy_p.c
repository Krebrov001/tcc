/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_tdxy_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_tdxy_p(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXY_P;
  out.mNumCol = 40ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 2;
  out.mJc[3] = 5;
  out.mJc[4] = 8;
  out.mJc[5] = 11;
  out.mJc[6] = 11;
  out.mJc[7] = 11;
  out.mJc[8] = 11;
  out.mJc[9] = 13;
  out.mJc[10] = 13;
  out.mJc[11] = 13;
  out.mJc[12] = 13;
  out.mJc[13] = 13;
  out.mJc[14] = 13;
  out.mJc[15] = 13;
  out.mJc[16] = 13;
  out.mJc[17] = 13;
  out.mJc[18] = 13;
  out.mJc[19] = 13;
  out.mJc[20] = 13;
  out.mJc[21] = 13;
  out.mJc[22] = 13;
  out.mJc[23] = 13;
  out.mJc[24] = 13;
  out.mJc[25] = 13;
  out.mJc[26] = 13;
  out.mJc[27] = 13;
  out.mJc[28] = 13;
  out.mJc[29] = 13;
  out.mJc[30] = 13;
  out.mJc[31] = 13;
  out.mJc[32] = 13;
  out.mJc[33] = 13;
  out.mJc[34] = 13;
  out.mJc[35] = 13;
  out.mJc[36] = 13;
  out.mJc[37] = 13;
  out.mJc[38] = 13;
  out.mJc[39] = 13;
  out.mJc[40] = 13;
  out.mIr[0] = 3;
  out.mIr[1] = 4;
  out.mIr[2] = 0;
  out.mIr[3] = 1;
  out.mIr[4] = 2;
  out.mIr[5] = 0;
  out.mIr[6] = 1;
  out.mIr[7] = 2;
  out.mIr[8] = 0;
  out.mIr[9] = 1;
  out.mIr[10] = 2;
  out.mIr[11] = 3;
  out.mIr[12] = 4;
  (void)sys;
  (void)t2;
  return 0;
}
