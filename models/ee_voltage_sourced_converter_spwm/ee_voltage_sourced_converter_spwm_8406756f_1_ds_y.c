/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_y.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_y(const NeDynamicSystem *
  t0, const NeDynamicSystemInput *t11, NeDsMethodOutput *t12)
{
  PmRealVector out;
  real_T X_idx_1;
  real_T X_idx_6;
  real_T X_idx_2;
  real_T X_idx_7;
  real_T X_idx_3;
  real_T X_idx_8;
  real_T X_idx_4;
  real_T X_idx_10;
  real_T X_idx_13;
  real_T X_idx_16;
  real_T X_idx_9;
  real_T X_idx_12;
  real_T X_idx_15;
  (void)t0;
  X_idx_1 = t11->mX.mX[1];
  X_idx_2 = t11->mX.mX[2];
  X_idx_3 = t11->mX.mX[3];
  X_idx_4 = t11->mX.mX[4];
  X_idx_6 = t11->mX.mX[6];
  X_idx_7 = t11->mX.mX[7];
  X_idx_8 = t11->mX.mX[8];
  X_idx_9 = t11->mX.mX[9];
  X_idx_10 = t11->mX.mX[10];
  X_idx_12 = t11->mX.mX[12];
  X_idx_13 = t11->mX.mX[13];
  X_idx_15 = t11->mX.mX[15];
  X_idx_16 = t11->mX.mX[16];
  out = t12->mY;
  out.mX[0] = -((((((-X_idx_4 + -X_idx_10) + -X_idx_13) + -X_idx_16) + X_idx_9)
                 + X_idx_12) + X_idx_15);
  out.mX[1] = -(-X_idx_1 + X_idx_6 * -1.0E-6);
  out.mX[2] = -(-X_idx_2 + X_idx_7 * -1.0E-6);
  out.mX[3] = -(-X_idx_3 + X_idx_8 * -1.0E-6);
  (void)t0;
  (void)t12;
  return 0;
}
