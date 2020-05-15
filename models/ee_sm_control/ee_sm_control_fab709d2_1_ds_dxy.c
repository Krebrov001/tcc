/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_dxy.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_dxy(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t13, NeDsMethodOutput *t14)
{
  PmRealVector out;
  real_T intermediate_der2[10];
  real_T intermediate_der4[10];
  real_T intermediate_der5[10];
  real_T intermediate_der18[10];
  real_T t0[51];
  real_T t1[50];
  size_t t8;
  real_T t11;
  real_T X_idx_20;
  real_T X_idx_21;
  real_T X_idx_17;
  real_T X_idx_18;
  X_idx_17 = t13->mX.mX[17];
  X_idx_18 = t13->mX.mX[18];
  X_idx_20 = t13->mX.mX[20];
  X_idx_21 = t13->mX.mX[21];
  out = t14->mDXY;
  intermediate_der18[0] = 0.0;
  intermediate_der18[1] = 0.0;
  intermediate_der18[2] = 0.0;
  intermediate_der18[3] = 0.0;
  intermediate_der18[4] = 0.0;
  intermediate_der18[5] = 0.0;
  intermediate_der18[6] = 0.0;
  intermediate_der18[7] = 1.0;
  intermediate_der18[8] = 0.0;
  intermediate_der18[9] = 0.0;
  intermediate_der4[0] = 0.0;
  intermediate_der4[1] = 0.0;
  intermediate_der4[2] = 0.0;
  intermediate_der4[3] = 0.0;
  intermediate_der4[4] = 0.0;
  intermediate_der4[5] = 0.0;
  intermediate_der4[6] = 0.0;
  intermediate_der4[7] = 0.0;
  intermediate_der4[8] = 1.0;
  intermediate_der4[9] = 0.0;
  for (t8 = 0ULL; t8 < 10ULL; t8++) {
    t11 = pmf_sqrt(X_idx_20 * X_idx_20 + X_idx_21 * X_idx_21) * 2.0;
    intermediate_der2[t8] = (intermediate_der18[t8] * X_idx_20 * 2.0 +
      intermediate_der4[t8] * X_idx_21 * 2.0) * (1.0 / (t11 == 0.0 ? 1.0E-16 :
      t11));
  }

  intermediate_der18[0] = 0.0;
  intermediate_der18[1] = 0.0;
  intermediate_der18[2] = 0.0;
  intermediate_der18[3] = 0.0;
  intermediate_der18[4] = 1.0;
  intermediate_der18[5] = 0.0;
  intermediate_der18[6] = 0.0;
  intermediate_der18[7] = 0.0;
  intermediate_der18[8] = 0.0;
  intermediate_der18[9] = 0.0;
  intermediate_der4[0] = 0.0;
  intermediate_der4[1] = 0.0;
  intermediate_der4[2] = 0.0;
  intermediate_der4[3] = 0.0;
  intermediate_der4[4] = 0.0;
  intermediate_der4[5] = 1.0;
  intermediate_der4[6] = 0.0;
  intermediate_der4[7] = 0.0;
  intermediate_der4[8] = 0.0;
  intermediate_der4[9] = 0.0;
  for (t8 = 0ULL; t8 < 10ULL; t8++) {
    X_idx_20 = pmf_sqrt(X_idx_17 * X_idx_17 + X_idx_18 * X_idx_18) * 2.0;
    intermediate_der5[t8] = (intermediate_der18[t8] * X_idx_17 * 2.0 +
      intermediate_der4[t8] * X_idx_18 * 2.0) * (1.0 / (X_idx_20 == 0.0 ?
      1.0E-16 : X_idx_20));
  }

  intermediate_der18[0] = 0.0;
  intermediate_der18[1] = 0.0;
  intermediate_der18[2] = 0.0;
  intermediate_der18[3] = 1.0;
  intermediate_der18[4] = 0.0;
  intermediate_der18[5] = 0.0;
  intermediate_der18[6] = 0.0;
  intermediate_der18[7] = 0.0;
  intermediate_der18[8] = 0.0;
  intermediate_der18[9] = 0.0;
  for (t8 = 0ULL; t8 < 10ULL; t8++) {
    intermediate_der4[t8] = intermediate_der18[t8];
  }

  for (t8 = 0ULL; t8 < 10ULL; t8++) {
    t1[t8 * 5ULL] = intermediate_der2[t8];
  }

  for (t8 = 0ULL; t8 < 10ULL; t8++) {
    t1[t8 * 5ULL + 1ULL] = intermediate_der5[t8];
  }

  for (t8 = 0ULL; t8 < 10ULL; t8++) {
    t1[t8 * 5ULL + 2ULL] = intermediate_der4[t8];
  }

  for (t8 = 0ULL; t8 < 10ULL; t8++) {
    t1[t8 * 5ULL + 3ULL] = intermediate_der5[t8];
  }

  for (t8 = 0ULL; t8 < 10ULL; t8++) {
    t1[t8 * 5ULL + 4ULL] = intermediate_der4[t8];
  }

  t0[0ULL] = 1.0;
  for (t8 = 0ULL; t8 < 50ULL; t8++) {
    t0[t8 + 1ULL] = t1[t8];
  }

  out.mX[0] = t0[0];
  out.mX[1] = t0[1];
  out.mX[2] = t0[2];
  out.mX[3] = t0[3];
  out.mX[4] = t0[4];
  out.mX[5] = t0[5];
  out.mX[6] = t0[6];
  out.mX[7] = t0[7];
  out.mX[8] = t0[8];
  out.mX[9] = t0[9];
  out.mX[10] = t0[10];
  out.mX[11] = t0[11];
  out.mX[12] = t0[12];
  out.mX[13] = t0[13];
  out.mX[14] = t0[14];
  out.mX[15] = t0[15];
  out.mX[16] = t0[16];
  out.mX[17] = t0[17];
  out.mX[18] = t0[18];
  out.mX[19] = t0[19];
  out.mX[20] = t0[20];
  out.mX[21] = t0[21];
  out.mX[22] = t0[22];
  out.mX[23] = t0[23];
  out.mX[24] = t0[24];
  out.mX[25] = t0[25];
  out.mX[26] = t0[26];
  out.mX[27] = t0[27];
  out.mX[28] = t0[28];
  out.mX[29] = t0[29];
  out.mX[30] = t0[30];
  out.mX[31] = t0[31];
  out.mX[32] = t0[32];
  out.mX[33] = t0[33];
  out.mX[34] = t0[34];
  out.mX[35] = t0[35];
  out.mX[36] = t0[36];
  out.mX[37] = t0[37];
  out.mX[38] = t0[38];
  out.mX[39] = t0[39];
  out.mX[40] = t0[40];
  out.mX[41] = t0[41];
  out.mX[42] = t0[42];
  out.mX[43] = t0[43];
  out.mX[44] = t0[44];
  out.mX[45] = t0[45];
  out.mX[46] = t0[46];
  out.mX[47] = t0[47];
  out.mX[48] = t0[48];
  out.mX[49] = t0[49];
  out.mX[50] = t0[50];
  (void)sys;
  (void)t14;
  return 0;
}
