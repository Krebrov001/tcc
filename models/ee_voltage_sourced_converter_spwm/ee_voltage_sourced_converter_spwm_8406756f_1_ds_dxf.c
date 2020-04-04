/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_dxf.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_dxf(const
  NeDynamicSystem *t0, const NeDynamicSystemInput *t230, NeDsMethodOutput *t231)
{
  PmRealVector out;
  real_T t1;
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T t41[96];
  real_T t42[6];
  real_T t43[27];
  real_T t44[6];
  real_T t45[12];
  real_T t46[27];
  size_t t78;
  real_T t182;
  real_T t183;
  real_T t184;
  real_T t185;
  real_T t186;
  real_T t187;
  real_T t188;
  real_T t189;
  real_T t190;
  real_T t191;
  real_T t192;
  real_T t193;
  real_T t194;
  real_T t195;
  real_T t196;
  real_T t197;
  real_T t198;
  real_T t199;
  real_T t200;
  real_T t201;
  real_T t202;
  real_T t203;
  real_T t204;
  real_T t205;
  real_T t206;
  real_T t207;
  real_T t208;
  real_T t209;
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
  real_T t221;
  real_T t222;
  real_T t223;
  real_T t224;
  real_T t225;
  real_T t226;
  real_T t227;
  real_T t228;
  real_T t229;
  int32_T M_idx_10;
  int32_T M_idx_11;
  int32_T M_idx_13;
  int32_T M_idx_17;
  int32_T M_idx_18;
  int32_T M_idx_19;
  int32_T M_idx_24;
  int32_T M_idx_25;
  int32_T M_idx_26;
  int32_T M_idx_20;
  int32_T M_idx_21;
  int32_T M_idx_22;
  int32_T M_idx_27;
  int32_T M_idx_28;
  int32_T M_idx_29;
  int32_T M_idx_14;
  int32_T M_idx_15;
  int32_T M_idx_16;
  (void)t0;
  M_idx_10 = t230->mM.mX[10];
  M_idx_11 = t230->mM.mX[11];
  M_idx_13 = t230->mM.mX[13];
  M_idx_14 = t230->mM.mX[14];
  M_idx_15 = t230->mM.mX[15];
  M_idx_16 = t230->mM.mX[16];
  M_idx_17 = t230->mM.mX[17];
  M_idx_18 = t230->mM.mX[18];
  M_idx_19 = t230->mM.mX[19];
  M_idx_20 = t230->mM.mX[20];
  M_idx_21 = t230->mM.mX[21];
  M_idx_22 = t230->mM.mX[22];
  M_idx_24 = t230->mM.mX[24];
  M_idx_25 = t230->mM.mX[25];
  M_idx_26 = t230->mM.mX[26];
  M_idx_27 = t230->mM.mX[27];
  M_idx_28 = t230->mM.mX[28];
  M_idx_29 = t230->mM.mX[29];
  out = t231->mDXF;
  if (M_idx_10 != 0) {
    t1 = 1000.0;
  } else if (M_idx_11 != 0) {
    t1 = 3.3333333333333335;
  } else {
    t1 = 1.0E-5;
  }

  if (M_idx_13 != 0) {
    t2 = -1000.0;
  } else {
    t2 = -1.0E-6;
  }

  if (M_idx_17 != 0) {
    t3 = 1000.0;
  } else if (M_idx_18 != 0) {
    t3 = 3.3333333333333335;
  } else {
    t3 = 1.0E-5;
  }

  if (M_idx_19 != 0) {
    t4 = -1000.0;
  } else {
    t4 = -1.0E-6;
  }

  if (M_idx_24 != 0) {
    t5 = 1000.0;
  } else if (M_idx_25 != 0) {
    t5 = 3.3333333333333335;
  } else {
    t5 = 1.0E-5;
  }

  if (M_idx_26 != 0) {
    t6 = -1000.0;
  } else {
    t6 = -1.0E-6;
  }

  if (M_idx_17 != 0) {
    t182 = 1000.0;
    t183 = -1000.0;
    t184 = -0.0;
  } else if (M_idx_18 != 0) {
    t182 = 3.3333333333333335;
    t183 = -3.3333333333333335;
    t184 = -0.0;
  } else {
    t182 = 1.0E-5;
    t183 = -1.0E-5;
    t184 = -0.0;
  }

  if (M_idx_19 != 0) {
    t185 = -1000.0;
    t186 = 1000.0;
    t187 = 0.0;
  } else {
    t185 = -1.0E-6;
    t186 = 1.0E-6;
    t187 = 0.0;
  }

  if (M_idx_20 != 0) {
    t188 = -1000.000001;
    t189 = 1001.000001;
    t190 = 0.0;
  } else if (M_idx_21 != 0) {
    t188 = -3.3333343333333336;
    t189 = 4.3333343333333332;
    t190 = 0.0;
  } else {
    t188 = -1.1000000000000001E-5;
    t189 = 1.000011;
    t190 = 0.0;
  }

  if (M_idx_22 != 0) {
    t191 = 999.999999;
    t192 = -999.999999;
    t193 = -0.0;
  } else {
    t191 = 0.0;
    t192 = 0.0;
    t193 = 0.0;
  }

  if (M_idx_24 != 0) {
    t194 = 1000.0;
    t195 = -0.0;
    t196 = -1000.0;
  } else if (M_idx_25 != 0) {
    t194 = 3.3333333333333335;
    t195 = -0.0;
    t196 = -3.3333333333333335;
  } else {
    t194 = 1.0E-5;
    t195 = -0.0;
    t196 = -1.0E-5;
  }

  if (M_idx_26 != 0) {
    t197 = -1000.0;
    t198 = 0.0;
    t199 = 1000.0;
  } else {
    t197 = -1.0E-6;
    t198 = 0.0;
    t199 = 1.0E-6;
  }

  if (M_idx_27 != 0) {
    t200 = -1000.000001;
    t201 = 0.0;
    t202 = 1001.000001;
  } else if (M_idx_28 != 0) {
    t200 = -3.3333343333333336;
    t201 = 0.0;
    t202 = 4.3333343333333332;
  } else {
    t200 = -1.1000000000000001E-5;
    t201 = 0.0;
    t202 = 1.000011;
  }

  if (M_idx_29 != 0) {
    t203 = 999.999999;
    t204 = -0.0;
    t205 = -999.999999;
  } else {
    t203 = 0.0;
    t204 = 0.0;
    t205 = 0.0;
  }

  if (M_idx_10 != 0) {
    t15 = 0.001;
  } else if (M_idx_11 != 0) {
    t15 = 3.3333333333333333E-6;
  } else {
    t15 = 1.0000000000000001E-11;
  }

  if (M_idx_13 != 0) {
    t16 = -0.001;
  } else {
    t16 = -1.0E-12;
  }

  if (M_idx_17 != 0) {
    t17 = 0.001;
  } else if (M_idx_18 != 0) {
    t17 = 3.3333333333333333E-6;
  } else {
    t17 = 1.0000000000000001E-11;
  }

  if (M_idx_19 != 0) {
    t18 = -0.001;
  } else {
    t18 = -1.0E-12;
  }

  if (M_idx_24 != 0) {
    t19 = 0.001;
  } else if (M_idx_25 != 0) {
    t19 = 3.3333333333333333E-6;
  } else {
    t19 = 1.0000000000000001E-11;
  }

  if (M_idx_26 != 0) {
    t20 = -0.001;
  } else {
    t20 = -1.0E-12;
  }

  if (M_idx_10 != 0) {
    t21 = -1000.0;
  } else if (M_idx_11 != 0) {
    t21 = -3.3333333333333335;
  } else {
    t21 = -1.0E-5;
  }

  if (M_idx_13 != 0) {
    t22 = 1000.0;
  } else {
    t22 = 1.0E-6;
  }

  if (M_idx_14 != 0) {
    t23 = 1000.000001;
  } else if (M_idx_15 != 0) {
    t23 = 3.3333343333333336;
  } else {
    t23 = 1.1000000000000001E-5;
  }

  if (M_idx_16 != 0) {
    t24 = -999.999999;
  } else {
    t24 = 0.0;
  }

  if (M_idx_17 != 0) {
    t25 = -1000.0;
  } else if (M_idx_18 != 0) {
    t25 = -3.3333333333333335;
  } else {
    t25 = -1.0E-5;
  }

  if (M_idx_19 != 0) {
    t26 = 1000.0;
  } else {
    t26 = 1.0E-6;
  }

  if (M_idx_20 != 0) {
    t27 = 1000.000001;
  } else if (M_idx_21 != 0) {
    t27 = 3.3333343333333336;
  } else {
    t27 = 1.1000000000000001E-5;
  }

  if (M_idx_22 != 0) {
    t28 = -999.999999;
  } else {
    t28 = 0.0;
  }

  if (M_idx_24 != 0) {
    t29 = -1000.0;
  } else if (M_idx_25 != 0) {
    t29 = -3.3333333333333335;
  } else {
    t29 = -1.0E-5;
  }

  if (M_idx_26 != 0) {
    t30 = 1000.0;
  } else {
    t30 = 1.0E-6;
  }

  if (M_idx_27 != 0) {
    t31 = 1000.000001;
  } else if (M_idx_28 != 0) {
    t31 = 3.3333343333333336;
  } else {
    t31 = 1.1000000000000001E-5;
  }

  if (M_idx_29 != 0) {
    t32 = -999.999999;
  } else {
    t32 = 0.0;
  }

  if (M_idx_17 != 0) {
    t206 = 1000.0009999999999;
    t207 = -1000.0009999999999;
    t208 = -0.0;
  } else if (M_idx_18 != 0) {
    t206 = 3.3333366666666664;
    t207 = -3.3333366666666664;
    t208 = -0.0;
  } else {
    t206 = 1.000001E-5;
    t207 = -1.000001E-5;
    t208 = -0.0;
  }

  if (M_idx_19 != 0) {
    t209 = -1000.001;
    t210 = 1000.001;
    t211 = 0.0;
  } else {
    t209 = -1.0000009999999998E-6;
    t210 = 1.0000009999999998E-6;
    t211 = 0.0;
  }

  if (M_idx_20 != 0) {
    t212 = -1000.0010010000009;
    t213 = 1000.0010020000009;
    t214 = 0.0;
  } else if (M_idx_21 != 0) {
    t212 = -3.3333376666676662;
    t213 = 3.3333386666676663;
    t214 = 0.0;
  } else {
    t212 = -1.1000011E-5;
    t213 = 1.2000011E-5;
    t214 = 0.0;
  }

  if (M_idx_22 != 0) {
    t215 = 1000.000998999999;
    t216 = -1000.000998999999;
    t217 = -0.0;
  } else {
    t215 = 0.0;
    t216 = 0.0;
    t217 = 0.0;
  }

  if (M_idx_24 != 0) {
    t218 = 1000.0009999999999;
    t219 = -0.0;
    t220 = -1000.0009999999999;
  } else if (M_idx_25 != 0) {
    t218 = 3.3333366666666664;
    t219 = -0.0;
    t220 = -3.3333366666666664;
  } else {
    t218 = 1.000001E-5;
    t219 = -0.0;
    t220 = -1.000001E-5;
  }

  if (M_idx_26 != 0) {
    t221 = -1000.001;
    t222 = 0.0;
    t223 = 1000.001;
  } else {
    t221 = -1.0000009999999998E-6;
    t222 = 0.0;
    t223 = 1.0000009999999998E-6;
  }

  if (M_idx_27 != 0) {
    t224 = -1000.0010010000009;
    t225 = 0.0;
    t226 = 1000.0010020000009;
  } else if (M_idx_28 != 0) {
    t224 = -3.3333376666676662;
    t225 = 0.0;
    t226 = 3.3333386666676663;
  } else {
    t224 = -1.1000011E-5;
    t225 = 0.0;
    t226 = 1.2000011E-5;
  }

  if (M_idx_29 != 0) {
    t227 = 1000.000998999999;
    t228 = -0.0;
    t229 = -1000.000998999999;
  } else {
    t227 = 0.0;
    t228 = 0.0;
    t229 = 0.0;
  }

  t42[0ULL] = t1;
  t42[1ULL] = t2;
  t42[2ULL] = t3;
  t42[3ULL] = t4;
  t42[4ULL] = t5;
  t42[5ULL] = t6;
  t43[0ULL] = 1.0;
  t43[9ULL] = 0.0;
  t43[18ULL] = 0.0;
  t43[1ULL] = t182;
  t43[10ULL] = t183;
  t43[19ULL] = t184;
  t43[2ULL] = t185;
  t43[11ULL] = t186;
  t43[20ULL] = t187;
  t43[3ULL] = t188;
  t43[12ULL] = t189;
  t43[21ULL] = t190;
  t43[4ULL] = t191;
  t43[13ULL] = t192;
  t43[22ULL] = t193;
  t43[5ULL] = t194;
  t43[14ULL] = t195;
  t43[23ULL] = t196;
  t43[6ULL] = t197;
  t43[15ULL] = t198;
  t43[24ULL] = t199;
  t43[7ULL] = t200;
  t43[16ULL] = t201;
  t43[25ULL] = t202;
  t43[8ULL] = t203;
  t43[17ULL] = t204;
  t43[26ULL] = t205;
  t44[0ULL] = t15;
  t44[1ULL] = t16;
  t44[2ULL] = t17;
  t44[3ULL] = t18;
  t44[4ULL] = t19;
  t44[5ULL] = t20;
  t45[0ULL] = t21;
  t45[1ULL] = t22;
  t45[2ULL] = t23;
  t45[3ULL] = t24;
  t45[4ULL] = t25;
  t45[5ULL] = t26;
  t45[6ULL] = t27;
  t45[7ULL] = t28;
  t45[8ULL] = t29;
  t45[9ULL] = t30;
  t45[10ULL] = t31;
  t45[11ULL] = t32;
  t46[0ULL] = 1.0E-6;
  t46[9ULL] = 0.0;
  t46[18ULL] = 0.0;
  t46[1ULL] = t206;
  t46[10ULL] = t207;
  t46[19ULL] = t208;
  t46[2ULL] = t209;
  t46[11ULL] = t210;
  t46[20ULL] = t211;
  t46[3ULL] = t212;
  t46[12ULL] = t213;
  t46[21ULL] = t214;
  t46[4ULL] = t215;
  t46[13ULL] = t216;
  t46[22ULL] = t217;
  t46[5ULL] = t218;
  t46[14ULL] = t219;
  t46[23ULL] = t220;
  t46[6ULL] = t221;
  t46[15ULL] = t222;
  t46[24ULL] = t223;
  t46[7ULL] = t224;
  t46[16ULL] = t225;
  t46[25ULL] = t226;
  t46[8ULL] = t227;
  t46[17ULL] = t228;
  t46[26ULL] = t229;
  for (t78 = 0ULL; t78 < 6ULL; t78++) {
    t41[t78] = t42[t78];
  }

  for (t78 = 0ULL; t78 < 27ULL; t78++) {
    t41[t78 + 6ULL] = t43[t78];
  }

  for (t78 = 0ULL; t78 < 6ULL; t78++) {
    t41[t78 + 33ULL] = t44[t78];
  }

  for (t78 = 0ULL; t78 < 12ULL; t78++) {
    t41[t78 + 39ULL] = t45[t78];
  }

  for (t78 = 0ULL; t78 < 27ULL; t78++) {
    t41[t78 + 51ULL] = t46[t78];
  }

  out.mX[0] = t41[0];
  out.mX[1] = t41[1];
  out.mX[2] = t41[2];
  out.mX[3] = t41[3];
  out.mX[4] = t41[4];
  out.mX[5] = t41[5];
  out.mX[6] = t41[6];
  out.mX[7] = t41[7];
  out.mX[8] = t41[8];
  out.mX[9] = t41[9];
  out.mX[10] = t41[10];
  out.mX[11] = t41[11];
  out.mX[12] = t41[12];
  out.mX[13] = t41[13];
  out.mX[14] = t41[14];
  out.mX[15] = t41[15];
  out.mX[16] = t41[16];
  out.mX[17] = t41[17];
  out.mX[18] = t41[18];
  out.mX[19] = t41[19];
  out.mX[20] = t41[20];
  out.mX[21] = t41[21];
  out.mX[22] = t41[22];
  out.mX[23] = t41[23];
  out.mX[24] = t41[24];
  out.mX[25] = t41[25];
  out.mX[26] = t41[26];
  out.mX[27] = t41[27];
  out.mX[28] = t41[28];
  out.mX[29] = t41[29];
  out.mX[30] = t41[30];
  out.mX[31] = t41[31];
  out.mX[32] = t41[32];
  out.mX[33] = t41[33];
  out.mX[34] = t41[34];
  out.mX[35] = t41[35];
  out.mX[36] = t41[36];
  out.mX[37] = t41[37];
  out.mX[38] = t41[38];
  out.mX[39] = t41[39];
  out.mX[40] = t41[40];
  out.mX[41] = t41[41];
  out.mX[42] = t41[42];
  out.mX[43] = t41[43];
  out.mX[44] = t41[44];
  out.mX[45] = t41[45];
  out.mX[46] = t41[46];
  out.mX[47] = t41[47];
  out.mX[48] = t41[48];
  out.mX[49] = t41[49];
  out.mX[50] = t41[50];
  out.mX[51] = t41[51];
  out.mX[52] = t41[52];
  out.mX[53] = t41[53];
  out.mX[54] = t41[54];
  out.mX[55] = t41[55];
  out.mX[56] = t41[56];
  out.mX[57] = t41[57];
  out.mX[58] = t41[58];
  out.mX[59] = t41[59];
  out.mX[60] = t41[60];
  out.mX[61] = t41[61];
  out.mX[62] = t41[62];
  out.mX[63] = t41[63];
  out.mX[64] = t41[64];
  out.mX[65] = t41[65];
  out.mX[66] = t41[66];
  out.mX[67] = t41[67];
  out.mX[68] = t41[68];
  out.mX[69] = t41[69];
  out.mX[70] = t41[70];
  out.mX[71] = t41[71];
  out.mX[72] = t41[72];
  out.mX[73] = t41[73];
  out.mX[74] = t41[74];
  out.mX[75] = t41[75];
  out.mX[76] = t41[76];
  out.mX[77] = t41[77];
  out.mX[78] = 1.0;
  out.mX[79] = 1.0;
  out.mX[80] = 1.0;
  out.mX[81] = -1.0;
  out.mX[82] = 1.0;
  out.mX[83] = 1.0;
  out.mX[84] = 1.0;
  out.mX[85] = 1.0;
  out.mX[86] = 1.0;
  out.mX[87] = -1.0;
  out.mX[88] = 1.0;
  out.mX[89] = 1.0;
  out.mX[90] = 1.0;
  out.mX[91] = 1.0;
  out.mX[92] = 1.0;
  out.mX[93] = -1.0;
  out.mX[94] = 1.0;
  out.mX[95] = 1.0;
  (void)t0;
  (void)t231;
  return 0;
}
