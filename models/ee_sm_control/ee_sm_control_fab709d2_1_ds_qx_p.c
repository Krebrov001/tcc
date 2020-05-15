/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_qx_p.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_qx_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_2[146] = { 1, 2, 3, 23, 24, 25, 29, 30, 31, 35, 36,
    37, 1, 2, 3, 23, 24, 25, 29, 30, 31, 35, 36, 37, 1, 2, 3, 23, 24, 25, 29, 30,
    31, 35, 36, 37, 12, 1, 2, 3, 23, 24, 25, 29, 30, 31, 35, 36, 37, 1, 2, 3, 23,
    24, 25, 29, 30, 31, 35, 36, 37, 1, 2, 3, 23, 24, 25, 29, 30, 31, 35, 36, 37,
    1, 2, 3, 23, 24, 25, 29, 30, 31, 35, 36, 37, 1, 2, 3, 23, 24, 25, 29, 30, 31,
    35, 36, 37, 1, 2, 3, 23, 24, 25, 29, 30, 31, 35, 36, 37, 1, 2, 3, 23, 24, 25,
    29, 30, 31, 35, 36, 37, 1, 2, 3, 23, 24, 25, 29, 30, 31, 35, 36, 37, 1, 2, 3,
    23, 24, 25, 29, 30, 31, 35, 36, 37, 38 };

  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 42ULL;
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 12;
  out.mJc[3] = 24;
  out.mJc[4] = 36;
  out.mJc[5] = 36;
  out.mJc[6] = 36;
  out.mJc[7] = 36;
  out.mJc[8] = 36;
  out.mJc[9] = 36;
  out.mJc[10] = 36;
  out.mJc[11] = 36;
  out.mJc[12] = 36;
  out.mJc[13] = 37;
  out.mJc[14] = 37;
  out.mJc[15] = 37;
  out.mJc[16] = 37;
  out.mJc[17] = 37;
  out.mJc[18] = 37;
  out.mJc[19] = 37;
  out.mJc[20] = 37;
  out.mJc[21] = 37;
  out.mJc[22] = 37;
  out.mJc[23] = 37;
  out.mJc[24] = 49;
  out.mJc[25] = 61;
  out.mJc[26] = 73;
  out.mJc[27] = 73;
  out.mJc[28] = 73;
  out.mJc[29] = 73;
  out.mJc[30] = 85;
  out.mJc[31] = 97;
  out.mJc[32] = 109;
  out.mJc[33] = 109;
  out.mJc[34] = 109;
  out.mJc[35] = 109;
  out.mJc[36] = 121;
  out.mJc[37] = 133;
  out.mJc[38] = 145;
  out.mJc[39] = 146;
  out.mJc[40] = 146;
  out.mJc[41] = 146;
  out.mJc[42] = 146;
  for (b = 0; b < 146; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
