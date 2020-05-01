/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dxy_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_dxy_p(const NeDynamicSystem
  *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_1[139] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65, 68, 68, 68, 68, 68, 68, 68, 68,
    68, 68, 68, 68, 68, 68, 68, 68 };

  (void)t1;
  out = t2->mDXY_P;
  out.mNumCol = 138ULL;
  out.mNumRow = 8ULL;
  for (b = 0; b < 139; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 1;
  out.mIr[1] = 2;
  out.mIr[2] = 3;
  out.mIr[3] = 5;
  out.mIr[4] = 6;
  out.mIr[5] = 7;
  out.mIr[6] = 0;
  out.mIr[7] = 1;
  out.mIr[8] = 2;
  out.mIr[9] = 3;
  out.mIr[10] = 1;
  out.mIr[11] = 2;
  out.mIr[12] = 3;
  out.mIr[13] = 1;
  out.mIr[14] = 2;
  out.mIr[15] = 3;
  out.mIr[16] = 1;
  out.mIr[17] = 2;
  out.mIr[18] = 3;
  out.mIr[19] = 1;
  out.mIr[20] = 2;
  out.mIr[21] = 3;
  out.mIr[22] = 1;
  out.mIr[23] = 2;
  out.mIr[24] = 3;
  out.mIr[25] = 1;
  out.mIr[26] = 2;
  out.mIr[27] = 3;
  out.mIr[28] = 1;
  out.mIr[29] = 2;
  out.mIr[30] = 3;
  out.mIr[31] = 1;
  out.mIr[32] = 2;
  out.mIr[33] = 3;
  out.mIr[34] = 1;
  out.mIr[35] = 2;
  out.mIr[36] = 3;
  out.mIr[37] = 4;
  out.mIr[38] = 5;
  out.mIr[39] = 6;
  out.mIr[40] = 7;
  out.mIr[41] = 5;
  out.mIr[42] = 6;
  out.mIr[43] = 7;
  out.mIr[44] = 5;
  out.mIr[45] = 6;
  out.mIr[46] = 7;
  out.mIr[47] = 5;
  out.mIr[48] = 6;
  out.mIr[49] = 7;
  out.mIr[50] = 5;
  out.mIr[51] = 6;
  out.mIr[52] = 7;
  out.mIr[53] = 5;
  out.mIr[54] = 6;
  out.mIr[55] = 7;
  out.mIr[56] = 5;
  out.mIr[57] = 6;
  out.mIr[58] = 7;
  out.mIr[59] = 5;
  out.mIr[60] = 6;
  out.mIr[61] = 7;
  out.mIr[62] = 5;
  out.mIr[63] = 6;
  out.mIr[64] = 7;
  out.mIr[65] = 5;
  out.mIr[66] = 6;
  out.mIr[67] = 7;
  (void)sys;
  (void)t2;
  return 0;
}
