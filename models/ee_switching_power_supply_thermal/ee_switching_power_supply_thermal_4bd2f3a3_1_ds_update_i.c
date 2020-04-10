/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_update_i.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_update_i(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t4, NeDsMethodOutput *t5)
{
  PmIntVector out;
  real_T T_idx_0;
  real_T X_idx_20;
  int32_T CI_idx_21;
  real_T X_idx_22;
  int32_T Q_idx_0;
  int32_T Q_idx_3;
  int32_T CI_idx_20;
  int32_T CI_idx_12;
  real_T D_idx_0;
  int32_T CI_idx_1;
  int32_T CI_idx_8;
  int32_T Q_idx_1;
  int32_T CI_idx_7;
  int32_T CI_idx_6;
  int32_T CI_idx_5;
  real_T D_idx_2;
  int32_T CI_idx_19;
  int32_T Q_idx_2;
  int32_T CI_idx_4;
  int32_T CI_idx_18;
  int32_T CI_idx_3;
  real_T D_idx_1;
  int32_T CI_idx_17;
  int32_T CI_idx_16;
  int32_T CI_idx_15;
  int32_T CI_idx_14;
  Q_idx_0 = t4->mQ.mX[0];
  Q_idx_1 = t4->mQ.mX[1];
  Q_idx_2 = t4->mQ.mX[2];
  Q_idx_3 = t4->mQ.mX[3];
  T_idx_0 = t4->mT.mX[0];
  X_idx_20 = t4->mX.mX[20];
  X_idx_22 = t4->mX.mX[22];
  D_idx_0 = t4->mD.mX[0];
  D_idx_1 = t4->mD.mX[1];
  D_idx_2 = t4->mD.mX[2];
  CI_idx_1 = t4->mCI.mX[1];
  CI_idx_3 = t4->mCI.mX[3];
  CI_idx_4 = t4->mCI.mX[4];
  CI_idx_5 = t4->mCI.mX[5];
  CI_idx_6 = t4->mCI.mX[6];
  CI_idx_7 = t4->mCI.mX[7];
  CI_idx_8 = t4->mCI.mX[8];
  CI_idx_12 = t4->mCI.mX[12];
  CI_idx_14 = t4->mCI.mX[14];
  CI_idx_15 = t4->mCI.mX[15];
  CI_idx_16 = t4->mCI.mX[16];
  CI_idx_17 = t4->mCI.mX[17];
  CI_idx_18 = t4->mCI.mX[18];
  CI_idx_19 = t4->mCI.mX[19];
  CI_idx_20 = t4->mCI.mX[20];
  CI_idx_21 = t4->mCI.mX[21];
  out = t5->mUPDATE_I;
  if (((CI_idx_21 == 0) && (X_idx_22 > 0.0) && (T_idx_0 >= 0.0) && (Q_idx_0 == 1))
      || ((X_idx_22 > 0.0) && (T_idx_0 >= 0.0) && (Q_idx_0 == 1) && (Q_idx_3 !=
        0))) {
    CI_idx_12 = 3;
  } else if (((CI_idx_20 == 0) && (X_idx_22 <= 0.0) && (T_idx_0 >= 0.0) &&
              (Q_idx_0 == 1)) || ((X_idx_22 <= 0.0) && (T_idx_0 >= 0.0) &&
              (Q_idx_0 == 1) && (Q_idx_3 != 0))) {
    CI_idx_12 = 2;
  } else if (((CI_idx_12 == 0) && (X_idx_22 > 0.0) && (T_idx_0 - D_idx_0 >=
               2.0E-5) && (Q_idx_0 == 2)) || ((X_idx_22 > 0.0) && (T_idx_0 -
               D_idx_0 >= 2.0E-5) && (Q_idx_0 == 2) && (Q_idx_3 != 0))) {
    CI_idx_12 = 3;
  } else {
    CI_idx_12 = ((CI_idx_1 == 0) && (X_idx_22 < 2.0E-5) && (T_idx_0 - D_idx_0 >
      X_idx_22) && (Q_idx_0 == 3)) || ((X_idx_22 < 2.0E-5) && (T_idx_0 - D_idx_0
      > X_idx_22) && (Q_idx_0 == 3) && (Q_idx_3 != 0)) ? 2 : Q_idx_0;
  }

  if (((CI_idx_8 == 0) && (X_idx_20 < 1.4) && (Q_idx_1 == 1)) || ((X_idx_20 <
        1.4) && (Q_idx_1 == 1) && (Q_idx_3 != 0))) {
    CI_idx_1 = 2;
  } else if (((CI_idx_7 == 0) && (X_idx_20 >= 1.4) && (Q_idx_1 == 1)) ||
             ((X_idx_20 >= 1.4) && (Q_idx_1 == 1) && (Q_idx_3 != 0))) {
    CI_idx_1 = 5;
  } else if (((CI_idx_6 == 0) && (X_idx_20 > 2.0) && (Q_idx_1 == 2)) ||
             ((X_idx_20 > 2.0) && (Q_idx_1 == 2) && (Q_idx_3 != 0))) {
    CI_idx_1 = 3;
  } else if (((CI_idx_5 == 0) && (T_idx_0 - D_idx_2 > 1.5000000000000002E-7) &&
              (Q_idx_1 == 3)) || ((T_idx_0 - D_idx_2 > 1.5000000000000002E-7) &&
              (Q_idx_1 == 3) && (Q_idx_3 != 0))) {
    CI_idx_1 = 5;
  } else if (((CI_idx_4 == 0) && (X_idx_20 < 0.8) && (Q_idx_1 == 5)) ||
             ((X_idx_20 < 0.8) && (Q_idx_1 == 5) && (Q_idx_3 != 0))) {
    CI_idx_1 = 6;
  } else {
    CI_idx_1 = ((CI_idx_3 == 0) && (T_idx_0 - D_idx_1 > 5.0000000000000004E-8) &&
                (Q_idx_1 == 6)) || ((T_idx_0 - D_idx_1 > 5.0000000000000004E-8) &&
      (Q_idx_1 == 6) && (Q_idx_3 != 0)) ? 2 : Q_idx_1;
  }

  if (((CI_idx_19 == 0) && (X_idx_20 >= 1.4) && (Q_idx_2 == 1)) || ((X_idx_20 >=
        1.4) && (Q_idx_2 == 1) && (Q_idx_3 != 0))) {
    Q_idx_0 = 2;
  } else if (((CI_idx_18 == 0) && (X_idx_20 < 1.4) && (Q_idx_2 == 1)) ||
             ((X_idx_20 < 1.4) && (Q_idx_2 == 1) && (Q_idx_3 != 0))) {
    Q_idx_0 = 5;
  } else if (((CI_idx_17 == 0) && (X_idx_20 < 0.8) && (Q_idx_2 == 2)) ||
             ((X_idx_20 < 0.8) && (Q_idx_2 == 2) && (Q_idx_3 != 0))) {
    Q_idx_0 = 3;
  } else if (((CI_idx_16 == 0) && (T_idx_0 - D_idx_1 > 1.5000000000000002E-7) &&
              (Q_idx_2 == 3)) || ((T_idx_0 - D_idx_1 > 1.5000000000000002E-7) &&
              (Q_idx_2 == 3) && (Q_idx_3 != 0))) {
    Q_idx_0 = 5;
  } else if (((CI_idx_15 == 0) && (X_idx_20 > 2.0) && (Q_idx_2 == 5)) ||
             ((X_idx_20 > 2.0) && (Q_idx_2 == 5) && (Q_idx_3 != 0))) {
    Q_idx_0 = 6;
  } else {
    Q_idx_0 = ((CI_idx_14 == 0) && (T_idx_0 - D_idx_2 > 5.0000000000000004E-8) &&
               (Q_idx_2 == 6)) || ((T_idx_0 - D_idx_2 > 5.0000000000000004E-8) &&
      (Q_idx_2 == 6) && (Q_idx_3 != 0)) ? 2 : Q_idx_2;
  }

  out.mX[0] = CI_idx_12;
  out.mX[1] = CI_idx_1;
  out.mX[2] = Q_idx_0;
  out.mX[3] = 0;
  (void)sys;
  (void)t5;
  return 0;
}
