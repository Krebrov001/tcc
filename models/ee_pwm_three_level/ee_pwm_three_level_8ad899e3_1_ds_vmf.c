/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_vmf.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_vmf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMF;
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
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = true;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = true;
  out.mX[28] = true;
  out.mX[29] = true;
  out.mX[30] = true;
  out.mX[31] = true;
  out.mX[32] = true;
  out.mX[33] = true;
  out.mX[34] = true;
  out.mX[35] = true;
  out.mX[36] = true;
  out.mX[37] = true;
  out.mX[38] = true;
  out.mX[39] = true;
  (void)sys;
  (void)t2;
  return 0;
}
