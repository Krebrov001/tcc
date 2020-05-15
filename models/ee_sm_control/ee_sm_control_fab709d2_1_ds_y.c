/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_y.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_y(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t4, NeDsMethodOutput *t5)
{
  PmRealVector out;
  real_T AVR_and_Exciter_Terminal_Current_Measurement_pu_output;
  real_T X_idx_20;
  real_T X_idx_21;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_16;
  real_T X_idx_12;
  X_idx_12 = t4->mX.mX[12];
  X_idx_16 = t4->mX.mX[16];
  X_idx_17 = t4->mX.mX[17];
  X_idx_18 = t4->mX.mX[18];
  X_idx_20 = t4->mX.mX[20];
  X_idx_21 = t4->mX.mX[21];
  out = t5->mY;
  X_idx_21 = -pmf_sqrt(X_idx_20 * X_idx_20 + X_idx_21 * X_idx_21);
  AVR_and_Exciter_Terminal_Current_Measurement_pu_output = X_idx_21 / -1.0;
  X_idx_20 = -pmf_sqrt(X_idx_17 * X_idx_17 + X_idx_18 * X_idx_18);
  X_idx_20 /= -1.0;
  X_idx_21 = -X_idx_16 / -1.0;
  out.mX[0] = X_idx_12;
  out.mX[1] = AVR_and_Exciter_Terminal_Current_Measurement_pu_output;
  out.mX[2] = X_idx_20;
  out.mX[3] = X_idx_21;
  out.mX[4] = X_idx_20;
  out.mX[5] = X_idx_21;
  (void)sys;
  (void)t5;
  return 0;
}
