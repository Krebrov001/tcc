/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_mode.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_mode(const
  NeDynamicSystem *t0, const NeDynamicSystemInput *t50, NeDsMethodOutput *t51)
{
  PmIntVector out;
  real_T Converter_converter_Xabc_Q2_ideal_switch_i;
  real_T Converter_converter_Xabc_Q3_K_v;
  real_T Converter_converter_Xabc_Q3_ideal_switch_v;
  real_T Converter_converter_Xabc_Q4_diode_v;
  real_T Converter_converter_Xabc_Q5_K_v;
  real_T Converter_converter_Xabc_Q5_diode_v;
  real_T Converter_converter_Xabc_Q6_diode_v;
  boolean_T t1;
  boolean_T t3;
  boolean_T t5;
  boolean_T t7;
  boolean_T t9;
  boolean_T t11;
  real_T t20;
  real_T t28;
  real_T t37;
  real_T t40;
  int32_T t13_idx_0;
  int32_T t13_idx_17;
  int32_T t13_idx_18;
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
  real_T X_idx_10;
  real_T X_idx_13;
  real_T X_idx_16;
  (void)t0;
  U_idx_0 = t50->mU.mX[0];
  U_idx_1 = t50->mU.mX[1];
  U_idx_2 = t50->mU.mX[2];
  U_idx_3 = t50->mU.mX[3];
  U_idx_4 = t50->mU.mX[4];
  U_idx_5 = t50->mU.mX[5];
  X_idx_0 = t50->mX.mX[0];
  X_idx_1 = t50->mX.mX[1];
  X_idx_2 = t50->mX.mX[2];
  X_idx_3 = t50->mX.mX[3];
  X_idx_4 = t50->mX.mX[4];
  X_idx_5 = t50->mX.mX[5];
  X_idx_6 = t50->mX.mX[6];
  X_idx_7 = t50->mX.mX[7];
  X_idx_8 = t50->mX.mX[8];
  X_idx_10 = t50->mX.mX[10];
  X_idx_11 = t50->mX.mX[11];
  X_idx_13 = t50->mX.mX[13];
  X_idx_14 = t50->mX.mX[14];
  X_idx_16 = t50->mX.mX[16];
  X_idx_17 = t50->mX.mX[17];
  out = t51->mMODE;
  t40 = (-X_idx_0 + X_idx_4 * -1.0E-6) + X_idx_5;
  t20 = (X_idx_4 * 1.0E-6 + -X_idx_5) + X_idx_0;
  Converter_converter_Xabc_Q2_ideal_switch_i = X_idx_5 * 1.0E-6 + X_idx_11;
  Converter_converter_Xabc_Q3_K_v = (((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_7
    * 1.000001) + X_idx_2) + X_idx_5;
  t37 = (((((-X_idx_0 + -X_idx_1) + X_idx_4 * -1.0E-6) + X_idx_6 * -1.000001) +
          X_idx_7 * 1.000001) + X_idx_2) + X_idx_5;
  Converter_converter_Xabc_Q3_ideal_switch_v = (((((-X_idx_2 + X_idx_4 * 1.0E-6)
    + -X_idx_5) + X_idx_6 * 1.000001) + X_idx_7 * -1.000001) + X_idx_1) +
    X_idx_0;
  Converter_converter_Xabc_Q4_diode_v = (((-X_idx_2 + -X_idx_5) + X_idx_6 *
    1.000001) + X_idx_7 * -1.000001) + X_idx_1;
  t28 = ((((X_idx_1 * -1.0E-6 + X_idx_2 * 1.0E-6) + X_idx_5 * 1.0E-6) + X_idx_6 *
          -1.0000009999999998E-6) + X_idx_7 * 1.0000009999999998E-6) + X_idx_14;
  Converter_converter_Xabc_Q5_K_v = (((-X_idx_1 + X_idx_6 * -1.000001) + X_idx_8
    * 1.000001) + X_idx_3) + X_idx_5;
  Converter_converter_Xabc_Q5_diode_v = (((((-X_idx_0 + -X_idx_1) + X_idx_4 *
    -1.0E-6) + X_idx_6 * -1.000001) + X_idx_8 * 1.000001) + X_idx_3) + X_idx_5;
  X_idx_4 = (((((-X_idx_3 + X_idx_4 * 1.0E-6) + -X_idx_5) + X_idx_6 * 1.000001)
              + X_idx_8 * -1.000001) + X_idx_1) + X_idx_0;
  Converter_converter_Xabc_Q6_diode_v = (((-X_idx_3 + -X_idx_5) + X_idx_6 *
    1.000001) + X_idx_8 * -1.000001) + X_idx_1;
  X_idx_11 = ((((X_idx_1 * -1.0E-6 + X_idx_3 * 1.0E-6) + X_idx_5 * 1.0E-6) +
               X_idx_6 * -1.0000009999999998E-6) + X_idx_8 *
              1.0000009999999998E-6) + X_idx_17;
  if (t20 > 0.6) {
    if (U_idx_0 > 0.5) {
      t3 = true;
    } else {
      t3 = (X_idx_10 > 1.0);
    }
  } else {
    t3 = false;
  }

  if (t3) {
    t1 = (U_idx_0 > 0.1);
  } else {
    t1 = false;
  }

  if (X_idx_5 > 0.6) {
    if (U_idx_1 > 0.5) {
      t5 = true;
    } else {
      t5 = (Converter_converter_Xabc_Q2_ideal_switch_i > 1.0);
    }
  } else {
    t5 = false;
  }

  if (t5) {
    t3 = (U_idx_1 > 0.1);
  } else {
    t3 = false;
  }

  if (Converter_converter_Xabc_Q3_ideal_switch_v > 0.6) {
    if (U_idx_2 > 0.5) {
      t7 = true;
    } else {
      t7 = (X_idx_13 > 1.0);
    }
  } else {
    t7 = false;
  }

  if (t7) {
    t5 = (U_idx_2 > 0.1);
  } else {
    t5 = false;
  }

  if (Converter_converter_Xabc_Q3_K_v > 0.6) {
    if (U_idx_3 > 0.5) {
      t9 = true;
    } else {
      t9 = (t28 > 1.0);
    }
  } else {
    t9 = false;
  }

  if (t9) {
    t7 = (U_idx_3 > 0.1);
  } else {
    t7 = false;
  }

  if (X_idx_4 > 0.6) {
    if (U_idx_4 > 0.5) {
      t11 = true;
    } else {
      t11 = (X_idx_16 > 1.0);
    }
  } else {
    t11 = false;
  }

  if (t11) {
    t9 = (U_idx_4 > 0.1);
  } else {
    t9 = false;
  }

  if (Converter_converter_Xabc_Q5_K_v > 0.6) {
    if (U_idx_5 > 0.5) {
      t11 = true;
    } else {
      t11 = (X_idx_11 > 1.0);
    }
  } else {
    t11 = false;
  }

  if (t11) {
    t11 = (U_idx_5 > 0.1);
  } else {
    t11 = false;
  }

  X_idx_2 = U_idx_0 - 0.5 > X_idx_10 - 1.0 ? U_idx_0 - 0.5 : X_idx_10 - 1.0;
  t13_idx_0 = (int32_T)((t20 - 0.6 > X_idx_2 ? X_idx_2 : t20 - 0.6) <= U_idx_0 -
                        0.1);
  X_idx_2 = U_idx_4 - 0.5 > X_idx_16 - 1.0 ? U_idx_4 - 0.5 : X_idx_16 - 1.0;
  X_idx_7 = U_idx_5 - 0.5 > X_idx_11 - 1.0 ? U_idx_5 - 0.5 : X_idx_11 - 1.0;
  t13_idx_17 = (int32_T)(t37 > 0.8);
  t13_idx_18 = (int32_T)(t37 < -pmf_get_inf());
  t37 = U_idx_1 - 0.5 > Converter_converter_Xabc_Q2_ideal_switch_i - 1.0 ?
    U_idx_1 - 0.5 : Converter_converter_Xabc_Q2_ideal_switch_i - 1.0;
  X_idx_14 = U_idx_2 - 0.5 > X_idx_13 - 1.0 ? U_idx_2 - 0.5 : X_idx_13 - 1.0;
  X_idx_0 = U_idx_3 - 0.5 > t28 - 1.0 ? U_idx_3 - 0.5 : t28 - 1.0;
  out.mX[0] = t13_idx_0;
  out.mX[1] = (int32_T)((U_idx_0 - 0.5 > X_idx_10 - 1.0 ? U_idx_0 - 0.5 :
    X_idx_10 - 1.0) <= t20 - 0.6);
  out.mX[2] = (int32_T)((U_idx_3 - 0.5 > t28 - 1.0 ? U_idx_3 - 0.5 : t28 - 1.0) <=
                        Converter_converter_Xabc_Q3_K_v - 0.6);
  out.mX[3] = (int32_T)(U_idx_3 - 0.5 >= t28 - 1.0);
  out.mX[4] = (int32_T)((X_idx_4 - 0.6 > X_idx_2 ? X_idx_2 : X_idx_4 - 0.6) <=
                        U_idx_4 - 0.1);
  out.mX[5] = (int32_T)((U_idx_4 - 0.5 > X_idx_16 - 1.0 ? U_idx_4 - 0.5 :
    X_idx_16 - 1.0) <= X_idx_4 - 0.6);
  out.mX[6] = (int32_T)(U_idx_4 - 0.5 >= X_idx_16 - 1.0);
  out.mX[7] = (int32_T)((Converter_converter_Xabc_Q5_K_v - 0.6 > X_idx_7 ?
    X_idx_7 : Converter_converter_Xabc_Q5_K_v - 0.6) <= U_idx_5 - 0.1);
  out.mX[8] = (int32_T)((U_idx_5 - 0.5 > X_idx_11 - 1.0 ? U_idx_5 - 0.5 :
    X_idx_11 - 1.0) <= Converter_converter_Xabc_Q5_K_v - 0.6);
  out.mX[9] = (int32_T)(U_idx_5 - 0.5 >= X_idx_11 - 1.0);
  out.mX[10] = (int32_T)(t40 > 0.8);
  out.mX[11] = (int32_T)(t40 < -pmf_get_inf());
  out.mX[12] = (int32_T)(U_idx_0 - 0.5 >= X_idx_10 - 1.0);
  out.mX[13] = (int32_T)t1;
  out.mX[14] = (int32_T)(-X_idx_5 > 0.8);
  out.mX[15] = (int32_T)(-X_idx_5 < -pmf_get_inf());
  out.mX[16] = (int32_T)t3;
  out.mX[17] = t13_idx_17;
  out.mX[18] = t13_idx_18;
  out.mX[19] = (int32_T)t5;
  out.mX[20] = (int32_T)(Converter_converter_Xabc_Q4_diode_v > 0.8);
  out.mX[21] = (int32_T)(Converter_converter_Xabc_Q4_diode_v < -pmf_get_inf());
  out.mX[22] = (int32_T)t7;
  out.mX[23] = (int32_T)((X_idx_5 - 0.6 > t37 ? t37 : X_idx_5 - 0.6) <= U_idx_1
    - 0.1);
  out.mX[24] = (int32_T)(Converter_converter_Xabc_Q5_diode_v > 0.8);
  out.mX[25] = (int32_T)(Converter_converter_Xabc_Q5_diode_v < -pmf_get_inf());
  out.mX[26] = (int32_T)t9;
  out.mX[27] = (int32_T)(Converter_converter_Xabc_Q6_diode_v > 0.8);
  out.mX[28] = (int32_T)(Converter_converter_Xabc_Q6_diode_v < -pmf_get_inf());
  out.mX[29] = (int32_T)t11;
  out.mX[30] = (int32_T)((U_idx_1 - 0.5 >
    Converter_converter_Xabc_Q2_ideal_switch_i - 1.0 ? U_idx_1 - 0.5 :
    Converter_converter_Xabc_Q2_ideal_switch_i - 1.0) <= X_idx_5 - 0.6);
  out.mX[31] = (int32_T)(U_idx_1 - 0.5 >=
    Converter_converter_Xabc_Q2_ideal_switch_i - 1.0);
  out.mX[32] = (int32_T)((Converter_converter_Xabc_Q3_ideal_switch_v - 0.6 >
    X_idx_14 ? X_idx_14 : Converter_converter_Xabc_Q3_ideal_switch_v - 0.6) <=
    U_idx_2 - 0.1);
  out.mX[33] = (int32_T)((U_idx_2 - 0.5 > X_idx_13 - 1.0 ? U_idx_2 - 0.5 :
    X_idx_13 - 1.0) <= Converter_converter_Xabc_Q3_ideal_switch_v - 0.6);
  out.mX[34] = (int32_T)(U_idx_2 - 0.5 >= X_idx_13 - 1.0);
  out.mX[35] = (int32_T)((Converter_converter_Xabc_Q3_K_v - 0.6 > X_idx_0 ?
    X_idx_0 : Converter_converter_Xabc_Q3_K_v - 0.6) <= U_idx_3 - 0.1);
  (void)t0;
  (void)t51;
  return 0;
}
