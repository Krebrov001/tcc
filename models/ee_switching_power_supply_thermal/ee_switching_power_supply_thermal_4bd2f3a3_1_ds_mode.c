/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_mode.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_mode(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmIntVector out;
  real_T N_Channel_MOSFET_1_mos_vds;
  real_T N_Channel_MOSFET_2_mos_vds;
  real_T t1;
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
  real_T D_idx_0;
  real_T X_idx_22;
  int32_T Q_idx_0;
  real_T D_idx_1;
  int32_T Q_idx_1;
  real_T D_idx_2;
  int32_T Q_idx_2;
  real_T X_idx_8;
  real_T X_idx_12;
  Q_idx_0 = t3->mQ.mX[0];
  Q_idx_1 = t3->mQ.mX[1];
  Q_idx_2 = t3->mQ.mX[2];
  T_idx_0 = t3->mT.mX[0];
  X_idx_0 = t3->mX.mX[0];
  X_idx_1 = t3->mX.mX[1];
  X_idx_2 = t3->mX.mX[2];
  X_idx_4 = t3->mX.mX[4];
  X_idx_5 = t3->mX.mX[5];
  X_idx_6 = t3->mX.mX[6];
  X_idx_8 = t3->mX.mX[8];
  X_idx_9 = t3->mX.mX[9];
  X_idx_12 = t3->mX.mX[12];
  X_idx_13 = t3->mX.mX[13];
  X_idx_14 = t3->mX.mX[14];
  X_idx_15 = t3->mX.mX[15];
  X_idx_16 = t3->mX.mX[16];
  X_idx_18 = t3->mX.mX[18];
  X_idx_19 = t3->mX.mX[19];
  X_idx_20 = t3->mX.mX[20];
  X_idx_22 = t3->mX.mX[22];
  X_idx_23 = t3->mX.mX[23];
  D_idx_0 = t3->mD.mX[0];
  D_idx_1 = t3->mD.mX[1];
  D_idx_2 = t3->mD.mX[2];
  out = t4->mMODE;
  N_Channel_MOSFET_1_mos_vds = -X_idx_6 + X_idx_4;
  N_Channel_MOSFET_2_mos_vds = (((-X_idx_1 + X_idx_14 * -0.01) + X_idx_15 *
    -0.010001) + X_idx_16 * -0.01) + X_idx_23 * 0.01;
  t1 = X_idx_4 - N_Channel_MOSFET_1_mos_vds;
  X_idx_23 = (X_idx_9 - 298.15) * 0.036895806810537592 + 2.0;
  X_idx_9 = X_idx_5 - N_Channel_MOSFET_2_mos_vds;
  X_idx_6 = (X_idx_13 - 298.15) * 0.036895806810537592 + 2.0;
  out.mX[0] = (int32_T)(T_idx_0 - D_idx_0 >= 2.0E-5);
  out.mX[1] = (int32_T)((X_idx_22 < 2.0E-5) && (T_idx_0 - D_idx_0 > X_idx_22) &&
                        (Q_idx_0 == 3));
  out.mX[2] = 0;
  out.mX[3] = (int32_T)((T_idx_0 - D_idx_1 > 5.0000000000000004E-8) && (Q_idx_1 ==
    6));
  out.mX[4] = (int32_T)((X_idx_20 < 0.8) && (Q_idx_1 == 5));
  out.mX[5] = (int32_T)((T_idx_0 - D_idx_2 > 1.5000000000000002E-7) && (Q_idx_1 ==
    3));
  out.mX[6] = (int32_T)((X_idx_20 > 2.0) && (Q_idx_1 == 2));
  out.mX[7] = (int32_T)((X_idx_20 >= 1.4) && (Q_idx_1 == 1));
  out.mX[8] = (int32_T)((X_idx_20 < 1.4) && (Q_idx_1 == 1));
  out.mX[9] = 0;
  out.mX[10] = 0;
  out.mX[11] = 0;
  out.mX[12] = (int32_T)((X_idx_22 > 0.0) && (T_idx_0 - D_idx_0 >= 2.0E-5) &&
    (Q_idx_0 == 2));
  out.mX[13] = 0;
  out.mX[14] = (int32_T)((T_idx_0 - D_idx_2 > 5.0000000000000004E-8) && (Q_idx_2
    == 6));
  out.mX[15] = (int32_T)((X_idx_20 > 2.0) && (Q_idx_2 == 5));
  out.mX[16] = (int32_T)((T_idx_0 - D_idx_1 > 1.5000000000000002E-7) && (Q_idx_2
    == 3));
  out.mX[17] = (int32_T)((X_idx_20 < 0.8) && (Q_idx_2 == 2));
  out.mX[18] = (int32_T)((X_idx_20 < 1.4) && (Q_idx_2 == 1));
  out.mX[19] = (int32_T)((X_idx_20 >= 1.4) && (Q_idx_2 == 1));
  out.mX[20] = (int32_T)((X_idx_22 <= 0.0) && (T_idx_0 >= 0.0) && (Q_idx_0 == 1));
  out.mX[21] = (int32_T)((X_idx_22 > 0.0) && (T_idx_0 >= 0.0) && (Q_idx_0 == 1));
  out.mX[22] = (int32_T)(X_idx_20 > 2.0);
  out.mX[23] = (int32_T)(X_idx_20 < 0.8);
  out.mX[24] = 0;
  out.mX[25] = 0;
  out.mX[26] = 0;
  out.mX[27] = (int32_T)(((((((((X_idx_0 * -1.0000000000000002E-6 + X_idx_1 *
    -1.000001) + X_idx_2 * -0.01) + X_idx_14 * -0.02000001) + X_idx_15 *
    -0.020001010001) + X_idx_18 * -0.01) + X_idx_19 * 0.01) + X_idx_16 * 0.01) +
    -30.0) * 1.602176487E-19 / 2.8078031641896661E-21 < -79.0);
  out.mX[28] = (int32_T)((X_idx_15 * 9.9999999999926537E-7 + X_idx_1) *
    1.602176487E-19 / 2.8078031641896661E-21 < -79.0);
  out.mX[29] = (int32_T)(N_Channel_MOSFET_1_mos_vds >= 0.0);
  out.mX[30] = (int32_T)(X_idx_4 - X_idx_23 <= 0.0);
  out.mX[31] = (int32_T)(X_idx_4 - X_idx_23 > N_Channel_MOSFET_1_mos_vds);
  out.mX[32] = (int32_T)(t1 - X_idx_23 <= 0.0);
  out.mX[33] = (int32_T)(t1 - X_idx_23 > -N_Channel_MOSFET_1_mos_vds);
  out.mX[34] = (int32_T)(N_Channel_MOSFET_2_mos_vds >= 0.0);
  out.mX[35] = (int32_T)(X_idx_5 - X_idx_6 <= 0.0);
  out.mX[36] = (int32_T)(X_idx_5 - X_idx_6 > N_Channel_MOSFET_2_mos_vds);
  out.mX[37] = (int32_T)(X_idx_9 - X_idx_6 <= 0.0);
  out.mX[38] = (int32_T)(X_idx_9 - X_idx_6 > -N_Channel_MOSFET_2_mos_vds);
  out.mX[39] = (int32_T)(X_idx_8 > 0.0);
  out.mX[40] = (int32_T)(X_idx_12 > 0.0);
  (void)sys;
  (void)t4;
  return 0;
}
