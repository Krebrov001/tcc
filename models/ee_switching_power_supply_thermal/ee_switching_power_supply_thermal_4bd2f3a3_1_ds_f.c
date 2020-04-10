/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_f.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_f(const NeDynamicSystem *
  sys, const NeDynamicSystemInput *t17, NeDsMethodOutput *t18)
{
  PmRealVector out;
  real_T Driver_Half_Bridge_Driver_iL;
  real_T N_Channel_MOSFET_1_drain_resistor_i;
  real_T N_Channel_MOSFET_1_mos_vds;
  real_T N_Channel_MOSFET_2_mos_vds;
  boolean_T intrm_sf_mf_10;
  boolean_T intrm_sf_mf_11;
  boolean_T intrm_sf_mf_12;
  boolean_T intrm_sf_mf_15;
  boolean_T intrm_sf_mf_16;
  boolean_T intrm_sf_mf_17;
  boolean_T intrm_sf_mf_18;
  real_T intrm_sf_mf_23;
  real_T intrm_sf_mf_24;
  boolean_T intrm_sf_mf_9;
  real_T t1;
  real_T t3;
  real_T t4;
  real_T t6;
  real_T t7;
  real_T t13;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_17;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_19;
  real_T X_idx_16;
  real_T X_idx_18;
  real_T X_idx_2;
  real_T X_idx_4;
  real_T X_idx_23;
  real_T X_idx_5;
  real_T X_idx_6;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  real_T X_idx_26;
  real_T X_idx_9;
  real_T X_idx_31;
  real_T X_idx_13;
  real_T X_idx_21;
  real_T U_idx_1;
  int32_T M_idx_27;
  int32_T M_idx_28;
  int32_T Q_idx_0;
  real_T X_idx_20;
  real_T X_idx_24;
  real_T X_idx_25;
  int32_T M_idx_29;
  int32_T M_idx_32;
  int32_T M_idx_30;
  int32_T M_idx_33;
  int32_T M_idx_31;
  int32_T M_idx_34;
  int32_T M_idx_37;
  int32_T M_idx_35;
  int32_T M_idx_38;
  int32_T M_idx_36;
  Q_idx_0 = t17->mQ.mX[0];
  Q_idx_1 = t17->mQ.mX[1];
  Q_idx_2 = t17->mQ.mX[2];
  M_idx_27 = t17->mM.mX[27];
  M_idx_28 = t17->mM.mX[28];
  M_idx_29 = t17->mM.mX[29];
  M_idx_30 = t17->mM.mX[30];
  M_idx_31 = t17->mM.mX[31];
  M_idx_32 = t17->mM.mX[32];
  M_idx_33 = t17->mM.mX[33];
  M_idx_34 = t17->mM.mX[34];
  M_idx_35 = t17->mM.mX[35];
  M_idx_36 = t17->mM.mX[36];
  M_idx_37 = t17->mM.mX[37];
  M_idx_38 = t17->mM.mX[38];
  U_idx_1 = t17->mU.mX[1];
  X_idx_0 = t17->mX.mX[0];
  X_idx_1 = t17->mX.mX[1];
  X_idx_2 = t17->mX.mX[2];
  X_idx_4 = t17->mX.mX[4];
  X_idx_5 = t17->mX.mX[5];
  X_idx_6 = t17->mX.mX[6];
  X_idx_9 = t17->mX.mX[9];
  X_idx_13 = t17->mX.mX[13];
  X_idx_14 = t17->mX.mX[14];
  X_idx_15 = t17->mX.mX[15];
  X_idx_16 = t17->mX.mX[16];
  X_idx_17 = t17->mX.mX[17];
  X_idx_18 = t17->mX.mX[18];
  X_idx_19 = t17->mX.mX[19];
  X_idx_20 = t17->mX.mX[20];
  X_idx_21 = t17->mX.mX[21];
  X_idx_23 = t17->mX.mX[23];
  X_idx_24 = t17->mX.mX[24];
  X_idx_25 = t17->mX.mX[25];
  X_idx_26 = t17->mX.mX[26];
  X_idx_31 = t17->mX.mX[31];
  out = t18->mF;
  t1 = (((((((X_idx_0 * 0.0001 + X_idx_1 * 0.0001) + -X_idx_17) + X_idx_14 *
            1.000001) + X_idx_15 * 1.0000010001) + -X_idx_19) + -X_idx_16) +
        X_idx_18) + X_idx_2;
  t4 = (-X_idx_1 + X_idx_14 * -0.01) + X_idx_15 * -0.010001;
  t6 = ((((-X_idx_1 + X_idx_14 * -0.01) + X_idx_15 * -0.010001) + X_idx_18 *
         -0.001) + X_idx_19 * -0.01) + X_idx_4;
  t7 = (X_idx_16 * -0.001 + X_idx_23 * -0.011) + X_idx_5;
  Driver_Half_Bridge_Driver_iL = X_idx_16 + X_idx_23;
  N_Channel_MOSFET_1_drain_resistor_i = -X_idx_19 + X_idx_18;
  N_Channel_MOSFET_1_mos_vds = -X_idx_6 + X_idx_4;
  N_Channel_MOSFET_2_mos_vds = (((-X_idx_1 + X_idx_14 * -0.01) + X_idx_15 *
    -0.010001) + X_idx_16 * -0.01) + X_idx_23 * 0.01;
  t3 = ((((((((X_idx_0 * -1.0000000000000002E-6 + X_idx_1 * -1.000001) + X_idx_2
              * -0.01) + X_idx_14 * -0.02000001) + X_idx_15 * -0.020001010001) +
           X_idx_18 * -0.01) + X_idx_19 * 0.01) + X_idx_16 * 0.01) + -30.0) *
    1.602176487E-19 / 2.8078031641896661E-21;
  intrm_sf_mf_10 = (Q_idx_1 == 3);
  intrm_sf_mf_11 = (Q_idx_1 == 2);
  intrm_sf_mf_12 = (Q_idx_1 == 1);
  intrm_sf_mf_15 = (Q_idx_2 == 4);
  intrm_sf_mf_16 = (Q_idx_2 == 3);
  intrm_sf_mf_17 = (Q_idx_2 == 2);
  intrm_sf_mf_18 = (Q_idx_2 == 1);
  intrm_sf_mf_23 = X_idx_4 - N_Channel_MOSFET_1_mos_vds;
  intrm_sf_mf_24 = (X_idx_9 - 298.15) * 0.036895806810537592 + 2.0;
  X_idx_17 = X_idx_9 / 298.15 * pmf_sqrt(X_idx_9 / 298.15);
  t13 = 1.0 / (X_idx_17 == 0.0 ? 1.0E-16 : X_idx_17) * 0.984251968503937;
  X_idx_15 = (X_idx_15 * 9.9999999999926537E-7 + X_idx_1) * 1.602176487E-19 /
    2.8078031641896661E-21;
  X_idx_2 = X_idx_5 - N_Channel_MOSFET_2_mos_vds;
  X_idx_9 = (X_idx_13 - 298.15) * 0.036895806810537592 + 2.0;
  X_idx_1 = X_idx_13 / 298.15 * pmf_sqrt(X_idx_13 / 298.15);
  X_idx_17 = 1.0 / (X_idx_1 == 0.0 ? 1.0E-16 : X_idx_1) * 0.984251968503937;
  X_idx_1 = X_idx_21 * 2.0E-5;
  if (X_idx_1 < 0.0) {
    X_idx_0 = 0.0;
  } else {
    X_idx_0 = X_idx_1 >= 2.0E-5 ? 2.0E-5 : X_idx_1;
  }

  if (U_idx_1 <= 0.0) {
    X_idx_1 = 0.0;
  } else {
    X_idx_1 = U_idx_1 >= 1.0 ? 1.0 : U_idx_1;
  }

  intrm_sf_mf_9 = (Q_idx_1 == 4);
  if (t3 > 80.0) {
    X_idx_6 = t1 - ((t3 - 79.0) * 5.54062238439351E+34 - 1.0) *
      1.2966632705443312E-18;
  } else if (M_idx_27 != 0) {
    X_idx_6 = t1 - ((t3 + 80.0) * 4.9060947306492808E-35 - 1.0) *
      1.2966632705443312E-18;
  } else {
    X_idx_6 = t1 - (exp(t3) - 1.0) * 1.2966632705443312E-18;
  }

  if (X_idx_15 > 80.0) {
    t1 = X_idx_14 - ((X_idx_15 - 79.0) * 5.54062238439351E+34 - 1.0) *
      1.2966632705443312E-18;
  } else if (M_idx_28 != 0) {
    t1 = X_idx_14 - ((X_idx_15 + 80.0) * 4.9060947306492808E-35 - 1.0) *
      1.2966632705443312E-18;
  } else {
    t1 = X_idx_14 - (exp(X_idx_15) - 1.0) * 1.2966632705443312E-18;
  }

  if ((Q_idx_0 == 1) || (Q_idx_0 == 2)) {
  } else {
    X_idx_20 -= 5.0;
  }

  if (intrm_sf_mf_12) {
    t3 = (t6 - t4) - X_idx_18 * 10.0;
  } else if (intrm_sf_mf_11) {
    t3 = (t6 - t4) - X_idx_18 * 10.0;
  } else if (intrm_sf_mf_10) {
    t3 = (t6 - t4) - X_idx_18 * 10.0;
  } else if (intrm_sf_mf_9) {
    t3 = (t6 - t4) - X_idx_18 * 10.0;
  } else {
    t3 = (t6 - t4) - (X_idx_18 * 100.0 + 15.0);
  }

  if (intrm_sf_mf_12) {
    t4 = X_idx_24 * 0.001 - X_idx_18 * X_idx_18 * 0.01;
  } else if (intrm_sf_mf_11) {
    t4 = X_idx_24 * 0.001 - X_idx_18 * X_idx_18 * 0.01;
  } else if (intrm_sf_mf_10) {
    t4 = X_idx_24 * 0.001 - X_idx_18 * X_idx_18 * 0.01;
  } else if (intrm_sf_mf_9) {
    t4 = X_idx_24 * 0.001 - X_idx_18 * X_idx_18 * 0.01;
  } else {
    t4 = X_idx_24 * 0.001 - X_idx_18 * X_idx_18 * 0.1;
  }

  if (intrm_sf_mf_18) {
    X_idx_15 = t7 - Driver_Half_Bridge_Driver_iL * 10.0;
  } else if (intrm_sf_mf_17) {
    X_idx_15 = t7 - Driver_Half_Bridge_Driver_iL * 10.0;
  } else if (intrm_sf_mf_16) {
    X_idx_15 = t7 - Driver_Half_Bridge_Driver_iL * 10.0;
  } else if (intrm_sf_mf_15) {
    X_idx_15 = t7 - Driver_Half_Bridge_Driver_iL * 10.0;
  } else {
    X_idx_15 = t7 - (Driver_Half_Bridge_Driver_iL * 100.0 + 15.0);
  }

  if (intrm_sf_mf_18) {
    t6 = X_idx_25 * 0.001 - Driver_Half_Bridge_Driver_iL *
      Driver_Half_Bridge_Driver_iL * 0.01;
  } else if (intrm_sf_mf_17) {
    t6 = X_idx_25 * 0.001 - Driver_Half_Bridge_Driver_iL *
      Driver_Half_Bridge_Driver_iL * 0.01;
  } else if (intrm_sf_mf_16) {
    t6 = X_idx_25 * 0.001 - Driver_Half_Bridge_Driver_iL *
      Driver_Half_Bridge_Driver_iL * 0.01;
  } else if (intrm_sf_mf_15) {
    t6 = X_idx_25 * 0.001 - Driver_Half_Bridge_Driver_iL *
      Driver_Half_Bridge_Driver_iL * 0.01;
  } else {
    t6 = X_idx_25 * 0.001 - Driver_Half_Bridge_Driver_iL *
      Driver_Half_Bridge_Driver_iL * 0.1;
  }

  if (M_idx_29 != 0) {
    if (M_idx_30 != 0) {
      t7 = X_idx_26 - N_Channel_MOSFET_1_mos_vds * 1.0E-12;
    } else if (M_idx_31 != 0) {
      t7 = X_idx_26 - (((X_idx_4 - intrm_sf_mf_24) - N_Channel_MOSFET_1_mos_vds *
                        0.5) * N_Channel_MOSFET_1_mos_vds * t13 +
                       N_Channel_MOSFET_1_mos_vds * 1.0E-12);
    } else {
      t7 = X_idx_26 - ((X_idx_4 - intrm_sf_mf_24) * (X_idx_4 - intrm_sf_mf_24) *
                       t13 * 0.5 + N_Channel_MOSFET_1_mos_vds * 1.0E-12);
    }
  } else if (M_idx_32 != 0) {
    t7 = X_idx_26 - N_Channel_MOSFET_1_mos_vds * 1.0E-12;
  } else if (M_idx_33 != 0) {
    t7 = X_idx_26 - (((intrm_sf_mf_23 - intrm_sf_mf_24) +
                      N_Channel_MOSFET_1_mos_vds * 0.5) *
                     N_Channel_MOSFET_1_mos_vds * t13 +
                     N_Channel_MOSFET_1_mos_vds * 1.0E-12);
  } else {
    t7 = X_idx_26 - ((intrm_sf_mf_23 - intrm_sf_mf_24) * (intrm_sf_mf_23 -
      intrm_sf_mf_24) * t13 * -0.5 + N_Channel_MOSFET_1_mos_vds * 1.0E-12);
  }

  if (M_idx_34 != 0) {
    if (M_idx_35 != 0) {
      X_idx_17 = X_idx_31 - N_Channel_MOSFET_2_mos_vds * 1.0E-12;
    } else if (M_idx_36 != 0) {
      X_idx_17 = X_idx_31 - (((X_idx_5 - X_idx_9) - N_Channel_MOSFET_2_mos_vds *
        0.5) * N_Channel_MOSFET_2_mos_vds * X_idx_17 +
        N_Channel_MOSFET_2_mos_vds * 1.0E-12);
    } else {
      X_idx_17 = X_idx_31 - ((X_idx_5 - X_idx_9) * (X_idx_5 - X_idx_9) *
        X_idx_17 * 0.5 + N_Channel_MOSFET_2_mos_vds * 1.0E-12);
    }
  } else if (M_idx_37 != 0) {
    X_idx_17 = X_idx_31 - N_Channel_MOSFET_2_mos_vds * 1.0E-12;
  } else if (M_idx_38 != 0) {
    X_idx_17 = X_idx_31 - (((X_idx_2 - X_idx_9) + N_Channel_MOSFET_2_mos_vds *
      0.5) * N_Channel_MOSFET_2_mos_vds * X_idx_17 + N_Channel_MOSFET_2_mos_vds *
      1.0E-12);
  } else {
    X_idx_17 = X_idx_31 - ((X_idx_2 - X_idx_9) * (X_idx_2 - X_idx_9) * X_idx_17 *
      -0.5 + N_Channel_MOSFET_2_mos_vds * 1.0E-12);
  }

  out.mX[0] = -0.0;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  out.mX[6] = -0.0;
  out.mX[7] = -0.0;
  out.mX[8] = -0.0;
  out.mX[9] = -0.0;
  out.mX[10] = -0.0;
  out.mX[11] = -0.0;
  out.mX[12] = -0.0;
  out.mX[13] = -0.0;
  out.mX[14] = -30.0;
  out.mX[15] = X_idx_6;
  out.mX[16] = t1;
  out.mX[17] = -X_idx_0;
  out.mX[18] = X_idx_20;
  out.mX[19] = -X_idx_1;
  out.mX[20] = t3 / 10.0;
  out.mX[21] = t4 / 0.001;
  out.mX[22] = X_idx_15 / 10.0;
  out.mX[23] = t6 / 0.001;
  out.mX[24] = -30.0;
  out.mX[25] = -(N_Channel_MOSFET_1_drain_resistor_i *
                 N_Channel_MOSFET_1_drain_resistor_i * 1.0E-5);
  out.mX[26] = -(X_idx_18 * X_idx_18 * 1.0E-6);
  out.mX[27] = t7;
  out.mX[28] = -(X_idx_26 * N_Channel_MOSFET_1_mos_vds * 0.001);
  out.mX[29] = -(X_idx_19 * X_idx_19 * 1.0E-5);
  out.mX[30] = 0.0;
  out.mX[31] = -(X_idx_16 * X_idx_16 * 1.0E-5);
  out.mX[32] = -(Driver_Half_Bridge_Driver_iL * Driver_Half_Bridge_Driver_iL *
                 1.0E-6);
  out.mX[33] = X_idx_17;
  out.mX[34] = -(X_idx_31 * N_Channel_MOSFET_2_mos_vds * 0.001);
  out.mX[35] = -(X_idx_23 * X_idx_23 * 1.0E-5);
  out.mX[36] = 0.023852;
  out.mX[37] = 0.023852;
  (void)sys;
  (void)t18;
  return 0;
}
