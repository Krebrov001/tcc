/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_assert.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_assert(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t7, NeDsMethodOutput *t8)
{
  PmIntVector out;
  boolean_T t0;
  boolean_T t1;
  boolean_T t2;
  boolean_T t3;
  boolean_T t4;
  boolean_T t5;
  real_T X_idx_20;
  real_T X_idx_21;
  real_T X_idx_17;
  real_T X_idx_18;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T Q_idx_3;
  int32_T Q_idx_4;
  int32_T Q_idx_5;
  Q_idx_0 = t7->mQ.mX[0];
  Q_idx_1 = t7->mQ.mX[1];
  Q_idx_2 = t7->mQ.mX[2];
  Q_idx_3 = t7->mQ.mX[3];
  Q_idx_4 = t7->mQ.mX[4];
  Q_idx_5 = t7->mQ.mX[5];
  X_idx_17 = t7->mX.mX[17];
  X_idx_18 = t7->mX.mX[18];
  X_idx_20 = t7->mX.mX[20];
  X_idx_21 = t7->mX.mX[21];
  out = t8->mASSERT;
  if (Q_idx_0 >= 1) {
    t0 = (Q_idx_0 <= 5);
  } else {
    t0 = false;
  }

  if (Q_idx_1 >= 1) {
    t1 = (Q_idx_1 <= 5);
  } else {
    t1 = false;
  }

  if (Q_idx_2 >= 1) {
    t2 = (Q_idx_2 <= 5);
  } else {
    t2 = false;
  }

  if (Q_idx_3 >= 1) {
    t3 = (Q_idx_3 <= 5);
  } else {
    t3 = false;
  }

  if (Q_idx_4 >= 1) {
    t4 = (Q_idx_4 <= 5);
  } else {
    t4 = false;
  }

  if (Q_idx_5 >= 1) {
    t5 = (Q_idx_5 <= 5);
  } else {
    t5 = false;
  }

  out.mX[0] = (int32_T)t0;
  out.mX[1] = (int32_T)t1;
  out.mX[2] = (int32_T)t2;
  out.mX[3] = (int32_T)t3;
  out.mX[4] = (int32_T)t4;
  out.mX[5] = (int32_T)t5;
  out.mX[6] = 1;
  out.mX[7] = 1;
  out.mX[8] = 1;
  out.mX[9] = 1;
  out.mX[10] = (int32_T)(X_idx_20 * X_idx_20 + X_idx_21 * X_idx_21 >= 0.0);
  out.mX[11] = 1;
  out.mX[12] = 1;
  out.mX[13] = 1;
  out.mX[14] = 1;
  out.mX[15] = (int32_T)(X_idx_17 * X_idx_17 + X_idx_18 * X_idx_18 >= 0.0);
  out.mX[16] = 1;
  out.mX[17] = 1;
  out.mX[18] = 1;
  out.mX[19] = 1;
  out.mX[20] = 1;
  out.mX[21] = 1;
  out.mX[22] = 1;
  out.mX[23] = 1;
  out.mX[24] = (int32_T)(X_idx_17 * X_idx_17 + X_idx_18 * X_idx_18 >= 0.0);
  out.mX[25] = 1;
  out.mX[26] = 1;
  out.mX[27] = 1;
  out.mX[28] = 1;
  out.mX[29] = 1;
  out.mX[30] = 1;
  (void)sys;
  (void)t8;
  return 0;
}
