/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_f.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_f(const NeDynamicSystem *t0, const
  NeDynamicSystemInput *t90, NeDsMethodOutput *t91)
{
  PmRealVector out;
  real_T Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q7_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q8_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q9_diode_v;
  real_T t2;
  real_T t4;
  real_T t6;
  real_T t8;
  real_T t10;
  real_T t12;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t30;
  real_T t36;
  real_T t85;
  real_T t89;
  real_T X_idx_10;
  real_T X_idx_31;
  real_T X_idx_2;
  real_T X_idx_9;
  real_T X_idx_32;
  real_T X_idx_25;
  real_T X_idx_14;
  real_T X_idx_13;
  real_T X_idx_26;
  real_T X_idx_16;
  real_T X_idx_33;
  real_T X_idx_3;
  real_T X_idx_15;
  real_T X_idx_34;
  real_T X_idx_27;
  real_T X_idx_18;
  real_T X_idx_17;
  real_T X_idx_28;
  real_T X_idx_35;
  real_T X_idx_20;
  real_T X_idx_4;
  real_T X_idx_36;
  real_T X_idx_19;
  real_T X_idx_29;
  real_T X_idx_12;
  real_T X_idx_11;
  real_T X_idx_30;
  real_T X_idx_8;
  real_T X_idx_0;
  real_T X_idx_37;
  real_T X_idx_22;
  real_T X_idx_38;
  real_T X_idx_23;
  real_T X_idx_39;
  real_T X_idx_24;
  int32_T M_idx_4;
  int32_T M_idx_5;
  int32_T M_idx_6;
  int32_T M_idx_7;
  int32_T M_idx_8;
  int32_T M_idx_9;
  int32_T M_idx_10;
  int32_T M_idx_11;
  int32_T M_idx_13;
  int32_T M_idx_14;
  int32_T M_idx_15;
  int32_T M_idx_16;
  int32_T M_idx_17;
  int32_T M_idx_18;
  int32_T M_idx_19;
  int32_T M_idx_20;
  int32_T M_idx_21;
  int32_T M_idx_22;
  int32_T M_idx_24;
  int32_T M_idx_25;
  int32_T M_idx_26;
  int32_T M_idx_27;
  int32_T M_idx_28;
  int32_T M_idx_29;
  int32_T M_idx_30;
  int32_T M_idx_31;
  int32_T M_idx_32;
  int32_T M_idx_33;
  int32_T M_idx_35;
  int32_T M_idx_36;
  int32_T M_idx_37;
  int32_T M_idx_38;
  int32_T M_idx_39;
  int32_T M_idx_40;
  int32_T M_idx_41;
  int32_T M_idx_42;
  int32_T M_idx_43;
  int32_T M_idx_44;
  int32_T M_idx_46;
  int32_T M_idx_47;
  int32_T M_idx_48;
  int32_T M_idx_49;
  int32_T M_idx_50;
  int32_T M_idx_51;
  int32_T M_idx_52;
  int32_T M_idx_53;
  int32_T M_idx_54;
  int32_T M_idx_55;
  (void)t0;
  M_idx_4 = t90->mM.mX[4];
  M_idx_5 = t90->mM.mX[5];
  M_idx_6 = t90->mM.mX[6];
  M_idx_7 = t90->mM.mX[7];
  M_idx_8 = t90->mM.mX[8];
  M_idx_9 = t90->mM.mX[9];
  M_idx_10 = t90->mM.mX[10];
  M_idx_11 = t90->mM.mX[11];
  M_idx_13 = t90->mM.mX[13];
  M_idx_14 = t90->mM.mX[14];
  M_idx_15 = t90->mM.mX[15];
  M_idx_16 = t90->mM.mX[16];
  M_idx_17 = t90->mM.mX[17];
  M_idx_18 = t90->mM.mX[18];
  M_idx_19 = t90->mM.mX[19];
  M_idx_20 = t90->mM.mX[20];
  M_idx_21 = t90->mM.mX[21];
  M_idx_22 = t90->mM.mX[22];
  M_idx_24 = t90->mM.mX[24];
  M_idx_25 = t90->mM.mX[25];
  M_idx_26 = t90->mM.mX[26];
  M_idx_27 = t90->mM.mX[27];
  M_idx_28 = t90->mM.mX[28];
  M_idx_29 = t90->mM.mX[29];
  M_idx_30 = t90->mM.mX[30];
  M_idx_31 = t90->mM.mX[31];
  M_idx_32 = t90->mM.mX[32];
  M_idx_33 = t90->mM.mX[33];
  M_idx_35 = t90->mM.mX[35];
  M_idx_36 = t90->mM.mX[36];
  M_idx_37 = t90->mM.mX[37];
  M_idx_38 = t90->mM.mX[38];
  M_idx_39 = t90->mM.mX[39];
  M_idx_40 = t90->mM.mX[40];
  M_idx_41 = t90->mM.mX[41];
  M_idx_42 = t90->mM.mX[42];
  M_idx_43 = t90->mM.mX[43];
  M_idx_44 = t90->mM.mX[44];
  M_idx_46 = t90->mM.mX[46];
  M_idx_47 = t90->mM.mX[47];
  M_idx_48 = t90->mM.mX[48];
  M_idx_49 = t90->mM.mX[49];
  M_idx_50 = t90->mM.mX[50];
  M_idx_51 = t90->mM.mX[51];
  M_idx_52 = t90->mM.mX[52];
  M_idx_53 = t90->mM.mX[53];
  M_idx_54 = t90->mM.mX[54];
  M_idx_55 = t90->mM.mX[55];
  X_idx_0 = t90->mX.mX[0];
  X_idx_2 = t90->mX.mX[2];
  X_idx_3 = t90->mX.mX[3];
  X_idx_4 = t90->mX.mX[4];
  X_idx_8 = t90->mX.mX[8];
  X_idx_9 = t90->mX.mX[9];
  X_idx_10 = t90->mX.mX[10];
  X_idx_11 = t90->mX.mX[11];
  X_idx_12 = t90->mX.mX[12];
  X_idx_13 = t90->mX.mX[13];
  X_idx_14 = t90->mX.mX[14];
  X_idx_15 = t90->mX.mX[15];
  X_idx_16 = t90->mX.mX[16];
  X_idx_17 = t90->mX.mX[17];
  X_idx_18 = t90->mX.mX[18];
  X_idx_19 = t90->mX.mX[19];
  X_idx_20 = t90->mX.mX[20];
  X_idx_22 = t90->mX.mX[22];
  X_idx_23 = t90->mX.mX[23];
  X_idx_24 = t90->mX.mX[24];
  X_idx_25 = t90->mX.mX[25];
  X_idx_26 = t90->mX.mX[26];
  X_idx_27 = t90->mX.mX[27];
  X_idx_28 = t90->mX.mX[28];
  X_idx_29 = t90->mX.mX[29];
  X_idx_30 = t90->mX.mX[30];
  X_idx_31 = t90->mX.mX[31];
  X_idx_32 = t90->mX.mX[32];
  X_idx_33 = t90->mX.mX[33];
  X_idx_34 = t90->mX.mX[34];
  X_idx_35 = t90->mX.mX[35];
  X_idx_36 = t90->mX.mX[36];
  X_idx_37 = t90->mX.mX[37];
  X_idx_38 = t90->mX.mX[38];
  X_idx_39 = t90->mX.mX[39];
  out = t91->mF;
  t2 = (((-X_idx_10 + -X_idx_31) + X_idx_2) + X_idx_9) + X_idx_32;
  t4 = ((-X_idx_31 + -X_idx_14) + X_idx_32) + X_idx_13;
  t6 = (((-X_idx_16 + -X_idx_33) + X_idx_3) + X_idx_15) + X_idx_34;
  t8 = ((-X_idx_33 + -X_idx_18) + X_idx_34) + X_idx_17;
  t10 = (((-X_idx_35 + -X_idx_20) + X_idx_4) + X_idx_36) + X_idx_19;
  t12 = ((-X_idx_35 + -X_idx_12) + X_idx_36) + X_idx_11;
  t14 = ((X_idx_8 * 1.0E-5 + X_idx_0) + X_idx_25) + -1800.0;
  t15 = ((-X_idx_0 + X_idx_8 * -1.0E-5) + -X_idx_25) + 1800.0;
  t16 = ((-X_idx_4 + -X_idx_36) + X_idx_37) + X_idx_35;
  t17 = -X_idx_29 + X_idx_22;
  t18 = -X_idx_22 + X_idx_29;
  t19 = -X_idx_22 + X_idx_30;
  t20 = -X_idx_30 + X_idx_22;
  t21 = (-X_idx_0 + X_idx_8 * -1.0E-5) + -X_idx_30;
  t22 = (X_idx_8 * 1.0E-5 + X_idx_0) + X_idx_30;
  t23 = ((-X_idx_2 + -X_idx_32) + X_idx_38) + X_idx_31;
  t24 = -X_idx_25 + X_idx_23;
  t25 = -X_idx_23 + X_idx_25;
  t26 = -X_idx_23 + X_idx_26;
  t27 = -X_idx_26 + X_idx_23;
  t28 = (-X_idx_0 + X_idx_8 * -1.0E-5) + -X_idx_26;
  t29 = (X_idx_8 * 1.0E-5 + X_idx_0) + X_idx_26;
  t30 = ((X_idx_8 * 1.0E-5 + X_idx_0) + X_idx_27) + -1800.0;
  t36 = ((-X_idx_0 + X_idx_8 * -1.0E-5) + -X_idx_27) + 1800.0;
  t89 = ((-X_idx_3 + -X_idx_34) + X_idx_39) + X_idx_33;
  t85 = -X_idx_27 + X_idx_24;
  Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v = -X_idx_24 + X_idx_27;
  Three_Level_Converter_converter_Xabc_Q7_diode_v = -X_idx_24 + X_idx_28;
  Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v = -X_idx_28 + X_idx_24;
  Three_Level_Converter_converter_Xabc_Q8_diode_v = (-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_28;
  Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v = (X_idx_8 * 1.0E-5 +
    X_idx_0) + X_idx_28;
  Three_Level_Converter_converter_Xabc_Q9_diode_v = ((X_idx_8 * 1.0E-5 + X_idx_0)
    + X_idx_29) + -1800.0;
  X_idx_8 = ((-X_idx_0 + X_idx_8 * -1.0E-5) + -X_idx_29) + 1800.0;
  if (M_idx_4 != 0) {
    X_idx_0 = t2 - (-X_idx_25 - 0.799999992) / 0.001;
  } else if (M_idx_5 != 0) {
    X_idx_0 = t2 - (-X_idx_25 + pmf_get_inf()) / 0.3;
  } else {
    X_idx_0 = t2 - -X_idx_25 * 1.0E-5;
  }

  if (M_idx_6 != 0) {
    t2 = t4 - (X_idx_26 - 0.799999992) / 0.001;
  } else if (M_idx_7 != 0) {
    t2 = t4 - (X_idx_26 + pmf_get_inf()) / 0.3;
  } else {
    t2 = t4 - X_idx_26 * 1.0E-5;
  }

  if (M_idx_8 != 0) {
    X_idx_24 = t6 - (-X_idx_27 - 0.799999992) / 0.001;
  } else if (M_idx_9 != 0) {
    X_idx_24 = t6 - (-X_idx_27 + pmf_get_inf()) / 0.3;
  } else {
    X_idx_24 = t6 - -X_idx_27 * 1.0E-5;
  }

  if (M_idx_10 != 0) {
    t4 = t8 - (X_idx_28 - 0.799999992) / 0.001;
  } else if (M_idx_11 != 0) {
    t4 = t8 - (X_idx_28 + pmf_get_inf()) / 0.3;
  } else {
    t4 = t8 - X_idx_28 * 1.0E-5;
  }

  if (M_idx_13 != 0) {
    X_idx_3 = t10 - (-X_idx_29 - 0.799999992) / 0.001;
  } else if (M_idx_14 != 0) {
    X_idx_3 = t10 - (-X_idx_29 + pmf_get_inf()) / 0.3;
  } else {
    X_idx_3 = t10 - -X_idx_29 * 1.0E-5;
  }

  if (M_idx_15 != 0) {
    t6 = t12 - (X_idx_30 - 0.799999992) / 0.001;
  } else if (M_idx_16 != 0) {
    t6 = t12 - (X_idx_30 + pmf_get_inf()) / 0.3;
  } else {
    t6 = t12 - X_idx_30 * 1.0E-5;
  }

  if (M_idx_17 != 0) {
    X_idx_23 = X_idx_9 - (t14 - 0.799999992) / 0.001;
  } else if (M_idx_18 != 0) {
    X_idx_23 = X_idx_9 - (t14 + pmf_get_inf()) / 0.3;
  } else {
    X_idx_23 = X_idx_9 - t14 * 1.0E-5;
  }

  if (M_idx_19 != 0) {
    t8 = X_idx_10 - (t15 - 0.79999999920000009) / 0.001;
  } else {
    t8 = X_idx_10 - t15 * 1.0E-6;
  }

  if (M_idx_20 != 0) {
    X_idx_2 = t16 - (t17 - 0.799999992) / 0.001;
  } else if (M_idx_21 != 0) {
    X_idx_2 = t16 - (t17 + pmf_get_inf()) / 0.3;
  } else {
    X_idx_2 = t16 - t17 * 1.0E-5;
  }

  if (M_idx_22 != 0) {
    t10 = X_idx_37 - (t18 - 0.79999999920000009) / 0.001;
  } else {
    t10 = X_idx_37 - t18 * 1.0E-6;
  }

  if (M_idx_24 != 0) {
    X_idx_22 = X_idx_35 - (t19 - 0.799999992) / 0.001;
  } else if (M_idx_25 != 0) {
    X_idx_22 = X_idx_35 - (t19 + pmf_get_inf()) / 0.3;
  } else {
    X_idx_22 = X_idx_35 - t19 * 1.0E-5;
  }

  if (M_idx_26 != 0) {
    t12 = X_idx_36 - (t20 - 0.79999999920000009) / 0.001;
  } else {
    t12 = X_idx_36 - t20 * 1.0E-6;
  }

  if (M_idx_27 != 0) {
    X_idx_4 = X_idx_11 - (t21 - 0.799999992) / 0.001;
  } else if (M_idx_28 != 0) {
    X_idx_4 = X_idx_11 - (t21 + pmf_get_inf()) / 0.3;
  } else {
    X_idx_4 = X_idx_11 - t21 * 1.0E-5;
  }

  if (M_idx_29 != 0) {
    t14 = X_idx_12 - (t22 - 0.79999999920000009) / 0.001;
  } else {
    t14 = X_idx_12 - t22 * 1.0E-6;
  }

  if (M_idx_30 != 0) {
    t15 = t23 - (t24 - 0.799999992) / 0.001;
  } else if (M_idx_31 != 0) {
    t15 = t23 - (t24 + pmf_get_inf()) / 0.3;
  } else {
    t15 = t23 - t24 * 1.0E-5;
  }

  if (M_idx_32 != 0) {
    t16 = X_idx_38 - (t25 - 0.79999999920000009) / 0.001;
  } else {
    t16 = X_idx_38 - t25 * 1.0E-6;
  }

  if (M_idx_33 != 0) {
    t17 = X_idx_31 - (t26 - 0.799999992) / 0.001;
  } else if (M_idx_35 != 0) {
    t17 = X_idx_31 - (t26 + pmf_get_inf()) / 0.3;
  } else {
    t17 = X_idx_31 - t26 * 1.0E-5;
  }

  if (M_idx_36 != 0) {
    t18 = X_idx_32 - (t27 - 0.79999999920000009) / 0.001;
  } else {
    t18 = X_idx_32 - t27 * 1.0E-6;
  }

  if (M_idx_37 != 0) {
    t19 = X_idx_13 - (t28 - 0.799999992) / 0.001;
  } else if (M_idx_38 != 0) {
    t19 = X_idx_13 - (t28 + pmf_get_inf()) / 0.3;
  } else {
    t19 = X_idx_13 - t28 * 1.0E-5;
  }

  if (M_idx_39 != 0) {
    t20 = X_idx_14 - (t29 - 0.79999999920000009) / 0.001;
  } else {
    t20 = X_idx_14 - t29 * 1.0E-6;
  }

  if (M_idx_40 != 0) {
    t21 = X_idx_15 - (t30 - 0.799999992) / 0.001;
  } else if (M_idx_41 != 0) {
    t21 = X_idx_15 - (t30 + pmf_get_inf()) / 0.3;
  } else {
    t21 = X_idx_15 - t30 * 1.0E-5;
  }

  if (M_idx_42 != 0) {
    t22 = X_idx_16 - (t36 - 0.79999999920000009) / 0.001;
  } else {
    t22 = X_idx_16 - t36 * 1.0E-6;
  }

  if (M_idx_43 != 0) {
    t23 = t89 - (t85 - 0.799999992) / 0.001;
  } else if (M_idx_44 != 0) {
    t23 = t89 - (t85 + pmf_get_inf()) / 0.3;
  } else {
    t23 = t89 - t85 * 1.0E-5;
  }

  if (M_idx_46 != 0) {
    t24 = X_idx_39 - (Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v -
                      0.79999999920000009) / 0.001;
  } else {
    t24 = X_idx_39 - Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v *
      1.0E-6;
  }

  if (M_idx_47 != 0) {
    t25 = X_idx_33 - (Three_Level_Converter_converter_Xabc_Q7_diode_v -
                      0.799999992) / 0.001;
  } else if (M_idx_48 != 0) {
    t25 = X_idx_33 - (Three_Level_Converter_converter_Xabc_Q7_diode_v +
                      pmf_get_inf()) / 0.3;
  } else {
    t25 = X_idx_33 - Three_Level_Converter_converter_Xabc_Q7_diode_v * 1.0E-5;
  }

  if (M_idx_49 != 0) {
    t26 = X_idx_34 - (Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v -
                      0.79999999920000009) / 0.001;
  } else {
    t26 = X_idx_34 - Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v *
      1.0E-6;
  }

  if (M_idx_50 != 0) {
    t27 = X_idx_17 - (Three_Level_Converter_converter_Xabc_Q8_diode_v -
                      0.799999992) / 0.001;
  } else if (M_idx_51 != 0) {
    t27 = X_idx_17 - (Three_Level_Converter_converter_Xabc_Q8_diode_v +
                      pmf_get_inf()) / 0.3;
  } else {
    t27 = X_idx_17 - Three_Level_Converter_converter_Xabc_Q8_diode_v * 1.0E-5;
  }

  if (M_idx_52 != 0) {
    t28 = X_idx_18 - (Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v -
                      0.79999999920000009) / 0.001;
  } else {
    t28 = X_idx_18 - Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v *
      1.0E-6;
  }

  if (M_idx_53 != 0) {
    t29 = X_idx_19 - (Three_Level_Converter_converter_Xabc_Q9_diode_v -
                      0.799999992) / 0.001;
  } else if (M_idx_54 != 0) {
    t29 = X_idx_19 - (Three_Level_Converter_converter_Xabc_Q9_diode_v +
                      pmf_get_inf()) / 0.3;
  } else {
    t29 = X_idx_19 - Three_Level_Converter_converter_Xabc_Q9_diode_v * 1.0E-5;
  }

  if (M_idx_55 != 0) {
    t30 = X_idx_20 - (X_idx_8 - 0.79999999920000009) / 0.001;
  } else {
    t30 = X_idx_20 - X_idx_8 * 1.0E-6;
  }

  out.mX[0] = -0.0;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  out.mX[6] = -0.0;
  out.mX[7] = -0.0;
  out.mX[8] = 1800.0;
  out.mX[9] = -0.0;
  out.mX[10] = X_idx_0;
  out.mX[11] = t2;
  out.mX[12] = X_idx_24;
  out.mX[13] = t4;
  out.mX[14] = X_idx_3;
  out.mX[15] = t6;
  out.mX[16] = X_idx_23;
  out.mX[17] = t8;
  out.mX[18] = X_idx_2;
  out.mX[19] = t10;
  out.mX[20] = X_idx_22;
  out.mX[21] = t12;
  out.mX[22] = X_idx_4;
  out.mX[23] = t14;
  out.mX[24] = t15;
  out.mX[25] = t16;
  out.mX[26] = t17;
  out.mX[27] = t18;
  out.mX[28] = t19;
  out.mX[29] = t20;
  out.mX[30] = t21;
  out.mX[31] = t22;
  out.mX[32] = t23;
  out.mX[33] = t24;
  out.mX[34] = t25;
  out.mX[35] = t26;
  out.mX[36] = t27;
  out.mX[37] = t28;
  out.mX[38] = t29;
  out.mX[39] = t30;
  (void)t0;
  (void)t91;
  return 0;
}
