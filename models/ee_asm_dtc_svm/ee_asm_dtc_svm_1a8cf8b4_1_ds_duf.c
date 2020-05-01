/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_duf.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_duf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t41, NeDsMethodOutput *t42)
{
  PmRealVector out;
  real_T intermediate_der42[9];
  real_T t3[9];
  real_T t4[9];
  real_T t5[9];
  real_T t6[9];
  size_t t22;
  real_T t32;
  real_T t33;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t37;
  real_T t38;
  real_T t39;
  real_T t40;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_12;
  int32_T M_idx_17;
  int32_T M_idx_18;
  int32_T M_idx_19;
  M_idx_0 = t41->mM.mX[0];
  M_idx_1 = t41->mM.mX[1];
  M_idx_12 = t41->mM.mX[12];
  M_idx_17 = t41->mM.mX[17];
  M_idx_18 = t41->mM.mX[18];
  M_idx_19 = t41->mM.mX[19];
  out = t42->mDUF;
  if (M_idx_0 != 0) {
    t32 = 0.0;
    t33 = 0.0;
    t34 = 0.0;
  } else if (M_idx_1 != 0) {
    t32 = 0.0;
    t33 = 0.0;
    t34 = 0.0;
  } else {
    t32 = 1.0;
    t33 = 0.0;
    t34 = 0.0;
  }

  if (M_idx_12 != 0) {
    t35 = 0.0;
    t36 = 0.0;
    t37 = 0.0;
  } else if (M_idx_17 != 0) {
    t35 = 0.0;
    t36 = 0.0;
    t37 = 0.0;
  } else {
    t35 = 0.0;
    t36 = 1.0;
    t37 = 0.0;
  }

  if (M_idx_18 != 0) {
    t38 = 0.0;
    t39 = 0.0;
    t40 = 0.0;
  } else if (M_idx_19 != 0) {
    t38 = 0.0;
    t39 = 0.0;
    t40 = 0.0;
  } else {
    t38 = 0.0;
    t39 = 0.0;
    t40 = 1.0;
  }

  t5[0ULL] = t32;
  t5[3ULL] = t33;
  t5[6ULL] = t34;
  t5[1ULL] = t35;
  t5[4ULL] = t36;
  t5[7ULL] = t37;
  t5[2ULL] = t38;
  t5[5ULL] = t39;
  t5[8ULL] = t40;
  for (t22 = 0ULL; t22 < 9ULL; t22++) {
    intermediate_der42[t22] = t5[t22];
  }

  for (t22 = 0ULL; t22 < 9ULL; t22++) {
    t3[t22] = -(intermediate_der42[t22] * 500.0);
  }

  t6[0] = 1.0E-6;
  t6[1] = 1.0E-6;
  t6[2] = 1.0E-6;
  t6[3] = 1.0E-6;
  t6[4] = 1.0E-6;
  t6[5] = 1.0E-6;
  t6[6] = 1.0E-6;
  t6[7] = 1.0E-6;
  t6[8] = 1.0E-6;
  for (t22 = 0ULL; t22 < 9ULL; t22++) {
    t4[t22] = t3[t22] * t6[t22];
  }

  out.mX[0] = t4[0];
  out.mX[1] = t4[1];
  out.mX[2] = t4[2];
  out.mX[3] = t4[3];
  out.mX[4] = t4[4];
  out.mX[5] = t4[5];
  out.mX[6] = t4[6];
  out.mX[7] = t4[7];
  out.mX[8] = t4[8];
  (void)sys;
  (void)t42;
  return 0;
}
