/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_dxf.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_dxf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t273, NeDsMethodOutput *t274)
{
  PmRealVector out;
  real_T intrm_sf_mf_0;
  real_T t4[53];
  real_T t27[24];
  real_T t28[24];
  real_T t29[33];
  real_T t36[4];
  real_T t43[4];
  size_t t102;
  real_T t131;
  real_T t132;
  real_T t134;
  real_T t135;
  real_T t137;
  real_T t138;
  real_T t176;
  real_T t177;
  real_T t178;
  real_T t230;
  real_T t231;
  real_T t232;
  real_T t241;
  real_T t249;
  real_T t252;
  real_T t264;
  real_T t272;
  real_T T_idx_0;
  real_T X_idx_10;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T X_idx_1;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_5;
  real_T X_idx_3;
  real_T X_idx_6;
  real_T X_idx_4;
  real_T X_idx_17;
  real_T X_idx_15;
  T_idx_0 = t273->mT.mX[0];
  X_idx_1 = t273->mX.mX[1];
  X_idx_3 = t273->mX.mX[3];
  X_idx_4 = t273->mX.mX[4];
  X_idx_5 = t273->mX.mX[5];
  X_idx_6 = t273->mX.mX[6];
  X_idx_7 = t273->mX.mX[7];
  X_idx_8 = t273->mX.mX[8];
  X_idx_9 = t273->mX.mX[9];
  X_idx_10 = t273->mX.mX[10];
  X_idx_11 = t273->mX.mX[11];
  X_idx_12 = t273->mX.mX[12];
  X_idx_15 = t273->mX.mX[15];
  X_idx_17 = t273->mX.mX[17];
  out = t274->mDXF;
  t230 = (-X_idx_7 + X_idx_8) + X_idx_10;
  t231 = (-X_idx_7 + X_idx_9) + X_idx_10;
  t232 = ((X_idx_7 * 1.0E-12 + -X_idx_11) + -X_idx_12) + X_idx_10 * -1.0E-12;
  intrm_sf_mf_0 = 1.0 - X_idx_1 * 0.0053051647697298452;
  T_idx_0 *= 376.99111843077515;
  t272 = cos(T_idx_0) * 0.66666666666666663;
  t264 = cos(T_idx_0 + -2.0943951023931953) * 0.66666666666666663;
  t176 = cos(T_idx_0 + 2.0943951023931953) * 0.66666666666666663;
  t177 = -sin(T_idx_0) * 0.66666666666666663;
  t178 = -sin(T_idx_0 + -2.0943951023931953) * 0.66666666666666663;
  X_idx_8 = -sin(T_idx_0 + 2.0943951023931953) * 0.66666666666666663;
  t131 = cos(T_idx_0);
  t132 = -sin(T_idx_0);
  t134 = cos(T_idx_0 + -2.0943951023931953);
  t135 = -sin(T_idx_0 + -2.0943951023931953);
  t137 = cos(T_idx_0 + 2.0943951023931953);
  t138 = -sin(T_idx_0 + 2.0943951023931953);
  T_idx_0 = -0.0053051647697298452;
  t252 = -(((((0.0 * t232 + 1.0E-12 * X_idx_10) + -X_idx_11) + 0.0 * t230) +
            -X_idx_12) + 0.0 * t231);
  t241 = -(((((0.0 * t232 + 0.0 * X_idx_10) + X_idx_11) + 0.0 * t230) + 0.0 *
            X_idx_12) + 0.0 * t231);
  t249 = -(((((0.0 * t232 + 0.0 * X_idx_10) + 0.0 * X_idx_11) + 0.0 * t230) +
            X_idx_12) + 0.0 * t231);
  X_idx_9 = -(((((t232 + X_idx_10 * -1.0E-12) + X_idx_11) + t230 * 0.0) +
               X_idx_12) + t231 * 0.0);
  X_idx_7 = -((-X_idx_10 + t230 * 0.0) + t231);
  t232 = (t272 * 0.0 + t264 * 0.0) + t176;
  X_idx_1 = ((t272 + t264 * 0.0) + t176 * 0.0) * 0.00128564869306645;
  t272 = ((t272 * 0.0 + t264) + t176 * 0.0) * 0.00128564869306645;
  t264 = t232 * 0.00128564869306645;
  t232 = (t177 * 0.0 + t178 * 0.0) + X_idx_8;
  t176 = ((t177 + t178 * 0.0) + X_idx_8 * 0.0) * 0.00128564869306645;
  t177 = ((t177 * 0.0 + t178) + X_idx_8 * 0.0) * 0.00128564869306645;
  t178 = t232 * 0.00128564869306645;
  X_idx_8 = -(0.001 * X_idx_9);
  X_idx_9 = -(0.001 * -((-X_idx_10 + t230) + t231 * 0.0));
  t27[0ULL] = 0.0;
  t27[8ULL] = 0.0;
  t27[16ULL] = 0.0;
  t27[1ULL] = 0.0;
  t27[9ULL] = 0.0;
  t27[17ULL] = 0.0;
  t27[2ULL] = X_idx_1;
  t27[10ULL] = t272;
  t27[18ULL] = t264;
  t27[3ULL] = t176;
  t27[11ULL] = t177;
  t27[19ULL] = t178;
  t27[4ULL] = 0.0;
  t27[12ULL] = 0.0;
  t27[20ULL] = 0.0;
  t27[5ULL] = 0.0;
  t27[13ULL] = 0.0;
  t27[21ULL] = 0.0;
  t27[6ULL] = 0.0;
  t27[14ULL] = 0.0;
  t27[22ULL] = 0.0;
  t27[7ULL] = 0.0;
  t27[15ULL] = 0.0;
  t27[23ULL] = 0.0;
  t28[0] = 1.0;
  t28[1] = 1.0;
  t28[2] = 1.0;
  t28[3] = 1.0;
  t28[4] = 1.0;
  t28[5] = 1.0;
  t28[6] = 1.0;
  t28[7] = 0.022408815426997242;
  t28[8] = 1.0;
  t28[9] = 1.0;
  t28[10] = 1.0;
  t28[11] = 1.0;
  t28[12] = 1.0;
  t28[13] = 1.0;
  t28[14] = 1.0;
  t28[15] = 0.022408815426997242;
  t28[16] = 1.0;
  t28[17] = 1.0;
  t28[18] = 1.0;
  t28[19] = 1.0;
  t28[20] = 1.0;
  t28[21] = 1.0;
  t28[22] = 1.0;
  t28[23] = 0.022408815426997242;
  t29[0ULL] = -X_idx_1;
  t29[11ULL] = -t272;
  t29[22ULL] = -t264;
  t29[1ULL] = -t176;
  t29[12ULL] = -t177;
  t29[23ULL] = -t178;
  for (t102 = 0ULL; t102 < 8ULL; t102++) {
    t29[t102 + 2ULL] = -t27[t102] * t28[t102];
    t29[t102 + 13ULL] = -t27[t102 + 8ULL] * t28[t102 + 8ULL];
    t29[t102 + 24ULL] = -t27[t102 + 16ULL] * t28[t102 + 16ULL];
  }

  t29[10ULL] = -(0.001 * t252);
  t29[21ULL] = -(0.001 * t241);
  t29[32ULL] = -(0.001 * t249);
  t36[0ULL] = -(t131 * 140.56425710859855 + t132 * 0.0 * 140.56425710859855) *
    0.00015942043794023975;
  t36[1ULL] = -(t134 * 140.56425710859855 + t135 * 0.0 * 140.56425710859855) *
    0.00015942043794023975;
  t36[2ULL] = -(t137 * 140.56425710859855 + t138 * 0.0 * 140.56425710859855) *
    0.00015942043794023975;
  t36[3ULL] = X_idx_6 * 870.04702223569461;
  t43[0ULL] = -(t131 * 0.0 * 140.56425710859855 + t132 * 140.56425710859855) *
    0.00015942043794023975;
  t43[1ULL] = -(t134 * 0.0 * 140.56425710859855 + t135 * 140.56425710859855) *
    0.00015942043794023975;
  t43[2ULL] = -(t137 * 0.0 * 140.56425710859855 + t138 * 140.56425710859855) *
    0.00015942043794023975;
  t43[3ULL] = -X_idx_4 * 870.04702223569461;
  t4[0ULL] = -(X_idx_5 * T_idx_0);
  t4[1ULL] = X_idx_3 * T_idx_0;
  t4[2ULL] = -((t131 * 0.0 * 140.56425710859855 + t132 * 0.0 *
                140.56425710859855) + 6272.7214460096975) *
    0.00015942043794023975;
  t4[3ULL] = -((t134 * 0.0 * 140.56425710859855 + t135 * 0.0 *
                140.56425710859855) + 6272.7214460096975) *
    0.00015942043794023975;
  t4[4ULL] = -((t137 * 0.0 * 140.56425710859855 + t138 * 0.0 *
                140.56425710859855) + 6272.7214460096975) *
    0.00015942043794023975;
  t4[5ULL] = intrm_sf_mf_0;
  t4[6ULL] = -X_idx_17 * 870.04702223569461;
  t4[7ULL] = -intrm_sf_mf_0;
  t4[8ULL] = X_idx_15 * 870.04702223569461;
  for (t102 = 0ULL; t102 < 33ULL; t102++) {
    t4[t102 + 9ULL] = t29[t102];
  }

  t4[42ULL] = X_idx_8;
  t4[43ULL] = X_idx_9;
  t4[44ULL] = -(0.001 * X_idx_7);
  for (t102 = 0ULL; t102 < 4ULL; t102++) {
    t4[t102 + 45ULL] = t36[t102];
  }

  for (t102 = 0ULL; t102 < 4ULL; t102++) {
    t4[t102 + 49ULL] = t43[t102];
  }

  out.mX[0] = t4[0];
  out.mX[1] = t4[1];
  out.mX[2] = t4[2];
  out.mX[3] = t4[3];
  out.mX[4] = t4[4];
  out.mX[5] = t4[5];
  out.mX[6] = t4[6];
  out.mX[7] = t4[7];
  out.mX[8] = t4[8];
  out.mX[9] = t4[9];
  out.mX[10] = t4[10];
  out.mX[11] = t4[11];
  out.mX[12] = t4[12];
  out.mX[13] = t4[13];
  out.mX[14] = t4[14];
  out.mX[15] = t4[15];
  out.mX[16] = t4[16];
  out.mX[17] = t4[17];
  out.mX[18] = t4[18];
  out.mX[19] = t4[19];
  out.mX[20] = t4[20];
  out.mX[21] = t4[21];
  out.mX[22] = t4[22];
  out.mX[23] = t4[23];
  out.mX[24] = t4[24];
  out.mX[25] = t4[25];
  out.mX[26] = t4[26];
  out.mX[27] = t4[27];
  out.mX[28] = t4[28];
  out.mX[29] = t4[29];
  out.mX[30] = t4[30];
  out.mX[31] = t4[31];
  out.mX[32] = t4[32];
  out.mX[33] = t4[33];
  out.mX[34] = t4[34];
  out.mX[35] = t4[35];
  out.mX[36] = t4[36];
  out.mX[37] = t4[37];
  out.mX[38] = t4[38];
  out.mX[39] = t4[39];
  out.mX[40] = t4[40];
  out.mX[41] = t4[41];
  out.mX[42] = t4[42];
  out.mX[43] = t4[43];
  out.mX[44] = t4[44];
  out.mX[45] = t4[45];
  out.mX[46] = t4[46];
  out.mX[47] = t4[47];
  out.mX[48] = t4[48];
  out.mX[49] = t4[49];
  out.mX[50] = t4[50];
  out.mX[51] = t4[51];
  out.mX[52] = t4[52];
  (void)sys;
  (void)t274;
  return 0;
}
