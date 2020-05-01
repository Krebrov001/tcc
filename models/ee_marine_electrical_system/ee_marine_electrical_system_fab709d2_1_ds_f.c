/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_f.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_f(const NeDynamicSystem *t0,
  const NeDynamicSystemInput *t302, NeDsMethodOutput *t303)
{
  PmRealVector out;
  real_T Bow_Thrusters_Bow_Thrusters_V[3];
  real_T Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[3];
  real_T Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[3];
  real_T intrm_sf_mf_155;
  real_T piece14[10];
  real_T t6;
  real_T t7;
  real_T t8;
  boolean_T t11[2];
  real_T t12[138];
  real_T t31[8];
  real_T t32[8];
  real_T t33[1];
  real_T t40[10];
  real_T t41[10];
  real_T t50[10];
  real_T t143;
  real_T t144;
  real_T t145;
  real_T t146;
  real_T t148;
  real_T t155;
  real_T t156;
  real_T t158;
  real_T t159;
  real_T t170;
  real_T t171;
  real_T t174;
  real_T t177;
  real_T t183;
  real_T t184;
  real_T t185;
  real_T t189;
  real_T t191;
  real_T t192;
  real_T t195;
  real_T t197;
  real_T t198;
  real_T t199;
  real_T t208;
  real_T t212;
  real_T t214;
  real_T t224;
  real_T t232;
  real_T t236;
  real_T t246;
  real_T t247;
  real_T t248;
  real_T t252;
  real_T t256;
  real_T t263;
  real_T t264;
  real_T t265;
  real_T t282;
  real_T t283;
  real_T t295;
  real_T t298;
  real_T t299;
  real_T X[138];
  ETTS0 efOut;
  size_t _in1ivar;
  real_T b_efOut[1];
  int32_T b;
  real_T T_idx_0;
  real_T W_idx_0;
  int32_T M_idx_43;
  int32_T M_idx_45;
  int32_T M_idx_44;
  int32_T M_idx_42;
  real_T U_idx_0;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T Q_idx_3;
  int32_T Q_idx_4;
  int32_T Q_idx_5;
  int32_T M_idx_46;
  Q_idx_0 = t302->mQ.mX[0];
  Q_idx_1 = t302->mQ.mX[1];
  Q_idx_2 = t302->mQ.mX[2];
  Q_idx_3 = t302->mQ.mX[3];
  Q_idx_4 = t302->mQ.mX[4];
  Q_idx_5 = t302->mQ.mX[5];
  M_idx_42 = t302->mM.mX[42];
  M_idx_43 = t302->mM.mX[43];
  M_idx_44 = t302->mM.mX[44];
  M_idx_45 = t302->mM.mX[45];
  M_idx_46 = t302->mM.mX[46];
  T_idx_0 = t302->mT.mX[0];
  U_idx_0 = t302->mU.mX[0];
  for (b = 0; b < 138; b++) {
    X[b] = t302->mX.mX[b];
  }

  W_idx_0 = t302->mW.mX[0];
  out = t303->mF;
  t295 = -X[52ULL] + X[53ULL];
  t197 = X[62ULL] * 0.81649658092772615 + X[57ULL] * 0.57735026918962584;
  t198 = (X[62ULL] * -0.408248290463863 + X[63ULL] * 0.70710678118654757) + X
    [57ULL] * 0.57735026918962584;
  t199 = (X[62ULL] * -0.408248290463863 + X[63ULL] * -0.70710678118654757) + X
    [57ULL] * 0.57735026918962584;
  Bow_Thrusters_Bow_Thrusters_V[0ULL] = X[83ULL];
  Bow_Thrusters_Bow_Thrusters_V[1ULL] = X[84ULL];
  Bow_Thrusters_Bow_Thrusters_V[2ULL] = -X[83ULL] + -X[84ULL];
  t298 = (((((((((-X[2ULL] + X[5ULL] * 0.57735026918962584) + X[1ULL] *
                 -0.57735026918962584) + X[75ULL] * 0.34670857988165682) + X
               [64ULL] * -0.28308718654826109) + X[77ULL] *
              5.7735026918962578E-7) + X[78ULL] * 0.81649658092772615) + X[66ULL]
            * -0.2001734466255658) + X[80ULL] * 0.81649658092772615) + X[58ULL] *
          -5.7735026918962578E-7) + X[61ULL] * 5.7735026918962578E-7;
  t299 = ((-X[85ULL] + -X[83ULL]) + X[64ULL] * 0.81649658092772615) + X[66ULL] *
    0.57735026918962584;
  t6 = ((((((((((((((X[5ULL] * -1.1547005383792517 + X[1ULL] *
                     1.1547005383792517) + X[75ULL] * -0.34670857988165682) + X
                   [76ULL] * -0.34670857988165682) + X[64ULL] *
                  0.14154359327413055) + X[65ULL] * -0.24516069503665852) + X
                [77ULL] * -1.1547005383792516E-6) + X[78ULL] *
               -0.40824829046386313) + X[79ULL] * 0.70710678118654757) + X[66ULL]
             * 0.4003468932511316) + X[80ULL] * -0.40824829046386313) + X[81ULL]
           * 0.70710678118654757) + X[58ULL] * 1.1547005383792516E-6) + X[61ULL]
         * -1.1547005383792516E-6) + X[2ULL]) + X[4ULL];
  t7 = ((-X[85ULL] + X[64ULL] * -0.408248290463863) + X[65ULL] *
        0.70710678118654757) + X[66ULL] * 0.57735026918962584;
  t8 = ((((((((((((-X[4ULL] + X[5ULL] * 0.57735026918962584) + X[1ULL] *
                  -0.57735026918962584) + X[76ULL] * 0.34670857988165682) + X
                [64ULL] * 0.14154359327413055) + X[65ULL] * 0.24516069503665852)
              + X[77ULL] * 5.7735026918962578E-7) + X[78ULL] *
             -0.408248290463863) + X[79ULL] * -0.70710678118654757) + X[66ULL] *
           -0.2001734466255658) + X[80ULL] * -0.408248290463863) + X[81ULL] *
         -0.70710678118654757) + X[58ULL] * -5.7735026918962578E-7) + X[61ULL] *
    5.7735026918962578E-7;
  t283 = (((-X[85ULL] + X[64ULL] * -0.408248290463863) + X[65ULL] *
           -0.70710678118654757) + X[66ULL] * 0.57735026918962584) + X[84ULL];
  Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[0ULL] = X[105ULL] *
    0.81649658092772615 + X[77ULL] * 0.57735026918962584;
  Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[1ULL] = (X[105ULL] *
    -0.408248290463863 + X[106ULL] * 0.70710678118654757) + X[77ULL] *
    0.57735026918962584;
  Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[2ULL] = (X[105ULL] *
    -0.408248290463863 + X[106ULL] * -0.70710678118654757) + X[77ULL] *
    0.57735026918962584;
  Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[0ULL] = X[125ULL] *
    0.81649658092772615 + X[54ULL] * 0.57735026918962584;
  Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[1ULL] = (X[125ULL] *
    -0.408248290463863 + X[126ULL] * 0.70710678118654757) + X[54ULL] *
    0.57735026918962584;
  Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[2ULL] = (X[125ULL] *
    -0.408248290463863 + X[126ULL] * -0.70710678118654757) + X[54ULL] *
    0.57735026918962584;
  t246 = (X[75ULL] * -0.34670857988165682 + X[64ULL] * 0.28308637005168019) + X
    [66ULL] * 0.20017229192502745;
  t247 = ((X[133ULL] * -0.34670857988165682 + X[64ULL] * -0.1415431850258401) +
          X[65ULL] * 0.24515998792987737) + X[66ULL] * 0.20017229192502745;
  t224 = ((X[76ULL] * -0.34670857988165682 + X[64ULL] * -0.1415431850258401) +
          X[65ULL] * -0.24515998792987737) + X[66ULL] * 0.20017229192502745;
  t208 = ((t197 + t198) + t199) / 3.0;
  t263 = pmf_sqrt((((t197 - t198) * (t197 - t198) + (t198 - t199) * (t198 - t199))
                   + (t199 - t197) * (t199 - t197)) / 3.0);
  t264 = T_idx_0 * 376.99111843077515;
  intrm_sf_mf_155 = X[23ULL] + t264;
  t146 = cos(intrm_sf_mf_155) * 0.66666666666666663;
  T_idx_0 = cos(intrm_sf_mf_155 + -2.0943951023931953) * 0.66666666666666663;
  t148 = cos(intrm_sf_mf_155 + 2.0943951023931953) * 0.66666666666666663;
  t232 = -sin(intrm_sf_mf_155) * 0.66666666666666663;
  t236 = -sin(intrm_sf_mf_155 + -2.0943951023931953) * 0.66666666666666663;
  t191 = -sin(intrm_sf_mf_155 + 2.0943951023931953) * 0.66666666666666663;
  t252 = cos(intrm_sf_mf_155);
  t256 = -sin(intrm_sf_mf_155);
  t155 = cos(intrm_sf_mf_155 + -2.0943951023931953);
  t156 = -sin(intrm_sf_mf_155 + -2.0943951023931953);
  t158 = cos(intrm_sf_mf_155 + 2.0943951023931953);
  t159 = -sin(intrm_sf_mf_155 + 2.0943951023931953);
  intrm_sf_mf_155 = ((t146 * Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[0ULL]
                      + T_idx_0 * Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V
                      [1ULL]) + t148 *
                     Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[2ULL]) /
    3396.6257766593408;
  t143 = ((t232 * Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[0ULL] + t236 *
           Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[1ULL]) + t191 *
          Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[2ULL]) /
    3396.6257766593408;
  t144 = 1.0 - X[7ULL] * 0.013262911924324612;
  t282 = t263 * 1.3504744742356594;
  t248 = cos(t264) * 0.66666666666666663;
  t214 = cos(t264 + -2.0943951023931953) * 0.66666666666666663;
  t265 = cos(t264 + 2.0943951023931953) * 0.66666666666666663;
  t183 = -sin(t264) * 0.66666666666666663;
  t184 = -sin(t264 + -2.0943951023931953) * 0.66666666666666663;
  t185 = -sin(t264 + 2.0943951023931953) * 0.66666666666666663;
  t170 = cos(t264);
  t171 = -sin(t264);
  t232 = cos(t264 + -2.0943951023931953);
  t174 = -sin(t264 + -2.0943951023931953);
  t236 = cos(t264 + 2.0943951023931953);
  t177 = -sin(t264 + 2.0943951023931953);
  t145 = ((t248 * Bow_Thrusters_Bow_Thrusters_V[0ULL] + t214 *
           Bow_Thrusters_Bow_Thrusters_V[1ULL]) + t265 *
          Bow_Thrusters_Bow_Thrusters_V[2ULL]) / 5883.1284194720756;
  t146 = ((t183 * Bow_Thrusters_Bow_Thrusters_V[0ULL] + t184 *
           Bow_Thrusters_Bow_Thrusters_V[1ULL]) + t185 *
          Bow_Thrusters_Bow_Thrusters_V[2ULL]) / 5883.1284194720756;
  t148 = X[14ULL] * 4.0 + t264;
  t265 = cos(t148) * 0.66666666666666663;
  t183 = cos(t148 + -2.0943951023931953) * 0.66666666666666663;
  t184 = cos(t148 + 2.0943951023931953) * 0.66666666666666663;
  t185 = -sin(t148) * 0.66666666666666663;
  T_idx_0 = -sin(t148 + -2.0943951023931953) * 0.66666666666666663;
  t212 = -sin(t148 + 2.0943951023931953) * 0.66666666666666663;
  t214 = cos(t148);
  t189 = -sin(t148);
  t191 = cos(t148 + -2.0943951023931953);
  t192 = -sin(t148 + -2.0943951023931953);
  t248 = cos(t148 + 2.0943951023931953);
  t195 = -sin(t148 + 2.0943951023931953);
  t264 = ((t265 * Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[0ULL] +
           t183 * Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[1ULL]) +
          t184 * Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[2ULL]) /
    3396.6257766593408;
  t148 = ((t185 * Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[0ULL] +
           T_idx_0 * Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[1ULL])
          + t212 * Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[2ULL]) /
    3396.6257766593408;
  if (M_idx_45 != 0) {
    t212 = -(-(X[51ULL] * X[53ULL]) + X[51ULL] * X[52ULL]) * 0.001;
  } else {
    t212 = 0.0;
  }

  T_idx_0 = t263 * t263 / 346.112 * 0.001 + t212;
  if (M_idx_44 != 0) {
    t212 = t263 * t263 / (T_idx_0 == 0.0 ? 1.0E-16 : T_idx_0) * 0.001;
  } else {
    t212 = pmf_get_inf();
  }

  piece14[0] = 0.0;
  piece14[1] = 0.0;
  piece14[2] = 0.0;
  piece14[3] = 1.023;
  piece14[4] = 0.0;
  piece14[5] = 0.0;
  piece14[6] = 0.0;
  piece14[7] = 0.0;
  piece14[8] = 0.0;
  piece14[9] = 0.0;
  t33[0ULL] = X[67ULL];
  t11[0ULL] = (X[67ULL] < 0.0);
  t11[1ULL] = (X[67ULL] <= 2.0);
  _in1ivar = 21ULL;
  tlu2_akima_linear_prelookup((void *)&efOut.mField0, (void *)&efOut.mField1,
    (void *)&efOut.mField2, (void *)&efOut.mField3, (void *)&efOut.mField4,
    (void *)&efOut.mField5, (void *)((_NeDynamicSystem*)(t0))->mTable0, (void *)
    t33, (void *)t11, (void *)&_in1ivar);
  if (M_idx_42 != 0) {
    t263 = t295 - U_idx_0 * X[51ULL];
  } else {
    t263 = t295;
  }

  if (Q_idx_0 == 1) {
    t295 = t299 - t298 / 0.0001;
  } else {
    t295 = t299 - t298 * 0.001;
  }

  if (Q_idx_1 == 1) {
    t298 = t7 - t6 / 0.0001;
  } else {
    t298 = t7 - t6 * 0.001;
  }

  if (Q_idx_2 == 1) {
    t299 = t283 - t8 / 0.0001;
  } else {
    t299 = t283 - t8 * 0.001;
  }

  if (Q_idx_3 == 1) {
    t6 = X[75ULL] - t246 / 0.0001;
  } else {
    t6 = X[75ULL] - t246 * 0.001;
  }

  if (Q_idx_4 == 1) {
    t7 = X[133ULL] - t247 / 0.0001;
  } else {
    t7 = X[133ULL] - t247 * 0.001;
  }

  if (Q_idx_5 == 1) {
    t8 = X[76ULL] - t224 / 0.0001;
  } else {
    t8 = X[76ULL] - t224 * 0.001;
  }

  t11[0ULL] = (X[67ULL] < 0.0);
  t11[1ULL] = (X[67ULL] <= 2.0);
  t247 = X[8ULL] * 10.75268817204301;
  t224 = (t170 * X[88ULL] * 113.31839442092108 + t171 * X[90ULL] *
          113.31839442092108) + t247 * 113.31839442092108;
  T_idx_0 = (t232 * X[88ULL] * 113.31839442092108 + t174 * X[90ULL] *
             113.31839442092108) + t247 * 113.31839442092108;
  t232 = (t236 * X[88ULL] * 113.31839442092108 + t177 * X[90ULL] *
          113.31839442092108) + t247 * 113.31839442092108;
  t31[0ULL] = 0.0;
  t31[1ULL] = 0.0;
  t31[2ULL] = t145;
  t31[3ULL] = t146;
  t31[4ULL] = 0.0;
  t31[5ULL] = 0.0;
  t31[6ULL] = 0.0;
  t31[7ULL] = 0.0;
  t32[0] = 1.0;
  t32[1] = 1.0;
  t32[2] = 1.0;
  t32[3] = 1.0;
  t32[4] = 1.0;
  t32[5] = 1.0;
  t32[6] = 1.0;
  t32[7] = 10.75268817204301;
  _in1ivar = 21ULL;
  tlu2_1d_akima_linear_value((void *)&b_efOut, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)efOut.mField3, (void *)
    efOut.mField4, (void *)efOut.mField5, (void *)((_NeDynamicSystem*)(t0))
    ->mTable1, (void *)((_NeDynamicSystem*)(t0))->mTable2, (void *)t11, (void *)
    &_in1ivar);
  t247 = X[17ULL] * -6.666666666666667;
  t236 = (t214 * X[108ULL] * -981.36608284582462 + t189 * X[110ULL] *
          -981.36608284582462) + t247 * -981.36608284582462;
  t214 = (t191 * X[108ULL] * -981.36608284582462 + t192 * X[110ULL] *
          -981.36608284582462) + t247 * -981.36608284582462;
  t191 = (t248 * X[108ULL] * -981.36608284582462 + t195 * X[110ULL] *
          -981.36608284582462) + t247 * -981.36608284582462;
  t40[0] = 1.0;
  t40[1] = 1.0;
  t40[2] = 1.0;
  t40[3] = 1.0;
  t40[4] = 1.0;
  t40[5] = 1.0;
  t40[6] = 1.0;
  t40[7] = 1.0;
  t40[8] = 1.0;
  t40[9] = 6.666666666666667;
  t41[0ULL] = 0.0;
  t41[1ULL] = 0.0;
  t41[2ULL] = 0.0;
  t41[3ULL] = 0.0;
  t41[4ULL] = t264;
  t41[5ULL] = t148;
  t41[6ULL] = 0.0;
  t41[7ULL] = 0.0;
  t41[8ULL] = 0.0;
  t41[9ULL] = 0.0;
  t247 = X[27ULL] * -6.666666666666667;
  t50[0ULL] = 0.0;
  t50[1ULL] = 0.0;
  t50[2ULL] = 0.0;
  t50[3ULL] = 0.0;
  t50[4ULL] = intrm_sf_mf_155;
  t50[5ULL] = t143;
  t50[6ULL] = 0.0;
  t50[7ULL] = 0.0;
  t50[8ULL] = 0.0;
  t50[9ULL] = 0.0;
  t12[0ULL] = 0.0;
  t12[1ULL] = 0.0;
  t12[2ULL] = 0.0;
  t12[3ULL] = 75.398223686155035;
  t12[4ULL] = -t145;
  t12[5ULL] = -t146;
  t12[6ULL] = -0.0;
  t12[7ULL] = -(X[11ULL] * t144);
  t12[8ULL] = X[9ULL] * t144;
  t12[9ULL] = -0.0;
  t12[10ULL] = -((t264 - (-(X[15ULL] * X[21ULL] * 0.01061032953945969))) / 0.011);
  t12[11ULL] = -((t148 - X[15ULL] * X[19ULL] * 0.01061032953945969) / 0.011);
  t12[12ULL] = -0.0;
  t12[13ULL] = -0.0;
  t12[14ULL] = -0.0;
  t12[15ULL] = -0.0;
  t12[16ULL] = 94.247779607693786;
  t12[17ULL] = -0.0;
  t12[18ULL] = -0.0;
  t12[19ULL] = -((intrm_sf_mf_155 - (-(X[24ULL] * X[31ULL] *
    0.0026525823848649226))) / 0.003);
  t12[20ULL] = -((t143 - X[24ULL] * X[30ULL] * 0.0026525823848649226) / 0.003);
  t12[21ULL] = -0.0;
  t12[22ULL] = -0.0;
  t12[23ULL] = -0.0;
  t12[24ULL] = -0.0;
  t12[25ULL] = -0.0;
  t12[26ULL] = 376.99111843077515;
  t12[27ULL] = -0.0;
  t12[28ULL] = -0.0;
  t12[29ULL] = -0.0;
  t12[30ULL] = -0.0;
  t12[31ULL] = -0.0;
  t12[32ULL] = -0.0;
  t12[33ULL] = -0.0;
  t12[34ULL] = -0.0;
  t12[35ULL] = -0.0;
  t12[36ULL] = -0.0;
  t12[37ULL] = -0.0;
  t12[38ULL] = -0.0;
  t12[39ULL] = -0.0;
  t12[40ULL] = -0.0;
  t12[41ULL] = -0.0;
  t12[42ULL] = -0.0;
  t12[43ULL] = -0.0;
  t12[44ULL] = -0.0;
  t12[45ULL] = -0.0;
  t12[46ULL] = -0.0;
  t12[47ULL] = -0.0;
  t12[48ULL] = -0.0;
  t12[49ULL] = -0.0;
  t12[50ULL] = -0.0;
  t12[51ULL] = t263;
  t12[52ULL] = -(-(X[51ULL] * (M_idx_43 != 0 ? 0.0 : 1.0E+9)) + t282) / 1.0E+9;
  t12[53ULL] = t282 / 2.0;
  t12[54ULL] = -((t197 - t208) / (t212 == 0.0 ? 1.0E-16 : t212));
  t12[55ULL] = -((t198 - t208) / (t212 == 0.0 ? 1.0E-16 : t212));
  t12[56ULL] = -((t199 - t208) / (t212 == 0.0 ? 1.0E-16 : t212));
  t12[57ULL] = -t224 / 1218.4773593647428;
  t12[58ULL] = -T_idx_0 / 1218.4773593647428;
  t12[59ULL] = -t232 / 1218.4773593647428;
  t12[60ULL] = 0.0;
  t12[61ULL] = 0.0;
  t12[62ULL] = 0.0;
  t12[63ULL] = 0.0;
  t12[64ULL] = -(X[90ULL] * X[10ULL] - X[88ULL] * X[12ULL]) /
    7.5398223686155033E-5;
  for (_in1ivar = 0ULL; _in1ivar < 8ULL; _in1ivar++) {
    t12[_in1ivar + 65ULL] = -t31[_in1ivar] / (t32[_in1ivar] == 0.0 ? 1.0E-16 :
      t32[_in1ivar]);
  }

  t12[73ULL] = t295 / 10000.0;
  t12[74ULL] = t298 / 10000.0;
  t12[75ULL] = t299 / 10000.0;
  t12[76ULL] = -b_efOut[0];
  t12[77ULL] = -t236 / 6542.4405523054975;
  t12[78ULL] = -t214 / 6542.4405523054975;
  t12[79ULL] = -t191 / 6542.4405523054975;
  t12[80ULL] = 0.0;
  t12[81ULL] = 0.0;
  t12[82ULL] = 0.0;
  t12[83ULL] = 0.0;
  t12[84ULL] = -(X[110ULL] * X[19ULL] - X[108ULL] * X[21ULL]) /
    0.95100936210395381;
  for (_in1ivar = 0ULL; _in1ivar < 10ULL; _in1ivar++) {
    t12[_in1ivar + 85ULL] = piece14[_in1ivar] / (t40[_in1ivar] == 0.0 ? 1.0E-16 :
      t40[_in1ivar]) + -t41[_in1ivar] / (t40[_in1ivar] == 0.0 ? 1.0E-16 :
      t40[_in1ivar]);
  }

  t12[95ULL] = -(M_idx_46 != 0 ? 0.502754 : W_idx_0);
  t12[96ULL] = -((t252 * X[128ULL] * -5888.1964970749477 + t256 * X[130ULL] *
                  -5888.1964970749477) + t247 * -5888.1964970749477) /
    39254.643313832988;
  t12[97ULL] = -((t155 * X[128ULL] * -5888.1964970749477 + t156 * X[130ULL] *
                  -5888.1964970749477) + t247 * -5888.1964970749477) /
    39254.643313832988;
  t12[98ULL] = -((t158 * X[128ULL] * -5888.1964970749477 + t159 * X[130ULL] *
                  -5888.1964970749477) + t247 * -5888.1964970749477) /
    39254.643313832988;
  t12[99ULL] = 0.0;
  t12[100ULL] = 0.0;
  t12[101ULL] = 0.0;
  t12[102ULL] = 0.0;
  t12[103ULL] = -(X[130ULL] * X[30ULL] - X[128ULL] * X[31ULL]) /
    0.76349933336243758;
  for (_in1ivar = 0ULL; _in1ivar < 10ULL; _in1ivar++) {
    t12[_in1ivar + 104ULL] = piece14[_in1ivar] / (t40[_in1ivar] == 0.0 ? 1.0E-16
      : t40[_in1ivar]) + -t50[_in1ivar] / (t40[_in1ivar] == 0.0 ? 1.0E-16 :
      t40[_in1ivar]);
  }

  t12[114ULL] = 0.0;
  t12[115ULL] = -0.0;
  t12[116ULL] = t6 / 10000.0;
  t12[117ULL] = t7 / 10000.0;
  t12[118ULL] = t8 / 10000.0;
  t12[119ULL] = 0.0;
  t12[120ULL] = 0.0;
  t12[121ULL] = 0.0;
  t12[122ULL] = 0.0;
  t12[123ULL] = 0.0;
  t12[124ULL] = 0.0;
  t12[125ULL] = 0.0;
  t12[126ULL] = 0.0;
  t12[127ULL] = 0.0;
  t12[128ULL] = 0.0;
  t12[129ULL] = 0.0;
  t12[130ULL] = 0.0;
  t12[131ULL] = 0.0;
  t12[132ULL] = 0.0;
  t12[133ULL] = 0.0;
  t12[134ULL] = 0.0;
  t12[135ULL] = 0.0;
  t12[136ULL] = 0.0;
  t12[137ULL] = -0.0;
  for (b = 0; b < 138; b++) {
    out.mX[b] = t12[b];
  }

  (void)t0;
  (void)t303;
  return 0;
}
