/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dnf_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_dnf_p(const NeDynamicSystem
  *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDNF_P;
  out.mNumCol = 95ULL;
  out.mNumRow = 138ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 1;
  out.mJc[17] = 2;
  out.mJc[18] = 3;
  out.mJc[19] = 4;
  out.mJc[20] = 5;
  out.mJc[21] = 6;
  out.mJc[22] = 6;
  out.mJc[23] = 6;
  out.mJc[24] = 6;
  out.mJc[25] = 6;
  out.mJc[26] = 6;
  out.mJc[27] = 14;
  out.mJc[28] = 14;
  out.mJc[29] = 14;
  out.mJc[30] = 14;
  out.mJc[31] = 15;
  out.mJc[32] = 16;
  out.mJc[33] = 17;
  out.mJc[34] = 18;
  out.mJc[35] = 19;
  out.mJc[36] = 20;
  out.mJc[37] = 28;
  out.mJc[38] = 28;
  out.mJc[39] = 28;
  out.mJc[40] = 28;
  out.mJc[41] = 28;
  out.mJc[42] = 28;
  out.mJc[43] = 28;
  out.mJc[44] = 28;
  out.mJc[45] = 28;
  out.mJc[46] = 28;
  out.mJc[47] = 28;
  out.mJc[48] = 28;
  out.mJc[49] = 28;
  out.mJc[50] = 28;
  out.mJc[51] = 28;
  out.mJc[52] = 28;
  out.mJc[53] = 28;
  out.mJc[54] = 28;
  out.mJc[55] = 28;
  out.mJc[56] = 28;
  out.mJc[57] = 28;
  out.mJc[58] = 28;
  out.mJc[59] = 28;
  out.mJc[60] = 28;
  out.mJc[61] = 28;
  out.mJc[62] = 28;
  out.mJc[63] = 28;
  out.mJc[64] = 28;
  out.mJc[65] = 28;
  out.mJc[66] = 28;
  out.mJc[67] = 28;
  out.mJc[68] = 28;
  out.mJc[69] = 28;
  out.mJc[70] = 28;
  out.mJc[71] = 28;
  out.mJc[72] = 28;
  out.mJc[73] = 28;
  out.mJc[74] = 28;
  out.mJc[75] = 28;
  out.mJc[76] = 28;
  out.mJc[77] = 28;
  out.mJc[78] = 28;
  out.mJc[79] = 28;
  out.mJc[80] = 28;
  out.mJc[81] = 28;
  out.mJc[82] = 28;
  out.mJc[83] = 28;
  out.mJc[84] = 28;
  out.mJc[85] = 28;
  out.mJc[86] = 28;
  out.mJc[87] = 28;
  out.mJc[88] = 28;
  out.mJc[89] = 28;
  out.mJc[90] = 28;
  out.mJc[91] = 28;
  out.mJc[92] = 28;
  out.mJc[93] = 28;
  out.mJc[94] = 28;
  out.mJc[95] = 28;
  out.mIr[0] = 79;
  out.mIr[1] = 79;
  out.mIr[2] = 79;
  out.mIr[3] = 77;
  out.mIr[4] = 77;
  out.mIr[5] = 77;
  out.mIr[6] = 65;
  out.mIr[7] = 66;
  out.mIr[8] = 67;
  out.mIr[9] = 68;
  out.mIr[10] = 69;
  out.mIr[11] = 70;
  out.mIr[12] = 71;
  out.mIr[13] = 72;
  out.mIr[14] = 78;
  out.mIr[15] = 78;
  out.mIr[16] = 78;
  out.mIr[17] = 57;
  out.mIr[18] = 57;
  out.mIr[19] = 57;
  out.mIr[20] = 65;
  out.mIr[21] = 66;
  out.mIr[22] = 67;
  out.mIr[23] = 68;
  out.mIr[24] = 69;
  out.mIr[25] = 70;
  out.mIr[26] = 71;
  out.mIr[27] = 72;
  (void)sys;
  (void)t2;
  return 0;
}
