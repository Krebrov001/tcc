/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_update_i.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_update_i(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t7, NeDsMethodOutput *t8)
{
  PmIntVector out;
  int32_T CI_idx_38;
  real_T U_idx_1;
  int32_T Q_idx_0;
  int32_T Q_idx_6;
  int32_T CI_idx_37;
  real_T X_idx_29;
  int32_T CI_idx_34;
  int32_T CI_idx_23;
  int32_T CI_idx_5;
  int32_T Q_idx_1;
  int32_T CI_idx_12;
  int32_T CI_idx_4;
  real_T X_idx_30;
  int32_T CI_idx_1;
  int32_T CI_idx_3;
  int32_T CI_idx_0;
  int32_T CI_idx_2;
  int32_T CI_idx_13;
  int32_T Q_idx_2;
  int32_T CI_idx_41;
  int32_T CI_idx_11;
  real_T X_idx_31;
  int32_T CI_idx_40;
  int32_T CI_idx_10;
  int32_T CI_idx_39;
  int32_T CI_idx_9;
  int32_T CI_idx_20;
  real_T U_idx_2;
  int32_T Q_idx_3;
  int32_T CI_idx_8;
  int32_T CI_idx_19;
  real_T X_idx_35;
  int32_T CI_idx_7;
  int32_T CI_idx_18;
  int32_T CI_idx_6;
  int32_T CI_idx_17;
  int32_T CI_idx_28;
  int32_T Q_idx_4;
  int32_T CI_idx_16;
  int32_T CI_idx_27;
  real_T X_idx_36;
  int32_T CI_idx_15;
  int32_T CI_idx_26;
  int32_T CI_idx_14;
  int32_T CI_idx_25;
  int32_T CI_idx_36;
  int32_T Q_idx_5;
  int32_T CI_idx_24;
  int32_T CI_idx_35;
  real_T X_idx_37;
  int32_T CI_idx_22;
  int32_T CI_idx_33;
  int32_T CI_idx_21;
  int32_T CI_idx_32;
  int32_T CI_idx_31;
  int32_T CI_idx_30;
  int32_T CI_idx_29;
  Q_idx_0 = t7->mQ.mX[0];
  Q_idx_1 = t7->mQ.mX[1];
  Q_idx_2 = t7->mQ.mX[2];
  Q_idx_3 = t7->mQ.mX[3];
  Q_idx_4 = t7->mQ.mX[4];
  Q_idx_5 = t7->mQ.mX[5];
  Q_idx_6 = t7->mQ.mX[6];
  U_idx_1 = t7->mU.mX[1];
  U_idx_2 = t7->mU.mX[2];
  X_idx_29 = t7->mX.mX[29];
  X_idx_30 = t7->mX.mX[30];
  X_idx_31 = t7->mX.mX[31];
  X_idx_35 = t7->mX.mX[35];
  X_idx_36 = t7->mX.mX[36];
  X_idx_37 = t7->mX.mX[37];
  CI_idx_0 = t7->mCI.mX[0];
  CI_idx_1 = t7->mCI.mX[1];
  CI_idx_2 = t7->mCI.mX[2];
  CI_idx_3 = t7->mCI.mX[3];
  CI_idx_4 = t7->mCI.mX[4];
  CI_idx_5 = t7->mCI.mX[5];
  CI_idx_6 = t7->mCI.mX[6];
  CI_idx_7 = t7->mCI.mX[7];
  CI_idx_8 = t7->mCI.mX[8];
  CI_idx_9 = t7->mCI.mX[9];
  CI_idx_10 = t7->mCI.mX[10];
  CI_idx_11 = t7->mCI.mX[11];
  CI_idx_12 = t7->mCI.mX[12];
  CI_idx_13 = t7->mCI.mX[13];
  CI_idx_14 = t7->mCI.mX[14];
  CI_idx_15 = t7->mCI.mX[15];
  CI_idx_16 = t7->mCI.mX[16];
  CI_idx_17 = t7->mCI.mX[17];
  CI_idx_18 = t7->mCI.mX[18];
  CI_idx_19 = t7->mCI.mX[19];
  CI_idx_20 = t7->mCI.mX[20];
  CI_idx_21 = t7->mCI.mX[21];
  CI_idx_22 = t7->mCI.mX[22];
  CI_idx_23 = t7->mCI.mX[23];
  CI_idx_24 = t7->mCI.mX[24];
  CI_idx_25 = t7->mCI.mX[25];
  CI_idx_26 = t7->mCI.mX[26];
  CI_idx_27 = t7->mCI.mX[27];
  CI_idx_28 = t7->mCI.mX[28];
  CI_idx_29 = t7->mCI.mX[29];
  CI_idx_30 = t7->mCI.mX[30];
  CI_idx_31 = t7->mCI.mX[31];
  CI_idx_32 = t7->mCI.mX[32];
  CI_idx_33 = t7->mCI.mX[33];
  CI_idx_34 = t7->mCI.mX[34];
  CI_idx_35 = t7->mCI.mX[35];
  CI_idx_36 = t7->mCI.mX[36];
  CI_idx_37 = t7->mCI.mX[37];
  CI_idx_38 = t7->mCI.mX[38];
  CI_idx_39 = t7->mCI.mX[39];
  CI_idx_40 = t7->mCI.mX[40];
  CI_idx_41 = t7->mCI.mX[41];
  out = t8->mUPDATE_I;
  if (((CI_idx_38 == 0) && (U_idx_1 > 0.5) && (Q_idx_0 == 2)) || ((U_idx_1 > 0.5)
       && (Q_idx_0 == 2) && (Q_idx_6 != 0))) {
    CI_idx_34 = 3;
  } else if (((CI_idx_37 == 0) && (X_idx_29 == 0.0) && (Q_idx_0 == 3)) ||
             ((X_idx_29 == 0.0) && (Q_idx_0 == 3) && (Q_idx_6 != 0))) {
    CI_idx_34 = 1;
  } else if (((CI_idx_34 == 0) && (X_idx_29 < 0.0) && (Q_idx_0 == 3)) ||
             ((X_idx_29 < 0.0) && (Q_idx_0 == 3) && (Q_idx_6 != 0))) {
    CI_idx_34 = 4;
  } else if (((CI_idx_23 == 0) && (X_idx_29 > 0.0) && (Q_idx_0 == 3)) ||
             ((X_idx_29 > 0.0) && (Q_idx_0 == 3) && (Q_idx_6 != 0))) {
    CI_idx_34 = 5;
  } else if (((CI_idx_12 == 0) && (X_idx_29 >= 0.0) && (Q_idx_0 == 4)) ||
             ((X_idx_29 >= 0.0) && (Q_idx_0 == 4) && (Q_idx_6 != 0))) {
    CI_idx_34 = 1;
  } else if (((CI_idx_1 == 0) && (X_idx_29 <= 0.0) && (Q_idx_0 == 5)) ||
             ((X_idx_29 <= 0.0) && (Q_idx_0 == 5) && (Q_idx_6 != 0))) {
    CI_idx_34 = 1;
  } else {
    CI_idx_34 = ((CI_idx_0 == 0) && (U_idx_1 <= 0.5) && (Q_idx_0 == 1)) ||
      ((U_idx_1 <= 0.5) && (Q_idx_0 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_0;
  }

  if (((CI_idx_5 == 0) && (U_idx_1 > 0.5) && (Q_idx_1 == 2)) || ((U_idx_1 > 0.5)
       && (Q_idx_1 == 2) && (Q_idx_6 != 0))) {
    CI_idx_23 = 3;
  } else if (((CI_idx_4 == 0) && (X_idx_30 == 0.0) && (Q_idx_1 == 3)) ||
             ((X_idx_30 == 0.0) && (Q_idx_1 == 3) && (Q_idx_6 != 0))) {
    CI_idx_23 = 1;
  } else if (((CI_idx_3 == 0) && (X_idx_30 < 0.0) && (Q_idx_1 == 3)) ||
             ((X_idx_30 < 0.0) && (Q_idx_1 == 3) && (Q_idx_6 != 0))) {
    CI_idx_23 = 4;
  } else if (((CI_idx_2 == 0) && (X_idx_30 > 0.0) && (Q_idx_1 == 3)) ||
             ((X_idx_30 > 0.0) && (Q_idx_1 == 3) && (Q_idx_6 != 0))) {
    CI_idx_23 = 5;
  } else if (((CI_idx_41 == 0) && (X_idx_30 >= 0.0) && (Q_idx_1 == 4)) ||
             ((X_idx_30 >= 0.0) && (Q_idx_1 == 4) && (Q_idx_6 != 0))) {
    CI_idx_23 = 1;
  } else if (((CI_idx_40 == 0) && (X_idx_30 <= 0.0) && (Q_idx_1 == 5)) ||
             ((X_idx_30 <= 0.0) && (Q_idx_1 == 5) && (Q_idx_6 != 0))) {
    CI_idx_23 = 1;
  } else {
    CI_idx_23 = ((CI_idx_39 == 0) && (U_idx_1 <= 0.5) && (Q_idx_1 == 1)) ||
      ((U_idx_1 <= 0.5) && (Q_idx_1 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_1;
  }

  if (((CI_idx_13 == 0) && (U_idx_1 > 0.5) && (Q_idx_2 == 2)) || ((U_idx_1 > 0.5)
       && (Q_idx_2 == 2) && (Q_idx_6 != 0))) {
    CI_idx_12 = 3;
  } else if (((CI_idx_11 == 0) && (X_idx_31 == 0.0) && (Q_idx_2 == 3)) ||
             ((X_idx_31 == 0.0) && (Q_idx_2 == 3) && (Q_idx_6 != 0))) {
    CI_idx_12 = 1;
  } else if (((CI_idx_10 == 0) && (X_idx_31 < 0.0) && (Q_idx_2 == 3)) ||
             ((X_idx_31 < 0.0) && (Q_idx_2 == 3) && (Q_idx_6 != 0))) {
    CI_idx_12 = 4;
  } else if (((CI_idx_9 == 0) && (X_idx_31 > 0.0) && (Q_idx_2 == 3)) ||
             ((X_idx_31 > 0.0) && (Q_idx_2 == 3) && (Q_idx_6 != 0))) {
    CI_idx_12 = 5;
  } else if (((CI_idx_8 == 0) && (X_idx_31 >= 0.0) && (Q_idx_2 == 4)) ||
             ((X_idx_31 >= 0.0) && (Q_idx_2 == 4) && (Q_idx_6 != 0))) {
    CI_idx_12 = 1;
  } else if (((CI_idx_7 == 0) && (X_idx_31 <= 0.0) && (Q_idx_2 == 5)) ||
             ((X_idx_31 <= 0.0) && (Q_idx_2 == 5) && (Q_idx_6 != 0))) {
    CI_idx_12 = 1;
  } else {
    CI_idx_12 = ((CI_idx_6 == 0) && (U_idx_1 <= 0.5) && (Q_idx_2 == 1)) ||
      ((U_idx_1 <= 0.5) && (Q_idx_2 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_2;
  }

  if (((CI_idx_20 == 0) && (U_idx_2 > 0.5) && (Q_idx_3 == 2)) || ((U_idx_2 > 0.5)
       && (Q_idx_3 == 2) && (Q_idx_6 != 0))) {
    CI_idx_1 = 3;
  } else if (((CI_idx_19 == 0) && (X_idx_35 == 0.0) && (Q_idx_3 == 3)) ||
             ((X_idx_35 == 0.0) && (Q_idx_3 == 3) && (Q_idx_6 != 0))) {
    CI_idx_1 = 1;
  } else if (((CI_idx_18 == 0) && (X_idx_35 < 0.0) && (Q_idx_3 == 3)) ||
             ((X_idx_35 < 0.0) && (Q_idx_3 == 3) && (Q_idx_6 != 0))) {
    CI_idx_1 = 4;
  } else if (((CI_idx_17 == 0) && (X_idx_35 > 0.0) && (Q_idx_3 == 3)) ||
             ((X_idx_35 > 0.0) && (Q_idx_3 == 3) && (Q_idx_6 != 0))) {
    CI_idx_1 = 5;
  } else if (((CI_idx_16 == 0) && (X_idx_35 >= 0.0) && (Q_idx_3 == 4)) ||
             ((X_idx_35 >= 0.0) && (Q_idx_3 == 4) && (Q_idx_6 != 0))) {
    CI_idx_1 = 1;
  } else if (((CI_idx_15 == 0) && (X_idx_35 <= 0.0) && (Q_idx_3 == 5)) ||
             ((X_idx_35 <= 0.0) && (Q_idx_3 == 5) && (Q_idx_6 != 0))) {
    CI_idx_1 = 1;
  } else {
    CI_idx_1 = ((CI_idx_14 == 0) && (U_idx_2 <= 0.5) && (Q_idx_3 == 1)) ||
      ((U_idx_2 <= 0.5) && (Q_idx_3 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_3;
  }

  if (((CI_idx_28 == 0) && (U_idx_2 > 0.5) && (Q_idx_4 == 2)) || ((U_idx_2 > 0.5)
       && (Q_idx_4 == 2) && (Q_idx_6 != 0))) {
    CI_idx_0 = 3;
  } else if (((CI_idx_27 == 0) && (X_idx_36 == 0.0) && (Q_idx_4 == 3)) ||
             ((X_idx_36 == 0.0) && (Q_idx_4 == 3) && (Q_idx_6 != 0))) {
    CI_idx_0 = 1;
  } else if (((CI_idx_26 == 0) && (X_idx_36 < 0.0) && (Q_idx_4 == 3)) ||
             ((X_idx_36 < 0.0) && (Q_idx_4 == 3) && (Q_idx_6 != 0))) {
    CI_idx_0 = 4;
  } else if (((CI_idx_25 == 0) && (X_idx_36 > 0.0) && (Q_idx_4 == 3)) ||
             ((X_idx_36 > 0.0) && (Q_idx_4 == 3) && (Q_idx_6 != 0))) {
    CI_idx_0 = 5;
  } else if (((CI_idx_24 == 0) && (X_idx_36 >= 0.0) && (Q_idx_4 == 4)) ||
             ((X_idx_36 >= 0.0) && (Q_idx_4 == 4) && (Q_idx_6 != 0))) {
    CI_idx_0 = 1;
  } else if (((CI_idx_22 == 0) && (X_idx_36 <= 0.0) && (Q_idx_4 == 5)) ||
             ((X_idx_36 <= 0.0) && (Q_idx_4 == 5) && (Q_idx_6 != 0))) {
    CI_idx_0 = 1;
  } else {
    CI_idx_0 = ((CI_idx_21 == 0) && (U_idx_2 <= 0.5) && (Q_idx_4 == 1)) ||
      ((U_idx_2 <= 0.5) && (Q_idx_4 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_4;
  }

  if (((CI_idx_36 == 0) && (U_idx_2 > 0.5) && (Q_idx_5 == 2)) || ((U_idx_2 > 0.5)
       && (Q_idx_5 == 2) && (Q_idx_6 != 0))) {
    Q_idx_0 = 3;
  } else if (((CI_idx_35 == 0) && (X_idx_37 == 0.0) && (Q_idx_5 == 3)) ||
             ((X_idx_37 == 0.0) && (Q_idx_5 == 3) && (Q_idx_6 != 0))) {
    Q_idx_0 = 1;
  } else if (((CI_idx_33 == 0) && (X_idx_37 < 0.0) && (Q_idx_5 == 3)) ||
             ((X_idx_37 < 0.0) && (Q_idx_5 == 3) && (Q_idx_6 != 0))) {
    Q_idx_0 = 4;
  } else if (((CI_idx_32 == 0) && (X_idx_37 > 0.0) && (Q_idx_5 == 3)) ||
             ((X_idx_37 > 0.0) && (Q_idx_5 == 3) && (Q_idx_6 != 0))) {
    Q_idx_0 = 5;
  } else if (((CI_idx_31 == 0) && (X_idx_37 >= 0.0) && (Q_idx_5 == 4)) ||
             ((X_idx_37 >= 0.0) && (Q_idx_5 == 4) && (Q_idx_6 != 0))) {
    Q_idx_0 = 1;
  } else if (((CI_idx_30 == 0) && (X_idx_37 <= 0.0) && (Q_idx_5 == 5)) ||
             ((X_idx_37 <= 0.0) && (Q_idx_5 == 5) && (Q_idx_6 != 0))) {
    Q_idx_0 = 1;
  } else {
    Q_idx_0 = ((CI_idx_29 == 0) && (U_idx_2 <= 0.5) && (Q_idx_5 == 1)) ||
      ((U_idx_2 <= 0.5) && (Q_idx_5 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_5;
  }

  out.mX[0] = CI_idx_34;
  out.mX[1] = CI_idx_23;
  out.mX[2] = CI_idx_12;
  out.mX[3] = CI_idx_1;
  out.mX[4] = CI_idx_0;
  out.mX[5] = Q_idx_0;
  out.mX[6] = 0;
  (void)sys;
  (void)t8;
  return 0;
}
