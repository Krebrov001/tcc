/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_mode.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_mode(const NeDynamicSystem *t0,
  const NeDynamicSystemInput *t13, NeDsMethodOutput *t14)
{
  PmIntVector out;
  real_T Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i;
  real_T Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i;
  real_T Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i;
  real_T Hotel_Load_Breaker_breakerA_i;
  real_T Hotel_Load_Breaker_breakerB_i;
  real_T Hotel_Load_Breaker_breakerC_i;
  boolean_T t1;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T X[138];
  int32_T b;
  real_T T_idx_0;
  real_T S_idx_0;
  real_T U_idx_1;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  real_T U_idx_4;
  int32_T Q_idx_3;
  int32_T Q_idx_4;
  int32_T Q_idx_5;
  real_T U_idx_0;
  (void)t0;
  Q_idx_0 = t13->mQ.mX[0];
  Q_idx_1 = t13->mQ.mX[1];
  Q_idx_2 = t13->mQ.mX[2];
  Q_idx_3 = t13->mQ.mX[3];
  Q_idx_4 = t13->mQ.mX[4];
  Q_idx_5 = t13->mQ.mX[5];
  T_idx_0 = t13->mT.mX[0];
  U_idx_0 = t13->mU.mX[0];
  U_idx_1 = t13->mU.mX[1];
  U_idx_4 = t13->mU.mX[4];
  for (b = 0; b < 138; b++) {
    X[b] = t13->mX.mX[b];
  }

  S_idx_0 = t13->mS.mX[0];
  out = t14->mMODE;
  t8 = X[62ULL] * 0.81649658092772615 + X[57ULL] * 0.57735026918962584;
  t9 = (X[62ULL] * -0.408248290463863 + X[63ULL] * 0.70710678118654757) + X
    [57ULL] * 0.57735026918962584;
  t10 = (X[62ULL] * -0.408248290463863 + X[63ULL] * -0.70710678118654757) + X
    [57ULL] * 0.57735026918962584;
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
  t8 = pmf_sqrt((((t8 - t9) * (t8 - t9) + (t9 - t10) * (t9 - t10)) + (t10 - t8) *
                 (t10 - t8)) / 3.0);
  t9 = -(-(X[51ULL] * X[53ULL]) + X[51ULL] * X[52ULL]);
  if (t9 > 0.0) {
    t10 = t9 * 0.001;
  } else {
    t10 = 0.0;
  }

  if (t8 > 0.0) {
    t1 = (t8 * t8 / 346.112 * 0.001 + t10 > 0.0);
  } else {
    t1 = false;
  }

  out.mX[0] = (int32_T)((U_idx_1 <= 0.5) && (Q_idx_0 == 1));
  out.mX[1] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i <= 0.0) &&
                        (Q_idx_0 == 5));
  out.mX[2] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i > 0.0) &&
                        (Q_idx_1 == 3));
  out.mX[3] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i < 0.0) &&
                        (Q_idx_1 == 3));
  out.mX[4] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i == 0.0) &&
                        (Q_idx_1 == 3));
  out.mX[5] = (int32_T)((U_idx_1 > 0.5) && (Q_idx_1 == 2));
  out.mX[6] = (int32_T)((U_idx_1 <= 0.5) && (Q_idx_2 == 1));
  out.mX[7] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i <= 0.0) &&
                        (Q_idx_2 == 5));
  out.mX[8] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i >= 0.0) &&
                        (Q_idx_2 == 4));
  out.mX[9] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i > 0.0) &&
                        (Q_idx_2 == 3));
  out.mX[10] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i < 0.0) &&
    (Q_idx_2 == 3));
  out.mX[11] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i == 0.0) &&
    (Q_idx_2 == 3));
  out.mX[12] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i >= 0.0) &&
    (Q_idx_0 == 4));
  out.mX[13] = (int32_T)((U_idx_1 > 0.5) && (Q_idx_2 == 2));
  out.mX[14] = (int32_T)((U_idx_4 <= 0.5) && (Q_idx_3 == 1));
  out.mX[15] = (int32_T)((Hotel_Load_Breaker_breakerA_i <= 0.0) && (Q_idx_3 == 5));
  out.mX[16] = (int32_T)((Hotel_Load_Breaker_breakerA_i >= 0.0) && (Q_idx_3 == 4));
  out.mX[17] = (int32_T)((Hotel_Load_Breaker_breakerA_i > 0.0) && (Q_idx_3 == 3));
  out.mX[18] = (int32_T)((Hotel_Load_Breaker_breakerA_i < 0.0) && (Q_idx_3 == 3));
  out.mX[19] = (int32_T)((Hotel_Load_Breaker_breakerA_i == 0.0) && (Q_idx_3 == 3));
  out.mX[20] = (int32_T)((U_idx_4 > 0.5) && (Q_idx_3 == 2));
  out.mX[21] = (int32_T)((U_idx_4 <= 0.5) && (Q_idx_4 == 1));
  out.mX[22] = (int32_T)((Hotel_Load_Breaker_breakerB_i <= 0.0) && (Q_idx_4 == 5));
  out.mX[23] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i > 0.0) &&
    (Q_idx_0 == 3));
  out.mX[24] = (int32_T)((Hotel_Load_Breaker_breakerB_i >= 0.0) && (Q_idx_4 == 4));
  out.mX[25] = (int32_T)((Hotel_Load_Breaker_breakerB_i > 0.0) && (Q_idx_4 == 3));
  out.mX[26] = (int32_T)((Hotel_Load_Breaker_breakerB_i < 0.0) && (Q_idx_4 == 3));
  out.mX[27] = (int32_T)((Hotel_Load_Breaker_breakerB_i == 0.0) && (Q_idx_4 == 3));
  out.mX[28] = (int32_T)((U_idx_4 > 0.5) && (Q_idx_4 == 2));
  out.mX[29] = (int32_T)((U_idx_4 <= 0.5) && (Q_idx_5 == 1));
  out.mX[30] = (int32_T)((Hotel_Load_Breaker_breakerC_i <= 0.0) && (Q_idx_5 == 5));
  out.mX[31] = (int32_T)((Hotel_Load_Breaker_breakerC_i >= 0.0) && (Q_idx_5 == 4));
  out.mX[32] = (int32_T)((Hotel_Load_Breaker_breakerC_i > 0.0) && (Q_idx_5 == 3));
  out.mX[33] = (int32_T)((Hotel_Load_Breaker_breakerC_i < 0.0) && (Q_idx_5 == 3));
  out.mX[34] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i < 0.0) &&
    (Q_idx_0 == 3));
  out.mX[35] = (int32_T)((Hotel_Load_Breaker_breakerC_i == 0.0) && (Q_idx_5 == 3));
  out.mX[36] = (int32_T)((U_idx_4 > 0.5) && (Q_idx_5 == 2));
  out.mX[37] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i == 0.0) &&
    (Q_idx_0 == 3));
  out.mX[38] = (int32_T)((U_idx_1 > 0.5) && (Q_idx_0 == 2));
  out.mX[39] = (int32_T)((U_idx_1 <= 0.5) && (Q_idx_1 == 1));
  out.mX[40] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i <= 0.0) &&
    (Q_idx_1 == 5));
  out.mX[41] = (int32_T)((Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i >= 0.0) &&
    (Q_idx_1 == 4));
  out.mX[42] = (int32_T)(U_idx_0 > 0.0);
  out.mX[43] = (int32_T)(-X[51ULL] < 0.0);
  out.mX[44] = (int32_T)t1;
  out.mX[45] = (int32_T)(t9 > 0.0);
  out.mX[46] = (int32_T)(T_idx_0 - 0.3 <= S_idx_0);
  (void)t0;
  (void)t14;
  return 0;
}
