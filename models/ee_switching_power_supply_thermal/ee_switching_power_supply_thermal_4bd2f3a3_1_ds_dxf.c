/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxf.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxf(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t71, NeDsMethodOutput *t72)
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
  real_T intrm_sf_mf_3;
  real_T intrm_sf_mf_32;
  boolean_T intrm_sf_mf_9;
  real_T intermediate_der39;
  real_T intermediate_der68;
  real_T t0;
  real_T t1;
  real_T t5;
  real_T t6;
  real_T t11;
  real_T t12;
  real_T t16;
  real_T t18;
  real_T t20;
  real_T t25;
  real_T t26[57];
  real_T t27[5];
  real_T t31[5];
  real_T t32[5];
  real_T t33[7];
  real_T t34[5];
  real_T t35[4];
  real_T t36[6];
  size_t t48;
  real_T t51;
  real_T t53;
  real_T t54;
  real_T t65;
  real_T t66;
  real_T t67;
  real_T t69;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_2;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_18;
  real_T X_idx_19;
  real_T X_idx_16;
  real_T X_idx_23;
  real_T X_idx_4;
  real_T X_idx_6;
  real_T X_idx_5;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  real_T X_idx_9;
  real_T X_idx_13;
  real_T X_idx_21;
  int32_T M_idx_27;
  int32_T M_idx_28;
  int32_T M_idx_34;
  int32_T M_idx_37;
  int32_T M_idx_35;
  int32_T M_idx_38;
  int32_T M_idx_36;
  int32_T M_idx_29;
  int32_T M_idx_32;
  int32_T M_idx_30;
  int32_T M_idx_33;
  int32_T M_idx_31;
  real_T X_idx_31;
  real_T X_idx_26;
  Q_idx_1 = t71->mQ.mX[1];
  Q_idx_2 = t71->mQ.mX[2];
  M_idx_27 = t71->mM.mX[27];
  M_idx_28 = t71->mM.mX[28];
  M_idx_29 = t71->mM.mX[29];
  M_idx_30 = t71->mM.mX[30];
  M_idx_31 = t71->mM.mX[31];
  M_idx_32 = t71->mM.mX[32];
  M_idx_33 = t71->mM.mX[33];
  M_idx_34 = t71->mM.mX[34];
  M_idx_35 = t71->mM.mX[35];
  M_idx_36 = t71->mM.mX[36];
  M_idx_37 = t71->mM.mX[37];
  M_idx_38 = t71->mM.mX[38];
  X_idx_0 = t71->mX.mX[0];
  X_idx_1 = t71->mX.mX[1];
  X_idx_2 = t71->mX.mX[2];
  X_idx_4 = t71->mX.mX[4];
  X_idx_5 = t71->mX.mX[5];
  X_idx_6 = t71->mX.mX[6];
  X_idx_9 = t71->mX.mX[9];
  X_idx_13 = t71->mX.mX[13];
  X_idx_14 = t71->mX.mX[14];
  X_idx_15 = t71->mX.mX[15];
  X_idx_16 = t71->mX.mX[16];
  X_idx_18 = t71->mX.mX[18];
  X_idx_19 = t71->mX.mX[19];
  X_idx_21 = t71->mX.mX[21];
  X_idx_23 = t71->mX.mX[23];
  X_idx_26 = t71->mX.mX[26];
  X_idx_31 = t71->mX.mX[31];
  out = t72->mDXF;
  Driver_Half_Bridge_Driver_iL = X_idx_16 + X_idx_23;
  N_Channel_MOSFET_1_drain_resistor_i = -X_idx_19 + X_idx_18;
  N_Channel_MOSFET_1_mos_vds = -X_idx_6 + X_idx_4;
  N_Channel_MOSFET_2_mos_vds = (((-X_idx_1 + X_idx_14 * -0.01) + X_idx_15 *
    -0.010001) + X_idx_16 * -0.01) + X_idx_23 * 0.01;
  t65 = ((((((((X_idx_0 * -1.0000000000000002E-6 + X_idx_1 * -1.000001) +
               X_idx_2 * -0.01) + X_idx_14 * -0.02000001) + X_idx_15 *
             -0.020001010001) + X_idx_18 * -0.01) + X_idx_19 * 0.01) + X_idx_16 *
          0.01) + -30.0) * 1.602176487E-19 / 2.8078031641896661E-21;
  intrm_sf_mf_10 = (Q_idx_1 == 3);
  intrm_sf_mf_11 = (Q_idx_1 == 2);
  intrm_sf_mf_12 = (Q_idx_1 == 1);
  intrm_sf_mf_15 = (Q_idx_2 == 4);
  intrm_sf_mf_16 = (Q_idx_2 == 3);
  intrm_sf_mf_17 = (Q_idx_2 == 2);
  intrm_sf_mf_18 = (Q_idx_2 == 1);
  t66 = X_idx_4 - N_Channel_MOSFET_1_mos_vds;
  t11 = (X_idx_9 - 298.15) * 0.036895806810537592 + 2.0;
  t51 = X_idx_9 / 298.15 * pmf_sqrt(X_idx_9 / 298.15);
  t12 = 1.0 / (t51 == 0.0 ? 1.0E-16 : t51) * 0.984251968503937;
  intrm_sf_mf_3 = (X_idx_15 * 9.9999999999926537E-7 + X_idx_1) * 1.602176487E-19
    / 2.8078031641896661E-21;
  t51 = X_idx_5 - N_Channel_MOSFET_2_mos_vds;
  t69 = (X_idx_13 - 298.15) * 0.036895806810537592 + 2.0;
  t0 = X_idx_13 / 298.15 * pmf_sqrt(X_idx_13 / 298.15);
  intrm_sf_mf_32 = 1.0 / (t0 == 0.0 ? 1.0E-16 : t0) * 0.984251968503937;
  t0 = X_idx_21 * 2.0E-5;
  intrm_sf_mf_9 = (Q_idx_1 == 4);
  t1 = -5.7061567115314136E-5;
  intermediate_der39 = -57.061624176881239;
  t20 = -0.57061567115314127;
  t18 = -1.1412319129219537;
  t16 = -1.1412889745461305;
  t25 = 0.57061567115314127;
  t53 = X_idx_9 / 298.15 * (X_idx_9 / 298.15) * pmf_sqrt(X_idx_9 / 298.15);
  t67 = 1.0 / (t53 == 0.0 ? 1.0E-16 : t53) * -0.0049517959173433022;
  t53 = 57.061567115314126;
  X_idx_0 = 5.7061567115272205E-5;
  t54 = X_idx_13 / 298.15 * (X_idx_13 / 298.15) * pmf_sqrt(X_idx_13 / 298.15);
  X_idx_6 = 1.0 / (t54 == 0.0 ? 1.0E-16 : t54) * -0.0049517959173433022;
  if (t0 < 0.0) {
    intermediate_der68 = 0.0;
  } else {
    intermediate_der68 = t0 >= 2.0E-5 ? 0.0 : 2.0E-5;
  }

  if (t65 > 80.0) {
    t0 = 0.0001 - t1 * 1.2966632705443312E-18 * 5.54062238439351E+34;
  } else if (M_idx_27 != 0) {
    t0 = 0.0001 - t1 * 1.2966632705443312E-18 * 4.9060947306492808E-35;
  } else {
    t0 = 0.0001 - exp(t65) * t1 * 1.2966632705443312E-18;
  }

  if (t65 > 80.0) {
    t1 = 0.0001 - intermediate_der39 * 1.2966632705443312E-18 *
      5.54062238439351E+34;
  } else if (M_idx_27 != 0) {
    t1 = 0.0001 - intermediate_der39 * 1.2966632705443312E-18 *
      4.9060947306492808E-35;
  } else {
    t1 = 0.0001 - exp(t65) * intermediate_der39 * 1.2966632705443312E-18;
  }

  if (intrm_sf_mf_3 > 80.0) {
    intermediate_der39 = -(t53 * 1.2966632705443312E-18 * 5.54062238439351E+34);
  } else if (M_idx_28 != 0) {
    intermediate_der39 = -(t53 * 1.2966632705443312E-18 * 4.9060947306492808E-35);
  } else {
    intermediate_der39 = -(exp(intrm_sf_mf_3) * t53 * 1.2966632705443312E-18);
  }

  if (M_idx_34 != 0) {
    if (M_idx_35 != 0) {
      X_idx_13 = 1.0E-12;
    } else if (M_idx_36 != 0) {
      X_idx_13 = -((-((X_idx_5 - t69) - N_Channel_MOSFET_2_mos_vds * 0.5) *
                    intrm_sf_mf_32 + 0.5 * N_Channel_MOSFET_2_mos_vds *
                    intrm_sf_mf_32) + -1.0E-12);
    } else {
      X_idx_13 = 1.0E-12;
    }
  } else if (M_idx_37 != 0) {
    X_idx_13 = 1.0E-12;
  } else if (M_idx_38 != 0) {
    X_idx_13 = -((-((t51 - t69) + N_Channel_MOSFET_2_mos_vds * 0.5) *
                  intrm_sf_mf_32 + 0.5 * N_Channel_MOSFET_2_mos_vds *
                  intrm_sf_mf_32) + -1.0E-12);
  } else {
    X_idx_13 = -(-((t51 - t69) * 1.0 * intrm_sf_mf_32) + -1.0E-12);
  }

  if (t65 > 80.0) {
    t53 = 1.0 - t20 * 1.2966632705443312E-18 * 5.54062238439351E+34;
  } else if (M_idx_27 != 0) {
    t53 = 1.0 - t20 * 1.2966632705443312E-18 * 4.9060947306492808E-35;
  } else {
    t53 = 1.0 - exp(t65) * t20 * 1.2966632705443312E-18;
  }

  if (M_idx_29 != 0) {
    if (M_idx_30 != 0) {
      t5 = -1.0E-12;
    } else if (M_idx_31 != 0) {
      t5 = -((((X_idx_4 - t11) - N_Channel_MOSFET_1_mos_vds * 0.5) * t12 + 0.5 *
              N_Channel_MOSFET_1_mos_vds * t12) + 1.0E-12);
    } else {
      t5 = -((X_idx_4 - t11) * t12 + 1.0E-12);
    }
  } else if (M_idx_32 != 0) {
    t5 = -1.0E-12;
  } else if (M_idx_33 != 0) {
    t5 = -((((t66 - t11) + N_Channel_MOSFET_1_mos_vds * 0.5) * t12 + 0.5 *
            N_Channel_MOSFET_1_mos_vds * t12) + 1.0E-12);
  } else {
    t5 = -(-((t66 - t11) * 0.0 * t12) + 1.0E-12);
  }

  if (M_idx_34 != 0) {
    if (M_idx_35 != 0) {
      t6 = 0.0;
    } else if (M_idx_36 != 0) {
      t6 = -(N_Channel_MOSFET_2_mos_vds * intrm_sf_mf_32);
    } else {
      t6 = -((X_idx_5 - t69) * intrm_sf_mf_32);
    }
  } else if (M_idx_37 != 0) {
    t6 = 0.0;
  } else if (M_idx_38 != 0) {
    t6 = -(N_Channel_MOSFET_2_mos_vds * intrm_sf_mf_32);
  } else {
    t6 = (t51 - t69) * intrm_sf_mf_32;
  }

  if (M_idx_29 != 0) {
    if (M_idx_30 != 0) {
      t54 = 1.0E-12;
    } else if (M_idx_31 != 0) {
      t54 = -((-((X_idx_4 - t11) - N_Channel_MOSFET_1_mos_vds * 0.5) * t12 + 0.5
               * N_Channel_MOSFET_1_mos_vds * t12) + -1.0E-12);
    } else {
      t54 = 1.0E-12;
    }
  } else if (M_idx_32 != 0) {
    t54 = 1.0E-12;
  } else if (M_idx_33 != 0) {
    t54 = -((-((t66 - t11) + N_Channel_MOSFET_1_mos_vds * 0.5) * t12 + 0.5 *
             N_Channel_MOSFET_1_mos_vds * t12) + -1.0E-12);
  } else {
    t54 = -(-((t66 - t11) * 1.0 * t12) + -1.0E-12);
  }

  if (M_idx_29 != 0) {
    if (M_idx_30 != 0) {
      X_idx_4 = 0.0;
    } else if (M_idx_31 != 0) {
      X_idx_4 = -(((X_idx_4 - t11) - N_Channel_MOSFET_1_mos_vds * 0.5) * t67 *
                  N_Channel_MOSFET_1_mos_vds + -0.036895806810537592 *
                  N_Channel_MOSFET_1_mos_vds * t12);
    } else {
      X_idx_4 = -((X_idx_4 - t11) * (X_idx_4 - t11) * t67 * 0.5 +
                  -0.036895806810537592 * (X_idx_4 - t11) * t12);
    }
  } else if (M_idx_32 != 0) {
    X_idx_4 = 0.0;
  } else if (M_idx_33 != 0) {
    X_idx_4 = -(((t66 - t11) + N_Channel_MOSFET_1_mos_vds * 0.5) * t67 *
                N_Channel_MOSFET_1_mos_vds + -0.036895806810537592 *
                N_Channel_MOSFET_1_mos_vds * t12);
  } else {
    X_idx_4 = -((t66 - t11) * (t66 - t11) * t67 * -0.5 + -(-0.036895806810537592
      * (t66 - t11) * t12));
  }

  if (M_idx_34 != 0) {
    if (M_idx_35 != 0) {
      X_idx_9 = 0.0;
    } else if (M_idx_36 != 0) {
      X_idx_9 = -(((X_idx_5 - t69) - N_Channel_MOSFET_2_mos_vds * 0.5) * X_idx_6
                  * N_Channel_MOSFET_2_mos_vds + -0.036895806810537592 *
                  N_Channel_MOSFET_2_mos_vds * intrm_sf_mf_32);
    } else {
      X_idx_9 = -((X_idx_5 - t69) * (X_idx_5 - t69) * X_idx_6 * 0.5 +
                  -0.036895806810537592 * (X_idx_5 - t69) * intrm_sf_mf_32);
    }
  } else if (M_idx_37 != 0) {
    X_idx_9 = 0.0;
  } else if (M_idx_38 != 0) {
    X_idx_9 = -(((t51 - t69) + N_Channel_MOSFET_2_mos_vds * 0.5) * X_idx_6 *
                N_Channel_MOSFET_2_mos_vds + -0.036895806810537592 *
                N_Channel_MOSFET_2_mos_vds * intrm_sf_mf_32);
  } else {
    X_idx_9 = -((t51 - t69) * (t51 - t69) * X_idx_6 * -0.5 +
                -(-0.036895806810537592 * (t51 - t69) * intrm_sf_mf_32));
  }

  if (t65 > 80.0) {
    t66 = 1.000001 - t18 * 1.2966632705443312E-18 * 5.54062238439351E+34;
  } else if (M_idx_27 != 0) {
    t66 = 1.000001 - t18 * 1.2966632705443312E-18 * 4.9060947306492808E-35;
  } else {
    t66 = 1.000001 - exp(t65) * t18 * 1.2966632705443312E-18;
  }

  if (M_idx_34 != 0) {
    if (M_idx_35 != 0) {
      t11 = 1.0E-14;
    } else if (M_idx_36 != 0) {
      t11 = -((((X_idx_5 - t69) - N_Channel_MOSFET_2_mos_vds * 0.5) * -0.01 *
               intrm_sf_mf_32 + 0.005 * N_Channel_MOSFET_2_mos_vds *
               intrm_sf_mf_32) + -1.0E-14);
    } else {
      t11 = 1.0E-14;
    }
  } else if (M_idx_37 != 0) {
    t11 = 1.0E-14;
  } else if (M_idx_38 != 0) {
    t11 = -((((t51 - t69) + N_Channel_MOSFET_2_mos_vds * 0.5) * -0.01 *
             intrm_sf_mf_32 + 0.005 * N_Channel_MOSFET_2_mos_vds *
             intrm_sf_mf_32) + -1.0E-14);
  } else {
    t11 = -(-((t51 - t69) * 0.01 * intrm_sf_mf_32) + -1.0E-14);
  }

  if (t65 > 80.0) {
    t12 = 1.0000010001 - t16 * 1.2966632705443312E-18 * 5.54062238439351E+34;
  } else if (M_idx_27 != 0) {
    t12 = 1.0000010001 - t16 * 1.2966632705443312E-18 * 4.9060947306492808E-35;
  } else {
    t12 = 1.0000010001 - exp(t65) * t16 * 1.2966632705443312E-18;
  }

  if (intrm_sf_mf_3 > 80.0) {
    X_idx_0 = -(X_idx_0 * 1.2966632705443312E-18 * 5.54062238439351E+34);
  } else if (M_idx_28 != 0) {
    X_idx_0 = -(X_idx_0 * 1.2966632705443312E-18 * 4.9060947306492808E-35);
  } else {
    X_idx_0 = -(exp(intrm_sf_mf_3) * X_idx_0 * 1.2966632705443312E-18);
  }

  if (M_idx_34 != 0) {
    if (M_idx_35 != 0) {
      intrm_sf_mf_3 = 1.0001E-14;
    } else if (M_idx_36 != 0) {
      intrm_sf_mf_3 = -((((X_idx_5 - t69) - N_Channel_MOSFET_2_mos_vds * 0.5) *
                         -0.010001 * intrm_sf_mf_32 + 0.0050005 *
                         N_Channel_MOSFET_2_mos_vds * intrm_sf_mf_32) +
                        -1.0001E-14);
    } else {
      intrm_sf_mf_3 = 1.0001E-14;
    }
  } else if (M_idx_37 != 0) {
    intrm_sf_mf_3 = 1.0001E-14;
  } else if (M_idx_38 != 0) {
    intrm_sf_mf_3 = -((((t51 - t69) + N_Channel_MOSFET_2_mos_vds * 0.5) *
                       -0.010001 * intrm_sf_mf_32 + 0.0050005 *
                       N_Channel_MOSFET_2_mos_vds * intrm_sf_mf_32) +
                      -1.0001E-14);
  } else {
    intrm_sf_mf_3 = -(-((t51 - t69) * 0.010001 * intrm_sf_mf_32) + -1.0001E-14);
  }

  if (t65 > 80.0) {
    X_idx_2 = -1.0 - t25 * 1.2966632705443312E-18 * 5.54062238439351E+34;
  } else if (M_idx_27 != 0) {
    X_idx_2 = -1.0 - t25 * 1.2966632705443312E-18 * 4.9060947306492808E-35;
  } else {
    X_idx_2 = -1.0 - exp(t65) * t25 * 1.2966632705443312E-18;
  }

  if (intrm_sf_mf_18) {
    t16 = -10.001;
  } else if (intrm_sf_mf_17) {
    t16 = -10.001;
  } else if (intrm_sf_mf_16) {
    t16 = -10.001;
  } else if (intrm_sf_mf_15) {
    t16 = -10.001;
  } else {
    t16 = -100.001;
  }

  if (intrm_sf_mf_18) {
    X_idx_14 = -(Driver_Half_Bridge_Driver_iL * 0.02);
  } else if (intrm_sf_mf_17) {
    X_idx_14 = -(Driver_Half_Bridge_Driver_iL * 0.02);
  } else if (intrm_sf_mf_16) {
    X_idx_14 = -(Driver_Half_Bridge_Driver_iL * 0.02);
  } else if (intrm_sf_mf_15) {
    X_idx_14 = -(Driver_Half_Bridge_Driver_iL * 0.02);
  } else {
    X_idx_14 = -(Driver_Half_Bridge_Driver_iL * 0.2);
  }

  if (M_idx_34 != 0) {
    if (M_idx_35 != 0) {
      t18 = 1.0E-14;
    } else if (M_idx_36 != 0) {
      t18 = -((((X_idx_5 - t69) - N_Channel_MOSFET_2_mos_vds * 0.5) * -0.01 *
               intrm_sf_mf_32 + 0.005 * N_Channel_MOSFET_2_mos_vds *
               intrm_sf_mf_32) + -1.0E-14);
    } else {
      t18 = 1.0E-14;
    }
  } else if (M_idx_37 != 0) {
    t18 = 1.0E-14;
  } else if (M_idx_38 != 0) {
    t18 = -((((t51 - t69) + N_Channel_MOSFET_2_mos_vds * 0.5) * -0.01 *
             intrm_sf_mf_32 + 0.005 * N_Channel_MOSFET_2_mos_vds *
             intrm_sf_mf_32) + -1.0E-14);
  } else {
    t18 = -(-((t51 - t69) * 0.01 * intrm_sf_mf_32) + -1.0E-14);
  }

  if (t65 > 80.0) {
    X_idx_1 = 1.0 - t20 * 1.2966632705443312E-18 * 5.54062238439351E+34;
  } else if (M_idx_27 != 0) {
    X_idx_1 = 1.0 - t20 * 1.2966632705443312E-18 * 4.9060947306492808E-35;
  } else {
    X_idx_1 = 1.0 - exp(t65) * t20 * 1.2966632705443312E-18;
  }

  if (intrm_sf_mf_12) {
    t20 = -10.001;
  } else if (intrm_sf_mf_11) {
    t20 = -10.001;
  } else if (intrm_sf_mf_10) {
    t20 = -10.001;
  } else if (intrm_sf_mf_9) {
    t20 = -10.001;
  } else {
    t20 = -100.001;
  }

  if (intrm_sf_mf_12) {
    X_idx_15 = -(X_idx_18 * 0.02);
  } else if (intrm_sf_mf_11) {
    X_idx_15 = -(X_idx_18 * 0.02);
  } else if (intrm_sf_mf_10) {
    X_idx_15 = -(X_idx_18 * 0.02);
  } else if (intrm_sf_mf_9) {
    X_idx_15 = -(X_idx_18 * 0.02);
  } else {
    X_idx_15 = -(X_idx_18 * 0.2);
  }

  if (t65 > 80.0) {
    t67 = -1.0 - t25 * 1.2966632705443312E-18 * 5.54062238439351E+34;
  } else if (M_idx_27 != 0) {
    t67 = -1.0 - t25 * 1.2966632705443312E-18 * 4.9060947306492808E-35;
  } else {
    t67 = -1.0 - exp(t65) * t25 * 1.2966632705443312E-18;
  }

  if (intrm_sf_mf_18) {
    X_idx_21 = -10.011;
  } else if (intrm_sf_mf_17) {
    X_idx_21 = -10.011;
  } else if (intrm_sf_mf_16) {
    X_idx_21 = -10.011;
  } else if (intrm_sf_mf_15) {
    X_idx_21 = -10.011;
  } else {
    X_idx_21 = -100.011;
  }

  if (intrm_sf_mf_18) {
    t65 = -(Driver_Half_Bridge_Driver_iL * 0.02);
  } else if (intrm_sf_mf_17) {
    t65 = -(Driver_Half_Bridge_Driver_iL * 0.02);
  } else if (intrm_sf_mf_16) {
    t65 = -(Driver_Half_Bridge_Driver_iL * 0.02);
  } else if (intrm_sf_mf_15) {
    t65 = -(Driver_Half_Bridge_Driver_iL * 0.02);
  } else {
    t65 = -(Driver_Half_Bridge_Driver_iL * 0.2);
  }

  if (M_idx_34 != 0) {
    if (M_idx_35 != 0) {
      t25 = -1.0E-14;
    } else if (M_idx_36 != 0) {
      t25 = -((((X_idx_5 - t69) - N_Channel_MOSFET_2_mos_vds * 0.5) * 0.01 *
               intrm_sf_mf_32 + -0.005 * N_Channel_MOSFET_2_mos_vds *
               intrm_sf_mf_32) + 1.0E-14);
    } else {
      t25 = -1.0E-14;
    }
  } else if (M_idx_37 != 0) {
    t25 = -1.0E-14;
  } else if (M_idx_38 != 0) {
    t25 = -((((t51 - t69) + N_Channel_MOSFET_2_mos_vds * 0.5) * 0.01 *
             intrm_sf_mf_32 + -0.005 * N_Channel_MOSFET_2_mos_vds *
             intrm_sf_mf_32) + 1.0E-14);
  } else {
    t25 = -(-((t51 - t69) * -0.01 * intrm_sf_mf_32) + 1.0E-14);
  }

  t27[0ULL] = t1;
  t27[1ULL] = intermediate_der39;
  t27[2ULL] = 0.0;
  t27[3ULL] = X_idx_13;
  t27[4ULL] = -(-X_idx_31 * 0.001);
  X_idx_6 = 0.1;
  t31[0ULL] = t66;
  t31[1ULL] = 1.0;
  t31[2ULL] = 0.0;
  t31[3ULL] = t11;
  t31[4ULL] = -(X_idx_31 * -0.01 * 0.001);
  t32[0ULL] = t12;
  t32[1ULL] = X_idx_0;
  t32[2ULL] = 0.0;
  t32[3ULL] = intrm_sf_mf_3;
  t32[4ULL] = -(X_idx_31 * -0.010001 * 0.001);
  t33[0ULL] = X_idx_2;
  t33[1ULL] = t16 * 0.1;
  t33[2ULL] = X_idx_14 * 1000.0;
  t33[3ULL] = -((X_idx_16 * 0.01 + X_idx_16 * 0.01) * 0.001);
  t33[4ULL] = -((Driver_Half_Bridge_Driver_iL * 0.001 +
                 Driver_Half_Bridge_Driver_iL * 0.001) * 0.001);
  t33[5ULL] = t18;
  t33[6ULL] = -(X_idx_31 * -0.01 * 0.001);
  t34[0ULL] = X_idx_1;
  t34[1ULL] = t20 * 0.1;
  t34[2ULL] = X_idx_15 * 1000.0;
  t34[3ULL] = -((N_Channel_MOSFET_1_drain_resistor_i * 0.01 +
                 N_Channel_MOSFET_1_drain_resistor_i * 0.01) * 0.001);
  t34[4ULL] = -((X_idx_18 * 0.001 + X_idx_18 * 0.001) * 0.001);
  t35[0ULL] = t67;
  t35[1ULL] = -0.001;
  t35[2ULL] = -((-N_Channel_MOSFET_1_drain_resistor_i * 0.01 +
                 -N_Channel_MOSFET_1_drain_resistor_i * 0.01) * 0.001);
  t35[3ULL] = -((X_idx_19 * 0.01 + X_idx_19 * 0.01) * 0.001);
  t36[0ULL] = X_idx_21 * 0.1;
  t36[1ULL] = t65 * 1000.0;
  t36[2ULL] = -((Driver_Half_Bridge_Driver_iL * 0.001 +
                 Driver_Half_Bridge_Driver_iL * 0.001) * 0.001);
  t36[3ULL] = t25;
  t36[4ULL] = -(X_idx_31 * 0.01 * 0.001);
  t36[5ULL] = -((X_idx_23 * 0.01 + X_idx_23 * 0.01) * 0.001);
  t26[0ULL] = t0;
  for (t48 = 0ULL; t48 < 5ULL; t48++) {
    t26[t48 + 1ULL] = t27[t48];
  }

  t26[6ULL] = t53;
  t26[7ULL] = X_idx_6;
  t26[8ULL] = t5;
  t26[9ULL] = -(X_idx_26 * 0.001);
  t26[10ULL] = X_idx_6;
  t26[11ULL] = t6;
  t26[12ULL] = t54;
  t26[13ULL] = -(-X_idx_26 * 0.001);
  t26[14ULL] = X_idx_4;
  t26[15ULL] = X_idx_9;
  for (t48 = 0ULL; t48 < 5ULL; t48++) {
    t26[t48 + 16ULL] = t31[t48];
  }

  for (t48 = 0ULL; t48 < 5ULL; t48++) {
    t26[t48 + 21ULL] = t32[t48];
  }

  for (t48 = 0ULL; t48 < 7ULL; t48++) {
    t26[t48 + 26ULL] = t33[t48];
  }

  t26[33ULL] = -1.0;
  for (t48 = 0ULL; t48 < 5ULL; t48++) {
    t26[t48 + 34ULL] = t34[t48];
  }

  for (t48 = 0ULL; t48 < 4ULL; t48++) {
    t26[t48 + 39ULL] = t35[t48];
  }

  t26[43ULL] = 1.0;
  t26[44ULL] = -intermediate_der68;
  for (t48 = 0ULL; t48 < 6ULL; t48++) {
    t26[t48 + 45ULL] = t36[t48];
  }

  out.mX[0] = t26[0];
  out.mX[1] = t26[1];
  out.mX[2] = t26[2];
  out.mX[3] = t26[3];
  out.mX[4] = t26[4];
  out.mX[5] = t26[5];
  out.mX[6] = t26[6];
  out.mX[7] = t26[7];
  out.mX[8] = t26[8];
  out.mX[9] = t26[9];
  out.mX[10] = t26[10];
  out.mX[11] = t26[11];
  out.mX[12] = t26[12];
  out.mX[13] = t26[13];
  out.mX[14] = t26[14];
  out.mX[15] = t26[15];
  out.mX[16] = t26[16];
  out.mX[17] = t26[17];
  out.mX[18] = t26[18];
  out.mX[19] = t26[19];
  out.mX[20] = t26[20];
  out.mX[21] = t26[21];
  out.mX[22] = t26[22];
  out.mX[23] = t26[23];
  out.mX[24] = t26[24];
  out.mX[25] = t26[25];
  out.mX[26] = t26[26];
  out.mX[27] = t26[27];
  out.mX[28] = t26[28];
  out.mX[29] = t26[29];
  out.mX[30] = t26[30];
  out.mX[31] = t26[31];
  out.mX[32] = t26[32];
  out.mX[33] = t26[33];
  out.mX[34] = t26[34];
  out.mX[35] = t26[35];
  out.mX[36] = t26[36];
  out.mX[37] = t26[37];
  out.mX[38] = t26[38];
  out.mX[39] = t26[39];
  out.mX[40] = t26[40];
  out.mX[41] = t26[41];
  out.mX[42] = t26[42];
  out.mX[43] = t26[43];
  out.mX[44] = t26[44];
  out.mX[45] = t26[45];
  out.mX[46] = t26[46];
  out.mX[47] = t26[47];
  out.mX[48] = t26[48];
  out.mX[49] = t26[49];
  out.mX[50] = t26[50];
  out.mX[51] = 1.0;
  out.mX[52] = 1.0;
  out.mX[53] = 1.0;
  out.mX[54] = -(N_Channel_MOSFET_1_mos_vds * 0.001);
  out.mX[55] = 1.0;
  out.mX[56] = -(N_Channel_MOSFET_2_mos_vds * 0.001);
  (void)sys;
  (void)t72;
  return 0;
}
