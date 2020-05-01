/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_obs_act.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_obs_act(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t65, NeDsMethodOutput *t66)
{
  PmRealVector out;
  real_T t0[157];
  size_t t17;
  real_T t50;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t59;
  real_T X[27];
  int32_T b;
  real_T U_idx_3;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  U_idx_0 = t65->mU.mX[0];
  U_idx_1 = t65->mU.mX[1];
  U_idx_2 = t65->mU.mX[2];
  U_idx_3 = t65->mU.mX[3];
  X[0] = t65->mX.mX[0];
  X[1] = t65->mX.mX[1];
  X[2] = t65->mX.mX[2];
  X[3] = t65->mX.mX[3];
  X[4] = t65->mX.mX[4];
  X[5] = t65->mX.mX[5];
  X[6] = t65->mX.mX[6];
  X[7] = t65->mX.mX[7];
  X[8] = t65->mX.mX[8];
  X[9] = t65->mX.mX[9];
  X[10] = t65->mX.mX[10];
  X[11] = t65->mX.mX[11];
  X[12] = t65->mX.mX[12];
  X[13] = t65->mX.mX[13];
  X[14] = t65->mX.mX[14];
  X[15] = t65->mX.mX[15];
  X[16] = t65->mX.mX[16];
  X[17] = t65->mX.mX[17];
  X[18] = t65->mX.mX[18];
  X[19] = t65->mX.mX[19];
  X[20] = t65->mX.mX[20];
  X[21] = t65->mX.mX[21];
  X[22] = t65->mX.mX[22];
  X[23] = t65->mX.mX[23];
  X[24] = t65->mX.mX[24];
  X[25] = t65->mX.mX[25];
  X[26] = t65->mX.mX[26];
  out = t66->mOBS_ACT;
  t50 = ((X[7ULL] * -1.0E-12 + X[10ULL] * 1.0E-12) + X[11ULL]) + X[12ULL];
  t54 = (-X[7ULL] + X[8ULL]) + X[10ULL];
  t55 = (-X[7ULL] + X[9ULL]) + X[10ULL];
  t56 = -X[7ULL] + X[10ULL];
  t59 = ((X[7ULL] * 1.0E-12 + -X[11ULL]) + -X[12ULL]) + X[10ULL] * -1.0E-12;
  t0[0ULL] = 0.0;
  t0[1ULL] = t50;
  t0[2ULL] = -X[11ULL];
  t0[3ULL] = -X[12ULL];
  t0[4ULL] = 0.92806831955922853;
  t0[5ULL] = 1.0538468319559227;
  t0[6ULL] = 1.0538468319559227;
  t0[7ULL] = 0.92806831955922853;
  t0[8ULL] = X[10ULL];
  t0[9ULL] = t54;
  t0[10ULL] = t55;
  t0[11ULL] = t56;
  t0[12ULL] = t56;
  t0[13ULL] = t56;
  t0[14ULL] = X[1ULL];
  t0[15ULL] = X[7ULL];
  t0[16ULL] = X[8ULL];
  t0[17ULL] = X[9ULL];
  t0[18ULL] = X[0ULL] * 57.295779513082323;
  t0[19ULL] = X[0ULL];
  t0[20ULL] = X[13ULL];
  t0[21ULL] = X[1ULL];
  t0[22ULL] = X[2ULL] * 2.0632248911933688;
  t0[23ULL] = X[3ULL] * 2.0632248911933688;
  t0[24ULL] = 0.0;
  t0[25ULL] = 0.0;
  t0[26ULL] = X[4ULL] * 2.0632248911933688;
  t0[27ULL] = X[5ULL] * 2.0632248911933688;
  t0[28ULL] = 0.0;
  t0[29ULL] = 0.0;
  t0[30ULL] = X[6ULL] * 2.0632248911933688;
  t0[31ULL] = 0.90565950413223129;
  t0[32ULL] = X[2ULL] * 44.62529504327302;
  t0[33ULL] = X[14ULL];
  t0[34ULL] = X[15ULL];
  t0[35ULL] = X[16ULL];
  t0[36ULL] = X[17ULL];
  for (t17 = 18ULL; t17 - 18ULL < 8ULL; t17++) {
    t0[t17 + 19ULL] = X[t17];
  }

  t0[45ULL] = X[2ULL];
  t0[46ULL] = X[3ULL];
  t0[47ULL] = 0.0;
  t0[48ULL] = 0.0;
  t0[49ULL] = X[4ULL];
  t0[50ULL] = X[5ULL];
  t0[51ULL] = 0.0;
  t0[52ULL] = 0.0;
  t0[53ULL] = X[6ULL];
  t0[54ULL] = X[13ULL] * -0.0011493631659474852;
  t0[55ULL] = X[1ULL] * 0.0053051647697298452;
  t0[56ULL] = t59;
  t0[57ULL] = X[11ULL];
  t0[58ULL] = X[12ULL];
  t0[59ULL] = U_idx_0;
  t0[60ULL] = U_idx_1;
  t0[61ULL] = U_idx_2;
  t0[62ULL] = X[10ULL];
  t0[63ULL] = t54;
  t0[64ULL] = t55;
  t0[65ULL] = X[26ULL];
  t0[66ULL] = 0.0;
  t0[67ULL] = 1000.0;
  t0[68ULL] = -X[26ULL];
  t0[69ULL] = 0.0;
  t0[70ULL] = 1000.0;
  t0[71ULL] = 1000.0;
  t0[72ULL] = 0.0;
  t0[73ULL] = t50;
  t0[74ULL] = -X[11ULL];
  t0[75ULL] = -X[12ULL];
  t0[76ULL] = t56;
  t0[77ULL] = t56;
  t0[78ULL] = t56;
  t0[79ULL] = 0.0;
  t0[80ULL] = X[1ULL];
  t0[81ULL] = U_idx_3;
  t0[82ULL] = -U_idx_3;
  t0[83ULL] = X[1ULL] / -1.0;
  t0[84ULL] = X[1ULL];
  t0[85ULL] = -X[13ULL] + U_idx_3;
  t0[86ULL] = X[1ULL];
  for (t17 = 18ULL; t17 - 18ULL < 8ULL; t17++) {
    t0[t17 + 69ULL] = X[t17];
  }

  t0[95ULL] = -X[18ULL] / -1.0;
  for (t17 = 18ULL; t17 - 18ULL < 8ULL; t17++) {
    t0[t17 + 78ULL] = X[t17];
  }

  t0[104ULL] = -X[19ULL] / -1.0;
  for (t17 = 18ULL; t17 - 18ULL < 8ULL; t17++) {
    t0[t17 + 87ULL] = X[t17];
  }

  t0[113ULL] = 0.0;
  t0[114ULL] = 0.0;
  t0[115ULL] = -t59;
  t0[116ULL] = -X[11ULL];
  t0[117ULL] = -X[12ULL];
  t0[118ULL] = -t59;
  t0[119ULL] = -X[11ULL];
  t0[120ULL] = -X[12ULL];
  t0[121ULL] = X[10ULL];
  t0[122ULL] = t54;
  t0[123ULL] = t55;
  t0[124ULL] = X[10ULL];
  t0[125ULL] = t54;
  t0[126ULL] = t55;
  t0[127ULL] = 0.0;
  t0[128ULL] = 0.0;
  t0[129ULL] = 0.0;
  t0[130ULL] = 0.0;
  t0[131ULL] = 0.0;
  t0[132ULL] = 0.0;
  t0[133ULL] = 0.0;
  t0[134ULL] = 0.0;
  t0[135ULL] = 0.0;
  t0[136ULL] = 0.0;
  t0[137ULL] = 0.0;
  t0[138ULL] = 0.0;
  t0[139ULL] = 0.0;
  t0[140ULL] = 0.0;
  t0[141ULL] = 0.0;
  t0[142ULL] = X[10ULL];
  t0[143ULL] = t54;
  t0[144ULL] = t55;
  t0[145ULL] = 0.0;
  t0[146ULL] = 0.0;
  t0[147ULL] = 0.0;
  t0[148ULL] = X[10ULL];
  t0[149ULL] = t54;
  t0[150ULL] = t55;
  t0[151ULL] = X[10ULL];
  t0[152ULL] = t54;
  t0[153ULL] = t55;
  t0[154ULL] = X[10ULL];
  t0[155ULL] = t54;
  t0[156ULL] = t55;
  for (b = 0; b < 157; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t66;
  return 0;
}
