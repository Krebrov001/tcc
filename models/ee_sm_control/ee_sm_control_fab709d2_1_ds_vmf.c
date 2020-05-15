/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_vmf.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_vmf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = true;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  out.mX[31] = true;
  out.mX[32] = true;
  out.mX[33] = true;
  out.mX[34] = true;
  out.mX[35] = true;
  out.mX[36] = true;
  out.mX[37] = true;
  out.mX[38] = true;
  out.mX[39] = true;
  out.mX[40] = true;
  out.mX[41] = true;
  (void)sys;
  (void)t2;
  return 0;
}
