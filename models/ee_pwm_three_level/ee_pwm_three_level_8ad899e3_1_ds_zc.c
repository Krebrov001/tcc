/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_zc.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_zc(const NeDynamicSystem *t0, const
  NeDynamicSystemInput *t32, NeDsMethodOutput *t33)
{
  PmRealVector out;
  real_T Three_Level_Converter_converter_Xabc_Q1_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q10_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q11_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q12_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q2_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q3_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q4_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q5_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q6_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q7_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q8_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q9_diode_v;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  boolean_T t19;
  boolean_T t20;
  boolean_T t21;
  boolean_T t22;
  boolean_T t23;
  boolean_T t24;
  boolean_T t25;
  boolean_T t26;
  boolean_T t27;
  boolean_T t28;
  boolean_T t29;
  boolean_T t30;
  real_T X_idx_25;
  real_T X_idx_26;
  real_T X_idx_27;
  real_T X_idx_28;
  real_T X_idx_29;
  real_T X_idx_30;
  real_T X_idx_8;
  real_T X_idx_0;
  real_T U_idx_0;
  real_T X_idx_22;
  real_T U_idx_9;
  real_T U_idx_10;
  real_T U_idx_11;
  real_T X_idx_23;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T X_idx_24;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T U_idx_8;
  int32_T M_idx_4;
  int32_T M_idx_6;
  int32_T M_idx_8;
  int32_T M_idx_10;
  int32_T M_idx_13;
  int32_T M_idx_15;
  int32_T M_idx_17;
  int32_T M_idx_20;
  int32_T M_idx_24;
  int32_T M_idx_27;
  int32_T M_idx_30;
  int32_T M_idx_33;
  int32_T M_idx_37;
  int32_T M_idx_40;
  int32_T M_idx_43;
  int32_T M_idx_47;
  int32_T M_idx_50;
  int32_T M_idx_53;
  (void)t0;
  M_idx_4 = t32->mM.mX[4];
  M_idx_6 = t32->mM.mX[6];
  M_idx_8 = t32->mM.mX[8];
  M_idx_10 = t32->mM.mX[10];
  M_idx_13 = t32->mM.mX[13];
  M_idx_15 = t32->mM.mX[15];
  M_idx_17 = t32->mM.mX[17];
  M_idx_20 = t32->mM.mX[20];
  M_idx_24 = t32->mM.mX[24];
  M_idx_27 = t32->mM.mX[27];
  M_idx_30 = t32->mM.mX[30];
  M_idx_33 = t32->mM.mX[33];
  M_idx_37 = t32->mM.mX[37];
  M_idx_40 = t32->mM.mX[40];
  M_idx_43 = t32->mM.mX[43];
  M_idx_47 = t32->mM.mX[47];
  M_idx_50 = t32->mM.mX[50];
  M_idx_53 = t32->mM.mX[53];
  U_idx_0 = t32->mU.mX[0];
  U_idx_1 = t32->mU.mX[1];
  U_idx_2 = t32->mU.mX[2];
  U_idx_3 = t32->mU.mX[3];
  U_idx_4 = t32->mU.mX[4];
  U_idx_5 = t32->mU.mX[5];
  U_idx_6 = t32->mU.mX[6];
  U_idx_7 = t32->mU.mX[7];
  U_idx_8 = t32->mU.mX[8];
  U_idx_9 = t32->mU.mX[9];
  U_idx_10 = t32->mU.mX[10];
  U_idx_11 = t32->mU.mX[11];
  X_idx_0 = t32->mX.mX[0];
  X_idx_8 = t32->mX.mX[8];
  X_idx_22 = t32->mX.mX[22];
  X_idx_23 = t32->mX.mX[23];
  X_idx_24 = t32->mX.mX[24];
  X_idx_25 = t32->mX.mX[25];
  X_idx_26 = t32->mX.mX[26];
  X_idx_27 = t32->mX.mX[27];
  X_idx_28 = t32->mX.mX[28];
  X_idx_29 = t32->mX.mX[29];
  X_idx_30 = t32->mX.mX[30];
  out = t33->mZC;
  Three_Level_Converter_converter_Xabc_Q1_diode_v = ((X_idx_8 * 1.0E-5 + X_idx_0)
    + X_idx_25) + -1800.0;
  Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v = ((-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_25) + 1800.0;
  Three_Level_Converter_converter_Xabc_Q10_diode_v = -X_idx_29 + X_idx_22;
  Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v = -X_idx_22 + X_idx_29;
  Three_Level_Converter_converter_Xabc_Q11_diode_v = -X_idx_22 + X_idx_30;
  Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v = -X_idx_30 + X_idx_22;
  Three_Level_Converter_converter_Xabc_Q12_diode_v = (-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_30;
  Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v = (X_idx_8 * 1.0E-5 +
    X_idx_0) + X_idx_30;
  Three_Level_Converter_converter_Xabc_Q2_diode_v = -X_idx_25 + X_idx_23;
  Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v = -X_idx_23 + X_idx_25;
  Three_Level_Converter_converter_Xabc_Q3_diode_v = -X_idx_23 + X_idx_26;
  Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v = -X_idx_26 + X_idx_23;
  Three_Level_Converter_converter_Xabc_Q4_diode_v = (-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_26;
  Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v = (X_idx_8 * 1.0E-5 +
    X_idx_0) + X_idx_26;
  Three_Level_Converter_converter_Xabc_Q5_diode_v = ((X_idx_8 * 1.0E-5 + X_idx_0)
    + X_idx_27) + -1800.0;
  Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v = ((-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_27) + 1800.0;
  Three_Level_Converter_converter_Xabc_Q6_diode_v = -X_idx_27 + X_idx_24;
  Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v = -X_idx_24 + X_idx_27;
  Three_Level_Converter_converter_Xabc_Q7_diode_v = -X_idx_24 + X_idx_28;
  Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v = -X_idx_28 + X_idx_24;
  Three_Level_Converter_converter_Xabc_Q8_diode_v = (-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_28;
  Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v = (X_idx_8 * 1.0E-5 +
    X_idx_0) + X_idx_28;
  Three_Level_Converter_converter_Xabc_Q9_diode_v = ((X_idx_8 * 1.0E-5 + X_idx_0)
    + X_idx_29) + -1800.0;
  X_idx_22 = ((-X_idx_0 + X_idx_8 * -1.0E-5) + -X_idx_29) + 1800.0;
  if (M_idx_4 == 0) {
    X_idx_23 = -pmf_get_inf() - (-X_idx_25);
  } else {
    X_idx_23 = 0.0;
  }

  if (M_idx_6 == 0) {
    X_idx_24 = -pmf_get_inf() - X_idx_26;
  } else {
    X_idx_24 = 0.0;
  }

  if (M_idx_8 == 0) {
    X_idx_0 = -pmf_get_inf() - (-X_idx_27);
  } else {
    X_idx_0 = 0.0;
  }

  if (M_idx_10 == 0) {
    X_idx_8 = -pmf_get_inf() - X_idx_28;
  } else {
    X_idx_8 = 0.0;
  }

  if (M_idx_13 == 0) {
    t5 = -pmf_get_inf() - (-X_idx_29);
  } else {
    t5 = 0.0;
  }

  if (M_idx_15 == 0) {
    t6 = -pmf_get_inf() - X_idx_30;
  } else {
    t6 = 0.0;
  }

  if (M_idx_17 == 0) {
    t7 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q1_diode_v;
  } else {
    t7 = 0.0;
  }

  if (M_idx_20 == 0) {
    t8 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q10_diode_v;
  } else {
    t8 = 0.0;
  }

  if (M_idx_24 == 0) {
    t9 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q11_diode_v;
  } else {
    t9 = 0.0;
  }

  if (M_idx_27 == 0) {
    t10 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q12_diode_v;
  } else {
    t10 = 0.0;
  }

  if (M_idx_30 == 0) {
    t11 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q2_diode_v;
  } else {
    t11 = 0.0;
  }

  if (M_idx_33 == 0) {
    t12 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q3_diode_v;
  } else {
    t12 = 0.0;
  }

  if (M_idx_37 == 0) {
    t13 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q4_diode_v;
  } else {
    t13 = 0.0;
  }

  if (M_idx_40 == 0) {
    t14 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q5_diode_v;
  } else {
    t14 = 0.0;
  }

  if (M_idx_43 == 0) {
    t15 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q6_diode_v;
  } else {
    t15 = 0.0;
  }

  if (M_idx_47 == 0) {
    t16 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q7_diode_v;
  } else {
    t16 = 0.0;
  }

  if (M_idx_50 == 0) {
    t17 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q8_diode_v;
  } else {
    t17 = 0.0;
  }

  if (M_idx_53 == 0) {
    t18 = -pmf_get_inf() - Three_Level_Converter_converter_Xabc_Q9_diode_v;
  } else {
    t18 = 0.0;
  }

  if (Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v > 0.8) {
    t19 = (U_idx_0 > 0.5);
  } else {
    t19 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v > 0.8) {
    t20 = (U_idx_9 > 0.5);
  } else {
    t20 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v > 0.8) {
    t21 = (U_idx_10 > 0.5);
  } else {
    t21 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v > 0.8) {
    t22 = (U_idx_11 > 0.5);
  } else {
    t22 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v > 0.8) {
    t23 = (U_idx_1 > 0.5);
  } else {
    t23 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v > 0.8) {
    t24 = (U_idx_2 > 0.5);
  } else {
    t24 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v > 0.8) {
    t25 = (U_idx_3 > 0.5);
  } else {
    t25 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v > 0.8) {
    t26 = (U_idx_4 > 0.5);
  } else {
    t26 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v > 0.8) {
    t27 = (U_idx_5 > 0.5);
  } else {
    t27 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v > 0.8) {
    t28 = (U_idx_6 > 0.5);
  } else {
    t28 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v > 0.8) {
    t29 = (U_idx_7 > 0.5);
  } else {
    t29 = false;
  }

  if (X_idx_22 > 0.8) {
    t30 = (U_idx_8 > 0.5);
  } else {
    t30 = false;
  }

  out.mX[0] = (U_idx_0 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v - 0.8);
  out.mX[1] = (U_idx_9 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v - 0.8);
  out.mX[2] = (U_idx_10 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v - 0.8);
  out.mX[3] = (U_idx_11 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v - 0.8);
  out.mX[4] = (U_idx_1 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v - 0.8);
  out.mX[5] = (U_idx_2 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v - 0.8);
  out.mX[6] = (U_idx_3 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v - 0.8);
  out.mX[7] = (U_idx_4 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v - 0.8);
  out.mX[8] = (U_idx_5 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v - 0.8);
  out.mX[9] = (U_idx_6 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v - 0.8);
  out.mX[10] = (U_idx_7 - 0.5) -
    (Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v - 0.8);
  out.mX[11] = (U_idx_8 - 0.5) - (X_idx_22 - 0.8);
  out.mX[12] = -X_idx_25 - 0.8;
  out.mX[13] = X_idx_26 - 0.8;
  out.mX[14] = -X_idx_27 - 0.8;
  out.mX[15] = X_idx_28 - 0.8;
  out.mX[16] = -X_idx_29 - 0.8;
  out.mX[17] = X_idx_30 - 0.8;
  out.mX[18] = Three_Level_Converter_converter_Xabc_Q1_diode_v - 0.8;
  out.mX[19] = Three_Level_Converter_converter_Xabc_Q10_diode_v - 0.8;
  out.mX[20] = Three_Level_Converter_converter_Xabc_Q11_diode_v - 0.8;
  out.mX[21] = Three_Level_Converter_converter_Xabc_Q12_diode_v - 0.8;
  out.mX[22] = Three_Level_Converter_converter_Xabc_Q2_diode_v - 0.8;
  out.mX[23] = Three_Level_Converter_converter_Xabc_Q3_diode_v - 0.8;
  out.mX[24] = Three_Level_Converter_converter_Xabc_Q4_diode_v - 0.8;
  out.mX[25] = Three_Level_Converter_converter_Xabc_Q5_diode_v - 0.8;
  out.mX[26] = Three_Level_Converter_converter_Xabc_Q6_diode_v - 0.8;
  out.mX[27] = Three_Level_Converter_converter_Xabc_Q7_diode_v - 0.8;
  out.mX[28] = Three_Level_Converter_converter_Xabc_Q8_diode_v - 0.8;
  out.mX[29] = Three_Level_Converter_converter_Xabc_Q9_diode_v - 0.8;
  out.mX[30] = X_idx_23;
  out.mX[31] = X_idx_24;
  out.mX[32] = X_idx_0;
  out.mX[33] = X_idx_8;
  out.mX[34] = t5;
  out.mX[35] = t6;
  out.mX[36] = t7;
  out.mX[37] = t8;
  out.mX[38] = t9;
  out.mX[39] = t10;
  out.mX[40] = t11;
  out.mX[41] = t12;
  out.mX[42] = t13;
  out.mX[43] = t14;
  out.mX[44] = t15;
  out.mX[45] = t16;
  out.mX[46] = t17;
  out.mX[47] = t18;
  out.mX[48] = (real_T)t19;
  out.mX[49] = (real_T)t20;
  out.mX[50] = (real_T)t21;
  out.mX[51] = (real_T)t22;
  out.mX[52] = (real_T)t23;
  out.mX[53] = (real_T)t24;
  out.mX[54] = (real_T)t25;
  out.mX[55] = (real_T)t26;
  out.mX[56] = (real_T)t27;
  out.mX[57] = (real_T)t28;
  out.mX[58] = (real_T)t29;
  out.mX[59] = (real_T)t30;
  (void)t0;
  (void)t33;
  return 0;
}
