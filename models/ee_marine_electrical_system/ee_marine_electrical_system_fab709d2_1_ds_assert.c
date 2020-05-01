/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_assert.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_assert(const NeDynamicSystem
  *t0, const NeDynamicSystemInput *t25, NeDsMethodOutput *t26)
{
  PmIntVector out;
  real_T intrm_sf_mf_34;
  real_T intrm_sf_mf_35;
  real_T intrm_sf_mf_37;
  real_T intrm_sf_mf_38;
  real_T Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[10];
  boolean_T t2;
  boolean_T t3;
  boolean_T t4;
  boolean_T t5;
  boolean_T t6;
  boolean_T t7;
  boolean_T t8;
  real_T t12[10];
  size_t t15;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T X[138];
  int32_T b;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T Q_idx_3;
  int32_T Q_idx_4;
  int32_T Q_idx_5;
  (void)t0;
  Q_idx_0 = t25->mQ.mX[0];
  Q_idx_1 = t25->mQ.mX[1];
  Q_idx_2 = t25->mQ.mX[2];
  Q_idx_3 = t25->mQ.mX[3];
  Q_idx_4 = t25->mQ.mX[4];
  Q_idx_5 = t25->mQ.mX[5];
  for (b = 0; b < 138; b++) {
    X[b] = t25->mX.mX[b];
  }

  out = t26->mASSERT;
  t19 = X[62ULL] * 0.81649658092772615 + X[57ULL] * 0.57735026918962584;
  t20 = (X[62ULL] * -0.408248290463863 + X[63ULL] * 0.70710678118654757) + X
    [57ULL] * 0.57735026918962584;
  t21 = (X[62ULL] * -0.408248290463863 + X[63ULL] * -0.70710678118654757) + X
    [57ULL] * 0.57735026918962584;
  t12[0ULL] = X[94ULL];
  t12[1ULL] = X[95ULL];
  t12[2ULL] = X[96ULL];
  t12[3ULL] = (X[13ULL] * -0.05 + X[93ULL] * -0.010000000000000002) + 1.023;
  t12[4ULL] = X[97ULL];
  t12[5ULL] = X[98ULL];
  t12[6ULL] = X[99ULL];
  t12[7ULL] = X[100ULL];
  t12[8ULL] = X[101ULL];
  t12[9ULL] = X[102ULL];
  for (t15 = 0ULL; t15 < 10ULL; t15++) {
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t15] =
      t12[t15];
  }

  intrm_sf_mf_34 =
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL];
  intrm_sf_mf_35 =
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL];
  intrm_sf_mf_37 =
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL];
  intrm_sf_mf_38 =
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL];
  t12[0ULL] = X[117ULL];
  t12[1ULL] = X[118ULL];
  t12[2ULL] = X[119ULL];
  t12[3ULL] = (X[22ULL] * -0.05 + X[113ULL] * -0.005000000000000001) + 1.023;
  t12[4ULL] = X[120ULL];
  t12[5ULL] = X[121ULL];
  t12[6ULL] = X[122ULL];
  t12[7ULL] = X[114ULL];
  t12[8ULL] = X[115ULL];
  t12[9ULL] = X[116ULL];
  for (t15 = 0ULL; t15 < 10ULL; t15++) {
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t15] =
      t12[t15];
  }

  t22 = ((t19 - t20) * (t19 - t20) + (t20 - t21) * (t20 - t21)) + (t21 - t19) *
    (t21 - t19);
  t19 = pmf_sqrt(t22 / 3.0);
  t20 = -(-(X[51ULL] * X[53ULL]) + X[51ULL] * X[52ULL]);
  if (t20 > 0.0) {
    t21 = t20 * 0.001;
  } else {
    t21 = 0.0;
  }

  t20 = t19 * t19 / 346.112 * 0.001 + t21;
  if (t19 > 0.0) {
    t2 = (t20 > 0.0);
  } else {
    t2 = false;
  }

  if (t2) {
    t21 = t19 * t19 / (t20 == 0.0 ? 1.0E-16 : t20) * 0.001;
  } else {
    t21 = pmf_get_inf();
  }

  if (Q_idx_0 >= 1) {
    t2 = (Q_idx_0 <= 5);
  } else {
    t2 = false;
  }

  if (Q_idx_1 >= 1) {
    t3 = (Q_idx_1 <= 5);
  } else {
    t3 = false;
  }

  if (Q_idx_2 >= 1) {
    t4 = (Q_idx_2 <= 5);
  } else {
    t4 = false;
  }

  if (Q_idx_3 >= 1) {
    t5 = (Q_idx_3 <= 5);
  } else {
    t5 = false;
  }

  if (Q_idx_4 >= 1) {
    t6 = (Q_idx_4 <= 5);
  } else {
    t6 = false;
  }

  if (Q_idx_5 >= 1) {
    t7 = (Q_idx_5 <= 5);
  } else {
    t7 = false;
  }

  if (t19 > 0.0) {
    t8 = (t20 > 0.0);
  } else {
    t8 = false;
  }

  out.mX[0] = (int32_T)t2;
  out.mX[1] = (int32_T)t3;
  out.mX[2] = (int32_T)t4;
  out.mX[3] = (int32_T)t5;
  out.mX[4] = (int32_T)t6;
  out.mX[5] = (int32_T)t7;
  out.mX[6] = 1;
  out.mX[7] = 1;
  out.mX[8] = 1;
  out.mX[9] = 1;
  out.mX[10] = 1;
  out.mX[11] = 1;
  out.mX[12] = 1;
  out.mX[13] = 1;
  out.mX[14] = (int32_T)(intrm_sf_mf_37 * intrm_sf_mf_37 + intrm_sf_mf_38 *
    intrm_sf_mf_38 >= 0.0);
  out.mX[15] = 1;
  out.mX[16] = 1;
  out.mX[17] = 1;
  out.mX[18] = 1;
  out.mX[19] = (int32_T)(intrm_sf_mf_34 * intrm_sf_mf_34 + intrm_sf_mf_35 *
    intrm_sf_mf_35 >= 0.0);
  out.mX[20] = 1;
  out.mX[21] = 1;
  out.mX[22] = 1;
  out.mX[23] = 1;
  out.mX[24] = (int32_T)
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL] >=
     0.0);
  out.mX[25] = 1;
  out.mX[26] = 1;
  out.mX[27] = 1;
  out.mX[28] = 1;
  out.mX[29] = (int32_T)
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL] >=
     0.0);
  out.mX[30] = 1;
  out.mX[31] = 1;
  out.mX[32] = 1;
  out.mX[33] = 1;
  out.mX[34] = 1;
  out.mX[35] = 1;
  out.mX[36] = 1;
  out.mX[37] = (int32_T)(t22 / 3.0 >= 0.0);
  out.mX[38] = 1;
  out.mX[39] = 1;
  out.mX[40] = 1;
  out.mX[41] = 1;
  out.mX[42] = 1;
  out.mX[43] = (int32_T)((!t8) || (t20 != 0.0));
  out.mX[44] = (int32_T)(t21 != 0.0);
  out.mX[45] = 1;
  out.mX[46] = 1;
  out.mX[47] = 1;
  out.mX[48] = 1;
  out.mX[49] = 1;
  out.mX[50] = 1;
  (void)t0;
  (void)t26;
  return 0;
}
