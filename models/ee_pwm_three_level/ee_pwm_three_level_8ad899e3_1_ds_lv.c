/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_lv.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_lv(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = true;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  out.mX[31] = false;
  out.mX[32] = false;
  out.mX[33] = false;
  out.mX[34] = false;
  out.mX[35] = false;
  out.mX[36] = false;
  out.mX[37] = false;
  out.mX[38] = false;
  out.mX[39] = false;
  (void)sys;
  (void)t2;
  return 0;
}