/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_dxf_p.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_dxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 42ULL;
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 2;
  out.mJc[5] = 17;
  out.mJc[6] = 17;
  out.mJc[7] = 17;
  out.mJc[8] = 20;
  out.mJc[9] = 20;
  out.mJc[10] = 20;
  out.mJc[11] = 22;
  out.mJc[12] = 24;
  out.mJc[13] = 24;
  out.mJc[14] = 24;
  out.mJc[15] = 24;
  out.mJc[16] = 24;
  out.mJc[17] = 24;
  out.mJc[18] = 24;
  out.mJc[19] = 24;
  out.mJc[20] = 24;
  out.mJc[21] = 24;
  out.mJc[22] = 24;
  out.mJc[23] = 24;
  out.mJc[24] = 36;
  out.mJc[25] = 48;
  out.mJc[26] = 60;
  out.mJc[27] = 61;
  out.mJc[28] = 62;
  out.mJc[29] = 63;
  out.mJc[30] = 64;
  out.mJc[31] = 65;
  out.mJc[32] = 66;
  out.mJc[33] = 67;
  out.mJc[34] = 68;
  out.mJc[35] = 69;
  out.mJc[36] = 70;
  out.mJc[37] = 71;
  out.mJc[38] = 72;
  out.mJc[39] = 72;
  out.mJc[40] = 76;
  out.mJc[41] = 76;
  out.mJc[42] = 80;
  out.mIr[0] = 4;
  out.mIr[1] = 5;
  out.mIr[2] = 4;
  out.mIr[3] = 5;
  out.mIr[4] = 24;
  out.mIr[5] = 25;
  out.mIr[6] = 26;
  out.mIr[7] = 32;
  out.mIr[8] = 33;
  out.mIr[9] = 34;
  out.mIr[10] = 35;
  out.mIr[11] = 36;
  out.mIr[12] = 37;
  out.mIr[13] = 38;
  out.mIr[14] = 39;
  out.mIr[15] = 40;
  out.mIr[16] = 41;
  out.mIr[17] = 24;
  out.mIr[18] = 25;
  out.mIr[19] = 26;
  out.mIr[20] = 5;
  out.mIr[21] = 31;
  out.mIr[22] = 4;
  out.mIr[23] = 31;
  out.mIr[24] = 4;
  out.mIr[25] = 5;
  out.mIr[26] = 32;
  out.mIr[27] = 33;
  out.mIr[28] = 34;
  out.mIr[29] = 35;
  out.mIr[30] = 36;
  out.mIr[31] = 37;
  out.mIr[32] = 38;
  out.mIr[33] = 39;
  out.mIr[34] = 40;
  out.mIr[35] = 41;
  out.mIr[36] = 4;
  out.mIr[37] = 5;
  out.mIr[38] = 32;
  out.mIr[39] = 33;
  out.mIr[40] = 34;
  out.mIr[41] = 35;
  out.mIr[42] = 36;
  out.mIr[43] = 37;
  out.mIr[44] = 38;
  out.mIr[45] = 39;
  out.mIr[46] = 40;
  out.mIr[47] = 41;
  out.mIr[48] = 4;
  out.mIr[49] = 5;
  out.mIr[50] = 32;
  out.mIr[51] = 33;
  out.mIr[52] = 34;
  out.mIr[53] = 35;
  out.mIr[54] = 36;
  out.mIr[55] = 37;
  out.mIr[56] = 38;
  out.mIr[57] = 39;
  out.mIr[58] = 40;
  out.mIr[59] = 41;
  out.mIr[60] = 12;
  out.mIr[61] = 13;
  out.mIr[62] = 14;
  out.mIr[63] = 12;
  out.mIr[64] = 13;
  out.mIr[65] = 14;
  out.mIr[66] = 15;
  out.mIr[67] = 16;
  out.mIr[68] = 17;
  out.mIr[69] = 15;
  out.mIr[70] = 16;
  out.mIr[71] = 17;
  out.mIr[72] = 24;
  out.mIr[73] = 25;
  out.mIr[74] = 26;
  out.mIr[75] = 31;
  out.mIr[76] = 24;
  out.mIr[77] = 25;
  out.mIr[78] = 26;
  out.mIr[79] = 31;
  (void)sys;
  (void)t2;
  return 0;
}
