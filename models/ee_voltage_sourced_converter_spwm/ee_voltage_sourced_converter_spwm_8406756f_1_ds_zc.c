/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_zc.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_zc(const NeDynamicSystem
  *t0, const NeDynamicSystemInput *t53, NeDsMethodOutput *t54)
{
  PmRealVector out;
  real_T Converter_converter_Xabc_Q1_diode_v;
  real_T Converter_converter_Xabc_Q3_K_v;
  real_T Converter_converter_Xabc_Q3_diode_v;
  real_T Converter_converter_Xabc_Q3_ideal_switch_v;
  real_T Converter_converter_Xabc_Q4_diode_v;
  real_T Converter_converter_Xabc_Q4_ideal_switch_i;
  real_T Converter_converter_Xabc_Q5_K_v;
  real_T Converter_converter_Xabc_Q5_diode_v;
  real_T Converter_converter_Xabc_Q5_ideal_switch_v;
  real_T Converter_converter_Xabc_Q6_diode_v;
  boolean_T t7;
  boolean_T t9;
  boolean_T t11;
  boolean_T t13;
  boolean_T t15;
  boolean_T t17;
  real_T t47;
  real_T t51;
  real_T t19_idx_6;
  real_T t19_idx_9;
  real_T t19_idx_12;
  real_T X_idx_0;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T X_idx_11;
  real_T X_idx_1;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_2;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T X_idx_14;
  real_T X_idx_8;
  real_T X_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T X_idx_17;
  int32_T M_idx_10;
  int32_T M_idx_14;
  int32_T M_idx_17;
  int32_T M_idx_20;
  int32_T M_idx_24;
  int32_T M_idx_27;
  real_T X_idx_10;
  real_T X_idx_13;
  real_T X_idx_16;
  (void)t0;
  M_idx_10 = t53->mM.mX[10];
  M_idx_14 = t53->mM.mX[14];
  M_idx_17 = t53->mM.mX[17];
  M_idx_20 = t53->mM.mX[20];
  M_idx_24 = t53->mM.mX[24];
  M_idx_27 = t53->mM.mX[27];
  U_idx_0 = t53->mU.mX[0];
  U_idx_1 = t53->mU.mX[1];
  U_idx_2 = t53->mU.mX[2];
  U_idx_3 = t53->mU.mX[3];
  U_idx_4 = t53->mU.mX[4];
  U_idx_5 = t53->mU.mX[5];
  X_idx_0 = t53->mX.mX[0];
  X_idx_1 = t53->mX.mX[1];
  X_idx_2 = t53->mX.mX[2];
  X_idx_3 = t53->mX.mX[3];
  X_idx_4 = t53->mX.mX[4];
  X_idx_5 = t53->mX.mX[5];
  X_idx_6 = t53->mX.mX[6];
  X_idx_7 = t53->mX.mX[7];
  X_idx_8 = t53->mX.mX[8];
  X_idx_10 = t53->mX.mX[10];
  X_idx_11 = t53->mX.mX[11];
  X_idx_13 = t53->mX.mX[13];
  X_idx_14 = t53->mX.mX[14];
  X_idx_16 = t53->mX.mX[16];
  X_idx_17 = t53->mX.mX[17];
  out = t54->mZC;
  Converter_converter_Xabc_Q1_diode_v = (-X_idx_0 + X_idx_4 * -1.0E-6) + X_idx_5;
  t51 = (X_idx_4 * 1.0E-6 + -X_idx_5) + X_idx_0;
  t47 = X_idx_5 * 1.0E-6 + X_idx_11;
  Converter_converter_Xabc_Q3_K_v = (((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_7
    * 1.000001) + X_idx_2) + X_idx_5;
  Converter_converter_Xabc_Q3_diode_v = (((((-X_idx_0 + -X_idx_1) + X_idx_4 *
    -1.0E-6) + X_idx_6 * -1.000001) + X_idx_7 * 1.000001) + X_idx_2) + X_idx_5;
  Converter_converter_Xabc_Q3_ideal_switch_v = (((((-X_idx_2 + X_idx_4 * 1.0E-6)
    + -X_idx_5) + X_idx_6 * 1.000001) + X_idx_7 * -1.000001) + X_idx_1) +
    X_idx_0;
  Converter_converter_Xabc_Q4_diode_v = (((-X_idx_2 + -X_idx_5) + X_idx_6 *
    1.000001) + X_idx_7 * -1.000001) + X_idx_1;
  Converter_converter_Xabc_Q4_ideal_switch_i = ((((X_idx_1 * -1.0E-6 + X_idx_2 *
    1.0E-6) + X_idx_5 * 1.0E-6) + X_idx_6 * -1.0000009999999998E-6) + X_idx_7 *
    1.0000009999999998E-6) + X_idx_14;
  Converter_converter_Xabc_Q5_K_v = (((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_8
    * 1.000001) + X_idx_3) + X_idx_5;
  Converter_converter_Xabc_Q5_diode_v = (((((-X_idx_0 + -X_idx_1) + X_idx_4 *
    -1.0E-6) + X_idx_6 * -1.000001) + X_idx_8 * 1.000001) + X_idx_3) + X_idx_5;
  Converter_converter_Xabc_Q5_ideal_switch_v = (((((-X_idx_3 + X_idx_4 * 1.0E-6)
    + -X_idx_5) + X_idx_6 * 1.000001) + X_idx_8 * -1.000001) + X_idx_1) +
    X_idx_0;
  Converter_converter_Xabc_Q6_diode_v = (((-X_idx_3 + -X_idx_5) + X_idx_6 *
    1.000001) + X_idx_8 * -1.000001) + X_idx_1;
  X_idx_11 = ((((X_idx_1 * -1.0E-6 + X_idx_3 * 1.0E-6) + X_idx_5 * 1.0E-6) +
               X_idx_6 * -1.0000009999999998E-6) + X_idx_8 *
              1.0000009999999998E-6) + X_idx_17;
  if (M_idx_10 == 0) {
    X_idx_2 = -pmf_get_inf() - Converter_converter_Xabc_Q1_diode_v;
  } else {
    X_idx_2 = 0.0;
  }

  if (M_idx_14 == 0) {
    X_idx_7 = -pmf_get_inf() - (-X_idx_5);
  } else {
    X_idx_7 = 0.0;
  }

  if (M_idx_17 == 0) {
    X_idx_14 = -pmf_get_inf() - Converter_converter_Xabc_Q3_diode_v;
  } else {
    X_idx_14 = 0.0;
  }

  if (M_idx_20 == 0) {
    X_idx_0 = -pmf_get_inf() - Converter_converter_Xabc_Q4_diode_v;
  } else {
    X_idx_0 = 0.0;
  }

  if (M_idx_24 == 0) {
    X_idx_4 = -pmf_get_inf() - Converter_converter_Xabc_Q5_diode_v;
  } else {
    X_idx_4 = 0.0;
  }

  if (M_idx_27 == 0) {
    X_idx_1 = -pmf_get_inf() - Converter_converter_Xabc_Q6_diode_v;
  } else {
    X_idx_1 = 0.0;
  }

  if (t51 > 0.6) {
    if (U_idx_0 > 0.5) {
      t9 = true;
    } else {
      t9 = (X_idx_10 > 1.0);
    }
  } else {
    t9 = false;
  }

  if (t9) {
    t7 = (U_idx_0 > 0.1);
  } else {
    t7 = false;
  }

  if (X_idx_5 > 0.6) {
    if (U_idx_1 > 0.5) {
      t11 = true;
    } else {
      t11 = (t47 > 1.0);
    }
  } else {
    t11 = false;
  }

  if (t11) {
    t9 = (U_idx_1 > 0.1);
  } else {
    t9 = false;
  }

  if (Converter_converter_Xabc_Q3_ideal_switch_v > 0.6) {
    if (U_idx_2 > 0.5) {
      t13 = true;
    } else {
      t13 = (X_idx_13 > 1.0);
    }
  } else {
    t13 = false;
  }

  if (t13) {
    t11 = (U_idx_2 > 0.1);
  } else {
    t11 = false;
  }

  if (Converter_converter_Xabc_Q3_K_v > 0.6) {
    if (U_idx_3 > 0.5) {
      t15 = true;
    } else {
      t15 = (Converter_converter_Xabc_Q4_ideal_switch_i > 1.0);
    }
  } else {
    t15 = false;
  }

  if (t15) {
    t13 = (U_idx_3 > 0.1);
  } else {
    t13 = false;
  }

  if (Converter_converter_Xabc_Q5_ideal_switch_v > 0.6) {
    if (U_idx_4 > 0.5) {
      t17 = true;
    } else {
      t17 = (X_idx_16 > 1.0);
    }
  } else {
    t17 = false;
  }

  if (t17) {
    t15 = (U_idx_4 > 0.1);
  } else {
    t15 = false;
  }

  if (Converter_converter_Xabc_Q5_K_v > 0.6) {
    if (U_idx_5 > 0.5) {
      t17 = true;
    } else {
      t17 = (X_idx_11 > 1.0);
    }
  } else {
    t17 = false;
  }

  if (t17) {
    t17 = (U_idx_5 > 0.1);
  } else {
    t17 = false;
  }

  X_idx_3 = U_idx_0 - 0.5 > X_idx_10 - 1.0 ? U_idx_0 - 0.5 : X_idx_10 - 1.0;
  X_idx_6 = U_idx_1 - 0.5 > t47 - 1.0 ? U_idx_1 - 0.5 : t47 - 1.0;
  X_idx_8 = (U_idx_1 - 0.5) - (t47 - 1.0);
  X_idx_17 = (X_idx_5 - 0.6) - (U_idx_1 - 0.5 > t47 - 1.0 ? U_idx_1 - 0.5 : t47
    - 1.0);
  t47 = U_idx_2 - 0.5 > X_idx_13 - 1.0 ? U_idx_2 - 0.5 : X_idx_13 - 1.0;
  t19_idx_6 = (U_idx_2 - 0.1) - (Converter_converter_Xabc_Q3_ideal_switch_v -
    0.6 > t47 ? t47 : Converter_converter_Xabc_Q3_ideal_switch_v - 0.6);
  t47 = U_idx_3 - 0.5 > Converter_converter_Xabc_Q4_ideal_switch_i - 1.0 ?
    U_idx_3 - 0.5 : Converter_converter_Xabc_Q4_ideal_switch_i - 1.0;
  t19_idx_9 = (U_idx_3 - 0.1) - (Converter_converter_Xabc_Q3_K_v - 0.6 > t47 ?
    t47 : Converter_converter_Xabc_Q3_K_v - 0.6);
  t47 = U_idx_4 - 0.5 > X_idx_16 - 1.0 ? U_idx_4 - 0.5 : X_idx_16 - 1.0;
  t19_idx_12 = (U_idx_4 - 0.1) - (Converter_converter_Xabc_Q5_ideal_switch_v -
    0.6 > t47 ? t47 : Converter_converter_Xabc_Q5_ideal_switch_v - 0.6);
  t47 = U_idx_5 - 0.5 > X_idx_11 - 1.0 ? U_idx_5 - 0.5 : X_idx_11 - 1.0;
  out.mX[0] = (U_idx_0 - 0.1) - (t51 - 0.6 > X_idx_3 ? X_idx_3 : t51 - 0.6);
  out.mX[1] = (U_idx_0 - 0.5) - (X_idx_10 - 1.0);
  out.mX[2] = (t51 - 0.6) - (U_idx_0 - 0.5 > X_idx_10 - 1.0 ? U_idx_0 - 0.5 :
    X_idx_10 - 1.0);
  out.mX[3] = (U_idx_1 - 0.1) - (X_idx_5 - 0.6 > X_idx_6 ? X_idx_6 : X_idx_5 -
    0.6);
  out.mX[4] = X_idx_8;
  out.mX[5] = X_idx_17;
  out.mX[6] = t19_idx_6;
  out.mX[7] = (U_idx_2 - 0.5) - (X_idx_13 - 1.0);
  out.mX[8] = (Converter_converter_Xabc_Q3_ideal_switch_v - 0.6) - (U_idx_2 -
    0.5 > X_idx_13 - 1.0 ? U_idx_2 - 0.5 : X_idx_13 - 1.0);
  out.mX[9] = t19_idx_9;
  out.mX[10] = (U_idx_3 - 0.5) - (Converter_converter_Xabc_Q4_ideal_switch_i -
    1.0);
  out.mX[11] = (Converter_converter_Xabc_Q3_K_v - 0.6) - (U_idx_3 - 0.5 >
    Converter_converter_Xabc_Q4_ideal_switch_i - 1.0 ? U_idx_3 - 0.5 :
    Converter_converter_Xabc_Q4_ideal_switch_i - 1.0);
  out.mX[12] = t19_idx_12;
  out.mX[13] = (U_idx_4 - 0.5) - (X_idx_16 - 1.0);
  out.mX[14] = (Converter_converter_Xabc_Q5_ideal_switch_v - 0.6) - (U_idx_4 -
    0.5 > X_idx_16 - 1.0 ? U_idx_4 - 0.5 : X_idx_16 - 1.0);
  out.mX[15] = (U_idx_5 - 0.1) - (Converter_converter_Xabc_Q5_K_v - 0.6 > t47 ?
    t47 : Converter_converter_Xabc_Q5_K_v - 0.6);
  out.mX[16] = (U_idx_5 - 0.5) - (X_idx_11 - 1.0);
  out.mX[17] = (Converter_converter_Xabc_Q5_K_v - 0.6) - (U_idx_5 - 0.5 >
    X_idx_11 - 1.0 ? U_idx_5 - 0.5 : X_idx_11 - 1.0);
  out.mX[18] = Converter_converter_Xabc_Q1_diode_v - 0.8;
  out.mX[19] = -X_idx_5 - 0.8;
  out.mX[20] = Converter_converter_Xabc_Q3_diode_v - 0.8;
  out.mX[21] = Converter_converter_Xabc_Q4_diode_v - 0.8;
  out.mX[22] = Converter_converter_Xabc_Q5_diode_v - 0.8;
  out.mX[23] = Converter_converter_Xabc_Q6_diode_v - 0.8;
  out.mX[24] = X_idx_2;
  out.mX[25] = X_idx_7;
  out.mX[26] = X_idx_14;
  out.mX[27] = X_idx_0;
  out.mX[28] = X_idx_4;
  out.mX[29] = X_idx_1;
  out.mX[30] = (real_T)t7;
  out.mX[31] = (real_T)t9;
  out.mX[32] = (real_T)t11;
  out.mX[33] = (real_T)t13;
  out.mX[34] = (real_T)t15;
  out.mX[35] = (real_T)t17;
  (void)t0;
  (void)t54;
  return 0;
}
