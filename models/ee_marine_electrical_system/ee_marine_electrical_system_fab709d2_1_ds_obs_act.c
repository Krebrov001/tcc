/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_obs_act.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_obs_act(const NeDynamicSystem *
  t0, const NeDynamicSystemInput *t281, NeDsMethodOutput *t282)
{
  PmRealVector out;
  real_T Base_Load_wye_impedance_power_dissipated;
  real_T Bow_Thrusters_Asynchronous_Machine_Measurement_pu_input[8];
  real_T Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i;
  real_T Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i;
  real_T Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i;
  real_T Bow_Thrusters_Ideal_Torque_Source_S;
  real_T Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[10];
  real_T Diesel_generator_AVR_and_exciter_Terminal_Current_Measurement_p;
  real_T Diesel_generator_AVR_and_exciter_Terminal_Voltage_Measurement_p;
  real_T Diesel_generator_Diesel_Generator_Alternator_5MVA_efd;
  real_T Diesel_generator_Generator_and_governor_Governor_Delta_speed_I1;
  real_T Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[10];
  real_T Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_out;
  real_T Gas_turbine_Gas_Turbine_Alternator_30MVA_pu_i1d;
  real_T Gas_turbine_Turbine_and_governor_Governor_Delta_load_setpoint_I;
  real_T Gas_turbine_Turbine_and_governor_Governor_Delta_speed_I1;
  real_T Port_Aft_Cable_phase_splitter2_i_b;
  real_T Port_Aft_Cable_phase_splitter2_i_c;
  real_T Port_Aft_Cable_transmission_line_T1_i_zero;
  real_T Port_Forward_Cable_phase_splitter2_i_a;
  real_T Port_Forward_Cable_phase_splitter2_i_b;
  real_T Port_Forward_Cable_phase_splitter2_i_c;
  real_T Port_Forward_Cable_transmission_line_T1_i_zero;
  real_T Port_Mid_ship_Cable_phase_splitter1_i_a;
  real_T Port_Mid_ship_Cable_phase_splitter1_i_b;
  real_T Port_Mid_ship_Cable_phase_splitter1_i_c;
  real_T Port_Mid_ship_Cable_phase_splitter2_i_a;
  real_T Port_Mid_ship_Cable_phase_splitter2_i_b;
  real_T Port_Mid_ship_Cable_phase_splitter2_i_c;
  real_T Port_Mid_ship_Cable_transmission_line_T1_i_zero;
  real_T t1[956];
  real_T t7[8];
  real_T t18[10];
  real_T t23[1];
  size_t t132;
  real_T t210;
  real_T t211;
  real_T t212;
  real_T t213;
  real_T t214;
  real_T t215;
  real_T t216;
  real_T t217;
  real_T t218;
  real_T t219;
  real_T t220;
  real_T t222;
  real_T t224;
  real_T t240;
  real_T t241;
  real_T t242;
  real_T t243;
  real_T t244;
  real_T t245;
  real_T t246;
  real_T t247;
  real_T t248;
  real_T t249;
  real_T t250;
  real_T t251;
  real_T t252;
  real_T t253;
  real_T t254;
  real_T t255;
  real_T t256;
  real_T t257;
  real_T t272;
  real_T t273;
  real_T t274;
  real_T t276;
  real_T t278;
  real_T t280;
  real_T X[138];
  int32_T b;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_0;
  real_T U_idx_1;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  real_T U_idx_4;
  int32_T Q_idx_3;
  int32_T Q_idx_4;
  int32_T Q_idx_5;
  (void)t0;
  Q_idx_0 = t281->mQ.mX[0];
  Q_idx_1 = t281->mQ.mX[1];
  Q_idx_2 = t281->mQ.mX[2];
  Q_idx_3 = t281->mQ.mX[3];
  Q_idx_4 = t281->mQ.mX[4];
  Q_idx_5 = t281->mQ.mX[5];
  U_idx_0 = t281->mU.mX[0];
  U_idx_1 = t281->mU.mX[1];
  U_idx_2 = t281->mU.mX[2];
  U_idx_3 = t281->mU.mX[3];
  U_idx_4 = t281->mU.mX[4];
  for (b = 0; b < 138; b++) {
    X[b] = t281->mX.mX[b];
  }

  out = t282->mOBS_ACT;
  t210 = X[62ULL] * 0.81649658092772615 + X[57ULL] * 0.57735026918962584;
  t211 = (X[62ULL] * -0.408248290463863 + X[63ULL] * 0.70710678118654757) + X
    [57ULL] * 0.57735026918962584;
  t212 = (X[62ULL] * -0.408248290463863 + X[63ULL] * -0.70710678118654757) + X
    [57ULL] * 0.57735026918962584;
  t213 = X[64ULL] * 0.81649658092772615 + X[66ULL] * 0.57735026918962584;
  t214 = (X[64ULL] * -0.408248290463863 + X[65ULL] * 0.70710678118654757) + X
    [66ULL] * 0.57735026918962584;
  t215 = (X[64ULL] * -0.408248290463863 + X[65ULL] * -0.70710678118654757) + X
    [66ULL] * 0.57735026918962584;
  t216 = (X[64ULL] * 8.1649658092772609E-7 + X[66ULL] * 5.7735026918962578E-7) +
    X[2ULL];
  t217 = ((X[64ULL] * -4.08248290463863E-7 + X[65ULL] * 7.0710678118654758E-7) +
          X[66ULL] * 5.7735026918962578E-7) + X[3ULL];
  t218 = ((X[64ULL] * -4.08248290463863E-7 + X[65ULL] * -7.0710678118654758E-7)
          + X[66ULL] * 5.7735026918962578E-7) + X[4ULL];
  t23[0ULL] = 0.0;
  t23[0ULL] = (t23[0ULL] + X[2ULL] * X[2ULL] * 0.0014992797950881423) + t213 *
    t213 * 1.0E-9;
  t23[0ULL] = (t23[0ULL] + X[3ULL] * X[3ULL] * 0.0014992797950881423) + t214 *
    t214 * 1.0E-9;
  t23[0ULL] = (t23[0ULL] + X[4ULL] * X[4ULL] * 0.0014992797950881423) + t215 *
    t215 * 1.0E-9;
  Base_Load_wye_impedance_power_dissipated = -t23[0ULL] / -1.0;
  t7[0ULL] = X[68ULL];
  t7[1ULL] = X[67ULL];
  t7[2ULL] = X[69ULL];
  t7[3ULL] = X[70ULL];
  t7[4ULL] = X[71ULL];
  t7[5ULL] = X[72ULL];
  t7[6ULL] = X[73ULL];
  t7[7ULL] = X[74ULL];
  for (t132 = 0ULL; t132 < 8ULL; t132++) {
    Bow_Thrusters_Asynchronous_Machine_Measurement_pu_input[t132] = t7[t132];
  }

  t219 = ((((((((((-X[2ULL] + X[5ULL] * 0.57735026918962584) + X[1ULL] *
                  -0.57735026918962584) + X[75ULL] * 0.34670857988165682) + X
                [64ULL] * -0.28308718654826109) + X[77ULL] *
               5.7735026918962578E-7) + X[78ULL] * 0.81649658092772615) + X
             [66ULL] * -0.2001734466255658) + X[80ULL] * 0.81649658092772615) +
           X[58ULL] * -5.7735026918962578E-7) + X[61ULL] * 5.7735026918962578E-7)
    + X[82ULL];
  t220 = (((((((((((((X[5ULL] * -0.57735026918962584 + X[1ULL] *
                      0.57735026918962584) + X[76ULL] * -0.34670857988165682) +
                    X[64ULL] * -0.14154359327413055) + X[65ULL] *
                   -0.24516069503665852) + X[77ULL] * -5.7735026918962578E-7) +
                 X[78ULL] * 0.408248290463863) + X[79ULL] * 0.70710678118654757)
               + X[66ULL] * 0.2001734466255658) + X[80ULL] * 0.408248290463863)
             + X[81ULL] * 0.70710678118654757) + X[58ULL] *
            5.7735026918962578E-7) + X[61ULL] * -5.7735026918962578E-7) + X[4ULL])
    + X[82ULL];
  t222 = X[83ULL] + X[85ULL];
  t224 = -X[84ULL] + X[85ULL];
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
  Bow_Thrusters_Ideal_Torque_Source_S = -X[86ULL] + -X[91ULL];
  t18[0ULL] = X[94ULL];
  t18[1ULL] = X[95ULL];
  t18[2ULL] = X[96ULL];
  t18[3ULL] = (X[13ULL] * -0.05 + X[93ULL] * -0.010000000000000002) + 1.023;
  t18[4ULL] = X[97ULL];
  t18[5ULL] = X[98ULL];
  t18[6ULL] = X[99ULL];
  t18[7ULL] = X[100ULL];
  t18[8ULL] = X[101ULL];
  t18[9ULL] = X[102ULL];
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[t132] =
      t18[t132];
  }

  t273 = -pmf_sqrt
    (Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[7ULL] *
     Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[7ULL] +
     Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[8ULL] *
     Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[8ULL]);
  Diesel_generator_AVR_and_exciter_Terminal_Current_Measurement_p = t273 / -1.0;
  t274 = -pmf_sqrt
    (Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[4ULL] *
     Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[4ULL] +
     Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[5ULL] *
     Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[5ULL]);
  Diesel_generator_AVR_and_exciter_Terminal_Voltage_Measurement_p = t274 / -1.0;
  t240 = ((X[5ULL] * -0.57735026918962584 + X[103ULL] * 0.81649658092772615) +
          X[77ULL] * -5.7735026918962578E-7) + X[66ULL] * 5.7735026918962578E-7;
  t241 = (((X[5ULL] * -0.57735026918962584 + X[103ULL] * -0.408248290463863) +
           X[104ULL] * 0.70710678118654757) + X[77ULL] * -5.7735026918962578E-7)
    + X[66ULL] * 5.7735026918962578E-7;
  t242 = (((X[5ULL] * -0.57735026918962584 + X[103ULL] * -0.408248290463863) +
           X[104ULL] * -0.70710678118654757) + X[77ULL] * -5.7735026918962578E-7)
    + X[66ULL] * 5.7735026918962578E-7;
  t243 = X[105ULL] * 0.81649658092772615 + X[77ULL] * 0.57735026918962584;
  t244 = (X[105ULL] * -0.408248290463863 + X[106ULL] * 0.70710678118654757) + X
    [77ULL] * 0.57735026918962584;
  t245 = (X[105ULL] * -0.408248290463863 + X[106ULL] * -0.70710678118654757) +
    X[77ULL] * 0.57735026918962584;
  Diesel_generator_Diesel_Generator_Alternator_5MVA_efd = U_idx_2 *
    73.2868021772194;
  t272 = X[107ULL] * 1.8849572868678796E-5 + X[111ULL] * 1.8849572868678796E-5;
  t273 = (-X[13ULL] + X[93ULL] * -0.2) + 0.5;
  t274 = X[93ULL] * 0.2 + X[13ULL];
  Diesel_generator_Generator_and_governor_Governor_Delta_speed_I1 = (X[13ULL] *
    -0.05 + X[93ULL] * -0.010000000000000002) + 1.023;
  t18[0ULL] = X[117ULL];
  t18[1ULL] = X[118ULL];
  t18[2ULL] = X[119ULL];
  t18[3ULL] = (X[22ULL] * -0.05 + X[113ULL] * -0.005000000000000001) + 1.023;
  t18[4ULL] = X[120ULL];
  t18[5ULL] = X[121ULL];
  t18[6ULL] = X[122ULL];
  t18[7ULL] = X[114ULL];
  t18[8ULL] = X[115ULL];
  t18[9ULL] = X[116ULL];
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t132] =
      t18[t132];
  }

  t276 = -pmf_sqrt
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL]);
  Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_out = t276 / -1.0;
  Gas_turbine_Gas_Turbine_Alternator_30MVA_pu_i1d = -pmf_sqrt
    (Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] +
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL] *
     Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL]);
  t246 = ((X[0ULL] * -0.57735026918962584 + X[123ULL] * 0.81649658092772615) +
          X[54ULL] * -5.7735026918962578E-7) + X[57ULL] * 5.7735026918962578E-7;
  t247 = (((X[0ULL] * -0.57735026918962584 + X[123ULL] * -0.408248290463863) +
           X[124ULL] * 0.70710678118654757) + X[54ULL] * -5.7735026918962578E-7)
    + X[57ULL] * 5.7735026918962578E-7;
  t248 = (((X[0ULL] * -0.57735026918962584 + X[123ULL] * -0.408248290463863) +
           X[124ULL] * -0.70710678118654757) + X[54ULL] * -5.7735026918962578E-7)
    + X[57ULL] * 5.7735026918962578E-7;
  t249 = X[125ULL] * 0.81649658092772615 + X[54ULL] * 0.57735026918962584;
  t250 = (X[125ULL] * -0.408248290463863 + X[126ULL] * 0.70710678118654757) + X
    [54ULL] * 0.57735026918962584;
  t251 = (X[125ULL] * -0.408248290463863 + X[126ULL] * -0.70710678118654757) +
    X[54ULL] * 0.57735026918962584;
  t276 = U_idx_3 * 33.603492747539669;
  Gas_turbine_Turbine_and_governor_Governor_Delta_load_setpoint_I = (-X[22ULL] +
    X[113ULL] * -0.1) + 0.5;
  t278 = X[113ULL] * 0.1 + X[22ULL];
  Gas_turbine_Turbine_and_governor_Governor_Delta_speed_I1 = (X[22ULL] * -0.05 +
    X[113ULL] * -0.005000000000000001) + 1.023;
  t252 = (-X[75ULL] + X[64ULL] * 0.81649658092772615) + X[66ULL] *
    0.57735026918962584;
  t253 = ((-X[133ULL] + X[64ULL] * -0.408248290463863) + X[65ULL] *
          0.70710678118654757) + X[66ULL] * 0.57735026918962584;
  t254 = ((-X[76ULL] + X[64ULL] * -0.408248290463863) + X[65ULL] *
          -0.70710678118654757) + X[66ULL] * 0.57735026918962584;
  t255 = (X[75ULL] * -0.34670857988165682 + X[64ULL] * 0.28308637005168019) + X
    [66ULL] * 0.20017229192502745;
  t256 = ((X[133ULL] * -0.34670857988165682 + X[64ULL] * -0.1415431850258401) +
          X[65ULL] * 0.24515998792987737) + X[66ULL] * 0.20017229192502745;
  t257 = ((X[76ULL] * -0.34670857988165682 + X[64ULL] * -0.1415431850258401) +
          X[65ULL] * -0.24515998792987737) + X[66ULL] * 0.20017229192502745;
  t23[0ULL] = 0.0;
  t23[0ULL] += t255 * t255 * 2.8842666666666665;
  t23[0ULL] += t256 * t256 * 2.8842666666666665;
  t23[0ULL] += t257 * t257 * 2.8842666666666665;
  t280 = ((X[0ULL] * 0.57735026918962584 + X[54ULL] * 5.7735026918962578E-7) +
          X[55ULL] * 0.81649658092772615) + X[57ULL] * -5.7735026918962578E-7;
  Port_Aft_Cable_phase_splitter2_i_b = (((X[0ULL] * 0.57735026918962584 + X
    [54ULL] * 5.7735026918962578E-7) + X[55ULL] * -0.408248290463863) + X[56ULL]
    * 0.70710678118654757) + X[57ULL] * -5.7735026918962578E-7;
  Port_Aft_Cable_phase_splitter2_i_c = (((X[0ULL] * 0.57735026918962584 + X
    [54ULL] * 5.7735026918962578E-7) + X[55ULL] * -0.408248290463863) + X[56ULL]
    * -0.70710678118654757) + X[57ULL] * -5.7735026918962578E-7;
  Port_Aft_Cable_transmission_line_T1_i_zero = (-X[0ULL] + X[54ULL] * -1.0E-6) +
    X[57ULL] * 1.0E-6;
  Port_Forward_Cable_phase_splitter2_i_a = ((X[5ULL] * 0.57735026918962584 + X
    [77ULL] * 5.7735026918962578E-7) + X[78ULL] * 0.81649658092772615) + X[66ULL]
    * -5.7735026918962578E-7;
  Port_Forward_Cable_phase_splitter2_i_b = (((X[5ULL] * 0.57735026918962584 + X
    [77ULL] * 5.7735026918962578E-7) + X[78ULL] * -0.408248290463863) + X[79ULL]
    * 0.70710678118654757) + X[66ULL] * -5.7735026918962578E-7;
  Port_Forward_Cable_phase_splitter2_i_c = (((X[5ULL] * 0.57735026918962584 + X
    [77ULL] * 5.7735026918962578E-7) + X[78ULL] * -0.408248290463863) + X[79ULL]
    * -0.70710678118654757) + X[66ULL] * -5.7735026918962578E-7;
  Port_Forward_Cable_transmission_line_T1_i_zero = (-X[5ULL] + X[77ULL] *
    -1.0E-6) + X[66ULL] * 1.0E-6;
  Port_Mid_ship_Cable_phase_splitter1_i_a = ((X[1ULL] * -0.57735026918962584 +
    X[80ULL] * 0.81649658092772615) + X[58ULL] * -5.7735026918962578E-7) + X
    [61ULL] * 5.7735026918962578E-7;
  Port_Mid_ship_Cable_phase_splitter1_i_b = (((X[1ULL] * -0.57735026918962584 +
    X[80ULL] * -0.408248290463863) + X[81ULL] * 0.70710678118654757) + X[58ULL] *
    -5.7735026918962578E-7) + X[61ULL] * 5.7735026918962578E-7;
  Port_Mid_ship_Cable_phase_splitter1_i_c = (((X[1ULL] * -0.57735026918962584 +
    X[80ULL] * -0.408248290463863) + X[81ULL] * -0.70710678118654757) + X[58ULL]
    * -5.7735026918962578E-7) + X[61ULL] * 5.7735026918962578E-7;
  Port_Mid_ship_Cable_phase_splitter2_i_a = ((X[1ULL] * 0.57735026918962584 + X
    [58ULL] * 5.7735026918962578E-7) + X[59ULL] * 0.81649658092772615) + X[61ULL]
    * -5.7735026918962578E-7;
  Port_Mid_ship_Cable_phase_splitter2_i_b = (((X[1ULL] * 0.57735026918962584 +
    X[58ULL] * 5.7735026918962578E-7) + X[59ULL] * -0.408248290463863) + X[60ULL]
    * 0.70710678118654757) + X[61ULL] * -5.7735026918962578E-7;
  Port_Mid_ship_Cable_phase_splitter2_i_c = (((X[1ULL] * 0.57735026918962584 +
    X[58ULL] * 5.7735026918962578E-7) + X[59ULL] * -0.408248290463863) + X[60ULL]
    * -0.70710678118654757) + X[61ULL] * -5.7735026918962578E-7;
  Port_Mid_ship_Cable_transmission_line_T1_i_zero = (-X[1ULL] + X[58ULL] *
    -1.0E-6) + X[61ULL] * 1.0E-6;
  t1[0ULL] = U_idx_0;
  t1[1ULL] = X[51ULL];
  t1[2ULL] = X[52ULL];
  t1[3ULL] = X[53ULL];
  t1[4ULL] = -X[52ULL] + X[53ULL];
  t1[5ULL] = ((((((X[0ULL] * 0.57735026918962584 + X[1ULL] * 0.57735026918962584)
                  + X[54ULL] * 5.7735026918962578E-7) + X[55ULL] *
                 0.81649658092772615) + X[57ULL] * -5.7735026918962578E-7) + X
               [58ULL] * 5.7735026918962578E-7) + X[59ULL] * 0.81649658092772615)
    + X[61ULL] * -5.7735026918962578E-7;
  t1[6ULL] = ((((((((X[0ULL] * 0.57735026918962584 + X[1ULL] *
                     0.57735026918962584) + X[54ULL] * 5.7735026918962578E-7) +
                   X[55ULL] * -0.408248290463863) + X[56ULL] *
                  0.70710678118654757) + X[57ULL] * -5.7735026918962578E-7) + X
                [58ULL] * 5.7735026918962578E-7) + X[59ULL] * -0.408248290463863)
              + X[60ULL] * 0.70710678118654757) + X[61ULL] *
    -5.7735026918962578E-7;
  t1[7ULL] = ((((((((X[0ULL] * 0.57735026918962584 + X[1ULL] *
                     0.57735026918962584) + X[54ULL] * 5.7735026918962578E-7) +
                   X[55ULL] * -0.408248290463863) + X[56ULL] *
                  -0.70710678118654757) + X[57ULL] * -5.7735026918962578E-7) +
                X[58ULL] * 5.7735026918962578E-7) + X[59ULL] *
               -0.408248290463863) + X[60ULL] * -0.70710678118654757) + X[61ULL]
    * -5.7735026918962578E-7;
  t1[8ULL] = t210;
  t1[9ULL] = t211;
  t1[10ULL] = t212;
  t1[11ULL] = X[51ULL];
  t1[12ULL] = -X[51ULL];
  t1[13ULL] = X[52ULL];
  t1[14ULL] = X[53ULL];
  t1[15ULL] = t213;
  t1[16ULL] = t214;
  t1[17ULL] = t215;
  t1[18ULL] = 0.0;
  t1[19ULL] = t216;
  t1[20ULL] = t217;
  t1[21ULL] = t218;
  t1[22ULL] = 0.0;
  t1[23ULL] = 0.0;
  t1[24ULL] = 0.0;
  t1[25ULL] = (((-X[2ULL] + -X[3ULL]) + -X[4ULL]) + X[64ULL] *
               -1.0587911840678754E-22) + X[66ULL] * -1.7320508075688774E-6;
  t1[26ULL] = 0.0;
  t1[27ULL] = t216;
  t1[28ULL] = t217;
  t1[29ULL] = t218;
  t1[30ULL] = X[2ULL];
  t1[31ULL] = X[3ULL];
  t1[32ULL] = X[4ULL];
  t1[33ULL] = t213;
  t1[34ULL] = t214;
  t1[35ULL] = t215;
  t1[36ULL] = 0.0;
  t1[37ULL] = 0.0;
  t1[38ULL] = 0.0;
  t1[39ULL] = t213;
  t1[40ULL] = t214;
  t1[41ULL] = t215;
  t1[42ULL] = Base_Load_wye_impedance_power_dissipated * 1000.0;
  for (t132 = 0ULL; t132 < 8ULL; t132++) {
    t1[t132 + 43ULL] =
      Bow_Thrusters_Asynchronous_Machine_Measurement_pu_input[t132];
  }

  t1[51ULL] = X[67ULL];
  t1[52ULL] = 0.0;
  t1[53ULL] = t219;
  t1[54ULL] = t220;
  t1[55ULL] = X[82ULL];
  t1[56ULL] = 1.7986;
  t1[57ULL] = 1.841;
  t1[58ULL] = 1.841;
  t1[59ULL] = 1.8492;
  t1[60ULL] = t222;
  t1[61ULL] = X[85ULL];
  t1[62ULL] = t224;
  t1[63ULL] = X[85ULL];
  t1[64ULL] = t224;
  t1[65ULL] = t222;
  t1[66ULL] = X[7ULL];
  t1[67ULL] = X[83ULL];
  t1[68ULL] = X[84ULL];
  t1[69ULL] = -X[83ULL] + -X[84ULL];
  t1[70ULL] = X[6ULL] * 57.295779513082323;
  t1[71ULL] = X[6ULL];
  t1[72ULL] = X[86ULL];
  t1[73ULL] = X[7ULL];
  t1[74ULL] = X[8ULL] * 15.605482813389839;
  t1[75ULL] = X[9ULL] * 15.605482813389839;
  t1[76ULL] = 0.0;
  t1[77ULL] = 0.0;
  t1[78ULL] = X[10ULL] * 15.605482813389839;
  t1[79ULL] = X[11ULL] * 15.605482813389839;
  t1[80ULL] = 0.0;
  t1[81ULL] = 0.0;
  t1[82ULL] = X[12ULL] * 15.605482813389839;
  t1[83ULL] = 1.7562;
  t1[84ULL] = X[8ULL] * 10.75268817204301;
  t1[85ULL] = X[87ULL];
  t1[86ULL] = X[88ULL];
  t1[87ULL] = X[89ULL];
  t1[88ULL] = X[90ULL];
  for (t132 = 0ULL; t132 < 8ULL; t132++) {
    t1[t132 + 89ULL] =
      Bow_Thrusters_Asynchronous_Machine_Measurement_pu_input[t132];
  }

  t1[97ULL] = X[8ULL];
  t1[98ULL] = X[9ULL];
  t1[99ULL] = 0.0;
  t1[100ULL] = 0.0;
  t1[101ULL] = X[10ULL];
  t1[102ULL] = X[11ULL];
  t1[103ULL] = 0.0;
  t1[104ULL] = 0.0;
  t1[105ULL] = X[12ULL];
  t1[106ULL] = X[86ULL] * -7.5398223686155033E-5;
  t1[107ULL] = X[7ULL] * 0.013262911924324612;
  t1[108ULL] = t213;
  t1[109ULL] = t214;
  t1[110ULL] = t215;
  t1[111ULL] = t222;
  t1[112ULL] = X[85ULL];
  t1[113ULL] = t224;
  t1[114ULL] = Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i;
  t1[115ULL] = t213;
  t1[116ULL] = t222;
  t1[117ULL] = ((-X[85ULL] + -X[83ULL]) + X[64ULL] * 0.81649658092772615) + X
    [66ULL] * 0.57735026918962584;
  t1[118ULL] = U_idx_1;
  t1[119ULL] = (real_T)Q_idx_0;
  t1[120ULL] = Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i;
  t1[121ULL] = t214;
  t1[122ULL] = X[85ULL];
  t1[123ULL] = ((-X[85ULL] + X[64ULL] * -0.408248290463863) + X[65ULL] *
                0.70710678118654757) + X[66ULL] * 0.57735026918962584;
  t1[124ULL] = U_idx_1;
  t1[125ULL] = (real_T)Q_idx_1;
  t1[126ULL] = Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i;
  t1[127ULL] = t215;
  t1[128ULL] = t224;
  t1[129ULL] = (((-X[85ULL] + X[64ULL] * -0.408248290463863) + X[65ULL] *
                 -0.70710678118654757) + X[66ULL] * 0.57735026918962584) + X
    [84ULL];
  t1[130ULL] = U_idx_1;
  t1[131ULL] = (real_T)Q_idx_2;
  t1[132ULL] = Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i;
  t1[133ULL] = Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i;
  t1[134ULL] = Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i;
  t1[135ULL] = t213;
  t1[136ULL] = t214;
  t1[137ULL] = t215;
  t1[138ULL] = t213;
  t1[139ULL] = t214;
  t1[140ULL] = t215;
  t1[141ULL] = -Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i;
  t1[142ULL] = -Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i;
  t1[143ULL] = -Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i;
  t1[144ULL] = (((((((((X[5ULL] * -0.57735026918962584 + X[1ULL] *
                        0.57735026918962584) + X[75ULL] * -0.34670857988165682)
                      + X[64ULL] * 0.28308718654826109) + X[77ULL] *
                     -5.7735026918962578E-7) + X[78ULL] * -0.81649658092772615)
                   + X[66ULL] * 0.2001734466255658) + X[80ULL] *
                  -0.81649658092772615) + X[58ULL] * 5.7735026918962578E-7) + X
                [61ULL] * -5.7735026918962578E-7) + X[2ULL];
  t1[145ULL] = ((((((((((((((-X[2ULL] + -X[4ULL]) + X[5ULL] * 1.1547005383792517)
    + X[1ULL] * -1.1547005383792517) + X[75ULL] * 0.34670857988165682) + X[76ULL]
    * 0.34670857988165682) + X[64ULL] * -0.14154359327413055) + X[65ULL] *
                       0.24516069503665852) + X[77ULL] * 1.1547005383792516E-6)
                     + X[78ULL] * 0.40824829046386313) + X[79ULL] *
                    -0.70710678118654757) + X[66ULL] * -0.4003468932511316) + X
                  [80ULL] * 0.40824829046386313) + X[81ULL] *
                 -0.70710678118654757) + X[58ULL] * -1.1547005383792516E-6) + X
    [61ULL] * 1.1547005383792516E-6;
  t1[146ULL] = ((((((((((((X[5ULL] * -0.57735026918962584 + X[1ULL] *
    0.57735026918962584) + X[76ULL] * -0.34670857988165682) + X[64ULL] *
    -0.14154359327413055) + X[65ULL] * -0.24516069503665852) + X[77ULL] *
                       -5.7735026918962578E-7) + X[78ULL] * 0.408248290463863) +
                     X[79ULL] * 0.70710678118654757) + X[66ULL] *
                    0.2001734466255658) + X[80ULL] * 0.408248290463863) + X
                  [81ULL] * 0.70710678118654757) + X[58ULL] *
                 5.7735026918962578E-7) + X[61ULL] * -5.7735026918962578E-7) +
    X[4ULL];
  t1[147ULL] = t222;
  t1[148ULL] = X[85ULL];
  t1[149ULL] = t224;
  t1[150ULL] = t222;
  t1[151ULL] = X[85ULL];
  t1[152ULL] = t224;
  t1[153ULL] = Bow_Thrusters_Bow_Thurster_Breaker_breakerA_i;
  t1[154ULL] = Bow_Thrusters_Bow_Thurster_Breaker_breakerB_i;
  t1[155ULL] = Bow_Thrusters_Bow_Thurster_Breaker_breakerC_i;
  t1[156ULL] = U_idx_1;
  t1[157ULL] = t213;
  t1[158ULL] = t214;
  t1[159ULL] = t215;
  t1[160ULL] = X[7ULL];
  t1[161ULL] = 0.0;
  t1[162ULL] = Bow_Thrusters_Ideal_Torque_Source_S;
  t1[163ULL] = -Bow_Thrusters_Ideal_Torque_Source_S;
  t1[164ULL] = -X[7ULL] / -1.0;
  t1[165ULL] = X[7ULL];
  t1[166ULL] = X[91ULL];
  t1[167ULL] = X[7ULL];
  t1[168ULL] = 0.0;
  t1[169ULL] = t222;
  t1[170ULL] = X[85ULL];
  t1[171ULL] = t224;
  t1[172ULL] = X[85ULL];
  t1[173ULL] = t224;
  t1[174ULL] = t222;
  t1[175ULL] = -X[82ULL];
  t1[176ULL] = ((((((((((X[5ULL] * -0.57735026918962584 + X[1ULL] *
    0.57735026918962584) + -X[82ULL]) + X[75ULL] * -0.34670857988165682) + X
                      [64ULL] * 0.28308718654826109) + X[77ULL] *
                     -5.7735026918962578E-7) + X[78ULL] * -0.81649658092772615)
                   + X[66ULL] * 0.2001734466255658) + X[80ULL] *
                  -0.81649658092772615) + X[58ULL] * 5.7735026918962578E-7) + X
                [61ULL] * -5.7735026918962578E-7) + X[2ULL];
  t1[177ULL] = (((((((((((((-X[4ULL] + X[5ULL] * 0.57735026918962584) + X[1ULL] *
    -0.57735026918962584) + -X[82ULL]) + X[76ULL] * 0.34670857988165682) + X
                        [64ULL] * 0.14154359327413055) + X[65ULL] *
                       0.24516069503665852) + X[77ULL] * 5.7735026918962578E-7)
                     + X[78ULL] * -0.408248290463863) + X[79ULL] *
                    -0.70710678118654757) + X[66ULL] * -0.2001734466255658) + X
                  [80ULL] * -0.408248290463863) + X[81ULL] *
                 -0.70710678118654757) + X[58ULL] * -5.7735026918962578E-7) + X
    [61ULL] * 5.7735026918962578E-7;
  t1[178ULL] = t222;
  t1[179ULL] = X[85ULL];
  t1[180ULL] = t224;
  t1[181ULL] = t222;
  t1[182ULL] = X[85ULL];
  t1[183ULL] = t224;
  t1[184ULL] = X[82ULL];
  t1[185ULL] = t219;
  t1[186ULL] = t220;
  t1[187ULL] = t219;
  t1[188ULL] = t220;
  t1[189ULL] = X[82ULL];
  t1[190ULL] = X[85ULL];
  t1[191ULL] = t224;
  t1[192ULL] = t222;
  t1[193ULL] = X[85ULL];
  t1[194ULL] = t224;
  t1[195ULL] = t222;
  t1[196ULL] = -t219;
  t1[197ULL] = -t220;
  t1[198ULL] = -X[82ULL];
  t1[199ULL] = X[67ULL];
  t1[200ULL] = Bow_Thrusters_Ideal_Torque_Source_S;
  t1[201ULL] = 0.0;
  t1[202ULL] = U_idx_2;
  t1[203ULL] = 0.0;
  t1[204ULL] = X[92ULL];
  t1[205ULL] = 0.0;
  t1[206ULL] = U_idx_2 * 73.2868021772194;
  t1[207ULL] = X[92ULL] * -50.0;
  t1[208ULL] = X[92ULL] * 50.0;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 209ULL] =
      Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[t132];
  }

  t1[219ULL] =
    -((Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[4ULL] *
       Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[7ULL] +
       Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[5ULL] *
       Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[8ULL]) +
      Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[6ULL] *
      Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[9ULL] *
      2.0) / -1.0;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 220ULL] =
      Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[t132];
  }

  t1[230ULL] = Diesel_generator_AVR_and_exciter_Terminal_Current_Measurement_p;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 231ULL] =
      Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[t132];
  }

  t1[241ULL] = Diesel_generator_AVR_and_exciter_Terminal_Voltage_Measurement_p;
  t1[242ULL] = U_idx_2 * 73.2868021772194;
  t1[243ULL] = 0.0;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 244ULL] =
      Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[t132];
  }

  t1[254ULL] = 0.0;
  t1[255ULL] = t240;
  t1[256ULL] = t241;
  t1[257ULL] = t242;
  t1[258ULL] = 0.9;
  t1[259ULL] = 0.54999999999999993;
  t1[260ULL] = t243;
  t1[261ULL] = t244;
  t1[262ULL] = t245;
  t1[263ULL] = X[15ULL];
  t1[264ULL] = t243;
  t1[265ULL] = t244;
  t1[266ULL] = t245;
  t1[267ULL] = X[14ULL];
  t1[268ULL] = X[107ULL];
  t1[269ULL] = X[15ULL];
  t1[270ULL] = Diesel_generator_Diesel_Generator_Alternator_5MVA_efd;
  t1[271ULL] = 0.0;
  t1[272ULL] = U_idx_2 * 73.2868021772194;
  t1[273ULL] = ((X[5ULL] * 1.7320508075688776 + X[103ULL] *
                 -1.1102230246251565E-16) + X[77ULL] * 1.7320508075688776E-6) +
    X[66ULL] * -1.7320508075688776E-6;
  t1[274ULL] = X[92ULL] * 50.0;
  t1[275ULL] = 0.0;
  t1[276ULL] = Diesel_generator_Diesel_Generator_Alternator_5MVA_efd *
    0.013679548134489862;
  t1[277ULL] = X[92ULL];
  t1[278ULL] = X[17ULL] * -6.666666666666667;
  t1[279ULL] = (X[16ULL] * 0.91052187769581694 + X[92ULL] * -0.91052187769581716)
    + X[108ULL] * 0.81946968992623526;
  t1[280ULL] = X[109ULL];
  t1[281ULL] = X[108ULL];
  t1[282ULL] = X[110ULL];
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 283ULL] =
      Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[t132];
  }

  t1[293ULL] = X[17ULL];
  t1[294ULL] = X[16ULL];
  t1[295ULL] = X[18ULL];
  t1[296ULL] = X[19ULL];
  t1[297ULL] = X[20ULL];
  t1[298ULL] = X[21ULL];
  t1[299ULL] = X[107ULL] * 1.8849555921538758E-5;
  t1[300ULL] = X[15ULL] * 0.01061032953945969;
  t1[301ULL] = 0.0;
  t1[302ULL] = 0.0;
  t1[303ULL] = X[13ULL];
  t1[304ULL] = t272;
  t1[305ULL] = 0.5;
  t1[306ULL] = t273;
  t1[307ULL] = t274;
  t1[308ULL] = Diesel_generator_Generator_and_governor_Governor_Delta_speed_I1;
  t1[309ULL] = 0.998;
  t1[310ULL] = t273 * 0.05;
  t1[311ULL] = 0.5;
  t1[312ULL] = X[93ULL];
  t1[313ULL] = X[13ULL];
  t1[314ULL] = X[13ULL];
  t1[315ULL] = t274;
  t1[316ULL] = X[13ULL];
  t1[317ULL] = X[93ULL] * 0.2;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 318ULL] =
      Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[t132];
  }

  t1[328ULL] = Diesel_generator_Generator_and_governor_Governor_Delta_speed_I1;
  t1[329ULL] = 0.998;
  t1[330ULL] = X[13ULL];
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 331ULL] =
      Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[t132];
  }

  t1[341ULL] = X[93ULL] * 0.2;
  t1[342ULL] = X[93ULL];
  t1[343ULL] = t273 * 0.05;
  t1[344ULL] = t273;
  t1[345ULL] = 0.0;
  t1[346ULL] = X[15ULL];
  t1[347ULL] = t272 * 53051.6;
  t1[348ULL] = t272 * -53051.6;
  t1[349ULL] = X[15ULL] / -1.0;
  t1[350ULL] = 0.0;
  t1[351ULL] = X[15ULL];
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 352ULL] =
      Diesel_generator_AVR_and_exciter_Synchronous_Machine_Measureme0[t132];
  }

  t1[362ULL] = t272;
  t1[363ULL] = t272 * 53051.6;
  t1[364ULL] = X[15ULL];
  t1[365ULL] = X[111ULL];
  t1[366ULL] = X[15ULL];
  t1[367ULL] = t243;
  t1[368ULL] = t244;
  t1[369ULL] = t245;
  t1[370ULL] = 0.0;
  t1[371ULL] = 0.0;
  t1[372ULL] = 0.0;
  t1[373ULL] = 0.0;
  t1[374ULL] = 0.0;
  t1[375ULL] = 0.0;
  t1[376ULL] = 0.0;
  t1[377ULL] = 0.0;
  t1[378ULL] = 0.0;
  t1[379ULL] = U_idx_3;
  t1[380ULL] = 0.0;
  t1[381ULL] = X[112ULL];
  t1[382ULL] = 0.0;
  t1[383ULL] = U_idx_3 * 33.603492747539669;
  t1[384ULL] = X[112ULL] * -200.0;
  t1[385ULL] = X[112ULL] * 200.0;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 386ULL] =
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t132];
  }

  t1[396ULL] = Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_out;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 397ULL] =
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t132];
  }

  t1[407ULL] = Gas_turbine_Gas_Turbine_Alternator_30MVA_pu_i1d / -1.0;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 408ULL] =
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t132];
  }

  t1[418ULL] =
    -((Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[7ULL] *
       Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[4ULL] +
       Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[8ULL] *
       Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[5ULL]) +
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[6ULL] *
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[9ULL] *
      2.0) / -1.0;
  t1[419ULL] = U_idx_3 * 33.603492747539669;
  t1[420ULL] = 0.0;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 421ULL] =
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t132];
  }

  t1[431ULL] = 0.0;
  t1[432ULL] = 0.0;
  t1[433ULL] = t246;
  t1[434ULL] = t247;
  t1[435ULL] = t248;
  t1[436ULL] = 1.6600000000000001;
  t1[437ULL] = 1.61;
  t1[438ULL] = t249;
  t1[439ULL] = t250;
  t1[440ULL] = t251;
  t1[441ULL] = X[24ULL];
  t1[442ULL] = t249;
  t1[443ULL] = t250;
  t1[444ULL] = t251;
  t1[445ULL] = X[23ULL];
  t1[446ULL] = X[127ULL];
  t1[447ULL] = X[24ULL];
  t1[448ULL] = t276;
  t1[449ULL] = 0.0;
  t1[450ULL] = U_idx_3 * 33.603492747539669;
  t1[451ULL] = ((X[0ULL] * 1.7320508075688776 + X[123ULL] *
                 -1.1102230246251565E-16) + X[54ULL] * 1.7320508075688776E-6) +
    X[57ULL] * -1.7320508075688776E-6;
  t1[452ULL] = X[112ULL] * 200.0;
  t1[453ULL] = 0.0;
  t1[454ULL] = t276 * 0.029758811309077881;
  t1[455ULL] = X[112ULL];
  t1[456ULL] = X[27ULL] * -6.666666666666667;
  t1[457ULL] = (X[25ULL] * 0.60240963855421681 + X[112ULL] *
                -0.66346641236745907) + X[128ULL];
  t1[458ULL] = X[129ULL];
  t1[459ULL] = (X[26ULL] * 0.41357549880857991 + X[129ULL] *
                -0.66585655308181368) + X[130ULL] * 0.66585655308181368;
  t1[460ULL] = X[128ULL];
  t1[461ULL] = X[130ULL];
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 462ULL] =
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t132];
  }

  t1[472ULL] = X[27ULL];
  t1[473ULL] = X[28ULL];
  t1[474ULL] = X[29ULL];
  t1[475ULL] = X[26ULL];
  t1[476ULL] = X[30ULL];
  t1[477ULL] = X[25ULL];
  t1[478ULL] = X[31ULL];
  t1[479ULL] = X[127ULL] * 1.2566370614359172E-5;
  t1[480ULL] = X[24ULL] * 0.0026525823848649226;
  t1[481ULL] = X[24ULL];
  t1[482ULL] = X[131ULL];
  t1[483ULL] = X[24ULL];
  t1[484ULL] = 0.0;
  t1[485ULL] = X[132ULL];
  t1[486ULL] = X[32ULL];
  t1[487ULL] = X[32ULL];
  t1[488ULL] = X[22ULL];
  t1[489ULL] = X[32ULL];
  t1[490ULL] = X[132ULL] * 0.2;
  t1[491ULL] = X[22ULL];
  t1[492ULL] = X[32ULL];
  t1[493ULL] = X[132ULL] * 0.2;
  t1[494ULL] = X[132ULL];
  t1[495ULL] = 0.5;
  t1[496ULL] = Gas_turbine_Turbine_and_governor_Governor_Delta_load_setpoint_I;
  t1[497ULL] = t278;
  t1[498ULL] = Gas_turbine_Turbine_and_governor_Governor_Delta_speed_I1;
  t1[499ULL] = 0.998;
  t1[500ULL] = Gas_turbine_Turbine_and_governor_Governor_Delta_load_setpoint_I *
    0.05;
  t1[501ULL] = 0.5;
  t1[502ULL] = X[113ULL];
  t1[503ULL] = X[22ULL];
  t1[504ULL] = X[22ULL];
  t1[505ULL] = t278;
  t1[506ULL] = X[22ULL];
  t1[507ULL] = X[113ULL] * 0.1;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 508ULL] =
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t132];
  }

  t1[518ULL] = Gas_turbine_Turbine_and_governor_Governor_Delta_speed_I1;
  t1[519ULL] = 0.998;
  t1[520ULL] = X[22ULL];
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 521ULL] =
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t132];
  }

  t1[531ULL] = X[113ULL] * 0.1;
  t1[532ULL] = X[113ULL];
  t1[533ULL] = Gas_turbine_Turbine_and_governor_Governor_Delta_load_setpoint_I *
    0.05;
  t1[534ULL] = Gas_turbine_Turbine_and_governor_Governor_Delta_load_setpoint_I;
  t1[535ULL] = 0.0;
  t1[536ULL] = X[24ULL];
  t1[537ULL] = X[32ULL] * 79577.5;
  t1[538ULL] = X[32ULL] * -79577.5;
  t1[539ULL] = X[24ULL] / -1.0;
  t1[540ULL] = 0.0;
  t1[541ULL] = X[24ULL];
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 542ULL] =
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t132];
  }

  t1[552ULL] = X[32ULL];
  t1[553ULL] = X[32ULL] * 79577.5;
  for (t132 = 0ULL; t132 < 10ULL; t132++) {
    t1[t132 + 554ULL] =
      Gas_turbine_AVR_and_exciter_Terminal_Current_Measurement_pu_inp[t132];
  }

  t1[564ULL] = t249;
  t1[565ULL] = t250;
  t1[566ULL] = t251;
  t1[567ULL] = t252;
  t1[568ULL] = t253;
  t1[569ULL] = t254;
  t1[570ULL] = 0.0;
  t1[571ULL] = t255;
  t1[572ULL] = t256;
  t1[573ULL] = t257;
  t1[574ULL] = 0.0;
  t1[575ULL] = 0.0;
  t1[576ULL] = 0.0;
  t1[577ULL] = ((X[75ULL] * 0.34670857988165682 + X[133ULL] *
                 0.34670857988165682) + X[76ULL] * 0.34670857988165682) + X
    [66ULL] * -0.60051687577508228;
  t1[578ULL] = 0.0;
  t1[579ULL] = t255;
  t1[580ULL] = t256;
  t1[581ULL] = t257;
  t1[582ULL] = t252;
  t1[583ULL] = t253;
  t1[584ULL] = t254;
  t1[585ULL] = 0.0;
  t1[586ULL] = 0.0;
  t1[587ULL] = 0.0;
  t1[588ULL] = t255 * 2.8842666666666665;
  t1[589ULL] = t256 * 2.8842666666666665;
  t1[590ULL] = t257 * 2.8842666666666665;
  t1[591ULL] = -(t23[0ULL] * 0.001) / -1.0 * 1000.0;
  t1[592ULL] = t213;
  t1[593ULL] = t214;
  t1[594ULL] = t215;
  t1[595ULL] = t252;
  t1[596ULL] = t253;
  t1[597ULL] = t254;
  t1[598ULL] = t255;
  t1[599ULL] = t213;
  t1[600ULL] = t252;
  t1[601ULL] = X[75ULL];
  t1[602ULL] = U_idx_4;
  t1[603ULL] = (real_T)Q_idx_3;
  t1[604ULL] = t256;
  t1[605ULL] = t214;
  t1[606ULL] = t253;
  t1[607ULL] = X[133ULL];
  t1[608ULL] = U_idx_4;
  t1[609ULL] = (real_T)Q_idx_4;
  t1[610ULL] = t257;
  t1[611ULL] = t215;
  t1[612ULL] = t254;
  t1[613ULL] = X[76ULL];
  t1[614ULL] = U_idx_4;
  t1[615ULL] = (real_T)Q_idx_5;
  t1[616ULL] = t255;
  t1[617ULL] = t256;
  t1[618ULL] = t257;
  t1[619ULL] = t213;
  t1[620ULL] = t214;
  t1[621ULL] = t215;
  t1[622ULL] = t213;
  t1[623ULL] = t214;
  t1[624ULL] = t215;
  t1[625ULL] = -t255;
  t1[626ULL] = -t256;
  t1[627ULL] = -t257;
  t1[628ULL] = -t255;
  t1[629ULL] = -t256;
  t1[630ULL] = -t257;
  t1[631ULL] = t252;
  t1[632ULL] = t253;
  t1[633ULL] = t254;
  t1[634ULL] = t252;
  t1[635ULL] = t253;
  t1[636ULL] = t254;
  t1[637ULL] = t255;
  t1[638ULL] = t256;
  t1[639ULL] = t257;
  t1[640ULL] = U_idx_4;
  t1[641ULL] = t249;
  t1[642ULL] = t250;
  t1[643ULL] = t251;
  t1[644ULL] = t210;
  t1[645ULL] = t211;
  t1[646ULL] = t212;
  t1[647ULL] = 0.0;
  t1[648ULL] = 0.0;
  t1[649ULL] = -t246;
  t1[650ULL] = -t247;
  t1[651ULL] = -t248;
  t1[652ULL] = t249;
  t1[653ULL] = t250;
  t1[654ULL] = t251;
  t1[655ULL] = t249;
  t1[656ULL] = t250;
  t1[657ULL] = t251;
  t1[658ULL] = t246;
  t1[659ULL] = t247;
  t1[660ULL] = t248;
  t1[661ULL] = ((X[0ULL] * -0.57735026918962584 + X[54ULL] *
                 -5.7735026918962578E-7) + X[55ULL] * -0.81649658092772615) + X
    [57ULL] * 5.7735026918962578E-7;
  t1[662ULL] = (((X[0ULL] * -0.57735026918962584 + X[54ULL] *
                  -5.7735026918962578E-7) + X[55ULL] * 0.408248290463863) + X
                [56ULL] * -0.70710678118654757) + X[57ULL] *
    5.7735026918962578E-7;
  t1[663ULL] = (((X[0ULL] * -0.57735026918962584 + X[54ULL] *
                  -5.7735026918962578E-7) + X[55ULL] * 0.408248290463863) + X
                [56ULL] * 0.70710678118654757) + X[57ULL] *
    5.7735026918962578E-7;
  t1[664ULL] = t210;
  t1[665ULL] = t211;
  t1[666ULL] = t212;
  t1[667ULL] = t210;
  t1[668ULL] = t211;
  t1[669ULL] = t212;
  t1[670ULL] = t280;
  t1[671ULL] = Port_Aft_Cable_phase_splitter2_i_b;
  t1[672ULL] = Port_Aft_Cable_phase_splitter2_i_c;
  t1[673ULL] = ((-X[33ULL] + X[125ULL] * -1.0E-6) + X[62ULL] * 1.0E-6) + -X
    [123ULL];
  t1[674ULL] = 0.0;
  t1[675ULL] = X[125ULL];
  t1[676ULL] = X[125ULL];
  t1[677ULL] = X[34ULL];
  t1[678ULL] = ((X[125ULL] * 1.0E-6 + X[62ULL] * -1.0E-6) + -X[55ULL]) + X[33ULL];
  t1[679ULL] = 0.0;
  t1[680ULL] = X[62ULL];
  t1[681ULL] = X[62ULL];
  t1[682ULL] = X[35ULL];
  t1[683ULL] = ((-X[36ULL] + X[126ULL] * -1.0E-6) + X[63ULL] * 1.0E-6) + -X
    [124ULL];
  t1[684ULL] = 0.0;
  t1[685ULL] = X[126ULL];
  t1[686ULL] = X[126ULL];
  t1[687ULL] = X[37ULL];
  t1[688ULL] = ((X[126ULL] * 1.0E-6 + X[63ULL] * -1.0E-6) + -X[56ULL]) + X[36ULL];
  t1[689ULL] = 0.0;
  t1[690ULL] = X[63ULL];
  t1[691ULL] = X[63ULL];
  t1[692ULL] = X[38ULL];
  t1[693ULL] = t249;
  t1[694ULL] = X[125ULL];
  t1[695ULL] = t250;
  t1[696ULL] = X[126ULL];
  t1[697ULL] = t251;
  t1[698ULL] = -t246;
  t1[699ULL] = X[123ULL];
  t1[700ULL] = -t247;
  t1[701ULL] = X[124ULL];
  t1[702ULL] = -t248;
  t1[703ULL] = Port_Aft_Cable_transmission_line_T1_i_zero;
  t1[704ULL] = X[54ULL];
  t1[705ULL] = t210;
  t1[706ULL] = X[62ULL];
  t1[707ULL] = t211;
  t1[708ULL] = X[63ULL];
  t1[709ULL] = t212;
  t1[710ULL] = -t280;
  t1[711ULL] = X[55ULL];
  t1[712ULL] = -Port_Aft_Cable_phase_splitter2_i_b;
  t1[713ULL] = X[56ULL];
  t1[714ULL] = -Port_Aft_Cable_phase_splitter2_i_c;
  t1[715ULL] = -Port_Aft_Cable_transmission_line_T1_i_zero;
  t1[716ULL] = X[57ULL];
  t1[717ULL] = t249;
  t1[718ULL] = t210;
  t1[719ULL] = t250;
  t1[720ULL] = t211;
  t1[721ULL] = t251;
  t1[722ULL] = t212;
  t1[723ULL] = 0.0;
  t1[724ULL] = 0.0;
  t1[725ULL] = -Port_Aft_Cable_transmission_line_T1_i_zero;
  t1[726ULL] = X[57ULL];
  t1[727ULL] = X[54ULL];
  t1[728ULL] = -X[57ULL] + X[54ULL];
  t1[729ULL] = X[0ULL];
  t1[730ULL] = (X[125ULL] * 1.0E-6 + X[62ULL] * -1.0E-6) + X[33ULL];
  t1[731ULL] = X[62ULL];
  t1[732ULL] = X[125ULL];
  t1[733ULL] = -X[62ULL] + X[125ULL];
  t1[734ULL] = X[33ULL];
  t1[735ULL] = (X[126ULL] * 1.0E-6 + X[63ULL] * -1.0E-6) + X[36ULL];
  t1[736ULL] = X[63ULL];
  t1[737ULL] = X[126ULL];
  t1[738ULL] = -X[63ULL] + X[126ULL];
  t1[739ULL] = X[36ULL];
  t1[740ULL] = X[125ULL];
  t1[741ULL] = X[62ULL];
  t1[742ULL] = X[126ULL];
  t1[743ULL] = X[63ULL];
  t1[744ULL] = X[54ULL];
  t1[745ULL] = X[57ULL];
  t1[746ULL] = t243;
  t1[747ULL] = t244;
  t1[748ULL] = t245;
  t1[749ULL] = t213;
  t1[750ULL] = t214;
  t1[751ULL] = t215;
  t1[752ULL] = 0.0;
  t1[753ULL] = 0.0;
  t1[754ULL] = -t240;
  t1[755ULL] = -t241;
  t1[756ULL] = -t242;
  t1[757ULL] = t243;
  t1[758ULL] = t244;
  t1[759ULL] = t245;
  t1[760ULL] = t243;
  t1[761ULL] = t244;
  t1[762ULL] = t245;
  t1[763ULL] = t240;
  t1[764ULL] = t241;
  t1[765ULL] = t242;
  t1[766ULL] = ((X[5ULL] * -0.57735026918962584 + X[77ULL] *
                 -5.7735026918962578E-7) + X[78ULL] * -0.81649658092772615) + X
    [66ULL] * 5.7735026918962578E-7;
  t1[767ULL] = (((X[5ULL] * -0.57735026918962584 + X[77ULL] *
                  -5.7735026918962578E-7) + X[78ULL] * 0.408248290463863) + X
                [79ULL] * -0.70710678118654757) + X[66ULL] *
    5.7735026918962578E-7;
  t1[768ULL] = (((X[5ULL] * -0.57735026918962584 + X[77ULL] *
                  -5.7735026918962578E-7) + X[78ULL] * 0.408248290463863) + X
                [79ULL] * 0.70710678118654757) + X[66ULL] *
    5.7735026918962578E-7;
  t1[769ULL] = t213;
  t1[770ULL] = t214;
  t1[771ULL] = t215;
  t1[772ULL] = t213;
  t1[773ULL] = t214;
  t1[774ULL] = t215;
  t1[775ULL] = Port_Forward_Cable_phase_splitter2_i_a;
  t1[776ULL] = Port_Forward_Cable_phase_splitter2_i_b;
  t1[777ULL] = Port_Forward_Cable_phase_splitter2_i_c;
  t1[778ULL] = ((-X[39ULL] + X[105ULL] * -1.0E-6) + X[64ULL] * 1.0E-6) + -X
    [103ULL];
  t1[779ULL] = 0.0;
  t1[780ULL] = X[105ULL];
  t1[781ULL] = X[105ULL];
  t1[782ULL] = X[40ULL];
  t1[783ULL] = ((X[105ULL] * 1.0E-6 + X[64ULL] * -1.0E-6) + -X[78ULL]) + X[39ULL];
  t1[784ULL] = 0.0;
  t1[785ULL] = X[64ULL];
  t1[786ULL] = X[64ULL];
  t1[787ULL] = X[41ULL];
  t1[788ULL] = ((-X[42ULL] + X[106ULL] * -1.0E-6) + X[65ULL] * 1.0E-6) + -X
    [104ULL];
  t1[789ULL] = 0.0;
  t1[790ULL] = X[106ULL];
  t1[791ULL] = X[106ULL];
  t1[792ULL] = X[43ULL];
  t1[793ULL] = ((X[106ULL] * 1.0E-6 + X[65ULL] * -1.0E-6) + -X[79ULL]) + X[42ULL];
  t1[794ULL] = 0.0;
  t1[795ULL] = X[65ULL];
  t1[796ULL] = X[65ULL];
  t1[797ULL] = X[44ULL];
  t1[798ULL] = t243;
  t1[799ULL] = X[105ULL];
  t1[800ULL] = t244;
  t1[801ULL] = X[106ULL];
  t1[802ULL] = t245;
  t1[803ULL] = -t240;
  t1[804ULL] = X[103ULL];
  t1[805ULL] = -t241;
  t1[806ULL] = X[104ULL];
  t1[807ULL] = -t242;
  t1[808ULL] = Port_Forward_Cable_transmission_line_T1_i_zero;
  t1[809ULL] = X[77ULL];
  t1[810ULL] = t213;
  t1[811ULL] = X[64ULL];
  t1[812ULL] = t214;
  t1[813ULL] = X[65ULL];
  t1[814ULL] = t215;
  t1[815ULL] = -Port_Forward_Cable_phase_splitter2_i_a;
  t1[816ULL] = X[78ULL];
  t1[817ULL] = -Port_Forward_Cable_phase_splitter2_i_b;
  t1[818ULL] = X[79ULL];
  t1[819ULL] = -Port_Forward_Cable_phase_splitter2_i_c;
  t1[820ULL] = -Port_Forward_Cable_transmission_line_T1_i_zero;
  t1[821ULL] = X[66ULL];
  t1[822ULL] = t243;
  t1[823ULL] = t213;
  t1[824ULL] = t244;
  t1[825ULL] = t214;
  t1[826ULL] = t245;
  t1[827ULL] = t215;
  t1[828ULL] = 0.0;
  t1[829ULL] = 0.0;
  t1[830ULL] = -Port_Forward_Cable_transmission_line_T1_i_zero;
  t1[831ULL] = X[66ULL];
  t1[832ULL] = X[77ULL];
  t1[833ULL] = -X[66ULL] + X[77ULL];
  t1[834ULL] = X[5ULL];
  t1[835ULL] = (X[105ULL] * 1.0E-6 + X[64ULL] * -1.0E-6) + X[39ULL];
  t1[836ULL] = X[64ULL];
  t1[837ULL] = X[105ULL];
  t1[838ULL] = -X[64ULL] + X[105ULL];
  t1[839ULL] = X[39ULL];
  t1[840ULL] = (X[106ULL] * 1.0E-6 + X[65ULL] * -1.0E-6) + X[42ULL];
  t1[841ULL] = X[65ULL];
  t1[842ULL] = X[106ULL];
  t1[843ULL] = -X[65ULL] + X[106ULL];
  t1[844ULL] = X[42ULL];
  t1[845ULL] = X[105ULL];
  t1[846ULL] = X[64ULL];
  t1[847ULL] = X[106ULL];
  t1[848ULL] = X[65ULL];
  t1[849ULL] = X[77ULL];
  t1[850ULL] = X[66ULL];
  t1[851ULL] = t213;
  t1[852ULL] = t214;
  t1[853ULL] = t215;
  t1[854ULL] = t210;
  t1[855ULL] = t211;
  t1[856ULL] = t212;
  t1[857ULL] = 0.0;
  t1[858ULL] = 0.0;
  t1[859ULL] = ((X[1ULL] * 0.57735026918962584 + X[80ULL] * -0.81649658092772615)
                + X[58ULL] * 5.7735026918962578E-7) + X[61ULL] *
    -5.7735026918962578E-7;
  t1[860ULL] = (((X[1ULL] * 0.57735026918962584 + X[80ULL] * 0.408248290463863)
                 + X[81ULL] * -0.70710678118654757) + X[58ULL] *
                5.7735026918962578E-7) + X[61ULL] * -5.7735026918962578E-7;
  t1[861ULL] = (((X[1ULL] * 0.57735026918962584 + X[80ULL] * 0.408248290463863)
                 + X[81ULL] * 0.70710678118654757) + X[58ULL] *
                5.7735026918962578E-7) + X[61ULL] * -5.7735026918962578E-7;
  t1[862ULL] = t213;
  t1[863ULL] = t214;
  t1[864ULL] = t215;
  t1[865ULL] = t213;
  t1[866ULL] = t214;
  t1[867ULL] = t215;
  t1[868ULL] = Port_Mid_ship_Cable_phase_splitter1_i_a;
  t1[869ULL] = Port_Mid_ship_Cable_phase_splitter1_i_b;
  t1[870ULL] = Port_Mid_ship_Cable_phase_splitter1_i_c;
  t1[871ULL] = ((X[1ULL] * -0.57735026918962584 + X[58ULL] *
                 -5.7735026918962578E-7) + X[59ULL] * -0.81649658092772615) + X
    [61ULL] * 5.7735026918962578E-7;
  t1[872ULL] = (((X[1ULL] * -0.57735026918962584 + X[58ULL] *
                  -5.7735026918962578E-7) + X[59ULL] * 0.408248290463863) + X
                [60ULL] * -0.70710678118654757) + X[61ULL] *
    5.7735026918962578E-7;
  t1[873ULL] = (((X[1ULL] * -0.57735026918962584 + X[58ULL] *
                  -5.7735026918962578E-7) + X[59ULL] * 0.408248290463863) + X
                [60ULL] * 0.70710678118654757) + X[61ULL] *
    5.7735026918962578E-7;
  t1[874ULL] = t210;
  t1[875ULL] = t211;
  t1[876ULL] = t212;
  t1[877ULL] = t210;
  t1[878ULL] = t211;
  t1[879ULL] = t212;
  t1[880ULL] = Port_Mid_ship_Cable_phase_splitter2_i_a;
  t1[881ULL] = Port_Mid_ship_Cable_phase_splitter2_i_b;
  t1[882ULL] = Port_Mid_ship_Cable_phase_splitter2_i_c;
  t1[883ULL] = ((-X[45ULL] + X[134ULL] * -1.0E-6) + X[135ULL] * 1.0E-6) + -X
    [80ULL];
  t1[884ULL] = 0.0;
  t1[885ULL] = X[134ULL];
  t1[886ULL] = X[134ULL];
  t1[887ULL] = X[46ULL];
  t1[888ULL] = ((X[134ULL] * 1.0E-6 + X[135ULL] * -1.0E-6) + -X[59ULL]) + X
    [45ULL];
  t1[889ULL] = 0.0;
  t1[890ULL] = X[135ULL];
  t1[891ULL] = X[135ULL];
  t1[892ULL] = X[47ULL];
  t1[893ULL] = ((-X[48ULL] + X[136ULL] * -1.0E-6) + X[137ULL] * 1.0E-6) + -X
    [81ULL];
  t1[894ULL] = 0.0;
  t1[895ULL] = X[136ULL];
  t1[896ULL] = X[136ULL];
  t1[897ULL] = X[49ULL];
  t1[898ULL] = ((X[136ULL] * 1.0E-6 + X[137ULL] * -1.0E-6) + -X[60ULL]) + X
    [48ULL];
  t1[899ULL] = 0.0;
  t1[900ULL] = X[137ULL];
  t1[901ULL] = X[137ULL];
  t1[902ULL] = X[50ULL];
  t1[903ULL] = t213;
  t1[904ULL] = X[134ULL];
  t1[905ULL] = t214;
  t1[906ULL] = X[136ULL];
  t1[907ULL] = t215;
  t1[908ULL] = -Port_Mid_ship_Cable_phase_splitter1_i_a;
  t1[909ULL] = X[80ULL];
  t1[910ULL] = -Port_Mid_ship_Cable_phase_splitter1_i_b;
  t1[911ULL] = X[81ULL];
  t1[912ULL] = -Port_Mid_ship_Cable_phase_splitter1_i_c;
  t1[913ULL] = Port_Mid_ship_Cable_transmission_line_T1_i_zero;
  t1[914ULL] = X[58ULL];
  t1[915ULL] = t210;
  t1[916ULL] = X[135ULL];
  t1[917ULL] = t211;
  t1[918ULL] = X[137ULL];
  t1[919ULL] = t212;
  t1[920ULL] = -Port_Mid_ship_Cable_phase_splitter2_i_a;
  t1[921ULL] = X[59ULL];
  t1[922ULL] = -Port_Mid_ship_Cable_phase_splitter2_i_b;
  t1[923ULL] = X[60ULL];
  t1[924ULL] = -Port_Mid_ship_Cable_phase_splitter2_i_c;
  t1[925ULL] = -Port_Mid_ship_Cable_transmission_line_T1_i_zero;
  t1[926ULL] = X[61ULL];
  t1[927ULL] = t213;
  t1[928ULL] = t210;
  t1[929ULL] = t214;
  t1[930ULL] = t211;
  t1[931ULL] = t215;
  t1[932ULL] = t212;
  t1[933ULL] = 0.0;
  t1[934ULL] = 0.0;
  t1[935ULL] = -Port_Mid_ship_Cable_transmission_line_T1_i_zero;
  t1[936ULL] = X[61ULL];
  t1[937ULL] = X[58ULL];
  t1[938ULL] = -X[61ULL] + X[58ULL];
  t1[939ULL] = X[1ULL];
  t1[940ULL] = (X[134ULL] * 1.0E-6 + X[135ULL] * -1.0E-6) + X[45ULL];
  t1[941ULL] = X[135ULL];
  t1[942ULL] = X[134ULL];
  t1[943ULL] = -X[135ULL] + X[134ULL];
  t1[944ULL] = X[45ULL];
  t1[945ULL] = (X[136ULL] * 1.0E-6 + X[137ULL] * -1.0E-6) + X[48ULL];
  t1[946ULL] = X[137ULL];
  t1[947ULL] = X[136ULL];
  t1[948ULL] = -X[137ULL] + X[136ULL];
  t1[949ULL] = X[48ULL];
  t1[950ULL] = X[134ULL];
  t1[951ULL] = X[135ULL];
  t1[952ULL] = X[136ULL];
  t1[953ULL] = X[137ULL];
  t1[954ULL] = X[58ULL];
  t1[955ULL] = X[61ULL];
  for (b = 0; b < 956; b++) {
    out.mX[b] = t1[b];
  }

  (void)t0;
  (void)t282;
  return 0;
}
