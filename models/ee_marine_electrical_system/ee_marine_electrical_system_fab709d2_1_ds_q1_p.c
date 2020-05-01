/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_q1_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_q1_p(const NeDynamicSystem
  *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 138ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 56;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 32;
  out.mIr[7] = 33;
  out.mIr[8] = 36;
  out.mIr[9] = 39;
  out.mIr[10] = 42;
  out.mIr[11] = 45;
  out.mIr[12] = 48;
  out.mIr[13] = 51;
  out.mIr[14] = 54;
  out.mIr[15] = 55;
  out.mIr[16] = 56;
  out.mIr[17] = 57;
  out.mIr[18] = 58;
  out.mIr[19] = 59;
  out.mIr[20] = 60;
  out.mIr[21] = 61;
  out.mIr[22] = 62;
  out.mIr[23] = 63;
  out.mIr[24] = 64;
  out.mIr[25] = 65;
  out.mIr[26] = 66;
  out.mIr[27] = 75;
  out.mIr[28] = 76;
  out.mIr[29] = 77;
  out.mIr[30] = 78;
  out.mIr[31] = 79;
  out.mIr[32] = 80;
  out.mIr[33] = 81;
  out.mIr[34] = 82;
  out.mIr[35] = 86;
  out.mIr[36] = 91;
  out.mIr[37] = 92;
  out.mIr[38] = 103;
  out.mIr[39] = 104;
  out.mIr[40] = 105;
  out.mIr[41] = 106;
  out.mIr[42] = 107;
  out.mIr[43] = 111;
  out.mIr[44] = 112;
  out.mIr[45] = 123;
  out.mIr[46] = 124;
  out.mIr[47] = 125;
  out.mIr[48] = 126;
  out.mIr[49] = 127;
  out.mIr[50] = 131;
  out.mIr[51] = 133;
  out.mIr[52] = 134;
  out.mIr[53] = 135;
  out.mIr[54] = 136;
  out.mIr[55] = 137;
  (void)sys;
  (void)t2;
  return 0;
}
