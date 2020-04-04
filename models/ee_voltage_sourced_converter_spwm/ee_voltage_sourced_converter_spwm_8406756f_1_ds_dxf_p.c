/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_dxf_p.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_dxf_p(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 18ULL;
  out.mNumRow = 18ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 6;
  out.mJc[2] = 15;
  out.mJc[3] = 24;
  out.mJc[4] = 33;
  out.mJc[5] = 39;
  out.mJc[6] = 51;
  out.mJc[7] = 60;
  out.mJc[8] = 69;
  out.mJc[9] = 78;
  out.mJc[10] = 80;
  out.mJc[11] = 82;
  out.mJc[12] = 84;
  out.mJc[13] = 86;
  out.mJc[14] = 88;
  out.mJc[15] = 90;
  out.mJc[16] = 92;
  out.mJc[17] = 94;
  out.mJc[18] = 96;
  out.mIr[0] = 4;
  out.mIr[1] = 5;
  out.mIr[2] = 8;
  out.mIr[3] = 9;
  out.mIr[4] = 12;
  out.mIr[5] = 13;
  out.mIr[6] = 6;
  out.mIr[7] = 8;
  out.mIr[8] = 9;
  out.mIr[9] = 10;
  out.mIr[10] = 11;
  out.mIr[11] = 12;
  out.mIr[12] = 13;
  out.mIr[13] = 14;
  out.mIr[14] = 15;
  out.mIr[15] = 6;
  out.mIr[16] = 8;
  out.mIr[17] = 9;
  out.mIr[18] = 10;
  out.mIr[19] = 11;
  out.mIr[20] = 12;
  out.mIr[21] = 13;
  out.mIr[22] = 14;
  out.mIr[23] = 15;
  out.mIr[24] = 6;
  out.mIr[25] = 8;
  out.mIr[26] = 9;
  out.mIr[27] = 10;
  out.mIr[28] = 11;
  out.mIr[29] = 12;
  out.mIr[30] = 13;
  out.mIr[31] = 14;
  out.mIr[32] = 15;
  out.mIr[33] = 4;
  out.mIr[34] = 5;
  out.mIr[35] = 8;
  out.mIr[36] = 9;
  out.mIr[37] = 12;
  out.mIr[38] = 13;
  out.mIr[39] = 4;
  out.mIr[40] = 5;
  out.mIr[41] = 6;
  out.mIr[42] = 7;
  out.mIr[43] = 8;
  out.mIr[44] = 9;
  out.mIr[45] = 10;
  out.mIr[46] = 11;
  out.mIr[47] = 12;
  out.mIr[48] = 13;
  out.mIr[49] = 14;
  out.mIr[50] = 15;
  out.mIr[51] = 6;
  out.mIr[52] = 8;
  out.mIr[53] = 9;
  out.mIr[54] = 10;
  out.mIr[55] = 11;
  out.mIr[56] = 12;
  out.mIr[57] = 13;
  out.mIr[58] = 14;
  out.mIr[59] = 15;
  out.mIr[60] = 6;
  out.mIr[61] = 8;
  out.mIr[62] = 9;
  out.mIr[63] = 10;
  out.mIr[64] = 11;
  out.mIr[65] = 12;
  out.mIr[66] = 13;
  out.mIr[67] = 14;
  out.mIr[68] = 15;
  out.mIr[69] = 6;
  out.mIr[70] = 8;
  out.mIr[71] = 9;
  out.mIr[72] = 10;
  out.mIr[73] = 11;
  out.mIr[74] = 12;
  out.mIr[75] = 13;
  out.mIr[76] = 14;
  out.mIr[77] = 15;
  out.mIr[78] = 4;
  out.mIr[79] = 6;
  out.mIr[80] = 5;
  out.mIr[81] = 6;
  out.mIr[82] = 6;
  out.mIr[83] = 7;
  out.mIr[84] = 8;
  out.mIr[85] = 10;
  out.mIr[86] = 9;
  out.mIr[87] = 10;
  out.mIr[88] = 10;
  out.mIr[89] = 11;
  out.mIr[90] = 12;
  out.mIr[91] = 14;
  out.mIr[92] = 13;
  out.mIr[93] = 14;
  out.mIr[94] = 14;
  out.mIr[95] = 15;
  (void)sys;
  (void)t2;
  return 0;
}
