/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_zc.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_zc(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t30, NeDsMethodOutput *t31)
{
  PmRealVector out;
  real_T t0;
  real_T t1;
  real_T t2;
  real_T t29;
  real_T t6_idx_7;
  real_T t6_idx_8;
  real_T t6_idx_11;
  real_T t6_idx_12;
  real_T t6_idx_15;
  int32_T M_idx_0;
  real_T U_idx_0;
  int32_T M_idx_12;
  real_T U_idx_1;
  int32_T M_idx_18;
  real_T U_idx_2;
  M_idx_0 = t30->mM.mX[0];
  M_idx_12 = t30->mM.mX[12];
  M_idx_18 = t30->mM.mX[18];
  U_idx_0 = t30->mU.mX[0];
  U_idx_1 = t30->mU.mX[1];
  U_idx_2 = t30->mU.mX[2];
  out = t31->mZC;
  if (M_idx_0 == 0) {
    t0 = -1.0 - U_idx_0;
  } else {
    t0 = 0.0;
  }

  if (M_idx_12 == 0) {
    t1 = -1.0 - U_idx_1;
  } else {
    t1 = 0.0;
  }

  if (M_idx_18 == 0) {
    t2 = -1.0 - U_idx_2;
  } else {
    t2 = 0.0;
  }

  t29 = U_idx_0 - 1.0 > -1.0 - U_idx_0 ? U_idx_0 - 1.0 : -1.0 - U_idx_0;
  t6_idx_7 = t29 > 2.0 ? t29 : 2.0;
  t29 = U_idx_0 - 1.0 > -1.0 - U_idx_0 ? U_idx_0 - 1.0 : -1.0 - U_idx_0;
  t6_idx_8 = t29 > 0.0 ? t29 : 0.0;
  t29 = U_idx_1 - 1.0 > -1.0 - U_idx_1 ? U_idx_1 - 1.0 : -1.0 - U_idx_1;
  t6_idx_11 = t29 > 1.0 ? t29 : 1.0;
  t29 = U_idx_1 - 1.0 > -1.0 - U_idx_1 ? U_idx_1 - 1.0 : -1.0 - U_idx_1;
  t6_idx_12 = t29 > 0.0 ? t29 : 0.0;
  t29 = U_idx_2 - 1.0 > -1.0 - U_idx_2 ? U_idx_2 - 1.0 : -1.0 - U_idx_2;
  t6_idx_15 = t29 > 0.0 ? t29 : 0.0;
  t29 = U_idx_2 - 1.0 > -1.0 - U_idx_2 ? U_idx_2 - 1.0 : -1.0 - U_idx_2;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0;
  out.mX[4] = 1.0;
  out.mX[5] = 1.0;
  out.mX[6] = U_idx_0 - 1.0 > 2.0 ? U_idx_0 - 1.0 : 2.0;
  out.mX[7] = t6_idx_7;
  out.mX[8] = t6_idx_8;
  out.mX[9] = U_idx_0 - 1.0 > 0.0 ? U_idx_0 - 1.0 : 0.0;
  out.mX[10] = U_idx_1 - 1.0 > 1.0 ? U_idx_1 - 1.0 : 1.0;
  out.mX[11] = t6_idx_11;
  out.mX[12] = t6_idx_12;
  out.mX[13] = U_idx_1 - 1.0 > 0.0 ? U_idx_1 - 1.0 : 0.0;
  out.mX[14] = U_idx_2 - 1.0 > 0.0 ? U_idx_2 - 1.0 : 0.0;
  out.mX[15] = t6_idx_15;
  out.mX[16] = t29 > 0.0 ? t29 : 0.0;
  out.mX[17] = U_idx_2 - 1.0 > 0.0 ? U_idx_2 - 1.0 : 0.0;
  out.mX[18] = t0;
  out.mX[19] = t1;
  out.mX[20] = t2;
  out.mX[21] = U_idx_0 - 1.0;
  out.mX[22] = U_idx_1 - 1.0;
  out.mX[23] = U_idx_2 - 1.0;
  (void)sys;
  (void)t31;
  return 0;
}
