/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_obs_all.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_obs_all(const NeDynamicSystem *t0,
  const NeDynamicSystemInput *t122, NeDsMethodOutput *t123)
{
  PmRealVector out;
  real_T C1_p_v;
  real_T C2_n_v;
  real_T Three_Level_Controller_Conn1_V[24];
  real_T Three_Level_Converter_converter_Xabc_Q1_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q10_diode_i;
  real_T Three_Level_Converter_converter_Xabc_Q10_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q11_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q12_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q2_diode_i;
  real_T Three_Level_Converter_converter_Xabc_Q2_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q3_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q4_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q5_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q6_diode_i;
  real_T Three_Level_Converter_converter_Xabc_Q6_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q7_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q8_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v;
  real_T Three_Level_Converter_converter_Xabc_Q9_diode_v;
  real_T Three_Level_Converter_converter_Xabc_Q9_ideal_switch_v;
  real_T t1;
  real_T t6;
  real_T t10;
  real_T t11;
  real_T t13[680];
  real_T t18[1];
  real_T t19[24];
  size_t t52;
  real_T t77;
  real_T t78;
  real_T t79;
  real_T t80;
  real_T t81;
  real_T t82;
  real_T t83;
  real_T t84;
  real_T t85;
  real_T t87;
  real_T t89;
  real_T t91;
  real_T t93;
  real_T t95;
  real_T t97;
  real_T t99;
  real_T t101;
  real_T t103;
  real_T t105;
  real_T t107;
  real_T t110;
  real_T t111;
  real_T t112;
  real_T t113;
  real_T t115;
  real_T t116;
  real_T t117;
  real_T t120;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_13;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T X_idx_20;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T X_idx_12;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_18;
  real_T X_idx_19;
  real_T X_idx_0;
  real_T X_idx_23;
  real_T X_idx_24;
  real_T X_idx_22;
  real_T X_idx_2;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_21;
  real_T U_idx_0;
  real_T X_idx_25;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T X_idx_26;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T X_idx_27;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T X_idx_28;
  real_T U_idx_7;
  real_T U_idx_8;
  real_T X_idx_29;
  real_T U_idx_9;
  real_T U_idx_10;
  real_T X_idx_30;
  real_T U_idx_11;
  real_T X_idx_31;
  real_T X_idx_32;
  real_T X_idx_33;
  real_T X_idx_34;
  real_T X_idx_35;
  real_T X_idx_36;
  real_T X_idx_37;
  real_T X_idx_38;
  real_T X_idx_39;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  int32_T M_idx_3;
  int32_T M_idx_12;
  int32_T M_idx_23;
  int32_T M_idx_34;
  int32_T M_idx_45;
  int32_T M_idx_56;
  int32_T M_idx_57;
  int32_T M_idx_58;
  int32_T M_idx_59;
  real_T X_idx_1;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  M_idx_0 = t122->mM.mX[0];
  M_idx_1 = t122->mM.mX[1];
  M_idx_2 = t122->mM.mX[2];
  M_idx_3 = t122->mM.mX[3];
  M_idx_12 = t122->mM.mX[12];
  M_idx_23 = t122->mM.mX[23];
  M_idx_34 = t122->mM.mX[34];
  M_idx_45 = t122->mM.mX[45];
  M_idx_56 = t122->mM.mX[56];
  M_idx_57 = t122->mM.mX[57];
  M_idx_58 = t122->mM.mX[58];
  M_idx_59 = t122->mM.mX[59];
  U_idx_0 = t122->mU.mX[0];
  U_idx_1 = t122->mU.mX[1];
  U_idx_2 = t122->mU.mX[2];
  U_idx_3 = t122->mU.mX[3];
  U_idx_4 = t122->mU.mX[4];
  U_idx_5 = t122->mU.mX[5];
  U_idx_6 = t122->mU.mX[6];
  U_idx_7 = t122->mU.mX[7];
  U_idx_8 = t122->mU.mX[8];
  U_idx_9 = t122->mU.mX[9];
  U_idx_10 = t122->mU.mX[10];
  U_idx_11 = t122->mU.mX[11];
  X_idx_0 = t122->mX.mX[0];
  X_idx_1 = t122->mX.mX[1];
  X_idx_2 = t122->mX.mX[2];
  X_idx_3 = t122->mX.mX[3];
  X_idx_4 = t122->mX.mX[4];
  X_idx_5 = t122->mX.mX[5];
  X_idx_6 = t122->mX.mX[6];
  X_idx_7 = t122->mX.mX[7];
  X_idx_8 = t122->mX.mX[8];
  X_idx_9 = t122->mX.mX[9];
  X_idx_10 = t122->mX.mX[10];
  X_idx_11 = t122->mX.mX[11];
  X_idx_12 = t122->mX.mX[12];
  X_idx_13 = t122->mX.mX[13];
  X_idx_14 = t122->mX.mX[14];
  X_idx_15 = t122->mX.mX[15];
  X_idx_16 = t122->mX.mX[16];
  X_idx_17 = t122->mX.mX[17];
  X_idx_18 = t122->mX.mX[18];
  X_idx_19 = t122->mX.mX[19];
  X_idx_20 = t122->mX.mX[20];
  X_idx_21 = t122->mX.mX[21];
  X_idx_22 = t122->mX.mX[22];
  X_idx_23 = t122->mX.mX[23];
  X_idx_24 = t122->mX.mX[24];
  X_idx_25 = t122->mX.mX[25];
  X_idx_26 = t122->mX.mX[26];
  X_idx_27 = t122->mX.mX[27];
  X_idx_28 = t122->mX.mX[28];
  X_idx_29 = t122->mX.mX[29];
  X_idx_30 = t122->mX.mX[30];
  X_idx_31 = t122->mX.mX[31];
  X_idx_32 = t122->mX.mX[32];
  X_idx_33 = t122->mX.mX[33];
  X_idx_34 = t122->mX.mX[34];
  X_idx_35 = t122->mX.mX[35];
  X_idx_36 = t122->mX.mX[36];
  X_idx_37 = t122->mX.mX[37];
  X_idx_38 = t122->mX.mX[38];
  X_idx_39 = t122->mX.mX[39];
  out = t123->mOBS_ALL;
  C1_p_v = (-X_idx_0 + X_idx_8 * -1.0E-5) + 1800.0;
  C2_n_v = -X_idx_0 + X_idx_8 * -1.0E-5;
  t18[0ULL] = 0.0;
  t18[0ULL] += X_idx_2 * X_idx_2 * 0.0041569000000000007;
  t18[0ULL] += X_idx_3 * X_idx_3 * 0.0041569000000000007;
  t18[0ULL] += X_idx_4 * X_idx_4 * 0.0041569000000000007;
  t77 = -C1_p_v / -1.0;
  t78 = C2_n_v / -1.0;
  t19[0ULL] = U_idx_0 + X_idx_25;
  t19[1ULL] = X_idx_25;
  t19[2ULL] = U_idx_1 + X_idx_23;
  t19[3ULL] = X_idx_23;
  t19[4ULL] = U_idx_2 + X_idx_26;
  t19[5ULL] = X_idx_26;
  t19[6ULL] = (-X_idx_0 + X_idx_8 * -1.0E-5) + U_idx_3;
  t19[7ULL] = -X_idx_0 + X_idx_8 * -1.0E-5;
  t19[8ULL] = U_idx_4 + X_idx_27;
  t19[9ULL] = X_idx_27;
  t19[10ULL] = U_idx_5 + X_idx_24;
  t19[11ULL] = X_idx_24;
  t19[12ULL] = U_idx_6 + X_idx_28;
  t19[13ULL] = X_idx_28;
  t19[14ULL] = (-X_idx_0 + X_idx_8 * -1.0E-5) + U_idx_7;
  t19[15ULL] = -X_idx_0 + X_idx_8 * -1.0E-5;
  t19[16ULL] = U_idx_8 + X_idx_29;
  t19[17ULL] = X_idx_29;
  t19[18ULL] = U_idx_9 + X_idx_22;
  t19[19ULL] = X_idx_22;
  t19[20ULL] = U_idx_10 + X_idx_30;
  t19[21ULL] = X_idx_30;
  t19[22ULL] = (-X_idx_0 + X_idx_8 * -1.0E-5) + U_idx_11;
  t19[23ULL] = -X_idx_0 + X_idx_8 * -1.0E-5;
  for (t52 = 0ULL; t52 < 24ULL; t52++) {
    Three_Level_Controller_Conn1_V[t52] = t19[t52];
  }

  t79 = (((-X_idx_10 + -X_idx_31) + X_idx_2) + X_idx_9) + X_idx_32;
  t80 = ((-X_idx_31 + -X_idx_14) + X_idx_32) + X_idx_13;
  t81 = (((-X_idx_16 + -X_idx_33) + X_idx_3) + X_idx_15) + X_idx_34;
  t82 = ((-X_idx_33 + -X_idx_18) + X_idx_34) + X_idx_17;
  t83 = (((-X_idx_35 + -X_idx_20) + X_idx_4) + X_idx_36) + X_idx_19;
  t84 = ((-X_idx_35 + -X_idx_12) + X_idx_36) + X_idx_11;
  t85 = U_idx_0 + X_idx_25;
  Three_Level_Converter_converter_Xabc_Q1_diode_v = ((X_idx_8 * 1.0E-5 + X_idx_0)
    + X_idx_25) + -1800.0;
  Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v = ((-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_25) + 1800.0;
  t87 = U_idx_9 + X_idx_22;
  Three_Level_Converter_converter_Xabc_Q10_diode_i = ((-X_idx_4 + -X_idx_36) +
    X_idx_37) + X_idx_35;
  Three_Level_Converter_converter_Xabc_Q10_diode_v = -X_idx_29 + X_idx_22;
  Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v = -X_idx_22 + X_idx_29;
  t89 = U_idx_10 + X_idx_30;
  Three_Level_Converter_converter_Xabc_Q11_diode_v = -X_idx_22 + X_idx_30;
  Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v = -X_idx_30 + X_idx_22;
  t91 = (-X_idx_0 + X_idx_8 * -1.0E-5) + U_idx_11;
  Three_Level_Converter_converter_Xabc_Q12_diode_v = (-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_30;
  Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v = (X_idx_8 * 1.0E-5 +
    X_idx_0) + X_idx_30;
  t93 = U_idx_1 + X_idx_23;
  Three_Level_Converter_converter_Xabc_Q2_diode_i = ((-X_idx_2 + -X_idx_32) +
    X_idx_38) + X_idx_31;
  Three_Level_Converter_converter_Xabc_Q2_diode_v = -X_idx_25 + X_idx_23;
  Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v = -X_idx_23 + X_idx_25;
  t95 = U_idx_2 + X_idx_26;
  Three_Level_Converter_converter_Xabc_Q3_diode_v = -X_idx_23 + X_idx_26;
  Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v = -X_idx_26 + X_idx_23;
  t97 = (-X_idx_0 + X_idx_8 * -1.0E-5) + U_idx_3;
  Three_Level_Converter_converter_Xabc_Q4_diode_v = (-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_26;
  Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v = (X_idx_8 * 1.0E-5 +
    X_idx_0) + X_idx_26;
  t99 = U_idx_4 + X_idx_27;
  Three_Level_Converter_converter_Xabc_Q5_diode_v = ((X_idx_8 * 1.0E-5 + X_idx_0)
    + X_idx_27) + -1800.0;
  Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v = ((-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_27) + 1800.0;
  t101 = U_idx_5 + X_idx_24;
  Three_Level_Converter_converter_Xabc_Q6_diode_i = ((-X_idx_3 + -X_idx_34) +
    X_idx_39) + X_idx_33;
  Three_Level_Converter_converter_Xabc_Q6_diode_v = -X_idx_27 + X_idx_24;
  Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v = -X_idx_24 + X_idx_27;
  t103 = U_idx_6 + X_idx_28;
  Three_Level_Converter_converter_Xabc_Q7_diode_v = -X_idx_24 + X_idx_28;
  Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v = -X_idx_28 + X_idx_24;
  t105 = (-X_idx_0 + X_idx_8 * -1.0E-5) + U_idx_7;
  Three_Level_Converter_converter_Xabc_Q8_diode_v = (-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_28;
  Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v = (X_idx_8 * 1.0E-5 +
    X_idx_0) + X_idx_28;
  t107 = U_idx_8 + X_idx_29;
  Three_Level_Converter_converter_Xabc_Q9_diode_v = ((X_idx_8 * 1.0E-5 + X_idx_0)
    + X_idx_29) + -1800.0;
  Three_Level_Converter_converter_Xabc_Q9_ideal_switch_v = ((-X_idx_0 + X_idx_8 *
    -1.0E-5) + -X_idx_29) + 1800.0;
  if (M_idx_0 != 0) {
    t1 = Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v - 0.8;
  } else {
    t1 = U_idx_0 - 0.5;
  }

  t1 = -t1 / -1.0;
  if (M_idx_1 != 0) {
    t110 = Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v - 0.8;
  } else {
    t110 = U_idx_9 - 0.5;
  }

  t110 = -t110 / -1.0;
  if (M_idx_2 != 0) {
    t111 = Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v - 0.8;
  } else {
    t111 = U_idx_7 - 0.5;
  }

  t111 = -t111 / -1.0;
  if (M_idx_3 != 0) {
    t112 = Three_Level_Converter_converter_Xabc_Q9_ideal_switch_v - 0.8;
  } else {
    t112 = U_idx_8 - 0.5;
  }

  t112 = -t112 / -1.0;
  if (M_idx_12 != 0) {
    t113 = Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v - 0.8;
  } else {
    t113 = U_idx_10 - 0.5;
  }

  t113 = -t113 / -1.0;
  if (M_idx_23 != 0) {
    t6 = Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v - 0.8;
  } else {
    t6 = U_idx_11 - 0.5;
  }

  t6 = -t6 / -1.0;
  if (M_idx_34 != 0) {
    t115 = Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v - 0.8;
  } else {
    t115 = U_idx_1 - 0.5;
  }

  t115 = -t115 / -1.0;
  if (M_idx_45 != 0) {
    t116 = Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v - 0.8;
  } else {
    t116 = U_idx_2 - 0.5;
  }

  t116 = -t116 / -1.0;
  if (M_idx_56 != 0) {
    t117 = Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v - 0.8;
  } else {
    t117 = U_idx_3 - 0.5;
  }

  t117 = -t117 / -1.0;
  if (M_idx_57 != 0) {
    t10 = Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v - 0.8;
  } else {
    t10 = U_idx_4 - 0.5;
  }

  t10 = -t10 / -1.0;
  if (M_idx_58 != 0) {
    t11 = Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v - 0.8;
  } else {
    t11 = U_idx_5 - 0.5;
  }

  t11 = -t11 / -1.0;
  if (M_idx_59 != 0) {
    t120 = Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v - 0.8;
  } else {
    t120 = U_idx_6 - 0.5;
  }

  t13[0ULL] = (((((((((((-X_idx_10 + -X_idx_11) + -X_idx_13) + -X_idx_16) +
                      -X_idx_17) + -X_idx_20) + X_idx_8) + X_idx_9) + X_idx_12)
                 + X_idx_14) + X_idx_15) + X_idx_18) + X_idx_19;
  t13[1ULL] = 0.0;
  t13[2ULL] = C1_p_v;
  t13[3ULL] = C1_p_v;
  t13[4ULL] = X_idx_1;
  t13[5ULL] = X_idx_8;
  t13[6ULL] = C2_n_v;
  t13[7ULL] = 0.0;
  t13[8ULL] = X_idx_8 * 1.0E-5 + X_idx_0;
  t13[9ULL] = X_idx_0;
  t13[10ULL] = (((((-X_idx_8 + -X_idx_12) + -X_idx_14) + -X_idx_18) + X_idx_11)
                + X_idx_13) + X_idx_17;
  t13[11ULL] = C2_n_v;
  t13[12ULL] = C1_p_v;
  t13[13ULL] = 1800.0;
  t13[14ULL] = 0.0;
  t13[15ULL] = X_idx_21;
  t13[16ULL] = X_idx_21;
  t13[17ULL] = X_idx_23;
  t13[18ULL] = X_idx_24;
  t13[19ULL] = X_idx_22;
  t13[20ULL] = X_idx_21;
  t13[21ULL] = X_idx_2;
  t13[22ULL] = X_idx_3;
  t13[23ULL] = X_idx_4;
  t13[24ULL] = X_idx_21;
  t13[25ULL] = X_idx_21;
  t13[26ULL] = X_idx_21;
  t13[27ULL] = 0.0;
  t13[28ULL] = X_idx_21;
  t13[29ULL] = X_idx_2;
  t13[30ULL] = X_idx_3;
  t13[31ULL] = X_idx_4;
  t13[32ULL] = X_idx_2;
  t13[33ULL] = X_idx_3;
  t13[34ULL] = X_idx_4;
  t13[35ULL] = X_idx_23;
  t13[36ULL] = X_idx_24;
  t13[37ULL] = X_idx_22;
  t13[38ULL] = X_idx_21;
  t13[39ULL] = X_idx_21;
  t13[40ULL] = X_idx_21;
  t13[41ULL] = -X_idx_21 + X_idx_23;
  t13[42ULL] = -X_idx_21 + X_idx_24;
  t13[43ULL] = -X_idx_21 + X_idx_22;
  t13[44ULL] = X_idx_5;
  t13[45ULL] = X_idx_6;
  t13[46ULL] = X_idx_7;
  t13[47ULL] = -t18[0ULL] / -1.0 * 1000.0;
  t13[48ULL] = X_idx_23;
  t13[49ULL] = X_idx_24;
  t13[50ULL] = X_idx_22;
  t13[51ULL] = X_idx_23;
  t13[52ULL] = X_idx_24;
  t13[53ULL] = X_idx_22;
  t13[54ULL] = X_idx_2;
  t13[55ULL] = X_idx_3;
  t13[56ULL] = X_idx_4;
  t13[57ULL] = X_idx_2;
  t13[58ULL] = X_idx_3;
  t13[59ULL] = X_idx_4;
  t13[60ULL] = X_idx_23;
  t13[61ULL] = X_idx_24;
  t13[62ULL] = X_idx_22;
  t13[63ULL] = X_idx_23;
  t13[64ULL] = X_idx_24;
  t13[65ULL] = X_idx_22;
  t13[66ULL] = t77;
  t13[67ULL] = 0.0;
  t13[68ULL] = 0.0;
  t13[69ULL] = C1_p_v;
  t13[70ULL] = t77;
  t13[71ULL] = C1_p_v;
  t13[72ULL] = 0.0;
  t13[73ULL] = 0.0;
  t13[74ULL] = C2_n_v;
  t13[75ULL] = t78;
  t13[76ULL] = 0.0;
  t13[77ULL] = C2_n_v;
  t13[78ULL] = 0.0;
  t13[79ULL] = t78;
  for (t52 = 0ULL; t52 < 24ULL; t52++) {
    t13[t52 + 80ULL] = Three_Level_Controller_Conn1_V[t52];
  }

  for (t52 = 0ULL; t52 < 24ULL; t52++) {
    t13[t52 + 104ULL] = Three_Level_Controller_Conn1_V[t52];
  }

  t13[128ULL] = U_idx_0;
  t13[129ULL] = U_idx_1;
  t13[130ULL] = U_idx_2;
  t13[131ULL] = U_idx_3;
  t13[132ULL] = U_idx_4;
  t13[133ULL] = U_idx_5;
  t13[134ULL] = U_idx_6;
  t13[135ULL] = U_idx_7;
  t13[136ULL] = U_idx_8;
  t13[137ULL] = U_idx_9;
  t13[138ULL] = U_idx_10;
  t13[139ULL] = U_idx_11;
  for (t52 = 0ULL; t52 < 24ULL; t52++) {
    t13[t52 + 140ULL] = ((_NeDynamicSystem*)(t0))->mTable0[t52];
  }

  for (t52 = 0ULL; t52 < 24ULL; t52++) {
    t13[t52 + 164ULL] = Three_Level_Controller_Conn1_V[t52];
  }

  for (t52 = 0ULL; t52 < 24ULL; t52++) {
    t13[t52 + 188ULL] = Three_Level_Controller_Conn1_V[t52];
  }

  t13[212ULL] = X_idx_23;
  t13[213ULL] = X_idx_24;
  t13[214ULL] = X_idx_22;
  t13[215ULL] = 298.15;
  t13[216ULL] = t79;
  t13[217ULL] = 0.0;
  t13[218ULL] = X_idx_25;
  t13[219ULL] = 0.0;
  t13[220ULL] = -(t79 * -X_idx_25 * 0.001) / -1.0 * 1000.0;
  t13[221ULL] = -X_idx_25;
  t13[222ULL] = 0.0;
  t13[223ULL] = 298.15;
  t13[224ULL] = t80;
  t13[225ULL] = 0.0;
  t13[226ULL] = 0.0;
  t13[227ULL] = X_idx_26;
  t13[228ULL] = -(t80 * X_idx_26 * 0.001) / -1.0 * 1000.0;
  t13[229ULL] = X_idx_26;
  t13[230ULL] = 0.0;
  t13[231ULL] = 298.15;
  t13[232ULL] = t81;
  t13[233ULL] = 0.0;
  t13[234ULL] = X_idx_27;
  t13[235ULL] = 0.0;
  t13[236ULL] = -(t81 * -X_idx_27 * 0.001) / -1.0 * 1000.0;
  t13[237ULL] = -X_idx_27;
  t13[238ULL] = 0.0;
  t13[239ULL] = 298.15;
  t13[240ULL] = t82;
  t13[241ULL] = 0.0;
  t13[242ULL] = 0.0;
  t13[243ULL] = X_idx_28;
  t13[244ULL] = -(t82 * X_idx_28 * 0.001) / -1.0 * 1000.0;
  t13[245ULL] = X_idx_28;
  t13[246ULL] = 0.0;
  t13[247ULL] = 298.15;
  t13[248ULL] = t83;
  t13[249ULL] = 0.0;
  t13[250ULL] = X_idx_29;
  t13[251ULL] = 0.0;
  t13[252ULL] = -(t83 * -X_idx_29 * 0.001) / -1.0 * 1000.0;
  t13[253ULL] = -X_idx_29;
  t13[254ULL] = 0.0;
  t13[255ULL] = 298.15;
  t13[256ULL] = t84;
  t13[257ULL] = 0.0;
  t13[258ULL] = 0.0;
  t13[259ULL] = X_idx_30;
  t13[260ULL] = -(t84 * X_idx_30 * 0.001) / -1.0 * 1000.0;
  t13[261ULL] = X_idx_30;
  t13[262ULL] = 0.0;
  for (t52 = 0ULL; t52 < 24ULL; t52++) {
    t13[t52 + 263ULL] = Three_Level_Controller_Conn1_V[t52];
  }

  t13[287ULL] = C1_p_v;
  t13[288ULL] = X_idx_25;
  t13[289ULL] = t85;
  t13[290ULL] = 298.15;
  t13[291ULL] = X_idx_9;
  t13[292ULL] = 0.0;
  t13[293ULL] = C1_p_v;
  t13[294ULL] = X_idx_25;
  t13[295ULL] = -(X_idx_9 * Three_Level_Converter_converter_Xabc_Q1_diode_v *
                  0.001) / -1.0 * 1000.0;
  t13[296ULL] = Three_Level_Converter_converter_Xabc_Q1_diode_v;
  t13[297ULL] = 0.0;
  t13[298ULL] = U_idx_0;
  t13[299ULL] = 0.0;
  t13[300ULL] = X_idx_25;
  t13[301ULL] = t85;
  t13[302ULL] = U_idx_0;
  t13[303ULL] = U_idx_0;
  t13[304ULL] = X_idx_10;
  t13[305ULL] = t1;
  t13[306ULL] = X_idx_25;
  t13[307ULL] = C1_p_v;
  t13[308ULL] = Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v;
  t13[309ULL] = -(X_idx_10 *
                  Three_Level_Converter_converter_Xabc_Q1_ideal_switch_v * 0.001)
    / -1.0 * 1000.0;
  t13[310ULL] = X_idx_29;
  t13[311ULL] = X_idx_22;
  t13[312ULL] = t87;
  t13[313ULL] = 298.15;
  t13[314ULL] = Three_Level_Converter_converter_Xabc_Q10_diode_i;
  t13[315ULL] = 0.0;
  t13[316ULL] = X_idx_29;
  t13[317ULL] = X_idx_22;
  t13[318ULL] = -(Three_Level_Converter_converter_Xabc_Q10_diode_i *
                  Three_Level_Converter_converter_Xabc_Q10_diode_v * 0.001) /
    -1.0 * 1000.0;
  t13[319ULL] = Three_Level_Converter_converter_Xabc_Q10_diode_v;
  t13[320ULL] = 0.0;
  t13[321ULL] = U_idx_9;
  t13[322ULL] = 0.0;
  t13[323ULL] = X_idx_22;
  t13[324ULL] = t87;
  t13[325ULL] = U_idx_9;
  t13[326ULL] = U_idx_9;
  t13[327ULL] = X_idx_37;
  t13[328ULL] = t110;
  t13[329ULL] = X_idx_22;
  t13[330ULL] = X_idx_29;
  t13[331ULL] = Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v;
  t13[332ULL] = -(X_idx_37 *
                  Three_Level_Converter_converter_Xabc_Q10_ideal_switch_v *
                  0.001) / -1.0 * 1000.0;
  t13[333ULL] = X_idx_22;
  t13[334ULL] = X_idx_30;
  t13[335ULL] = t89;
  t13[336ULL] = 298.15;
  t13[337ULL] = X_idx_35;
  t13[338ULL] = 0.0;
  t13[339ULL] = X_idx_22;
  t13[340ULL] = X_idx_30;
  t13[341ULL] = -(X_idx_35 * Three_Level_Converter_converter_Xabc_Q11_diode_v *
                  0.001) / -1.0 * 1000.0;
  t13[342ULL] = Three_Level_Converter_converter_Xabc_Q11_diode_v;
  t13[343ULL] = 0.0;
  t13[344ULL] = U_idx_10;
  t13[345ULL] = 0.0;
  t13[346ULL] = X_idx_30;
  t13[347ULL] = t89;
  t13[348ULL] = U_idx_10;
  t13[349ULL] = U_idx_10;
  t13[350ULL] = X_idx_36;
  t13[351ULL] = t113;
  t13[352ULL] = X_idx_30;
  t13[353ULL] = X_idx_22;
  t13[354ULL] = Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v;
  t13[355ULL] = -(X_idx_36 *
                  Three_Level_Converter_converter_Xabc_Q11_ideal_switch_v *
                  0.001) / -1.0 * 1000.0;
  t13[356ULL] = X_idx_30;
  t13[357ULL] = C2_n_v;
  t13[358ULL] = t91;
  t13[359ULL] = 298.15;
  t13[360ULL] = X_idx_11;
  t13[361ULL] = 0.0;
  t13[362ULL] = X_idx_30;
  t13[363ULL] = C2_n_v;
  t13[364ULL] = -(X_idx_11 * Three_Level_Converter_converter_Xabc_Q12_diode_v *
                  0.001) / -1.0 * 1000.0;
  t13[365ULL] = Three_Level_Converter_converter_Xabc_Q12_diode_v;
  t13[366ULL] = 0.0;
  t13[367ULL] = U_idx_11;
  t13[368ULL] = 0.0;
  t13[369ULL] = C2_n_v;
  t13[370ULL] = t91;
  t13[371ULL] = U_idx_11;
  t13[372ULL] = U_idx_11;
  t13[373ULL] = X_idx_12;
  t13[374ULL] = t6;
  t13[375ULL] = C2_n_v;
  t13[376ULL] = X_idx_30;
  t13[377ULL] = Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v;
  t13[378ULL] = -(X_idx_12 *
                  Three_Level_Converter_converter_Xabc_Q12_ideal_switch_v *
                  0.001) / -1.0 * 1000.0;
  t13[379ULL] = X_idx_25;
  t13[380ULL] = X_idx_23;
  t13[381ULL] = t93;
  t13[382ULL] = 298.15;
  t13[383ULL] = Three_Level_Converter_converter_Xabc_Q2_diode_i;
  t13[384ULL] = 0.0;
  t13[385ULL] = X_idx_25;
  t13[386ULL] = X_idx_23;
  t13[387ULL] = -(Three_Level_Converter_converter_Xabc_Q2_diode_i *
                  Three_Level_Converter_converter_Xabc_Q2_diode_v * 0.001) /
    -1.0 * 1000.0;
  t13[388ULL] = Three_Level_Converter_converter_Xabc_Q2_diode_v;
  t13[389ULL] = 0.0;
  t13[390ULL] = U_idx_1;
  t13[391ULL] = 0.0;
  t13[392ULL] = X_idx_23;
  t13[393ULL] = t93;
  t13[394ULL] = U_idx_1;
  t13[395ULL] = U_idx_1;
  t13[396ULL] = X_idx_38;
  t13[397ULL] = t115;
  t13[398ULL] = X_idx_23;
  t13[399ULL] = X_idx_25;
  t13[400ULL] = Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v;
  t13[401ULL] = -(X_idx_38 *
                  Three_Level_Converter_converter_Xabc_Q2_ideal_switch_v * 0.001)
    / -1.0 * 1000.0;
  t13[402ULL] = X_idx_23;
  t13[403ULL] = X_idx_26;
  t13[404ULL] = t95;
  t13[405ULL] = 298.15;
  t13[406ULL] = X_idx_31;
  t13[407ULL] = 0.0;
  t13[408ULL] = X_idx_23;
  t13[409ULL] = X_idx_26;
  t13[410ULL] = -(X_idx_31 * Three_Level_Converter_converter_Xabc_Q3_diode_v *
                  0.001) / -1.0 * 1000.0;
  t13[411ULL] = Three_Level_Converter_converter_Xabc_Q3_diode_v;
  t13[412ULL] = 0.0;
  t13[413ULL] = U_idx_2;
  t13[414ULL] = 0.0;
  t13[415ULL] = X_idx_26;
  t13[416ULL] = t95;
  t13[417ULL] = U_idx_2;
  t13[418ULL] = U_idx_2;
  t13[419ULL] = X_idx_32;
  t13[420ULL] = t116;
  t13[421ULL] = X_idx_26;
  t13[422ULL] = X_idx_23;
  t13[423ULL] = Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v;
  t13[424ULL] = -(X_idx_32 *
                  Three_Level_Converter_converter_Xabc_Q3_ideal_switch_v * 0.001)
    / -1.0 * 1000.0;
  t13[425ULL] = X_idx_26;
  t13[426ULL] = C2_n_v;
  t13[427ULL] = t97;
  t13[428ULL] = 298.15;
  t13[429ULL] = X_idx_13;
  t13[430ULL] = 0.0;
  t13[431ULL] = X_idx_26;
  t13[432ULL] = C2_n_v;
  t13[433ULL] = -(X_idx_13 * Three_Level_Converter_converter_Xabc_Q4_diode_v *
                  0.001) / -1.0 * 1000.0;
  t13[434ULL] = Three_Level_Converter_converter_Xabc_Q4_diode_v;
  t13[435ULL] = 0.0;
  t13[436ULL] = U_idx_3;
  t13[437ULL] = 0.0;
  t13[438ULL] = C2_n_v;
  t13[439ULL] = t97;
  t13[440ULL] = U_idx_3;
  t13[441ULL] = U_idx_3;
  t13[442ULL] = X_idx_14;
  t13[443ULL] = t117;
  t13[444ULL] = C2_n_v;
  t13[445ULL] = X_idx_26;
  t13[446ULL] = Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v;
  t13[447ULL] = -(X_idx_14 *
                  Three_Level_Converter_converter_Xabc_Q4_ideal_switch_v * 0.001)
    / -1.0 * 1000.0;
  t13[448ULL] = C1_p_v;
  t13[449ULL] = X_idx_27;
  t13[450ULL] = t99;
  t13[451ULL] = 298.15;
  t13[452ULL] = X_idx_15;
  t13[453ULL] = 0.0;
  t13[454ULL] = C1_p_v;
  t13[455ULL] = X_idx_27;
  t13[456ULL] = -(X_idx_15 * Three_Level_Converter_converter_Xabc_Q5_diode_v *
                  0.001) / -1.0 * 1000.0;
  t13[457ULL] = Three_Level_Converter_converter_Xabc_Q5_diode_v;
  t13[458ULL] = 0.0;
  t13[459ULL] = U_idx_4;
  t13[460ULL] = 0.0;
  t13[461ULL] = X_idx_27;
  t13[462ULL] = t99;
  t13[463ULL] = U_idx_4;
  t13[464ULL] = U_idx_4;
  t13[465ULL] = X_idx_16;
  t13[466ULL] = t10;
  t13[467ULL] = X_idx_27;
  t13[468ULL] = C1_p_v;
  t13[469ULL] = Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v;
  t13[470ULL] = -(X_idx_16 *
                  Three_Level_Converter_converter_Xabc_Q5_ideal_switch_v * 0.001)
    / -1.0 * 1000.0;
  t13[471ULL] = X_idx_27;
  t13[472ULL] = X_idx_24;
  t13[473ULL] = t101;
  t13[474ULL] = 298.15;
  t13[475ULL] = Three_Level_Converter_converter_Xabc_Q6_diode_i;
  t13[476ULL] = 0.0;
  t13[477ULL] = X_idx_27;
  t13[478ULL] = X_idx_24;
  t13[479ULL] = -(Three_Level_Converter_converter_Xabc_Q6_diode_i *
                  Three_Level_Converter_converter_Xabc_Q6_diode_v * 0.001) /
    -1.0 * 1000.0;
  t13[480ULL] = Three_Level_Converter_converter_Xabc_Q6_diode_v;
  t13[481ULL] = 0.0;
  t13[482ULL] = U_idx_5;
  t13[483ULL] = 0.0;
  t13[484ULL] = X_idx_24;
  t13[485ULL] = t101;
  t13[486ULL] = U_idx_5;
  t13[487ULL] = U_idx_5;
  t13[488ULL] = X_idx_39;
  t13[489ULL] = t11;
  t13[490ULL] = X_idx_24;
  t13[491ULL] = X_idx_27;
  t13[492ULL] = Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v;
  t13[493ULL] = -(X_idx_39 *
                  Three_Level_Converter_converter_Xabc_Q6_ideal_switch_v * 0.001)
    / -1.0 * 1000.0;
  t13[494ULL] = X_idx_24;
  t13[495ULL] = X_idx_28;
  t13[496ULL] = t103;
  t13[497ULL] = 298.15;
  t13[498ULL] = X_idx_33;
  t13[499ULL] = 0.0;
  t13[500ULL] = X_idx_24;
  t13[501ULL] = X_idx_28;
  t13[502ULL] = -(X_idx_33 * Three_Level_Converter_converter_Xabc_Q7_diode_v *
                  0.001) / -1.0 * 1000.0;
  t13[503ULL] = Three_Level_Converter_converter_Xabc_Q7_diode_v;
  t13[504ULL] = 0.0;
  t13[505ULL] = U_idx_6;
  t13[506ULL] = 0.0;
  t13[507ULL] = X_idx_28;
  t13[508ULL] = t103;
  t13[509ULL] = U_idx_6;
  t13[510ULL] = U_idx_6;
  t13[511ULL] = X_idx_34;
  t13[512ULL] = -t120 / -1.0;
  t13[513ULL] = X_idx_28;
  t13[514ULL] = X_idx_24;
  t13[515ULL] = Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v;
  t13[516ULL] = -(X_idx_34 *
                  Three_Level_Converter_converter_Xabc_Q7_ideal_switch_v * 0.001)
    / -1.0 * 1000.0;
  t13[517ULL] = X_idx_28;
  t13[518ULL] = C2_n_v;
  t13[519ULL] = t105;
  t13[520ULL] = 298.15;
  t13[521ULL] = X_idx_17;
  t13[522ULL] = 0.0;
  t13[523ULL] = X_idx_28;
  t13[524ULL] = C2_n_v;
  t13[525ULL] = -(X_idx_17 * Three_Level_Converter_converter_Xabc_Q8_diode_v *
                  0.001) / -1.0 * 1000.0;
  t13[526ULL] = Three_Level_Converter_converter_Xabc_Q8_diode_v;
  t13[527ULL] = 0.0;
  t13[528ULL] = U_idx_7;
  t13[529ULL] = 0.0;
  t13[530ULL] = C2_n_v;
  t13[531ULL] = t105;
  t13[532ULL] = U_idx_7;
  t13[533ULL] = U_idx_7;
  t13[534ULL] = X_idx_18;
  t13[535ULL] = t111;
  t13[536ULL] = C2_n_v;
  t13[537ULL] = X_idx_28;
  t13[538ULL] = Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v;
  t13[539ULL] = -(X_idx_18 *
                  Three_Level_Converter_converter_Xabc_Q8_ideal_switch_v * 0.001)
    / -1.0 * 1000.0;
  t13[540ULL] = C1_p_v;
  t13[541ULL] = X_idx_29;
  t13[542ULL] = t107;
  t13[543ULL] = 298.15;
  t13[544ULL] = X_idx_19;
  t13[545ULL] = 0.0;
  t13[546ULL] = C1_p_v;
  t13[547ULL] = X_idx_29;
  t13[548ULL] = -(X_idx_19 * Three_Level_Converter_converter_Xabc_Q9_diode_v *
                  0.001) / -1.0 * 1000.0;
  t13[549ULL] = Three_Level_Converter_converter_Xabc_Q9_diode_v;
  t13[550ULL] = 0.0;
  t13[551ULL] = U_idx_8;
  t13[552ULL] = 0.0;
  t13[553ULL] = X_idx_29;
  t13[554ULL] = t107;
  t13[555ULL] = U_idx_8;
  t13[556ULL] = U_idx_8;
  t13[557ULL] = X_idx_20;
  t13[558ULL] = t112;
  t13[559ULL] = X_idx_29;
  t13[560ULL] = C1_p_v;
  t13[561ULL] = Three_Level_Converter_converter_Xabc_Q9_ideal_switch_v;
  t13[562ULL] = -(X_idx_20 *
                  Three_Level_Converter_converter_Xabc_Q9_ideal_switch_v * 0.001)
    / -1.0 * 1000.0;
  t13[563ULL] = X_idx_23;
  t13[564ULL] = X_idx_24;
  t13[565ULL] = X_idx_22;
  for (t52 = 0ULL; t52 < 24ULL; t52++) {
    t13[t52 + 566ULL] = Three_Level_Controller_Conn1_V[t52];
  }

  t13[590ULL] = t85;
  t13[591ULL] = t93;
  t13[592ULL] = t95;
  t13[593ULL] = t97;
  t13[594ULL] = t99;
  t13[595ULL] = t101;
  t13[596ULL] = t103;
  t13[597ULL] = t105;
  t13[598ULL] = t107;
  t13[599ULL] = t87;
  t13[600ULL] = t89;
  t13[601ULL] = t91;
  for (t52 = 0ULL; t52 < 24ULL; t52++) {
    t13[t52 + 602ULL] = -((_NeDynamicSystem*)(t0))->mTable0[t52];
  }

  t13[626ULL] = X_idx_25;
  t13[627ULL] = X_idx_23;
  t13[628ULL] = X_idx_26;
  t13[629ULL] = C2_n_v;
  t13[630ULL] = X_idx_27;
  t13[631ULL] = X_idx_24;
  t13[632ULL] = X_idx_28;
  t13[633ULL] = C2_n_v;
  t13[634ULL] = X_idx_29;
  t13[635ULL] = X_idx_22;
  t13[636ULL] = X_idx_30;
  t13[637ULL] = C2_n_v;
  t13[638ULL] = 0.0;
  t13[639ULL] = 0.0;
  t13[640ULL] = 0.0;
  t13[641ULL] = 0.0;
  t13[642ULL] = 0.0;
  t13[643ULL] = 0.0;
  t13[644ULL] = 0.0;
  t13[645ULL] = 0.0;
  t13[646ULL] = 0.0;
  t13[647ULL] = 0.0;
  t13[648ULL] = 0.0;
  t13[649ULL] = 0.0;
  t13[650ULL] = 0.0;
  t13[651ULL] = 0.0;
  t13[652ULL] = 0.0;
  t13[653ULL] = 0.0;
  t13[654ULL] = 0.0;
  t13[655ULL] = 0.0;
  t13[656ULL] = 0.0;
  t13[657ULL] = 0.0;
  t13[658ULL] = 0.0;
  t13[659ULL] = 0.0;
  t13[660ULL] = 0.0;
  t13[661ULL] = 0.0;
  t13[662ULL] = C2_n_v;
  t13[663ULL] = C1_p_v;
  t13[664ULL] = 0.0;
  t13[665ULL] = C2_n_v;
  t13[666ULL] = C1_p_v;
  t13[667ULL] = -X_idx_2;
  t13[668ULL] = -X_idx_3;
  t13[669ULL] = -X_idx_4;
  t13[670ULL] = X_idx_23;
  t13[671ULL] = X_idx_24;
  t13[672ULL] = X_idx_22;
  t13[673ULL] = X_idx_23;
  t13[674ULL] = X_idx_24;
  t13[675ULL] = X_idx_22;
  t13[676ULL] = X_idx_2;
  t13[677ULL] = X_idx_3;
  t13[678ULL] = X_idx_4;
  t13[679ULL] = 0.0;
  for (M_idx_0 = 0; M_idx_0 < 680; M_idx_0++) {
    out.mX[M_idx_0] = t13[M_idx_0];
  }

  (void)t0;
  (void)t123;
  return 0;
}
