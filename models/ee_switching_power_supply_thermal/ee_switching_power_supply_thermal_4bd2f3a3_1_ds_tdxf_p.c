/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_tdxf_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_tdxf_p(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_2[144] = { 0, 3, 14, 15, 0, 2, 3, 14, 15, 16, 20, 24,
    30, 33, 34, 0, 3, 14, 15, 1, 14, 5, 20, 24, 27, 28, 9, 22, 30, 33, 4, 24, 27,
    28, 6, 7, 36, 7, 36, 6, 7, 27, 8, 30, 10, 11, 37, 11, 37, 10, 11, 33, 0, 3,
    14, 15, 16, 20, 24, 30, 33, 34, 0, 2, 3, 14, 15, 16, 20, 24, 30, 33, 34, 8,
    14, 15, 22, 23, 30, 31, 32, 33, 34, 1, 14, 15, 4, 14, 15, 20, 21, 24, 25, 26,
    4, 5, 14, 15, 20, 24, 25, 29, 18, 17, 19, 17, 9, 22, 23, 30, 32, 33, 34, 35,
    21, 23, 4, 5, 27, 28, 25, 26, 25, 28, 25, 29, 6, 25, 8, 9, 33, 34, 31, 32,
    31, 34, 31, 35, 10, 31, 12, 36, 13, 37 };

  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 38ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 4;
  out.mJc[2] = 15;
  out.mJc[3] = 19;
  out.mJc[4] = 21;
  out.mJc[5] = 26;
  out.mJc[6] = 30;
  out.mJc[7] = 34;
  out.mJc[8] = 37;
  out.mJc[9] = 39;
  out.mJc[10] = 42;
  out.mJc[11] = 44;
  out.mJc[12] = 47;
  out.mJc[13] = 49;
  out.mJc[14] = 52;
  out.mJc[15] = 62;
  out.mJc[16] = 73;
  out.mJc[17] = 83;
  out.mJc[18] = 86;
  out.mJc[19] = 94;
  out.mJc[20] = 102;
  out.mJc[21] = 103;
  out.mJc[22] = 105;
  out.mJc[23] = 106;
  out.mJc[24] = 114;
  out.mJc[25] = 115;
  out.mJc[26] = 116;
  out.mJc[27] = 120;
  out.mJc[28] = 122;
  out.mJc[29] = 124;
  out.mJc[30] = 126;
  out.mJc[31] = 128;
  out.mJc[32] = 132;
  out.mJc[33] = 134;
  out.mJc[34] = 136;
  out.mJc[35] = 138;
  out.mJc[36] = 140;
  out.mJc[37] = 142;
  out.mJc[38] = 144;
  for (b = 0; b < 144; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
