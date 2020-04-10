/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_zc.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_zc(const NeDynamicSystem
  *sys, const NeDynamicSystemInput *t10, NeDsMethodOutput *t11)
{
  PmRealVector out;
  real_T N_Channel_MOSFET_1_mos_vds;
  real_T N_Channel_MOSFET_2_mos_vds;
  real_T t1;
  real_T t2;
  real_T t4;
  real_T t5;
  real_T t9;
  real_T T_idx_0;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_2;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_18;
  real_T X_idx_19;
  real_T X_idx_16;
  real_T X_idx_20;
  real_T X_idx_4;
  real_T X_idx_6;
  real_T X_idx_5;
  real_T X_idx_23;
  real_T X_idx_9;
  real_T X_idx_13;
  int32_T M_idx_29;
  int32_T M_idx_34;
  int32_T M_idx_32;
  int32_T M_idx_37;
  int32_T M_idx_30;
  int32_T M_idx_35;
  real_T D_idx_0;
  real_T X_idx_8;
  real_T X_idx_12;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  real_T D_idx_1;
  real_T D_idx_2;
  real_T X_idx_22;
  int32_T Q_idx_0;
  Q_idx_0 = t10->mQ.mX[0];
  Q_idx_1 = t10->mQ.mX[1];
  Q_idx_2 = t10->mQ.mX[2];
  M_idx_29 = t10->mM.mX[29];
  M_idx_30 = t10->mM.mX[30];
  M_idx_32 = t10->mM.mX[32];
  M_idx_34 = t10->mM.mX[34];
  M_idx_35 = t10->mM.mX[35];
  M_idx_37 = t10->mM.mX[37];
  T_idx_0 = t10->mT.mX[0];
  X_idx_0 = t10->mX.mX[0];
  X_idx_1 = t10->mX.mX[1];
  X_idx_2 = t10->mX.mX[2];
  X_idx_4 = t10->mX.mX[4];
  X_idx_5 = t10->mX.mX[5];
  X_idx_6 = t10->mX.mX[6];
  X_idx_8 = t10->mX.mX[8];
  X_idx_9 = t10->mX.mX[9];
  X_idx_12 = t10->mX.mX[12];
  X_idx_13 = t10->mX.mX[13];
  X_idx_14 = t10->mX.mX[14];
  X_idx_15 = t10->mX.mX[15];
  X_idx_16 = t10->mX.mX[16];
  X_idx_18 = t10->mX.mX[18];
  X_idx_19 = t10->mX.mX[19];
  X_idx_20 = t10->mX.mX[20];
  X_idx_22 = t10->mX.mX[22];
  X_idx_23 = t10->mX.mX[23];
  D_idx_0 = t10->mD.mX[0];
  D_idx_1 = t10->mD.mX[1];
  D_idx_2 = t10->mD.mX[2];
  out = t11->mZC;
  N_Channel_MOSFET_1_mos_vds = -X_idx_6 + X_idx_4;
  N_Channel_MOSFET_2_mos_vds = (((-X_idx_1 + X_idx_14 * -0.01) + X_idx_15 *
    -0.010001) + X_idx_16 * -0.01) + X_idx_23 * 0.01;
  t9 = X_idx_4 - N_Channel_MOSFET_1_mos_vds;
  X_idx_6 = (X_idx_9 - 298.15) * 0.036895806810537592 + 2.0;
  t4 = X_idx_5 - N_Channel_MOSFET_2_mos_vds;
  X_idx_9 = (X_idx_13 - 298.15) * 0.036895806810537592 + 2.0;
  if (M_idx_29 == 0) {
    X_idx_13 = -(t9 - X_idx_6);
  } else {
    X_idx_13 = 0.0;
  }

  if (M_idx_34 == 0) {
    t1 = -(t4 - X_idx_9);
  } else {
    t1 = 0.0;
  }

  if ((M_idx_29 == 0) && (M_idx_32 == 0)) {
    t2 = (t9 - X_idx_6) - (-N_Channel_MOSFET_1_mos_vds);
  } else {
    t2 = 0.0;
  }

  if ((M_idx_34 == 0) && (M_idx_37 == 0)) {
    t9 = (t4 - X_idx_9) - (-N_Channel_MOSFET_2_mos_vds);
  } else {
    t9 = 0.0;
  }

  if ((M_idx_30 == 0) && (M_idx_29 != 0)) {
    t4 = (X_idx_4 - X_idx_6) - N_Channel_MOSFET_1_mos_vds;
  } else {
    t4 = 0.0;
  }

  if ((M_idx_35 == 0) && (M_idx_34 != 0)) {
    t5 = (X_idx_5 - X_idx_9) - N_Channel_MOSFET_2_mos_vds;
  } else {
    t5 = 0.0;
  }

  if (M_idx_29 != 0) {
    X_idx_23 = -(X_idx_4 - X_idx_6);
  } else {
    X_idx_23 = 0.0;
  }

  if (M_idx_34 != 0) {
    X_idx_6 = -(X_idx_5 - X_idx_9);
  } else {
    X_idx_6 = 0.0;
  }

  out.mX[0] = 0.8 - X_idx_20;
  out.mX[1] = -79.0 - ((((((((X_idx_0 * -1.0000000000000002E-6 + X_idx_1 *
    -1.000001) + X_idx_2 * -0.01) + X_idx_14 * -0.02000001) + X_idx_15 *
    -0.020001010001) + X_idx_18 * -0.01) + X_idx_19 * 0.01) + X_idx_16 * 0.01) +
                       -30.0) * 1.602176487E-19 / 2.8078031641896661E-21;
  out.mX[2] = -79.0 - (X_idx_15 * 9.9999999999926537E-7 + X_idx_1) *
    1.602176487E-19 / 2.8078031641896661E-21;
  out.mX[3] = (T_idx_0 - D_idx_0) - 2.0E-5;
  out.mX[4] = X_idx_20 - 2.0;
  out.mX[5] = X_idx_8;
  out.mX[6] = X_idx_12;
  out.mX[7] = N_Channel_MOSFET_1_mos_vds;
  out.mX[8] = N_Channel_MOSFET_2_mos_vds;
  out.mX[9] = (real_T)((X_idx_20 < 0.8) && (Q_idx_1 == 5));
  out.mX[10] = (real_T)((X_idx_20 < 0.8) && (Q_idx_2 == 2));
  out.mX[11] = (real_T)((X_idx_20 < 1.4) && (Q_idx_1 == 1));
  out.mX[12] = (real_T)((X_idx_20 < 1.4) && (Q_idx_2 == 1));
  out.mX[13] = (real_T)((T_idx_0 - D_idx_1 > 5.0000000000000004E-8) && (Q_idx_1 ==
    6));
  out.mX[14] = (real_T)((T_idx_0 - D_idx_1 > 1.5000000000000002E-7) && (Q_idx_2 ==
    3));
  out.mX[15] = (real_T)((T_idx_0 - D_idx_2 > 5.0000000000000004E-8) && (Q_idx_2 ==
    6));
  out.mX[16] = (real_T)((T_idx_0 - D_idx_2 > 1.5000000000000002E-7) && (Q_idx_1 ==
    3));
  out.mX[17] = (real_T)((X_idx_20 > 2.0) && (Q_idx_1 == 2));
  out.mX[18] = (real_T)((X_idx_20 > 2.0) && (Q_idx_2 == 5));
  out.mX[19] = (real_T)((X_idx_20 >= 1.4) && (Q_idx_1 == 1));
  out.mX[20] = (real_T)((X_idx_20 >= 1.4) && (Q_idx_2 == 1));
  out.mX[21] = (real_T)((X_idx_22 < 2.0E-5) && (T_idx_0 - D_idx_0 > X_idx_22) &&
                        (Q_idx_0 == 3));
  out.mX[22] = (real_T)((X_idx_22 > 0.0) && (T_idx_0 - D_idx_0 >= 2.0E-5) &&
                        (Q_idx_0 == 2));
  out.mX[23] = (real_T)((X_idx_22 <= 0.0) && (T_idx_0 >= 0.0) && (Q_idx_0 == 1));
  out.mX[24] = (real_T)((X_idx_22 > 0.0) && (T_idx_0 >= 0.0) && (Q_idx_0 == 1));
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  out.mX[29] = 0.0;
  out.mX[30] = 0.0;
  out.mX[31] = 0.0;
  out.mX[32] = 0.0;
  out.mX[33] = X_idx_13;
  out.mX[34] = t1;
  out.mX[35] = t2;
  out.mX[36] = t9;
  out.mX[37] = t4;
  out.mX[38] = t5;
  out.mX[39] = X_idx_23;
  out.mX[40] = X_idx_6;
  (void)sys;
  (void)t11;
  return 0;
}
