/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_mode.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_mode(const NeDynamicSystem *t0, const
  NeDynamicSystemInput *t14, NeDsMethodOutput *t15)
{
  PmIntVector out;
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
  real_T Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q9_diode_v;
  boolean_T t1;
  boolean_T t2;
  boolean_T t3;
  boolean_T t4;
  boolean_T t5;
  boolean_T t6;
  boolean_T t7;
  boolean_T t8;
  boolean_T t9;
  boolean_T t10;
  boolean_T t11;
  boolean_T t12;
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
  (void)t0;
  U_idx_0 = t14->mU.mX[0];
  U_idx_1 = t14->mU.mX[1];
  U_idx_2 = t14->mU.mX[2];
  U_idx_3 = t14->mU.mX[3];
  U_idx_4 = t14->mU.mX[4];
  U_idx_5 = t14->mU.mX[5];
  U_idx_6 = t14->mU.mX[6];
  U_idx_7 = t14->mU.mX[7];
  U_idx_8 = t14->mU.mX[8];
  U_idx_9 = t14->mU.mX[9];
  U_idx_10 = t14->mU.mX[10];
  U_idx_11 = t14->mU.mX[11];
  X_idx_0 = t14->mX.mX[0];
  X_idx_8 = t14->mX.mX[8];
  X_idx_22 = t14->mX.mX[22];
  X_idx_23 = t14->mX.mX[23];
  X_idx_24 = t14->mX.mX[24];
  X_idx_25 = t14->mX.mX[25];
  X_idx_26 = t14->mX.mX[26];
  X_idx_27 = t14->mX.mX[27];
  X_idx_28 = t14->mX.mX[28];
  X_idx_29 = t14->mX.mX[29];
  X_idx_30 = t14->mX.mX[30];
  out = t15->mMODE;
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
  X_idx_23 = -X_idx_28 + X_idx_24;
  X_idx_24 = (-X_idx_0 + X_idx_8 * -1.0E-5) + -X_idx_28;
  Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v = (X_idx_8 * 1.0E-5 +
    X_idx_0) + X_idx_28;
  Three_Level_Converter_converter_Xabc_Q9_diode_v = ((X_idx_8 * 1.0E-5 + X_idx_0)
    + X_idx_29) + -1800.0;
  X_idx_22 = ((-X_idx_0 + X_idx_8 * -1.0E-5) + -X_idx_29) + 1800.0;
  if (Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v > 0.8) {
    t1 = (U_idx_0 > 0.5);
  } else {
    t1 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v > 0.8) {
    t2 = (U_idx_9 > 0.5);
  } else {
    t2 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v > 0.8) {
    t3 = (U_idx_10 > 0.5);
  } else {
    t3 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v > 0.8) {
    t4 = (U_idx_11 > 0.5);
  } else {
    t4 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v > 0.8) {
    t5 = (U_idx_1 > 0.5);
  } else {
    t5 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v > 0.8) {
    t6 = (U_idx_2 > 0.5);
  } else {
    t6 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v > 0.8) {
    t7 = (U_idx_3 > 0.5);
  } else {
    t7 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v > 0.8) {
    t8 = (U_idx_4 > 0.5);
  } else {
    t8 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v > 0.8) {
    t9 = (U_idx_5 > 0.5);
  } else {
    t9 = false;
  }

  if (X_idx_23 > 0.8) {
    t10 = (U_idx_6 > 0.5);
  } else {
    t10 = false;
  }

  if (Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v > 0.8) {
    t11 = (U_idx_7 > 0.5);
  } else {
    t11 = false;
  }

  if (X_idx_22 > 0.8) {
    t12 = (U_idx_8 > 0.5);
  } else {
    t12 = false;
  }

  out.mX[0] = (int32_T)(Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v -
                        0.8 <= U_idx_0 - 0.5);
  out.mX[1] = (int32_T)(Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v
                        - 0.8 <= U_idx_9 - 0.5);
  out.mX[2] = (int32_T)(Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v -
                        0.8 <= U_idx_7 - 0.5);
  out.mX[3] = (int32_T)(X_idx_22 - 0.8 <= U_idx_8 - 0.5);
  out.mX[4] = (int32_T)(-X_idx_25 > 0.8);
  out.mX[5] = (int32_T)(-X_idx_25 < -pmf_get_inf());
  out.mX[6] = (int32_T)(X_idx_26 > 0.8);
  out.mX[7] = (int32_T)(X_idx_26 < -pmf_get_inf());
  out.mX[8] = (int32_T)(-X_idx_27 > 0.8);
  out.mX[9] = (int32_T)(-X_idx_27 < -pmf_get_inf());
  out.mX[10] = (int32_T)(X_idx_28 > 0.8);
  out.mX[11] = (int32_T)(X_idx_28 < -pmf_get_inf());
  out.mX[12] = (int32_T)(Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v
    - 0.8 <= U_idx_10 - 0.5);
  out.mX[13] = (int32_T)(-X_idx_29 > 0.8);
  out.mX[14] = (int32_T)(-X_idx_29 < -pmf_get_inf());
  out.mX[15] = (int32_T)(X_idx_30 > 0.8);
  out.mX[16] = (int32_T)(X_idx_30 < -pmf_get_inf());
  out.mX[17] = (int32_T)(Three_Level_Converter_converter_Xabc_Q1_diode_v > 0.8);
  out.mX[18] = (int32_T)(Three_Level_Converter_converter_Xabc_Q1_diode_v <
    -pmf_get_inf());
  out.mX[19] = (int32_T)t1;
  out.mX[20] = (int32_T)(Three_Level_Converter_converter_Xabc_Q10_diode_v > 0.8);
  out.mX[21] = (int32_T)(Three_Level_Converter_converter_Xabc_Q10_diode_v <
    -pmf_get_inf());
  out.mX[22] = (int32_T)t2;
  out.mX[23] = (int32_T)(Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v
    - 0.8 <= U_idx_11 - 0.5);
  out.mX[24] = (int32_T)(Three_Level_Converter_converter_Xabc_Q11_diode_v > 0.8);
  out.mX[25] = (int32_T)(Three_Level_Converter_converter_Xabc_Q11_diode_v <
    -pmf_get_inf());
  out.mX[26] = (int32_T)t3;
  out.mX[27] = (int32_T)(Three_Level_Converter_converter_Xabc_Q12_diode_v > 0.8);
  out.mX[28] = (int32_T)(Three_Level_Converter_converter_Xabc_Q12_diode_v <
    -pmf_get_inf());
  out.mX[29] = (int32_T)t4;
  out.mX[30] = (int32_T)(Three_Level_Converter_converter_Xabc_Q2_diode_v > 0.8);
  out.mX[31] = (int32_T)(Three_Level_Converter_converter_Xabc_Q2_diode_v <
    -pmf_get_inf());
  out.mX[32] = (int32_T)t5;
  out.mX[33] = (int32_T)(Three_Level_Converter_converter_Xabc_Q3_diode_v > 0.8);
  out.mX[34] = (int32_T)(Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v
    - 0.8 <= U_idx_1 - 0.5);
  out.mX[35] = (int32_T)(Three_Level_Converter_converter_Xabc_Q3_diode_v <
    -pmf_get_inf());
  out.mX[36] = (int32_T)t6;
  out.mX[37] = (int32_T)(Three_Level_Converter_converter_Xabc_Q4_diode_v > 0.8);
  out.mX[38] = (int32_T)(Three_Level_Converter_converter_Xabc_Q4_diode_v <
    -pmf_get_inf());
  out.mX[39] = (int32_T)t7;
  out.mX[40] = (int32_T)(Three_Level_Converter_converter_Xabc_Q5_diode_v > 0.8);
  out.mX[41] = (int32_T)(Three_Level_Converter_converter_Xabc_Q5_diode_v <
    -pmf_get_inf());
  out.mX[42] = (int32_T)t8;
  out.mX[43] = (int32_T)(Three_Level_Converter_converter_Xabc_Q6_diode_v > 0.8);
  out.mX[44] = (int32_T)(Three_Level_Converter_converter_Xabc_Q6_diode_v <
    -pmf_get_inf());
  out.mX[45] = (int32_T)(Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v
    - 0.8 <= U_idx_2 - 0.5);
  out.mX[46] = (int32_T)t9;
  out.mX[47] = (int32_T)(Three_Level_Converter_converter_Xabc_Q7_diode_v > 0.8);
  out.mX[48] = (int32_T)(Three_Level_Converter_converter_Xabc_Q7_diode_v <
    -pmf_get_inf());
  out.mX[49] = (int32_T)t10;
  out.mX[50] = (int32_T)(X_idx_24 > 0.8);
  out.mX[51] = (int32_T)(X_idx_24 < -pmf_get_inf());
  out.mX[52] = (int32_T)t11;
  out.mX[53] = (int32_T)(Three_Level_Converter_converter_Xabc_Q9_diode_v > 0.8);
  out.mX[54] = (int32_T)(Three_Level_Converter_converter_Xabc_Q9_diode_v <
    -pmf_get_inf());
  out.mX[55] = (int32_T)t12;
  out.mX[56] = (int32_T)(Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v
    - 0.8 <= U_idx_3 - 0.5);
  out.mX[57] = (int32_T)(Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v
    - 0.8 <= U_idx_4 - 0.5);
  out.mX[58] = (int32_T)(Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v
    - 0.8 <= U_idx_5 - 0.5);
  out.mX[59] = (int32_T)(X_idx_23 - 0.8 <= U_idx_6 - 0.5);
  (void)t0;
  (void)t15;
  return 0;
}
