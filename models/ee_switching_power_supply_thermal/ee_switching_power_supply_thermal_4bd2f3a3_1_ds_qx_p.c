/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_qx_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_qx_p(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_2[144] = { 0, 1, 2, 14, 15, 16, 17, 18, 19, 0, 1, 2,
    14, 15, 16, 17, 18, 19, 0, 1, 2, 14, 15, 16, 17, 18, 19, 7, 8, 36, 7, 8, 36,
    11, 12, 37, 11, 12, 37, 0, 1, 2, 14, 15, 16, 17, 18, 19, 0, 1, 2, 14, 15, 16,
    17, 18, 19, 0, 1, 2, 14, 15, 16, 17, 18, 19, 23, 31, 0, 1, 2, 14, 15, 16, 17,
    18, 19, 0, 1, 2, 14, 15, 16, 17, 18, 19, 26, 0, 1, 2, 14, 15, 16, 17, 18, 19,
    26, 16, 23, 31, 18, 19, 26, 27, 28, 29, 30, 27, 28, 29, 30, 27, 28, 29, 30,
    27, 28, 29, 30, 16, 23, 31, 32, 33, 34, 35, 32, 33, 34, 35, 32, 33, 34, 35,
    32, 33, 34, 35, 7, 8, 36, 11, 12, 37 };

  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 38ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 9;
  out.mJc[2] = 18;
  out.mJc[3] = 27;
  out.mJc[4] = 27;
  out.mJc[5] = 27;
  out.mJc[6] = 27;
  out.mJc[7] = 27;
  out.mJc[8] = 30;
  out.mJc[9] = 33;
  out.mJc[10] = 33;
  out.mJc[11] = 33;
  out.mJc[12] = 36;
  out.mJc[13] = 39;
  out.mJc[14] = 39;
  out.mJc[15] = 48;
  out.mJc[16] = 57;
  out.mJc[17] = 68;
  out.mJc[18] = 77;
  out.mJc[19] = 87;
  out.mJc[20] = 97;
  out.mJc[21] = 97;
  out.mJc[22] = 97;
  out.mJc[23] = 97;
  out.mJc[24] = 100;
  out.mJc[25] = 100;
  out.mJc[26] = 100;
  out.mJc[27] = 103;
  out.mJc[28] = 107;
  out.mJc[29] = 111;
  out.mJc[30] = 115;
  out.mJc[31] = 119;
  out.mJc[32] = 122;
  out.mJc[33] = 126;
  out.mJc[34] = 130;
  out.mJc[35] = 134;
  out.mJc[36] = 138;
  out.mJc[37] = 141;
  out.mJc[38] = 144;
  for (b = 0; b < 144; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
