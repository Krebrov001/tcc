/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dtf_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_dtf_p(const NeDynamicSystem
  *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 138ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 43;
  out.mIr[0] = 4;
  out.mIr[1] = 5;
  out.mIr[2] = 10;
  out.mIr[3] = 11;
  out.mIr[4] = 19;
  out.mIr[5] = 20;
  out.mIr[6] = 57;
  out.mIr[7] = 58;
  out.mIr[8] = 59;
  out.mIr[9] = 65;
  out.mIr[10] = 66;
  out.mIr[11] = 67;
  out.mIr[12] = 68;
  out.mIr[13] = 69;
  out.mIr[14] = 70;
  out.mIr[15] = 71;
  out.mIr[16] = 72;
  out.mIr[17] = 77;
  out.mIr[18] = 78;
  out.mIr[19] = 79;
  out.mIr[20] = 85;
  out.mIr[21] = 86;
  out.mIr[22] = 87;
  out.mIr[23] = 88;
  out.mIr[24] = 89;
  out.mIr[25] = 90;
  out.mIr[26] = 91;
  out.mIr[27] = 92;
  out.mIr[28] = 93;
  out.mIr[29] = 94;
  out.mIr[30] = 96;
  out.mIr[31] = 97;
  out.mIr[32] = 98;
  out.mIr[33] = 104;
  out.mIr[34] = 105;
  out.mIr[35] = 106;
  out.mIr[36] = 107;
  out.mIr[37] = 108;
  out.mIr[38] = 109;
  out.mIr[39] = 110;
  out.mIr[40] = 111;
  out.mIr[41] = 112;
  out.mIr[42] = 113;
  (void)sys;
  (void)t2;
  return 0;
}
