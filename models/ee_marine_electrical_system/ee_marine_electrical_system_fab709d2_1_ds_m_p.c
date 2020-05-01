/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_m_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_m_p(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_1[139] = { 0, 1, 2, 5, 8, 11, 12, 13, 14, 15, 16, 17,
    18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55,
    56, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
    57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
    57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
    57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
    57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57 };

  (void)t1;
  out = t2->mM_P;
  out.mNumCol = 138ULL;
  out.mNumRow = 138ULL;
  for (b = 0; b < 139; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 34;
  out.mIr[1] = 48;
  out.mIr[2] = 0;
  out.mIr[3] = 1;
  out.mIr[4] = 2;
  out.mIr[5] = 0;
  out.mIr[6] = 1;
  out.mIr[7] = 2;
  out.mIr[8] = 0;
  out.mIr[9] = 1;
  out.mIr[10] = 2;
  out.mIr[11] = 41;
  out.mIr[12] = 3;
  out.mIr[13] = 9;
  out.mIr[14] = 6;
  out.mIr[15] = 7;
  out.mIr[16] = 4;
  out.mIr[17] = 8;
  out.mIr[18] = 5;
  out.mIr[19] = 17;
  out.mIr[20] = 16;
  out.mIr[21] = 18;
  out.mIr[22] = 14;
  out.mIr[23] = 12;
  out.mIr[24] = 15;
  out.mIr[25] = 10;
  out.mIr[26] = 13;
  out.mIr[27] = 11;
  out.mIr[28] = 29;
  out.mIr[29] = 26;
  out.mIr[30] = 27;
  out.mIr[31] = 22;
  out.mIr[32] = 25;
  out.mIr[33] = 21;
  out.mIr[34] = 23;
  out.mIr[35] = 24;
  out.mIr[36] = 19;
  out.mIr[37] = 20;
  out.mIr[38] = 28;
  out.mIr[39] = 35;
  out.mIr[40] = 30;
  out.mIr[41] = 31;
  out.mIr[42] = 36;
  out.mIr[43] = 32;
  out.mIr[44] = 33;
  out.mIr[45] = 42;
  out.mIr[46] = 37;
  out.mIr[47] = 38;
  out.mIr[48] = 43;
  out.mIr[49] = 39;
  out.mIr[50] = 40;
  out.mIr[51] = 49;
  out.mIr[52] = 44;
  out.mIr[53] = 45;
  out.mIr[54] = 50;
  out.mIr[55] = 46;
  out.mIr[56] = 47;
  (void)sys;
  (void)t2;
  return 0;
}
