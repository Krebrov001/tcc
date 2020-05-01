/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dxy.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_dxy(const NeDynamicSystem *t0,
  const NeDynamicSystemInput *t134, NeDsMethodOutput *t135)
{
  PmRealVector out;
  real_T Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[10];
  real_T intermediate_der192;
  real_T intermediate_der193;
  real_T intermediate_der194;
  real_T intermediate_der195;
  real_T intermediate_der196;
  real_T intermediate_der197;
  real_T intermediate_der198;
  real_T intermediate_der199;
  real_T intermediate_der200;
  real_T intermediate_der201;
  real_T intermediate_der202;
  real_T intermediate_der203;
  real_T intermediate_der204;
  real_T intermediate_der205;
  real_T intermediate_der206;
  real_T intermediate_der207;
  real_T intermediate_der208;
  real_T intermediate_der209;
  real_T intermediate_der210;
  real_T intermediate_der211;
  real_T intermediate_der212;
  real_T intermediate_der214;
  real_T intermediate_der215;
  real_T intermediate_der263;
  real_T intermediate_der264;
  real_T t3[10];
  size_t t49;
  real_T t50;
  real_T t83;
  real_T X[138];
  int32_T b;
  (void)t0;
  for (b = 0; b < 138; b++) {
    X[b] = t134->mX.mX[b];
  }

  out = t135->mDXY;
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
  for (t49 = 0ULL; t49 < 10ULL; t49++) {
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t49] =
      t3[t49];
  }

  intermediate_der263 =
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL];
  intermediate_der264 =
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL];
  intermediate_der192 =
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL];
  intermediate_der214 =
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL];
  intermediate_der215 =
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL];
  intermediate_der193 =
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[9ULL];
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
  for (t49 = 0ULL; t49 < 10ULL; t49++) {
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t49] =
      t3[t49];
  }

  intermediate_der203 = ((((0.0 * intermediate_der214 + 0.0 *
    intermediate_der263) + 0.0 * intermediate_der215) + intermediate_der264) +
    0.0 * intermediate_der193 * 2.0) + 0.0 * intermediate_der192 * 2.0;
  intermediate_der202 = ((((0.0 * intermediate_der214 + 0.0 *
    intermediate_der263) + 0.0 * intermediate_der215) + 0.0 *
    intermediate_der264) + intermediate_der193 * 2.0) + 0.0 *
    intermediate_der192 * 2.0;
  intermediate_der201 = ((((intermediate_der214 + 0.0 * intermediate_der263) +
    0.0 * intermediate_der215) + 0.0 * intermediate_der264) + 0.0 *
    intermediate_der193 * 2.0) + 0.0 * intermediate_der192 * 2.0;
  intermediate_der200 = ((((0.0 * intermediate_der214 + 0.0 *
    intermediate_der263) + intermediate_der215) + 0.0 * intermediate_der264) +
    0.0 * intermediate_der193 * 2.0) + 0.0 * intermediate_der192 * 2.0;
  intermediate_der199 = ((((0.0 * intermediate_der214 + 0.0 *
    intermediate_der263) + 0.0 * intermediate_der215) + 0.0 *
    intermediate_der264) + 0.0 * intermediate_der193 * 2.0) + 0.0 *
    intermediate_der192 * 2.0;
  intermediate_der198 = ((((0.0 * intermediate_der214 + intermediate_der263) +
    0.0 * intermediate_der215) + 0.0 * intermediate_der264) + 0.0 *
    intermediate_der193 * 2.0) + 0.0 * intermediate_der192 * 2.0;
  intermediate_der197 = ((((0.0 * intermediate_der214 + 0.0 *
    intermediate_der263) + 0.0 * intermediate_der215) + 0.0 *
    intermediate_der264) + 0.0 * intermediate_der193 * 2.0) + 0.0 *
    intermediate_der192 * 2.0;
  intermediate_der196 = ((((0.0 * intermediate_der214 + 0.0 *
    intermediate_der263) + 0.0 * intermediate_der215) + 0.0 *
    intermediate_der264) + 0.0 * intermediate_der193 * 2.0) +
    intermediate_der192 * 2.0;
  intermediate_der195 = ((((0.0 * intermediate_der214 + 0.0 *
    intermediate_der263) + 0.0 * intermediate_der215) + 0.0 *
    intermediate_der264) + 0.0 * intermediate_der193 * 2.0) + 0.0 *
    intermediate_der192 * 2.0;
  intermediate_der194 = ((((0.0 * intermediate_der214 + 0.0 *
    intermediate_der263) + 0.0 * intermediate_der215) + 0.0 *
    intermediate_der264) + 0.0 * intermediate_der193 * 2.0) + 0.0 *
    intermediate_der192 * 2.0;
  intermediate_der192 = ((((0.0 * intermediate_der214 + 0.0 *
    intermediate_der263) + 0.0 * intermediate_der215) + 0.0 *
    intermediate_der264) + 0.0 * intermediate_der193 * 2.0) + 0.0 *
    intermediate_der192 * 2.0;
  intermediate_der193 = intermediate_der194;
  intermediate_der194 = intermediate_der195;
  intermediate_der195 = intermediate_der196;
  intermediate_der196 = intermediate_der197;
  intermediate_der197 = intermediate_der198;
  intermediate_der198 = intermediate_der199;
  intermediate_der199 = intermediate_der200;
  intermediate_der200 = intermediate_der201;
  intermediate_der201 = intermediate_der202;
  intermediate_der202 = intermediate_der203;
  t50 = pmf_sqrt(intermediate_der214 * intermediate_der214 + intermediate_der215
                 * intermediate_der215) * 2.0;
  intermediate_der203 = (0.0 * intermediate_der214 * 2.0 + intermediate_der215 *
    2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der204 = (0.0 * intermediate_der214 * 2.0 + 0.0 *
    intermediate_der215 * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der205 = (0.0 * intermediate_der214 * 2.0 + 0.0 *
    intermediate_der215 * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der206 = (0.0 * intermediate_der214 * 2.0 + 0.0 *
    intermediate_der215 * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der207 = (0.0 * intermediate_der214 * 2.0 + 0.0 *
    intermediate_der215 * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der208 = (intermediate_der214 * 2.0 + 0.0 * intermediate_der215 *
    2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der209 = (0.0 * intermediate_der214 * 2.0 + 0.0 *
    intermediate_der215 * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der210 = (0.0 * intermediate_der214 * 2.0 + 0.0 *
    intermediate_der215 * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der211 = (0.0 * intermediate_der214 * 2.0 + 0.0 *
    intermediate_der215 * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der212 = (0.0 * intermediate_der214 * 2.0 + 0.0 *
    intermediate_der215 * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der214 = (0.0 * intermediate_der214 * 2.0 + 0.0 *
    intermediate_der215 * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  intermediate_der215 = pmf_sqrt(intermediate_der263 * intermediate_der263 +
    intermediate_der264 * intermediate_der264) * 2.0;
  t50 = pmf_sqrt
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL]) *
    2.0;
  t83 = pmf_sqrt
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL]) *
    2.0;
  out.mX[0] = intermediate_der196;
  out.mX[1] = intermediate_der209;
  out.mX[2] = (0.0 * intermediate_der263 * 2.0 + 0.0 * intermediate_der264 * 2.0)
    * (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 : intermediate_der215));
  out.mX[3] = (0.0 *
               Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
               [7ULL] * 2.0 + 0.0 *
               Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
               [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[4] = (0.0 *
               Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
               [4ULL] * 2.0 + 0.0 *
               Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
               [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[5] = ((((0.0 *
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [7ULL] + 0.0 *
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [4ULL]) + 0.0 *
                 Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[
                 8ULL]) + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL]) + 0.0 *
               Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
               [9ULL] * 2.0) + 0.0 *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  out.mX[6] = 1.0;
  out.mX[7] = intermediate_der198;
  out.mX[8] = intermediate_der207;
  out.mX[9] = (0.0 * intermediate_der263 * 2.0 + 0.0 * intermediate_der264 * 2.0)
    * (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 : intermediate_der215));
  out.mX[10] = intermediate_der192;
  out.mX[11] = intermediate_der214;
  out.mX[12] = (0.0 * intermediate_der263 * 2.0 + 0.0 * intermediate_der264 *
                2.0) * (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 :
    intermediate_der215));
  out.mX[13] = intermediate_der193;
  out.mX[14] = intermediate_der212;
  out.mX[15] = (0.0 * intermediate_der263 * 2.0 + 0.0 * intermediate_der264 *
                2.0) * (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 :
    intermediate_der215));
  out.mX[16] = intermediate_der194;
  out.mX[17] = intermediate_der211;
  out.mX[18] = (0.0 * intermediate_der263 * 2.0 + 0.0 * intermediate_der264 *
                2.0) * (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 :
    intermediate_der215));
  out.mX[19] = intermediate_der200;
  out.mX[20] = intermediate_der205;
  out.mX[21] = (intermediate_der263 * 2.0 + 0.0 * intermediate_der264 * 2.0) *
    (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 : intermediate_der215));
  out.mX[22] = intermediate_der199;
  out.mX[23] = intermediate_der206;
  out.mX[24] = (0.0 * intermediate_der263 * 2.0 + intermediate_der264 * 2.0) *
    (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 : intermediate_der215));
  out.mX[25] = intermediate_der201;
  out.mX[26] = intermediate_der204;
  out.mX[27] = (0.0 * intermediate_der263 * 2.0 + 0.0 * intermediate_der264 *
                2.0) * (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 :
    intermediate_der215));
  out.mX[28] = intermediate_der197;
  out.mX[29] = intermediate_der208;
  out.mX[30] = (0.0 * intermediate_der263 * 2.0 + 0.0 * intermediate_der264 *
                2.0) * (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 :
    intermediate_der215));
  out.mX[31] = intermediate_der202;
  out.mX[32] = intermediate_der203;
  out.mX[33] = (0.0 * intermediate_der263 * 2.0 + 0.0 * intermediate_der264 *
                2.0) * (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 :
    intermediate_der215));
  out.mX[34] = intermediate_der195;
  out.mX[35] = intermediate_der210;
  out.mX[36] = (0.0 * intermediate_der263 * 2.0 + 0.0 * intermediate_der264 *
                2.0) * (1.0 / (intermediate_der215 == 0.0 ? 1.0E-16 :
    intermediate_der215));
  out.mX[37] = 1.0;
  out.mX[38] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [7ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[39] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [4ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[40] = ((((0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [7ULL] + 0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [4ULL]) + 0.0 *
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [8ULL]) + 0.0 *
                 Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[
                 5ULL]) + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [9ULL] * 2.0) + 0.0 *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  out.mX[41] = (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [7ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[42] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [4ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[43] = ((((0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [7ULL] +
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [4ULL]) + 0.0 *
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [8ULL]) + 0.0 *
                 Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[
                 5ULL]) + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [9ULL] * 2.0) + 0.0 *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  out.mX[44] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [7ULL] * 2.0 +
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[45] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [4ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[46] = ((((0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [7ULL] + 0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [4ULL]) + 0.0 *
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [8ULL]) +
                 Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[
                 5ULL]) + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [9ULL] * 2.0) + 0.0 *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  out.mX[47] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [7ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[48] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [4ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[49] = ((((0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [7ULL] + 0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [4ULL]) + 0.0 *
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [8ULL]) + 0.0 *
                 Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[
                 5ULL]) + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [9ULL] * 2.0) +
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  out.mX[50] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [7ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[51] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [4ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[52] = ((((0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [7ULL] + 0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [4ULL]) + 0.0 *
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [8ULL]) + 0.0 *
                 Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[
                 5ULL]) + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [9ULL] * 2.0) + 0.0 *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  out.mX[53] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [7ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[54] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [4ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[55] = ((((0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [7ULL] + 0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [4ULL]) + 0.0 *
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [8ULL]) + 0.0 *
                 Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[
                 5ULL]) + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [9ULL] * 2.0) + 0.0 *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  out.mX[56] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [7ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[57] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [4ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[58] = ((((0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [7ULL] + 0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [4ULL]) + 0.0 *
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [8ULL]) + 0.0 *
                 Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[
                 5ULL]) + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [9ULL] * 2.0) + 0.0 *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  out.mX[59] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [7ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[60] = (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [4ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[61] =
    ((((Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] +
        0.0 * Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
        [4ULL]) + 0.0 *
       Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL]) +
      0.0 * Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL])
     + 0.0 * Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
     [9ULL] * 2.0) + 0.0 *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  out.mX[62] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [7ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[63] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [4ULL] * 2.0 +
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[64] = ((((0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [7ULL] + 0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [4ULL]) +
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [8ULL]) + 0.0 *
                 Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[
                 5ULL]) + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [9ULL] * 2.0) + 0.0 *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  out.mX[65] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [7ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [8ULL] * 2.0) * (1.0 / (t50 == 0.0 ? 1.0E-16 : t50));
  out.mX[66] = (0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [4ULL] * 2.0 + 0.0 *
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [5ULL] * 2.0) * (1.0 / (t83 == 0.0 ? 1.0E-16 : t83));
  out.mX[67] = ((((0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [7ULL] + 0.0 *
                   Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                   [4ULL]) + 0.0 *
                  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                  [8ULL]) + 0.0 *
                 Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[
                 5ULL]) +
                Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp
                [9ULL] * 2.0) + 0.0 *
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] * 2.0;
  (void)t0;
  (void)t135;
  return 0;
}
