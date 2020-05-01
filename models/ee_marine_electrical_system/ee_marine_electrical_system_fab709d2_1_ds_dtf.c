/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dtf.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_dtf(const NeDynamicSystem *t0,
  const NeDynamicSystemInput *t356, NeDsMethodOutput *t357)
{
  PmRealVector out;
  real_T Bow_Thrusters_Bow_Thrusters_V[3];
  real_T Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[3];
  real_T Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[3];
  real_T t1[43];
  real_T t41[8];
  real_T t42[8];
  real_T t58[10];
  real_T t59[10];
  real_T t61[3];
  real_T t70[3];
  real_T t72[3];
  real_T t75[10];
  size_t t124;
  real_T t195;
  real_T t196;
  real_T t250;
  real_T t261;
  real_T t262;
  real_T t263;
  real_T t267;
  real_T t269;
  real_T t270;
  real_T t272;
  real_T t273;
  real_T t275;
  real_T t276;
  real_T t284;
  real_T t286;
  real_T t287;
  real_T t289;
  real_T t292;
  real_T t293;
  real_T t299;
  real_T t304;
  real_T t309;
  real_T t327;
  real_T t331;
  real_T t339;
  real_T t343;
  real_T t348;
  real_T t355;
  real_T X[138];
  int32_T b;
  real_T T_idx_0;
  (void)t0;
  T_idx_0 = t356->mT.mX[0];
  for (b = 0; b < 138; b++) {
    X[b] = t356->mX.mX[b];
  }

  out = t357->mDTF;
  Bow_Thrusters_Bow_Thrusters_V[0ULL] = X[83ULL];
  Bow_Thrusters_Bow_Thrusters_V[1ULL] = X[84ULL];
  Bow_Thrusters_Bow_Thrusters_V[2ULL] = -X[83ULL] + -X[84ULL];
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
  T_idx_0 *= 376.99111843077515;
  t261 = X[23ULL] + T_idx_0;
  t262 = t261;
  t263 = t261 + -2.0943951023931953;
  t348 = t261 + 2.0943951023931953;
  t261 = X[14ULL] * 4.0 + T_idx_0;
  t343 = t261;
  t309 = t261 + -2.0943951023931953;
  t327 = t261 + 2.0943951023931953;
  t331 = -sin(t262) * 376.99111843077515 * 0.66666666666666663;
  t250 = -sin(t263) * 376.99111843077515 * 0.66666666666666663;
  t339 = -sin(t348) * 376.99111843077515 * 0.66666666666666663;
  t304 = -(cos(t262) * 376.99111843077515) * 0.66666666666666663;
  t355 = -(cos(t263) * 376.99111843077515) * 0.66666666666666663;
  t286 = -(cos(t348) * 376.99111843077515) * 0.66666666666666663;
  t269 = -sin(t262) * 376.99111843077515;
  t270 = -(cos(t262) * 376.99111843077515);
  t272 = -sin(t263) * 376.99111843077515;
  t273 = -(cos(t263) * 376.99111843077515);
  t275 = -sin(t348) * 376.99111843077515;
  t276 = -(cos(t348) * 376.99111843077515);
  t261 = ((Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[0ULL] * t331 +
           Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[1ULL] * t250) +
          Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[2ULL] * t339) *
    0.00029440982485374735;
  t195 = ((Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[0ULL] * t304 +
           Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[1ULL] * t355) +
          Gas_turbine_Gas_Turbine_Alternator_30MVA_N_V[2ULL] * t286) *
    0.00029440982485374735;
  t348 = -sin(T_idx_0) * 376.99111843077515 * 0.66666666666666663;
  t331 = -sin(T_idx_0 + -2.0943951023931953) * 376.99111843077515 *
    0.66666666666666663;
  t250 = -sin(T_idx_0 + 2.0943951023931953) * 376.99111843077515 *
    0.66666666666666663;
  t339 = -(cos(T_idx_0) * 376.99111843077515) * 0.66666666666666663;
  t304 = -(cos(T_idx_0 + -2.0943951023931953) * 376.99111843077515) *
    0.66666666666666663;
  t355 = -(cos(T_idx_0 + 2.0943951023931953) * 376.99111843077515) *
    0.66666666666666663;
  t286 = -sin(T_idx_0) * 376.99111843077515;
  t287 = -(cos(T_idx_0) * 376.99111843077515);
  t289 = -sin(T_idx_0 + -2.0943951023931953) * 376.99111843077515;
  t284 = -(cos(T_idx_0 + -2.0943951023931953) * 376.99111843077515);
  t292 = -sin(T_idx_0 + 2.0943951023931953) * 376.99111843077515;
  t293 = -(cos(T_idx_0 + 2.0943951023931953) * 376.99111843077515);
  t196 = ((Bow_Thrusters_Bow_Thrusters_V[0ULL] * t348 +
           Bow_Thrusters_Bow_Thrusters_V[1ULL] * t331) +
          Bow_Thrusters_Bow_Thrusters_V[2ULL] * t250) * 0.00016997759163138161;
  t262 = ((Bow_Thrusters_Bow_Thrusters_V[0ULL] * t339 +
           Bow_Thrusters_Bow_Thrusters_V[1ULL] * t304) +
          Bow_Thrusters_Bow_Thrusters_V[2ULL] * t355) * 0.00016997759163138161;
  t348 = -sin(t343) * 376.99111843077515 * 0.66666666666666663;
  T_idx_0 = -sin(t309) * 376.99111843077515 * 0.66666666666666663;
  t263 = -sin(t327) * 376.99111843077515 * 0.66666666666666663;
  t267 = -(cos(t343) * 376.99111843077515) * 0.66666666666666663;
  t331 = -(cos(t309) * 376.99111843077515) * 0.66666666666666663;
  t250 = -(cos(t327) * 376.99111843077515) * 0.66666666666666663;
  t339 = -sin(t343) * 376.99111843077515;
  t304 = -(cos(t343) * 376.99111843077515);
  t343 = -sin(t309) * 376.99111843077515;
  t355 = -(cos(t309) * 376.99111843077515);
  t309 = -sin(t327) * 376.99111843077515;
  t299 = -(cos(t327) * 376.99111843077515);
  T_idx_0 = ((Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[0ULL] * t348
              + Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[1ULL] *
              T_idx_0) + Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V
             [2ULL] * t263) * 0.00029440982485374735;
  t263 = ((Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[0ULL] * t267 +
           Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[1ULL] * t331) +
          Diesel_generator_Diesel_Generator_Alternator_5MVA_N_V[2ULL] * t250) *
    0.00029440982485374735;
  t70[0ULL] = X[88ULL];
  t61[1ULL] = X[90ULL];
  t72[2ULL] = X[8ULL] * 10.75268817204301;
  t267 = (t70[0ULL] * t286 * 113.31839442092108 + t61[1ULL] * t287 *
          113.31839442092108) + t72[2ULL] * 0.0 * 113.31839442092108;
  t70[0ULL] = X[88ULL];
  t61[1ULL] = X[90ULL];
  t72[2ULL] = X[8ULL] * 10.75268817204301;
  t327 = (t70[0ULL] * t289 * 113.31839442092108 + t61[1ULL] * t284 *
          113.31839442092108) + t72[2ULL] * 0.0 * 113.31839442092108;
  t70[0ULL] = X[88ULL];
  t61[1ULL] = X[90ULL];
  t72[2ULL] = X[8ULL] * 10.75268817204301;
  t331 = (t70[0ULL] * t292 * 113.31839442092108 + t61[1ULL] * t293 *
          113.31839442092108) + t72[2ULL] * 0.0 * 113.31839442092108;
  t41[0ULL] = 0.0;
  t41[1ULL] = 0.0;
  t41[2ULL] = t196;
  t41[3ULL] = t262;
  t41[4ULL] = 0.0;
  t41[5ULL] = 0.0;
  t41[6ULL] = 0.0;
  t41[7ULL] = 0.0;
  t42[0] = 1.0;
  t42[1] = 1.0;
  t42[2] = 1.0;
  t42[3] = 1.0;
  t42[4] = 1.0;
  t42[5] = 1.0;
  t42[6] = 1.0;
  t42[7] = 0.093;
  t70[0ULL] = X[108ULL];
  t61[1ULL] = X[110ULL];
  t72[2ULL] = X[17ULL] * -6.666666666666667;
  t250 = (t70[0ULL] * t339 * -981.36608284582462 + t61[1ULL] * t304 *
          -981.36608284582462) + t72[2ULL] * 0.0 * -981.36608284582462;
  t70[0ULL] = X[108ULL];
  t61[1ULL] = X[110ULL];
  t72[2ULL] = X[17ULL] * -6.666666666666667;
  t339 = (t70[0ULL] * t343 * -981.36608284582462 + t61[1ULL] * t355 *
          -981.36608284582462) + t72[2ULL] * 0.0 * -981.36608284582462;
  t70[0ULL] = X[108ULL];
  t61[1ULL] = X[110ULL];
  t72[2ULL] = X[17ULL] * -6.666666666666667;
  t343 = (t70[0ULL] * t309 * -981.36608284582462 + t61[1ULL] * t299 *
          -981.36608284582462) + t72[2ULL] * 0.0 * -981.36608284582462;
  t58[0ULL] = 0.0;
  t58[1ULL] = 0.0;
  t58[2ULL] = 0.0;
  t58[3ULL] = 0.0;
  t58[4ULL] = T_idx_0;
  t58[5ULL] = t263;
  t58[6ULL] = 0.0;
  t58[7ULL] = 0.0;
  t58[8ULL] = 0.0;
  t58[9ULL] = 0.0;
  t59[0] = 1.0;
  t59[1] = 1.0;
  t59[2] = 1.0;
  t59[3] = 1.0;
  t59[4] = 1.0;
  t59[5] = 1.0;
  t59[6] = 1.0;
  t59[7] = 1.0;
  t59[8] = 1.0;
  t59[9] = 0.15;
  t70[0ULL] = X[128ULL];
  t61[1ULL] = X[130ULL];
  t72[2ULL] = X[27ULL] * -6.666666666666667;
  t309 = (t70[0ULL] * t269 * -5888.1964970749477 + t61[1ULL] * t270 *
          -5888.1964970749477) + t72[2ULL] * 0.0 * -5888.1964970749477;
  t70[0ULL] = X[128ULL];
  t61[1ULL] = X[130ULL];
  t72[2ULL] = X[27ULL] * -6.666666666666667;
  t304 = (t70[0ULL] * t272 * -5888.1964970749477 + t61[1ULL] * t273 *
          -5888.1964970749477) + t72[2ULL] * 0.0 * -5888.1964970749477;
  t70[0ULL] = X[128ULL];
  t61[1ULL] = X[130ULL];
  t72[2ULL] = X[27ULL] * -6.666666666666667;
  t75[0ULL] = 0.0;
  t75[1ULL] = 0.0;
  t75[2ULL] = 0.0;
  t75[3ULL] = 0.0;
  t75[4ULL] = t261;
  t75[5ULL] = t195;
  t75[6ULL] = 0.0;
  t75[7ULL] = 0.0;
  t75[8ULL] = 0.0;
  t75[9ULL] = 0.0;
  t1[0ULL] = -t196;
  t1[1ULL] = -t262;
  t1[2ULL] = -(T_idx_0 * 90.909090909090921);
  t1[3ULL] = -(t263 * 90.909090909090921);
  t1[4ULL] = -(t261 * 333.33333333333331);
  t1[5ULL] = -(t195 * 333.33333333333331);
  t1[6ULL] = -t267 * 0.0008206964145163545;
  t1[7ULL] = -t327 * 0.0008206964145163545;
  t1[8ULL] = -t331 * 0.0008206964145163545;
  for (t124 = 0ULL; t124 < 8ULL; t124++) {
    t1[t124 + 9ULL] = -t41[t124] * t42[t124];
  }

  t1[17ULL] = -t250 * 0.00015284815994967031;
  t1[18ULL] = -t339 * 0.00015284815994967031;
  t1[19ULL] = -t343 * 0.00015284815994967031;
  for (t124 = 0ULL; t124 < 10ULL; t124++) {
    t1[t124 + 20ULL] = -t58[t124] * t59[t124];
  }

  t1[30ULL] = -t309 * 2.5474693324945047E-5;
  t1[31ULL] = -t304 * 2.5474693324945047E-5;
  t1[32ULL] = -((t70[0ULL] * t275 * -5888.1964970749477 + t61[1ULL] * t276 *
                 -5888.1964970749477) + t72[2ULL] * 0.0 * -5888.1964970749477) *
    2.5474693324945047E-5;
  for (t124 = 0ULL; t124 < 10ULL; t124++) {
    t1[t124 + 33ULL] = -t75[t124] * t59[t124];
  }

  out.mX[0] = t1[0];
  out.mX[1] = t1[1];
  out.mX[2] = t1[2];
  out.mX[3] = t1[3];
  out.mX[4] = t1[4];
  out.mX[5] = t1[5];
  out.mX[6] = t1[6];
  out.mX[7] = t1[7];
  out.mX[8] = t1[8];
  out.mX[9] = t1[9];
  out.mX[10] = t1[10];
  out.mX[11] = t1[11];
  out.mX[12] = t1[12];
  out.mX[13] = t1[13];
  out.mX[14] = t1[14];
  out.mX[15] = t1[15];
  out.mX[16] = t1[16];
  out.mX[17] = t1[17];
  out.mX[18] = t1[18];
  out.mX[19] = t1[19];
  out.mX[20] = t1[20];
  out.mX[21] = t1[21];
  out.mX[22] = t1[22];
  out.mX[23] = t1[23];
  out.mX[24] = t1[24];
  out.mX[25] = t1[25];
  out.mX[26] = t1[26];
  out.mX[27] = t1[27];
  out.mX[28] = t1[28];
  out.mX[29] = t1[29];
  out.mX[30] = t1[30];
  out.mX[31] = t1[31];
  out.mX[32] = t1[32];
  out.mX[33] = t1[33];
  out.mX[34] = t1[34];
  out.mX[35] = t1[35];
  out.mX[36] = t1[36];
  out.mX[37] = t1[37];
  out.mX[38] = t1[38];
  out.mX[39] = t1[39];
  out.mX[40] = t1[40];
  out.mX[41] = t1[41];
  out.mX[42] = t1[42];
  (void)t0;
  (void)t357;
  return 0;
}
