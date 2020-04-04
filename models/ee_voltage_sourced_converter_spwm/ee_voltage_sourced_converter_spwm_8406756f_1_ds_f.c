/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_f.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_f(const NeDynamicSystem *
  t0, const NeDynamicSystemInput *t37, NeDsMethodOutput *t38)
{
  PmRealVector out;
  real_T Converter_converter_Xabc_Q6_diode_i;
  real_T Converter_converter_Xabc_Q6_diode_v;
  real_T t1;
  real_T t2;
  real_T t3;
  real_T t5;
  real_T t8;
  real_T t10;
  real_T t12;
  real_T t35;
  real_T X_idx_0;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_10;
  real_T X_idx_6;
  real_T X_idx_1;
  real_T X_idx_9;
  real_T X_idx_11;
  real_T X_idx_7;
  real_T X_idx_2;
  real_T X_idx_13;
  real_T X_idx_12;
  real_T X_idx_14;
  real_T X_idx_8;
  real_T X_idx_3;
  real_T X_idx_16;
  real_T X_idx_15;
  real_T X_idx_17;
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
  (void)t0;
  M_idx_10 = t37->mM.mX[10];
  M_idx_11 = t37->mM.mX[11];
  M_idx_13 = t37->mM.mX[13];
  M_idx_14 = t37->mM.mX[14];
  M_idx_15 = t37->mM.mX[15];
  M_idx_16 = t37->mM.mX[16];
  M_idx_17 = t37->mM.mX[17];
  M_idx_18 = t37->mM.mX[18];
  M_idx_19 = t37->mM.mX[19];
  M_idx_20 = t37->mM.mX[20];
  M_idx_21 = t37->mM.mX[21];
  M_idx_22 = t37->mM.mX[22];
  M_idx_24 = t37->mM.mX[24];
  M_idx_25 = t37->mM.mX[25];
  M_idx_26 = t37->mM.mX[26];
  M_idx_27 = t37->mM.mX[27];
  M_idx_28 = t37->mM.mX[28];
  M_idx_29 = t37->mM.mX[29];
  X_idx_0 = t37->mX.mX[0];
  X_idx_1 = t37->mX.mX[1];
  X_idx_2 = t37->mX.mX[2];
  X_idx_3 = t37->mX.mX[3];
  X_idx_4 = t37->mX.mX[4];
  X_idx_5 = t37->mX.mX[5];
  X_idx_6 = t37->mX.mX[6];
  X_idx_7 = t37->mX.mX[7];
  X_idx_8 = t37->mX.mX[8];
  X_idx_9 = t37->mX.mX[9];
  X_idx_10 = t37->mX.mX[10];
  X_idx_11 = t37->mX.mX[11];
  X_idx_12 = t37->mX.mX[12];
  X_idx_13 = t37->mX.mX[13];
  X_idx_14 = t37->mX.mX[14];
  X_idx_15 = t37->mX.mX[15];
  X_idx_16 = t37->mX.mX[16];
  X_idx_17 = t37->mX.mX[17];
  out = t38->mF;
  t2 = (-X_idx_0 + X_idx_4 * -1.0E-6) + X_idx_5;
  t3 = ((X_idx_0 * -1.0E-6 + X_idx_4 * -1.0E-12) + X_idx_5 * 1.0E-6) + X_idx_10;
  t5 = ((((X_idx_5 * 1.0E-6 + -X_idx_10) + X_idx_6 * 1.0E-6) + X_idx_1) +
        X_idx_9) + X_idx_11;
  t8 = (((((-X_idx_0 + -X_idx_1) + X_idx_4 * -1.0E-6) + X_idx_6 * -1.000001) +
         X_idx_7 * 1.000001) + X_idx_2) + X_idx_5;
  t10 = ((((((X_idx_0 * -1.0E-6 + X_idx_1 * -1.0E-6) + X_idx_2 * 1.0E-6) +
            X_idx_4 * -1.0E-12) + X_idx_5 * 1.0E-6) + X_idx_6 *
          -1.0000009999999998E-6) + X_idx_7 * 1.0000009999999998E-6) + X_idx_13;
  t12 = ((((((X_idx_1 * -1.0E-6 + X_idx_2 * 1.000001) + X_idx_5 * 1.0E-6) +
            -X_idx_13) + X_idx_6 * -1.0000009999999998E-6) + X_idx_7 *
          2.0000009999999997E-6) + X_idx_12) + X_idx_14;
  X_idx_10 = (((-X_idx_2 + -X_idx_5) + X_idx_6 * 1.000001) + X_idx_7 * -1.000001)
    + X_idx_1;
  X_idx_13 = (((((-X_idx_0 + -X_idx_1) + X_idx_4 * -1.0E-6) + X_idx_6 *
                -1.000001) + X_idx_8 * 1.000001) + X_idx_3) + X_idx_5;
  t35 = ((((((X_idx_0 * -1.0E-6 + X_idx_1 * -1.0E-6) + X_idx_3 * 1.0E-6) +
            X_idx_4 * -1.0E-12) + X_idx_5 * 1.0E-6) + X_idx_6 *
          -1.0000009999999998E-6) + X_idx_8 * 1.0000009999999998E-6) + X_idx_16;
  Converter_converter_Xabc_Q6_diode_i = ((((((X_idx_1 * -1.0E-6 + X_idx_3 *
    1.000001) + X_idx_5 * 1.0E-6) + -X_idx_16) + X_idx_6 *
    -1.0000009999999998E-6) + X_idx_8 * 2.0000009999999997E-6) + X_idx_15) +
    X_idx_17;
  Converter_converter_Xabc_Q6_diode_v = (((-X_idx_3 + -X_idx_5) + X_idx_6 *
    1.000001) + X_idx_8 * -1.000001) + X_idx_1;
  if (M_idx_10 != 0) {
    t1 = X_idx_9 - (t2 - 0.799999992) / 0.001;
  } else if (M_idx_11 != 0) {
    t1 = X_idx_9 - (t2 + pmf_get_inf()) / 0.3;
  } else {
    t1 = X_idx_9 - t2 * 1.0E-5;
  }

  if (M_idx_13 != 0) {
    t2 = t3 - (((X_idx_4 * 1.0E-6 + -X_idx_5) + X_idx_0) - 0.6) * 0.999999999 /
      0.001;
  } else {
    t2 = t3;
  }

  if (M_idx_14 != 0) {
    t3 = t5 - (-X_idx_5 - 0.799999992) / 0.001;
  } else if (M_idx_15 != 0) {
    t3 = t5 - (-X_idx_5 + pmf_get_inf()) / 0.3;
  } else {
    t3 = t5 - -X_idx_5 * 1.0E-5;
  }

  if (M_idx_16 != 0) {
    X_idx_11 -= (X_idx_5 - 0.6) * 0.999999999 / 0.001;
  }

  if (M_idx_17 != 0) {
    t5 = X_idx_12 - (t8 - 0.799999992) / 0.001;
  } else if (M_idx_18 != 0) {
    t5 = X_idx_12 - (t8 + pmf_get_inf()) / 0.3;
  } else {
    t5 = X_idx_12 - t8 * 1.0E-5;
  }

  if (M_idx_19 != 0) {
    X_idx_9 = t10 - (((((((-X_idx_2 + X_idx_4 * 1.0E-6) + -X_idx_5) + X_idx_6 *
                         1.000001) + X_idx_7 * -1.000001) + X_idx_1) + X_idx_0)
                     - 0.6) * 0.999999999 / 0.001;
  } else {
    X_idx_9 = t10;
  }

  if (M_idx_20 != 0) {
    X_idx_16 = t12 - (X_idx_10 - 0.799999992) / 0.001;
  } else if (M_idx_21 != 0) {
    X_idx_16 = t12 - (X_idx_10 + pmf_get_inf()) / 0.3;
  } else {
    X_idx_16 = t12 - X_idx_10 * 1.0E-5;
  }

  if (M_idx_22 != 0) {
    t8 = X_idx_14 - (((((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_7 * 1.000001) +
                       X_idx_2) + X_idx_5) - 0.6) * 0.999999999 / 0.001;
  } else {
    t8 = X_idx_14;
  }

  if (M_idx_24 != 0) {
    X_idx_13 = X_idx_15 - (X_idx_13 - 0.799999992) / 0.001;
  } else if (M_idx_25 != 0) {
    X_idx_13 = X_idx_15 - (X_idx_13 + pmf_get_inf()) / 0.3;
  } else {
    X_idx_13 = X_idx_15 - X_idx_13 * 1.0E-5;
  }

  if (M_idx_26 != 0) {
    t10 = t35 - (((((((-X_idx_3 + X_idx_4 * 1.0E-6) + -X_idx_5) + X_idx_6 *
                     1.000001) + X_idx_8 * -1.000001) + X_idx_1) + X_idx_0) -
                 0.6) * 0.999999999 / 0.001;
  } else {
    t10 = t35;
  }

  if (M_idx_27 != 0) {
    X_idx_10 = Converter_converter_Xabc_Q6_diode_i -
      (Converter_converter_Xabc_Q6_diode_v - 0.799999992) / 0.001;
  } else if (M_idx_28 != 0) {
    X_idx_10 = Converter_converter_Xabc_Q6_diode_i -
      (Converter_converter_Xabc_Q6_diode_v + pmf_get_inf()) / 0.3;
  } else {
    X_idx_10 = Converter_converter_Xabc_Q6_diode_i -
      Converter_converter_Xabc_Q6_diode_v * 1.0E-5;
  }

  if (M_idx_29 != 0) {
    t12 = X_idx_17 - (((((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_8 * 1.000001)
                        + X_idx_3) + X_idx_5) - 0.6) * 0.999999999 / 0.001;
  } else {
    t12 = X_idx_17;
  }

  out.mX[0] = -0.0;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = t1;
  out.mX[5] = t2;
  out.mX[6] = t3;
  out.mX[7] = X_idx_11;
  out.mX[8] = t5;
  out.mX[9] = X_idx_9;
  out.mX[10] = X_idx_16;
  out.mX[11] = t8;
  out.mX[12] = X_idx_13;
  out.mX[13] = t10;
  out.mX[14] = X_idx_10;
  out.mX[15] = t12;
  out.mX[16] = -100.0;
  out.mX[17] = -0.0;
  (void)t0;
  (void)t38;
  return 0;
}
