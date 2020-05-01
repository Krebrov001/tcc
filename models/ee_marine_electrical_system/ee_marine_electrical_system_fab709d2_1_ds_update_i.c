/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_update_i.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_update_i(const NeDynamicSystem
  *t0, const NeDynamicSystemInput *t8, NeDsMethodOutput *t9)
{
  PmIntVector out;
  real_T Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i;
  real_T Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i;
  real_T Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i;
  real_T Hotel_Load_Breaker_breakerA_i;
  real_T Hotel_Load_Breaker_breakerB_i;
  real_T Hotel_Load_Breaker_breakerC_i;
  real_T X[138];
  int32_T CI_idx_38;
  real_T U_idx_1;
  int32_T Q_idx_0;
  int32_T Q_idx_6;
  int32_T CI_idx_37;
  int32_T CI_idx_34;
  int32_T CI_idx_23;
  int32_T CI_idx_5;
  int32_T Q_idx_1;
  int32_T CI_idx_12;
  int32_T CI_idx_4;
  int32_T CI_idx_1;
  int32_T CI_idx_3;
  int32_T CI_idx_0;
  int32_T CI_idx_2;
  int32_T CI_idx_13;
  int32_T Q_idx_2;
  int32_T CI_idx_41;
  int32_T CI_idx_11;
  int32_T CI_idx_40;
  int32_T CI_idx_10;
  int32_T CI_idx_39;
  int32_T CI_idx_9;
  int32_T CI_idx_20;
  real_T U_idx_4;
  int32_T Q_idx_3;
  int32_T CI_idx_8;
  int32_T CI_idx_19;
  int32_T CI_idx_7;
  int32_T CI_idx_18;
  int32_T CI_idx_6;
  int32_T CI_idx_17;
  int32_T CI_idx_28;
  int32_T Q_idx_4;
  int32_T CI_idx_16;
  int32_T CI_idx_27;
  int32_T CI_idx_15;
  int32_T CI_idx_26;
  int32_T CI_idx_14;
  int32_T CI_idx_25;
  int32_T CI_idx_36;
  int32_T Q_idx_5;
  int32_T CI_idx_24;
  int32_T CI_idx_35;
  int32_T CI_idx_22;
  int32_T CI_idx_33;
  int32_T CI_idx_21;
  int32_T CI_idx_32;
  int32_T CI_idx_31;
  int32_T CI_idx_30;
  int32_T CI_idx_29;
  (void)t0;
  Q_idx_0 = t8->mQ.mX[0];
  Q_idx_1 = t8->mQ.mX[1];
  Q_idx_2 = t8->mQ.mX[2];
  Q_idx_3 = t8->mQ.mX[3];
  Q_idx_4 = t8->mQ.mX[4];
  Q_idx_5 = t8->mQ.mX[5];
  Q_idx_6 = t8->mQ.mX[6];
  U_idx_1 = t8->mU.mX[1];
  U_idx_4 = t8->mU.mX[4];
  for (CI_idx_0 = 0; CI_idx_0 < 138; CI_idx_0++) {
    X[CI_idx_0] = t8->mX.mX[CI_idx_0];
  }

  CI_idx_0 = t8->mCI.mX[0];
  CI_idx_1 = t8->mCI.mX[1];
  CI_idx_2 = t8->mCI.mX[2];
  CI_idx_3 = t8->mCI.mX[3];
  CI_idx_4 = t8->mCI.mX[4];
  CI_idx_5 = t8->mCI.mX[5];
  CI_idx_6 = t8->mCI.mX[6];
  CI_idx_7 = t8->mCI.mX[7];
  CI_idx_8 = t8->mCI.mX[8];
  CI_idx_9 = t8->mCI.mX[9];
  CI_idx_10 = t8->mCI.mX[10];
  CI_idx_11 = t8->mCI.mX[11];
  CI_idx_12 = t8->mCI.mX[12];
  CI_idx_13 = t8->mCI.mX[13];
  CI_idx_14 = t8->mCI.mX[14];
  CI_idx_15 = t8->mCI.mX[15];
  CI_idx_16 = t8->mCI.mX[16];
  CI_idx_17 = t8->mCI.mX[17];
  CI_idx_18 = t8->mCI.mX[18];
  CI_idx_19 = t8->mCI.mX[19];
  CI_idx_20 = t8->mCI.mX[20];
  CI_idx_21 = t8->mCI.mX[21];
  CI_idx_22 = t8->mCI.mX[22];
  CI_idx_23 = t8->mCI.mX[23];
  CI_idx_24 = t8->mCI.mX[24];
  CI_idx_25 = t8->mCI.mX[25];
  CI_idx_26 = t8->mCI.mX[26];
  CI_idx_27 = t8->mCI.mX[27];
  CI_idx_28 = t8->mCI.mX[28];
  CI_idx_29 = t8->mCI.mX[29];
  CI_idx_30 = t8->mCI.mX[30];
  CI_idx_31 = t8->mCI.mX[31];
  CI_idx_32 = t8->mCI.mX[32];
  CI_idx_33 = t8->mCI.mX[33];
  CI_idx_34 = t8->mCI.mX[34];
  CI_idx_35 = t8->mCI.mX[35];
  CI_idx_36 = t8->mCI.mX[36];
  CI_idx_37 = t8->mCI.mX[37];
  CI_idx_38 = t8->mCI.mX[38];
  CI_idx_39 = t8->mCI.mX[39];
  CI_idx_40 = t8->mCI.mX[40];
  CI_idx_41 = t8->mCI.mX[41];
  out = t9->mUPDATE_I;
  Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i = (((((((((-X[2ULL] + X[5ULL] *
    0.57735026918962584) + X[1ULL] * -0.57735026918962584) + X[75ULL] *
    0.34670857988165682) + X[64ULL] * -0.28308718654826109) + X[77ULL] *
    5.7735026918962578E-7) + X[78ULL] * 0.81649658092772615) + X[66ULL] *
    -0.2001734466255658) + X[80ULL] * 0.81649658092772615) + X[58ULL] *
    -5.7735026918962578E-7) + X[61ULL] * 5.7735026918962578E-7;
  Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i = ((((((((((((((X[5ULL] *
    -1.1547005383792517 + X[1ULL] * 1.1547005383792517) + X[75ULL] *
    -0.34670857988165682) + X[76ULL] * -0.34670857988165682) + X[64ULL] *
    0.14154359327413055) + X[65ULL] * -0.24516069503665852) + X[77ULL] *
    -1.1547005383792516E-6) + X[78ULL] * -0.40824829046386313) + X[79ULL] *
    0.70710678118654757) + X[66ULL] * 0.4003468932511316) + X[80ULL] *
    -0.40824829046386313) + X[81ULL] * 0.70710678118654757) + X[58ULL] *
    1.1547005383792516E-6) + X[61ULL] * -1.1547005383792516E-6) + X[2ULL]) + X
    [4ULL];
  Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i = ((((((((((((-X[4ULL] + X[5ULL]
    * 0.57735026918962584) + X[1ULL] * -0.57735026918962584) + X[76ULL] *
    0.34670857988165682) + X[64ULL] * 0.14154359327413055) + X[65ULL] *
    0.24516069503665852) + X[77ULL] * 5.7735026918962578E-7) + X[78ULL] *
    -0.408248290463863) + X[79ULL] * -0.70710678118654757) + X[66ULL] *
    -0.2001734466255658) + X[80ULL] * -0.408248290463863) + X[81ULL] *
    -0.70710678118654757) + X[58ULL] * -5.7735026918962578E-7) + X[61ULL] *
    5.7735026918962578E-7;
  Hotel_Load_Breaker_breakerA_i = (X[75ULL] * -0.34670857988165682 + X[64ULL] *
    0.28308637005168019) + X[66ULL] * 0.20017229192502745;
  Hotel_Load_Breaker_breakerB_i = ((X[133ULL] * -0.34670857988165682 + X[64ULL] *
    -0.1415431850258401) + X[65ULL] * 0.24515998792987737) + X[66ULL] *
    0.20017229192502745;
  Hotel_Load_Breaker_breakerC_i = ((X[76ULL] * -0.34670857988165682 + X[64ULL] *
    -0.1415431850258401) + X[65ULL] * -0.24515998792987737) + X[66ULL] *
    0.20017229192502745;
  if (((CI_idx_38 == 0) && (U_idx_1 > 0.5) && (Q_idx_0 == 2)) || ((U_idx_1 > 0.5)
       && (Q_idx_0 == 2) && (Q_idx_6 != 0))) {
    CI_idx_37 = 3;
  } else if (((CI_idx_37 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i
    == 0.0) && (Q_idx_0 == 3)) ||
             ((Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i == 0.0) && (Q_idx_0
    == 3) && (Q_idx_6 != 0))) {
    CI_idx_37 = 1;
  } else if (((CI_idx_34 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i
    < 0.0) && (Q_idx_0 == 3)) || ((Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i
    < 0.0) && (Q_idx_0 == 3) && (Q_idx_6 != 0))) {
    CI_idx_37 = 4;
  } else if (((CI_idx_23 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i
    > 0.0) && (Q_idx_0 == 3)) || ((Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i
    > 0.0) && (Q_idx_0 == 3) && (Q_idx_6 != 0))) {
    CI_idx_37 = 5;
  } else if (((CI_idx_12 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i
    >= 0.0) && (Q_idx_0 == 4)) ||
             ((Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i >= 0.0) && (Q_idx_0
    == 4) && (Q_idx_6 != 0))) {
    CI_idx_37 = 1;
  } else if (((CI_idx_1 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i <=
    0.0) && (Q_idx_0 == 5)) || ((Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i <=
    0.0) && (Q_idx_0 == 5) && (Q_idx_6 != 0))) {
    CI_idx_37 = 1;
  } else {
    CI_idx_37 = ((CI_idx_0 == 0) && (U_idx_1 <= 0.5) && (Q_idx_0 == 1)) ||
      ((U_idx_1 <= 0.5) && (Q_idx_0 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_0;
  }

  if (((CI_idx_5 == 0) && (U_idx_1 > 0.5) && (Q_idx_1 == 2)) || ((U_idx_1 > 0.5)
       && (Q_idx_1 == 2) && (Q_idx_6 != 0))) {
    CI_idx_34 = 3;
  } else if (((CI_idx_4 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i ==
    0.0) && (Q_idx_1 == 3)) || ((Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i ==
    0.0) && (Q_idx_1 == 3) && (Q_idx_6 != 0))) {
    CI_idx_34 = 1;
  } else if (((CI_idx_3 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i <
    0.0) && (Q_idx_1 == 3)) || ((Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i <
    0.0) && (Q_idx_1 == 3) && (Q_idx_6 != 0))) {
    CI_idx_34 = 4;
  } else if (((CI_idx_2 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i >
    0.0) && (Q_idx_1 == 3)) || ((Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i >
    0.0) && (Q_idx_1 == 3) && (Q_idx_6 != 0))) {
    CI_idx_34 = 5;
  } else if (((CI_idx_41 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i
    >= 0.0) && (Q_idx_1 == 4)) ||
             ((Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i >= 0.0) && (Q_idx_1
    == 4) && (Q_idx_6 != 0))) {
    CI_idx_34 = 1;
  } else if (((CI_idx_40 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i
    <= 0.0) && (Q_idx_1 == 5)) ||
             ((Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i <= 0.0) && (Q_idx_1
    == 5) && (Q_idx_6 != 0))) {
    CI_idx_34 = 1;
  } else {
    CI_idx_34 = ((CI_idx_39 == 0) && (U_idx_1 <= 0.5) && (Q_idx_1 == 1)) ||
      ((U_idx_1 <= 0.5) && (Q_idx_1 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_1;
  }

  if (((CI_idx_13 == 0) && (U_idx_1 > 0.5) && (Q_idx_2 == 2)) || ((U_idx_1 > 0.5)
       && (Q_idx_2 == 2) && (Q_idx_6 != 0))) {
    CI_idx_23 = 3;
  } else if (((CI_idx_11 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i
    == 0.0) && (Q_idx_2 == 3)) ||
             ((Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i == 0.0) && (Q_idx_2
    == 3) && (Q_idx_6 != 0))) {
    CI_idx_23 = 1;
  } else if (((CI_idx_10 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i
    < 0.0) && (Q_idx_2 == 3)) || ((Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i
    < 0.0) && (Q_idx_2 == 3) && (Q_idx_6 != 0))) {
    CI_idx_23 = 4;
  } else if (((CI_idx_9 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i >
    0.0) && (Q_idx_2 == 3)) || ((Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i >
    0.0) && (Q_idx_2 == 3) && (Q_idx_6 != 0))) {
    CI_idx_23 = 5;
  } else if (((CI_idx_8 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i >=
    0.0) && (Q_idx_2 == 4)) || ((Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i >=
    0.0) && (Q_idx_2 == 4) && (Q_idx_6 != 0))) {
    CI_idx_23 = 1;
  } else if (((CI_idx_7 == 0) && (Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i <=
    0.0) && (Q_idx_2 == 5)) || ((Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i <=
    0.0) && (Q_idx_2 == 5) && (Q_idx_6 != 0))) {
    CI_idx_23 = 1;
  } else {
    CI_idx_23 = ((CI_idx_6 == 0) && (U_idx_1 <= 0.5) && (Q_idx_2 == 1)) ||
      ((U_idx_1 <= 0.5) && (Q_idx_2 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_2;
  }

  if (((CI_idx_20 == 0) && (U_idx_4 > 0.5) && (Q_idx_3 == 2)) || ((U_idx_4 > 0.5)
       && (Q_idx_3 == 2) && (Q_idx_6 != 0))) {
    CI_idx_12 = 3;
  } else if (((CI_idx_19 == 0) && (Hotel_Load_Breaker_breakerA_i == 0.0) &&
              (Q_idx_3 == 3)) || ((Hotel_Load_Breaker_breakerA_i == 0.0) &&
              (Q_idx_3 == 3) && (Q_idx_6 != 0))) {
    CI_idx_12 = 1;
  } else if (((CI_idx_18 == 0) && (Hotel_Load_Breaker_breakerA_i < 0.0) &&
              (Q_idx_3 == 3)) || ((Hotel_Load_Breaker_breakerA_i < 0.0) &&
              (Q_idx_3 == 3) && (Q_idx_6 != 0))) {
    CI_idx_12 = 4;
  } else if (((CI_idx_17 == 0) && (Hotel_Load_Breaker_breakerA_i > 0.0) &&
              (Q_idx_3 == 3)) || ((Hotel_Load_Breaker_breakerA_i > 0.0) &&
              (Q_idx_3 == 3) && (Q_idx_6 != 0))) {
    CI_idx_12 = 5;
  } else if (((CI_idx_16 == 0) && (Hotel_Load_Breaker_breakerA_i >= 0.0) &&
              (Q_idx_3 == 4)) || ((Hotel_Load_Breaker_breakerA_i >= 0.0) &&
              (Q_idx_3 == 4) && (Q_idx_6 != 0))) {
    CI_idx_12 = 1;
  } else if (((CI_idx_15 == 0) && (Hotel_Load_Breaker_breakerA_i <= 0.0) &&
              (Q_idx_3 == 5)) || ((Hotel_Load_Breaker_breakerA_i <= 0.0) &&
              (Q_idx_3 == 5) && (Q_idx_6 != 0))) {
    CI_idx_12 = 1;
  } else {
    CI_idx_12 = ((CI_idx_14 == 0) && (U_idx_4 <= 0.5) && (Q_idx_3 == 1)) ||
      ((U_idx_4 <= 0.5) && (Q_idx_3 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_3;
  }

  if (((CI_idx_28 == 0) && (U_idx_4 > 0.5) && (Q_idx_4 == 2)) || ((U_idx_4 > 0.5)
       && (Q_idx_4 == 2) && (Q_idx_6 != 0))) {
    CI_idx_1 = 3;
  } else if (((CI_idx_27 == 0) && (Hotel_Load_Breaker_breakerB_i == 0.0) &&
              (Q_idx_4 == 3)) || ((Hotel_Load_Breaker_breakerB_i == 0.0) &&
              (Q_idx_4 == 3) && (Q_idx_6 != 0))) {
    CI_idx_1 = 1;
  } else if (((CI_idx_26 == 0) && (Hotel_Load_Breaker_breakerB_i < 0.0) &&
              (Q_idx_4 == 3)) || ((Hotel_Load_Breaker_breakerB_i < 0.0) &&
              (Q_idx_4 == 3) && (Q_idx_6 != 0))) {
    CI_idx_1 = 4;
  } else if (((CI_idx_25 == 0) && (Hotel_Load_Breaker_breakerB_i > 0.0) &&
              (Q_idx_4 == 3)) || ((Hotel_Load_Breaker_breakerB_i > 0.0) &&
              (Q_idx_4 == 3) && (Q_idx_6 != 0))) {
    CI_idx_1 = 5;
  } else if (((CI_idx_24 == 0) && (Hotel_Load_Breaker_breakerB_i >= 0.0) &&
              (Q_idx_4 == 4)) || ((Hotel_Load_Breaker_breakerB_i >= 0.0) &&
              (Q_idx_4 == 4) && (Q_idx_6 != 0))) {
    CI_idx_1 = 1;
  } else if (((CI_idx_22 == 0) && (Hotel_Load_Breaker_breakerB_i <= 0.0) &&
              (Q_idx_4 == 5)) || ((Hotel_Load_Breaker_breakerB_i <= 0.0) &&
              (Q_idx_4 == 5) && (Q_idx_6 != 0))) {
    CI_idx_1 = 1;
  } else {
    CI_idx_1 = ((CI_idx_21 == 0) && (U_idx_4 <= 0.5) && (Q_idx_4 == 1)) ||
      ((U_idx_4 <= 0.5) && (Q_idx_4 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_4;
  }

  if (((CI_idx_36 == 0) && (U_idx_4 > 0.5) && (Q_idx_5 == 2)) || ((U_idx_4 > 0.5)
       && (Q_idx_5 == 2) && (Q_idx_6 != 0))) {
    CI_idx_0 = 3;
  } else if (((CI_idx_35 == 0) && (Hotel_Load_Breaker_breakerC_i == 0.0) &&
              (Q_idx_5 == 3)) || ((Hotel_Load_Breaker_breakerC_i == 0.0) &&
              (Q_idx_5 == 3) && (Q_idx_6 != 0))) {
    CI_idx_0 = 1;
  } else if (((CI_idx_33 == 0) && (Hotel_Load_Breaker_breakerC_i < 0.0) &&
              (Q_idx_5 == 3)) || ((Hotel_Load_Breaker_breakerC_i < 0.0) &&
              (Q_idx_5 == 3) && (Q_idx_6 != 0))) {
    CI_idx_0 = 4;
  } else if (((CI_idx_32 == 0) && (Hotel_Load_Breaker_breakerC_i > 0.0) &&
              (Q_idx_5 == 3)) || ((Hotel_Load_Breaker_breakerC_i > 0.0) &&
              (Q_idx_5 == 3) && (Q_idx_6 != 0))) {
    CI_idx_0 = 5;
  } else if (((CI_idx_31 == 0) && (Hotel_Load_Breaker_breakerC_i >= 0.0) &&
              (Q_idx_5 == 4)) || ((Hotel_Load_Breaker_breakerC_i >= 0.0) &&
              (Q_idx_5 == 4) && (Q_idx_6 != 0))) {
    CI_idx_0 = 1;
  } else if (((CI_idx_30 == 0) && (Hotel_Load_Breaker_breakerC_i <= 0.0) &&
              (Q_idx_5 == 5)) || ((Hotel_Load_Breaker_breakerC_i <= 0.0) &&
              (Q_idx_5 == 5) && (Q_idx_6 != 0))) {
    CI_idx_0 = 1;
  } else {
    CI_idx_0 = ((CI_idx_29 == 0) && (U_idx_4 <= 0.5) && (Q_idx_5 == 1)) ||
      ((U_idx_4 <= 0.5) && (Q_idx_5 == 1) && (Q_idx_6 != 0)) ? 2 : Q_idx_5;
  }

  out.mX[0] = CI_idx_37;
  out.mX[1] = CI_idx_34;
  out.mX[2] = CI_idx_23;
  out.mX[3] = CI_idx_12;
  out.mX[4] = CI_idx_1;
  out.mX[5] = CI_idx_0;
  out.mX[6] = 0;
  (void)t0;
  (void)t9;
  return 0;
}
