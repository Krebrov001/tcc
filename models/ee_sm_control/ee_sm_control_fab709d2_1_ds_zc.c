/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_zc.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_zc(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T X_idx_29;
  int32_T Q_idx_0;
  real_T X_idx_30;
  int32_T Q_idx_1;
  real_T X_idx_31;
  int32_T Q_idx_2;
  real_T X_idx_35;
  int32_T Q_idx_3;
  real_T X_idx_36;
  int32_T Q_idx_4;
  real_T X_idx_37;
  int32_T Q_idx_5;
  real_T U_idx_1;
  real_T U_idx_2;
  Q_idx_0 = t1->mQ.mX[0];
  Q_idx_1 = t1->mQ.mX[1];
  Q_idx_2 = t1->mQ.mX[2];
  Q_idx_3 = t1->mQ.mX[3];
  Q_idx_4 = t1->mQ.mX[4];
  Q_idx_5 = t1->mQ.mX[5];
  U_idx_1 = t1->mU.mX[1];
  U_idx_2 = t1->mU.mX[2];
  X_idx_29 = t1->mX.mX[29];
  X_idx_30 = t1->mX.mX[30];
  X_idx_31 = t1->mX.mX[31];
  X_idx_35 = t1->mX.mX[35];
  X_idx_36 = t1->mX.mX[36];
  X_idx_37 = t1->mX.mX[37];
  out = t2->mZC;
  out.mX[0] = (real_T)((X_idx_29 < 0.0) && (Q_idx_0 == 3));
  out.mX[1] = (real_T)((X_idx_30 < 0.0) && (Q_idx_1 == 3));
  out.mX[2] = (real_T)((X_idx_31 < 0.0) && (Q_idx_2 == 3));
  out.mX[3] = (real_T)((X_idx_35 < 0.0) && (Q_idx_3 == 3));
  out.mX[4] = (real_T)((X_idx_36 < 0.0) && (Q_idx_4 == 3));
  out.mX[5] = (real_T)((X_idx_37 < 0.0) && (Q_idx_5 == 3));
  out.mX[6] = (real_T)((X_idx_29 <= 0.0) && (Q_idx_0 == 5));
  out.mX[7] = (real_T)((X_idx_30 <= 0.0) && (Q_idx_1 == 5));
  out.mX[8] = (real_T)((X_idx_31 <= 0.0) && (Q_idx_2 == 5));
  out.mX[9] = (real_T)((U_idx_1 <= 0.5) && (Q_idx_0 == 1));
  out.mX[10] = (real_T)((U_idx_1 <= 0.5) && (Q_idx_1 == 1));
  out.mX[11] = (real_T)((U_idx_1 <= 0.5) && (Q_idx_2 == 1));
  out.mX[12] = (real_T)((X_idx_35 <= 0.0) && (Q_idx_3 == 5));
  out.mX[13] = (real_T)((X_idx_36 <= 0.0) && (Q_idx_4 == 5));
  out.mX[14] = (real_T)((X_idx_37 <= 0.0) && (Q_idx_5 == 5));
  out.mX[15] = (real_T)((U_idx_2 <= 0.5) && (Q_idx_3 == 1));
  out.mX[16] = (real_T)((U_idx_2 <= 0.5) && (Q_idx_4 == 1));
  out.mX[17] = (real_T)((U_idx_2 <= 0.5) && (Q_idx_5 == 1));
  out.mX[18] = (real_T)((X_idx_29 > 0.0) && (Q_idx_0 == 3));
  out.mX[19] = (real_T)((X_idx_30 > 0.0) && (Q_idx_1 == 3));
  out.mX[20] = (real_T)((X_idx_31 > 0.0) && (Q_idx_2 == 3));
  out.mX[21] = (real_T)((U_idx_1 > 0.5) && (Q_idx_0 == 2));
  out.mX[22] = (real_T)((U_idx_1 > 0.5) && (Q_idx_1 == 2));
  out.mX[23] = (real_T)((U_idx_1 > 0.5) && (Q_idx_2 == 2));
  out.mX[24] = (real_T)((X_idx_35 > 0.0) && (Q_idx_3 == 3));
  out.mX[25] = (real_T)((X_idx_36 > 0.0) && (Q_idx_4 == 3));
  out.mX[26] = (real_T)((X_idx_37 > 0.0) && (Q_idx_5 == 3));
  out.mX[27] = (real_T)((U_idx_2 > 0.5) && (Q_idx_3 == 2));
  out.mX[28] = (real_T)((U_idx_2 > 0.5) && (Q_idx_4 == 2));
  out.mX[29] = (real_T)((U_idx_2 > 0.5) && (Q_idx_5 == 2));
  out.mX[30] = (real_T)((X_idx_29 >= 0.0) && (Q_idx_0 == 4));
  out.mX[31] = (real_T)((X_idx_30 >= 0.0) && (Q_idx_1 == 4));
  out.mX[32] = (real_T)((X_idx_31 >= 0.0) && (Q_idx_2 == 4));
  out.mX[33] = (real_T)((X_idx_35 >= 0.0) && (Q_idx_3 == 4));
  out.mX[34] = (real_T)((X_idx_36 >= 0.0) && (Q_idx_4 == 4));
  out.mX[35] = (real_T)((X_idx_37 >= 0.0) && (Q_idx_5 == 4));
  out.mX[36] = (real_T)((X_idx_29 == 0.0) && (Q_idx_0 == 3));
  out.mX[37] = (real_T)((X_idx_30 == 0.0) && (Q_idx_1 == 3));
  out.mX[38] = (real_T)((X_idx_31 == 0.0) && (Q_idx_2 == 3));
  out.mX[39] = (real_T)((X_idx_35 == 0.0) && (Q_idx_3 == 3));
  out.mX[40] = (real_T)((X_idx_36 == 0.0) && (Q_idx_4 == 3));
  out.mX[41] = (real_T)((X_idx_37 == 0.0) && (Q_idx_5 == 3));
  (void)sys;
  (void)t2;
  return 0;
}
