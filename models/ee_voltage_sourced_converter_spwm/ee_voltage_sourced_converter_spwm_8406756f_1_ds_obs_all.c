/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_obs_all.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_obs_all(const
  NeDynamicSystem *t0, const NeDynamicSystemInput *t97, NeDsMethodOutput *t98)
{
  PmRealVector out;
  real_T C_p_v;
  real_T Converter_G_V[12];
  real_T Converter_converter_Xabc_Q1_G_v;
  real_T Converter_converter_Xabc_Q1_diode_v;
  real_T Converter_converter_Xabc_Q1_ideal_switch_v;
  real_T Converter_converter_Xabc_Q2_diode_i;
  real_T Converter_converter_Xabc_Q3_diode_v;
  real_T Converter_converter_Xabc_Q3_ideal_switch_v;
  real_T Converter_converter_Xabc_Q4_diode_i;
  real_T Converter_converter_Xabc_Q4_diode_v;
  real_T Converter_converter_Xabc_Q5_diode_v;
  real_T Converter_converter_Xabc_Q5_ideal_switch_v;
  real_T Converter_converter_Xabc_Q6_diode_i;
  real_T Converter_converter_Xabc_Q6_diode_v;
  real_T DC_Voltage_Source_i;
  real_T L_power_dissipated;
  real_T t7[374];
  real_T t8[12];
  real_T t14[1];
  size_t t48;
  real_T t66;
  real_T t67;
  real_T t68;
  real_T t69;
  real_T t70;
  real_T t71;
  real_T t72;
  real_T t73;
  real_T t79;
  real_T t80;
  real_T t83;
  real_T t84;
  real_T t87;
  real_T t89;
  real_T t90;
  real_T t91;
  real_T t92;
  real_T t93;
  real_T t94;
  real_T t95;
  real_T X_idx_4;
  real_T X_idx_0;
  real_T X_idx_5;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T X_idx_1;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_2;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T X_idx_8;
  real_T X_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T X_idx_9;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_17;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_12;
  int32_T M_idx_23;
  int32_T M_idx_30;
  int32_T M_idx_31;
  int32_T M_idx_32;
  int32_T M_idx_33;
  int32_T M_idx_34;
  int32_T M_idx_35;
  int32_T M_idx_2;
  int32_T M_idx_3;
  int32_T M_idx_4;
  int32_T M_idx_5;
  int32_T M_idx_6;
  int32_T M_idx_7;
  int32_T M_idx_8;
  int32_T M_idx_9;
  M_idx_0 = t97->mM.mX[0];
  M_idx_1 = t97->mM.mX[1];
  M_idx_2 = t97->mM.mX[2];
  M_idx_3 = t97->mM.mX[3];
  M_idx_4 = t97->mM.mX[4];
  M_idx_5 = t97->mM.mX[5];
  M_idx_6 = t97->mM.mX[6];
  M_idx_7 = t97->mM.mX[7];
  M_idx_8 = t97->mM.mX[8];
  M_idx_9 = t97->mM.mX[9];
  M_idx_12 = t97->mM.mX[12];
  M_idx_23 = t97->mM.mX[23];
  M_idx_30 = t97->mM.mX[30];
  M_idx_31 = t97->mM.mX[31];
  M_idx_32 = t97->mM.mX[32];
  M_idx_33 = t97->mM.mX[33];
  M_idx_34 = t97->mM.mX[34];
  M_idx_35 = t97->mM.mX[35];
  U_idx_0 = t97->mU.mX[0];
  U_idx_1 = t97->mU.mX[1];
  U_idx_2 = t97->mU.mX[2];
  U_idx_3 = t97->mU.mX[3];
  U_idx_4 = t97->mU.mX[4];
  U_idx_5 = t97->mU.mX[5];
  X_idx_0 = t97->mX.mX[0];
  X_idx_1 = t97->mX.mX[1];
  X_idx_2 = t97->mX.mX[2];
  X_idx_3 = t97->mX.mX[3];
  X_idx_4 = t97->mX.mX[4];
  X_idx_5 = t97->mX.mX[5];
  X_idx_6 = t97->mX.mX[6];
  X_idx_7 = t97->mX.mX[7];
  X_idx_8 = t97->mX.mX[8];
  X_idx_9 = t97->mX.mX[9];
  X_idx_10 = t97->mX.mX[10];
  X_idx_11 = t97->mX.mX[11];
  X_idx_12 = t97->mX.mX[12];
  X_idx_13 = t97->mX.mX[13];
  X_idx_14 = t97->mX.mX[14];
  X_idx_15 = t97->mX.mX[15];
  X_idx_16 = t97->mX.mX[16];
  X_idx_17 = t97->mX.mX[17];
  out = t98->mOBS_ALL;
  C_p_v = X_idx_4 * 1.0E-6 + X_idx_0;
  t8[0ULL] = X_idx_5 + U_idx_0;
  t8[1ULL] = X_idx_5;
  t8[2ULL] = U_idx_1;
  t8[3ULL] = 0.0;
  t8[4ULL] = ((((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_7 * 1.000001) + X_idx_2)
              + X_idx_5) + U_idx_2;
  t8[5ULL] = (((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_7 * 1.000001) + X_idx_2)
    + X_idx_5;
  t8[6ULL] = U_idx_3;
  t8[7ULL] = 0.0;
  t8[8ULL] = ((((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_8 * 1.000001) + X_idx_3)
              + X_idx_5) + U_idx_4;
  t8[9ULL] = (((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_8 * 1.000001) + X_idx_3)
    + X_idx_5;
  t8[10ULL] = U_idx_5;
  t8[11ULL] = 0.0;
  for (t48 = 0ULL; t48 < 12ULL; t48++) {
    Converter_G_V[t48] = t8[t48];
  }

  t66 = (((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_7 * 1.000001) + X_idx_2) +
    X_idx_5;
  t67 = (((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_8 * 1.000001) + X_idx_3) +
    X_idx_5;
  Converter_converter_Xabc_Q1_G_v = X_idx_5 + U_idx_0;
  Converter_converter_Xabc_Q1_diode_v = (-X_idx_0 + X_idx_4 * -1.0E-6) + X_idx_5;
  Converter_converter_Xabc_Q1_ideal_switch_v = (X_idx_4 * 1.0E-6 + -X_idx_5) +
    X_idx_0;
  Converter_converter_Xabc_Q2_diode_i = ((((X_idx_5 * 1.0E-6 + -X_idx_10) +
    X_idx_6 * 1.0E-6) + X_idx_1) + X_idx_9) + X_idx_11;
  t79 = X_idx_5 * 1.0E-6 + X_idx_11;
  t80 = ((((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_7 * 1.000001) + X_idx_2) +
         X_idx_5) + U_idx_2;
  Converter_converter_Xabc_Q3_diode_v = (((((-X_idx_0 + -X_idx_1) + X_idx_4 *
    -1.0E-6) + X_idx_6 * -1.000001) + X_idx_7 * 1.000001) + X_idx_2) + X_idx_5;
  Converter_converter_Xabc_Q3_ideal_switch_v = (((((-X_idx_2 + X_idx_4 * 1.0E-6)
    + -X_idx_5) + X_idx_6 * 1.000001) + X_idx_7 * -1.000001) + X_idx_1) +
    X_idx_0;
  Converter_converter_Xabc_Q4_diode_i = ((((((X_idx_1 * -1.0E-6 + X_idx_2 *
    1.000001) + X_idx_5 * 1.0E-6) + -X_idx_13) + X_idx_6 *
    -1.0000009999999998E-6) + X_idx_7 * 2.0000009999999997E-6) + X_idx_12) +
    X_idx_14;
  Converter_converter_Xabc_Q4_diode_v = (((-X_idx_2 + -X_idx_5) + X_idx_6 *
    1.000001) + X_idx_7 * -1.000001) + X_idx_1;
  t83 = ((((X_idx_1 * -1.0E-6 + X_idx_2 * 1.0E-6) + X_idx_5 * 1.0E-6) + X_idx_6 *
          -1.0000009999999998E-6) + X_idx_7 * 1.0000009999999998E-6) + X_idx_14;
  t84 = ((((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_8 * 1.000001) + X_idx_3) +
         X_idx_5) + U_idx_4;
  Converter_converter_Xabc_Q5_diode_v = (((((-X_idx_0 + -X_idx_1) + X_idx_4 *
    -1.0E-6) + X_idx_6 * -1.000001) + X_idx_8 * 1.000001) + X_idx_3) + X_idx_5;
  Converter_converter_Xabc_Q5_ideal_switch_v = (((((-X_idx_3 + X_idx_4 * 1.0E-6)
    + -X_idx_5) + X_idx_6 * 1.000001) + X_idx_8 * -1.000001) + X_idx_1) +
    X_idx_0;
  Converter_converter_Xabc_Q6_diode_i = ((((((X_idx_1 * -1.0E-6 + X_idx_3 *
    1.000001) + X_idx_5 * 1.0E-6) + -X_idx_16) + X_idx_6 *
    -1.0000009999999998E-6) + X_idx_8 * 2.0000009999999997E-6) + X_idx_15) +
    X_idx_17;
  Converter_converter_Xabc_Q6_diode_v = (((-X_idx_3 + -X_idx_5) + X_idx_6 *
    1.000001) + X_idx_8 * -1.000001) + X_idx_1;
  t87 = ((((X_idx_1 * -1.0E-6 + X_idx_3 * 1.0E-6) + X_idx_5 * 1.0E-6) + X_idx_6 *
          -1.0000009999999998E-6) + X_idx_8 * 1.0000009999999998E-6) + X_idx_17;
  t68 = -X_idx_1 + X_idx_6 * -1.0E-6;
  t69 = -X_idx_2 + X_idx_7 * -1.0E-6;
  t70 = -X_idx_3 + X_idx_8 * -1.0E-6;
  DC_Voltage_Source_i = (((((-X_idx_4 + -X_idx_10) + -X_idx_13) + -X_idx_16) +
    X_idx_9) + X_idx_12) + X_idx_15;
  t71 = X_idx_6 * -0.99999999999999989 + X_idx_5;
  t72 = (((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_7 * 1.0E-6) + X_idx_2) +
    X_idx_5;
  t73 = (((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_8 * 1.0E-6) + X_idx_3) +
    X_idx_5;
  t14[0ULL] = 0.0;
  t14[0ULL] += X_idx_6 * X_idx_6 * 1.0E-6;
  t14[0ULL] += X_idx_7 * X_idx_7 * 1.0E-6;
  t14[0ULL] += X_idx_8 * X_idx_8 * 1.0E-6;
  L_power_dissipated = -(t14[0ULL] * 0.001) / -1.0;
  t89 = (-X_idx_1 + X_idx_6 * -1.000001) + X_idx_5;
  t14[0ULL] = 0.0;
  t14[0ULL] += t68 * t68;
  t14[0ULL] += t69 * t69;
  t14[0ULL] += t70 * t70;
  if (M_idx_0 != 0) {
    if (M_idx_1 != 0) {
      if (M_idx_12 != 0) {
        t90 = U_idx_0 - 0.5;
      } else {
        t90 = X_idx_10 - 1.0;
      }
    } else {
      t90 = Converter_converter_Xabc_Q1_ideal_switch_v - 0.6;
    }
  } else {
    t90 = U_idx_0 - 0.1;
  }

  t90 = -t90 / -1.0;
  if (M_idx_23 != 0) {
    if (M_idx_30 != 0) {
      if (M_idx_31 != 0) {
        t91 = U_idx_1 - 0.5;
      } else {
        t91 = t79 - 1.0;
      }
    } else {
      t91 = X_idx_5 - 0.6;
    }
  } else {
    t91 = U_idx_1 - 0.1;
  }

  t91 = -t91 / -1.0;
  if (M_idx_32 != 0) {
    if (M_idx_33 != 0) {
      if (M_idx_34 != 0) {
        t92 = U_idx_2 - 0.5;
      } else {
        t92 = X_idx_13 - 1.0;
      }
    } else {
      t92 = Converter_converter_Xabc_Q3_ideal_switch_v - 0.6;
    }
  } else {
    t92 = U_idx_2 - 0.1;
  }

  t92 = -t92 / -1.0;
  if (M_idx_35 != 0) {
    if (M_idx_2 != 0) {
      if (M_idx_3 != 0) {
        t93 = U_idx_3 - 0.5;
      } else {
        t93 = t83 - 1.0;
      }
    } else {
      t93 = t66 - 0.6;
    }
  } else {
    t93 = U_idx_3 - 0.1;
  }

  t93 = -t93 / -1.0;
  if (M_idx_4 != 0) {
    if (M_idx_5 != 0) {
      if (M_idx_6 != 0) {
        t94 = U_idx_4 - 0.5;
      } else {
        t94 = X_idx_16 - 1.0;
      }
    } else {
      t94 = Converter_converter_Xabc_Q5_ideal_switch_v - 0.6;
    }
  } else {
    t94 = U_idx_4 - 0.1;
  }

  t94 = -t94 / -1.0;
  if (M_idx_7 != 0) {
    if (M_idx_8 != 0) {
      if (M_idx_9 != 0) {
        t95 = U_idx_5 - 0.5;
      } else {
        t95 = t87 - 1.0;
      }
    } else {
      t95 = t67 - 0.6;
    }
  } else {
    t95 = U_idx_5 - 0.1;
  }

  t7[0ULL] = X_idx_4;
  t7[1ULL] = 0.0;
  t7[2ULL] = C_p_v;
  t7[3ULL] = C_p_v;
  t7[4ULL] = X_idx_0;
  for (t48 = 0ULL; t48 < 12ULL; t48++) {
    t7[t48 + 5ULL] = Converter_G_V[t48];
  }

  t7[17ULL] = X_idx_5;
  t7[18ULL] = t66;
  t7[19ULL] = t67;
  for (t48 = 0ULL; t48 < 12ULL; t48++) {
    t7[t48 + 20ULL] = Converter_G_V[t48];
  }

  t7[32ULL] = C_p_v;
  t7[33ULL] = Converter_converter_Xabc_Q1_G_v;
  t7[34ULL] = X_idx_5;
  t7[35ULL] = 298.15;
  t7[36ULL] = X_idx_9;
  t7[37ULL] = 0.0;
  t7[38ULL] = C_p_v;
  t7[39ULL] = X_idx_5;
  t7[40ULL] = -(X_idx_9 * Converter_converter_Xabc_Q1_diode_v * 0.001) / -1.0 *
    1000.0;
  t7[41ULL] = Converter_converter_Xabc_Q1_diode_v;
  t7[42ULL] = 0.0;
  t7[43ULL] = U_idx_0;
  t7[44ULL] = 0.0;
  t7[45ULL] = X_idx_5;
  t7[46ULL] = Converter_converter_Xabc_Q1_G_v;
  t7[47ULL] = U_idx_0;
  t7[48ULL] = U_idx_0;
  t7[49ULL] = X_idx_10;
  t7[50ULL] = ((X_idx_0 * -1.0E-6 + X_idx_4 * -1.0E-12) + X_idx_5 * 1.0E-6) +
    X_idx_10;
  t7[51ULL] = t90;
  t7[52ULL] = X_idx_5;
  t7[53ULL] = C_p_v;
  t7[54ULL] = Converter_converter_Xabc_Q1_ideal_switch_v;
  t7[55ULL] = -(X_idx_10 * Converter_converter_Xabc_Q1_ideal_switch_v * 0.001) /
    -1.0 * 1000.0;
  t7[56ULL] = X_idx_5;
  t7[57ULL] = U_idx_1;
  t7[58ULL] = 0.0;
  t7[59ULL] = 298.15;
  t7[60ULL] = Converter_converter_Xabc_Q2_diode_i;
  t7[61ULL] = 0.0;
  t7[62ULL] = X_idx_5;
  t7[63ULL] = 0.0;
  t7[64ULL] = -(Converter_converter_Xabc_Q2_diode_i * -X_idx_5 * 0.001) / -1.0 *
    1000.0;
  t7[65ULL] = -X_idx_5;
  t7[66ULL] = 0.0;
  t7[67ULL] = U_idx_1;
  t7[68ULL] = 0.0;
  t7[69ULL] = 0.0;
  t7[70ULL] = U_idx_1;
  t7[71ULL] = U_idx_1;
  t7[72ULL] = U_idx_1;
  t7[73ULL] = t79;
  t7[74ULL] = X_idx_11;
  t7[75ULL] = t91;
  t7[76ULL] = 0.0;
  t7[77ULL] = X_idx_5;
  t7[78ULL] = X_idx_5;
  t7[79ULL] = -(t79 * X_idx_5 * 0.001) / -1.0 * 1000.0;
  t7[80ULL] = C_p_v;
  t7[81ULL] = t80;
  t7[82ULL] = t66;
  t7[83ULL] = 298.15;
  t7[84ULL] = X_idx_12;
  t7[85ULL] = 0.0;
  t7[86ULL] = C_p_v;
  t7[87ULL] = t66;
  t7[88ULL] = -(X_idx_12 * Converter_converter_Xabc_Q3_diode_v * 0.001) / -1.0 *
    1000.0;
  t7[89ULL] = Converter_converter_Xabc_Q3_diode_v;
  t7[90ULL] = 0.0;
  t7[91ULL] = U_idx_2;
  t7[92ULL] = 0.0;
  t7[93ULL] = t66;
  t7[94ULL] = t80;
  t7[95ULL] = U_idx_2;
  t7[96ULL] = U_idx_2;
  t7[97ULL] = X_idx_13;
  t7[98ULL] = ((((((X_idx_0 * -1.0E-6 + X_idx_1 * -1.0E-6) + X_idx_2 * 1.0E-6) +
                  X_idx_4 * -1.0E-12) + X_idx_5 * 1.0E-6) + X_idx_6 *
                -1.0000009999999998E-6) + X_idx_7 * 1.0000009999999998E-6) +
    X_idx_13;
  t7[99ULL] = t92;
  t7[100ULL] = t66;
  t7[101ULL] = C_p_v;
  t7[102ULL] = Converter_converter_Xabc_Q3_ideal_switch_v;
  t7[103ULL] = -(X_idx_13 * Converter_converter_Xabc_Q3_ideal_switch_v * 0.001) /
    -1.0 * 1000.0;
  t7[104ULL] = t66;
  t7[105ULL] = U_idx_3;
  t7[106ULL] = 0.0;
  t7[107ULL] = 298.15;
  t7[108ULL] = Converter_converter_Xabc_Q4_diode_i;
  t7[109ULL] = 0.0;
  t7[110ULL] = t66;
  t7[111ULL] = 0.0;
  t7[112ULL] = -(Converter_converter_Xabc_Q4_diode_i *
                 Converter_converter_Xabc_Q4_diode_v * 0.001) / -1.0 * 1000.0;
  t7[113ULL] = Converter_converter_Xabc_Q4_diode_v;
  t7[114ULL] = 0.0;
  t7[115ULL] = U_idx_3;
  t7[116ULL] = 0.0;
  t7[117ULL] = 0.0;
  t7[118ULL] = U_idx_3;
  t7[119ULL] = U_idx_3;
  t7[120ULL] = U_idx_3;
  t7[121ULL] = t83;
  t7[122ULL] = X_idx_14;
  t7[123ULL] = t93;
  t7[124ULL] = 0.0;
  t7[125ULL] = t66;
  t7[126ULL] = t66;
  t7[127ULL] = -(t66 * t83 * 0.001) / -1.0 * 1000.0;
  t7[128ULL] = C_p_v;
  t7[129ULL] = t84;
  t7[130ULL] = t67;
  t7[131ULL] = 298.15;
  t7[132ULL] = X_idx_15;
  t7[133ULL] = 0.0;
  t7[134ULL] = C_p_v;
  t7[135ULL] = t67;
  t7[136ULL] = -(X_idx_15 * Converter_converter_Xabc_Q5_diode_v * 0.001) / -1.0 *
    1000.0;
  t7[137ULL] = Converter_converter_Xabc_Q5_diode_v;
  t7[138ULL] = 0.0;
  t7[139ULL] = U_idx_4;
  t7[140ULL] = 0.0;
  t7[141ULL] = t67;
  t7[142ULL] = t84;
  t7[143ULL] = U_idx_4;
  t7[144ULL] = U_idx_4;
  t7[145ULL] = X_idx_16;
  t7[146ULL] = ((((((X_idx_0 * -1.0E-6 + X_idx_1 * -1.0E-6) + X_idx_3 * 1.0E-6)
                   + X_idx_4 * -1.0E-12) + X_idx_5 * 1.0E-6) + X_idx_6 *
                 -1.0000009999999998E-6) + X_idx_8 * 1.0000009999999998E-6) +
    X_idx_16;
  t7[147ULL] = t94;
  t7[148ULL] = t67;
  t7[149ULL] = C_p_v;
  t7[150ULL] = Converter_converter_Xabc_Q5_ideal_switch_v;
  t7[151ULL] = -(X_idx_16 * Converter_converter_Xabc_Q5_ideal_switch_v * 0.001) /
    -1.0 * 1000.0;
  t7[152ULL] = t67;
  t7[153ULL] = U_idx_5;
  t7[154ULL] = 0.0;
  t7[155ULL] = 298.15;
  t7[156ULL] = Converter_converter_Xabc_Q6_diode_i;
  t7[157ULL] = 0.0;
  t7[158ULL] = t67;
  t7[159ULL] = 0.0;
  t7[160ULL] = -(Converter_converter_Xabc_Q6_diode_i *
                 Converter_converter_Xabc_Q6_diode_v * 0.001) / -1.0 * 1000.0;
  t7[161ULL] = Converter_converter_Xabc_Q6_diode_v;
  t7[162ULL] = 0.0;
  t7[163ULL] = U_idx_5;
  t7[164ULL] = 0.0;
  t7[165ULL] = 0.0;
  t7[166ULL] = U_idx_5;
  t7[167ULL] = U_idx_5;
  t7[168ULL] = U_idx_5;
  t7[169ULL] = t87;
  t7[170ULL] = X_idx_17;
  t7[171ULL] = -t95 / -1.0;
  t7[172ULL] = 0.0;
  t7[173ULL] = t67;
  t7[174ULL] = t67;
  t7[175ULL] = -(t67 * t87 * 0.001) / -1.0 * 1000.0;
  t7[176ULL] = X_idx_5;
  t7[177ULL] = t66;
  t7[178ULL] = t67;
  t7[179ULL] = X_idx_5;
  t7[180ULL] = Converter_converter_Xabc_Q1_G_v;
  t7[181ULL] = 0.0;
  t7[182ULL] = U_idx_1;
  t7[183ULL] = t66;
  t7[184ULL] = t80;
  t7[185ULL] = 0.0;
  t7[186ULL] = U_idx_3;
  t7[187ULL] = t67;
  t7[188ULL] = t84;
  t7[189ULL] = 0.0;
  t7[190ULL] = U_idx_5;
  for (t48 = 0ULL; t48 < 12ULL; t48++) {
    t7[t48 + 191ULL] = ((_NeDynamicSystem*)(t0))->mTable0[t48];
  }

  t7[203ULL] = 0.0;
  t7[204ULL] = 0.0;
  t7[205ULL] = 0.0;
  t7[206ULL] = 0.0;
  t7[207ULL] = 0.0;
  t7[208ULL] = 0.0;
  t7[209ULL] = 0.0;
  t7[210ULL] = 0.0;
  t7[211ULL] = 0.0;
  t7[212ULL] = 0.0;
  t7[213ULL] = 0.0;
  t7[214ULL] = 0.0;
  for (t48 = 0ULL; t48 < 12ULL; t48++) {
    t7[t48 + 215ULL] = Converter_G_V[t48];
  }

  t7[227ULL] = 0.0;
  t7[228ULL] = C_p_v;
  t7[229ULL] = 0.0;
  t7[230ULL] = C_p_v;
  t7[231ULL] = t68;
  t7[232ULL] = t69;
  t7[233ULL] = t70;
  t7[234ULL] = X_idx_5;
  t7[235ULL] = t66;
  t7[236ULL] = t67;
  t7[237ULL] = X_idx_5;
  t7[238ULL] = t66;
  t7[239ULL] = t67;
  t7[240ULL] = X_idx_6 * 1.0E-6 + X_idx_1;
  t7[241ULL] = X_idx_7 * 1.0E-6 + X_idx_2;
  t7[242ULL] = X_idx_8 * 1.0E-6 + X_idx_3;
  t7[243ULL] = DC_Voltage_Source_i;
  t7[244ULL] = 0.0;
  t7[245ULL] = 100.0;
  t7[246ULL] = 100.0;
  t7[247ULL] = 0.0;
  t7[248ULL] = -t68;
  t7[249ULL] = -t69;
  t7[250ULL] = -t70;
  t7[251ULL] = X_idx_1;
  t7[252ULL] = X_idx_2;
  t7[253ULL] = X_idx_3;
  t7[254ULL] = X_idx_5;
  t7[255ULL] = t66;
  t7[256ULL] = t67;
  t7[257ULL] = t71;
  t7[258ULL] = t72;
  t7[259ULL] = t73;
  t7[260ULL] = X_idx_6;
  t7[261ULL] = X_idx_7;
  t7[262ULL] = X_idx_8;
  t7[263ULL] = L_power_dissipated * 1000.0;
  t7[264ULL] = t89;
  t7[265ULL] = t89;
  t7[266ULL] = -DC_Voltage_Source_i;
  t7[267ULL] = C_p_v;
  t7[268ULL] = 100.0;
  t7[269ULL] = DC_Voltage_Source_i * -0.1;
  for (t48 = 0ULL; t48 < 12ULL; t48++) {
    t7[t48 + 270ULL] = Converter_G_V[t48];
  }

  for (t48 = 0ULL; t48 < 12ULL; t48++) {
    t7[t48 + 282ULL] = Converter_G_V[t48];
  }

  t7[294ULL] = U_idx_0;
  t7[295ULL] = U_idx_1;
  t7[296ULL] = U_idx_2;
  t7[297ULL] = U_idx_3;
  t7[298ULL] = U_idx_4;
  t7[299ULL] = U_idx_5;
  for (t48 = 0ULL; t48 < 12ULL; t48++) {
    t7[t48 + 300ULL] = -((_NeDynamicSystem*)(t0))->mTable0[t48];
  }

  for (t48 = 0ULL; t48 < 12ULL; t48++) {
    t7[t48 + 312ULL] = Converter_G_V[t48];
  }

  t7[324ULL] = -DC_Voltage_Source_i;
  t7[325ULL] = -DC_Voltage_Source_i;
  t7[326ULL] = C_p_v;
  t7[327ULL] = C_p_v;
  t7[328ULL] = 0.0;
  t7[329ULL] = C_p_v;
  t7[330ULL] = C_p_v;
  t7[331ULL] = t71;
  t7[332ULL] = t72;
  t7[333ULL] = t73;
  t7[334ULL] = t71;
  t7[335ULL] = t72;
  t7[336ULL] = t73;
  t7[337ULL] = -t68;
  t7[338ULL] = -t69;
  t7[339ULL] = -t70;
  t7[340ULL] = -t68;
  t7[341ULL] = -t69;
  t7[342ULL] = -t70;
  t7[343ULL] = t71;
  t7[344ULL] = t72;
  t7[345ULL] = t73;
  t7[346ULL] = t71;
  t7[347ULL] = t72;
  t7[348ULL] = t73;
  t7[349ULL] = t71;
  t7[350ULL] = t72;
  t7[351ULL] = t73;
  t7[352ULL] = t89;
  t7[353ULL] = -t68;
  t7[354ULL] = -t69;
  t7[355ULL] = -t70;
  t7[356ULL] = t89;
  t7[357ULL] = t89;
  t7[358ULL] = t89;
  t7[359ULL] = 0.0;
  t7[360ULL] = t89;
  t7[361ULL] = -t68;
  t7[362ULL] = -t69;
  t7[363ULL] = -t70;
  t7[364ULL] = t71;
  t7[365ULL] = t72;
  t7[366ULL] = t73;
  t7[367ULL] = t89;
  t7[368ULL] = t89;
  t7[369ULL] = t89;
  t7[370ULL] = -t68;
  t7[371ULL] = -t69;
  t7[372ULL] = -t70;
  t7[373ULL] = -(t14[0ULL] * 0.001) / -1.0 * 1000.0;
  for (M_idx_0 = 0; M_idx_0 < 374; M_idx_0++) {
    out.mX[M_idx_0] = t7[M_idx_0];
  }

  (void)t0;
  (void)t98;
  return 0;
}
