/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_y.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_y(const NeDynamicSystem *t0,
  const NeDynamicSystemInput *t12, NeDsMethodOutput *t13)
{
  PmRealVector out;
  real_T Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[10];
  real_T intrm_sf_mf_123;
  real_T t3[10];
  size_t t5;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T X[138];
  int32_T b;
  (void)t0;
  for (b = 0; b < 138; b++) {
    X[b] = t12->mX.mX[b];
  }

  out = t13->mY;
  t3[0ULL] = X[94ULL];
  t3[1ULL] = X[95ULL];
  t3[2ULL] = X[96ULL];
  t3[3ULL] = (X[13ULL] * -0.05 + X[93ULL] * -0.010000000000000002) + 1.023;
  t3[4ULL] = X[97ULL];
  t3[5ULL] = X[98ULL];
  t3[6ULL] = X[99ULL];
  t3[7ULL] = X[100ULL];
  t3[8ULL] = X[101ULL];
  t3[9ULL] = X[102ULL];
  for (t5 = 0ULL; t5 < 10ULL; t5++) {
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t5] = t3[t5];
  }

  intrm_sf_mf_123 =
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL]) +
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[9ULL] * 2.0;
  t7 = -pmf_sqrt
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL]);
  t8 = -pmf_sqrt
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL]);
  t3[0ULL] = X[117ULL];
  t3[1ULL] = X[118ULL];
  t3[2ULL] = X[119ULL];
  t3[3ULL] = (X[22ULL] * -0.05 + X[113ULL] * -0.005000000000000001) + 1.023;
  t3[4ULL] = X[120ULL];
  t3[5ULL] = X[121ULL];
  t3[6ULL] = X[122ULL];
  t3[7ULL] = X[114ULL];
  t3[8ULL] = X[115ULL];
  t3[9ULL] = X[116ULL];
  for (t5 = 0ULL; t5 < 10ULL; t5++) {
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t5] = t3[t5];
  }

  t9 = -pmf_sqrt
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL]);
  t10 = -pmf_sqrt
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL]);
  out.mX[0] = X[92ULL];
  out.mX[1] = -intrm_sf_mf_123 / -1.0;
  out.mX[2] = t7 / -1.0;
  out.mX[3] = t8 / -1.0;
  out.mX[4] = X[112ULL];
  out.mX[5] = t9 / -1.0;
  out.mX[6] = t10 / -1.0;
  out.mX[7] =
    -((Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] *
       Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] +
       Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL] *
       Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL]) +
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] *
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[9ULL] *
      2.0) / -1.0;
  (void)t0;
  (void)t13;
  return 0;
}
