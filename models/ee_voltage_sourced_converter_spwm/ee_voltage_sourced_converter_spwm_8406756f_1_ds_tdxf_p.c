/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_tdxf_p.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_tdxf_p(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_2[121] = { 0, 4, 5, 8, 9, 12, 13, 16, 6, 8, 9, 10, 11,
    12, 13, 14, 15, 17, 6, 8, 9, 10, 11, 12, 13, 14, 15, 17, 6, 8, 9, 10, 11, 12,
    13, 14, 15, 17, 0, 4, 5, 8, 9, 12, 13, 16, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 1, 2, 3, 6, 8, 9, 10, 11, 12, 13, 14, 15, 17, 1, 2, 3, 6, 8, 9, 10,
    11, 12, 13, 14, 15, 17, 1, 2, 3, 6, 8, 9, 10, 11, 12, 13, 14, 15, 17, 4, 6,
    16, 5, 6, 16, 6, 7, 8, 10, 16, 9, 10, 16, 10, 11, 12, 14, 16, 13, 14, 16, 14,
    15 };

  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 18ULL;
  out.mNumRow = 18ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 8;
  out.mJc[2] = 18;
  out.mJc[3] = 28;
  out.mJc[4] = 38;
  out.mJc[5] = 46;
  out.mJc[6] = 58;
  out.mJc[7] = 71;
  out.mJc[8] = 84;
  out.mJc[9] = 97;
  out.mJc[10] = 100;
  out.mJc[11] = 103;
  out.mJc[12] = 105;
  out.mJc[13] = 108;
  out.mJc[14] = 111;
  out.mJc[15] = 113;
  out.mJc[16] = 116;
  out.mJc[17] = 119;
  out.mJc[18] = 121;
  for (b = 0; b < 121; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
