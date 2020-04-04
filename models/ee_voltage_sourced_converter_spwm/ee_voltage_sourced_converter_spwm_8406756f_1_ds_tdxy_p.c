/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_tdxy_p.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_tdxy_p(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXY_P;
  out.mNumCol = 18ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 3;
  out.mJc[3] = 6;
  out.mJc[4] = 9;
  out.mJc[5] = 10;
  out.mJc[6] = 10;
  out.mJc[7] = 13;
  out.mJc[8] = 16;
  out.mJc[9] = 19;
  out.mJc[10] = 20;
  out.mJc[11] = 21;
  out.mJc[12] = 21;
  out.mJc[13] = 22;
  out.mJc[14] = 23;
  out.mJc[15] = 23;
  out.mJc[16] = 24;
  out.mJc[17] = 25;
  out.mJc[18] = 25;
  out.mIr[0] = 1;
  out.mIr[1] = 2;
  out.mIr[2] = 3;
  out.mIr[3] = 1;
  out.mIr[4] = 2;
  out.mIr[5] = 3;
  out.mIr[6] = 1;
  out.mIr[7] = 2;
  out.mIr[8] = 3;
  out.mIr[9] = 0;
  out.mIr[10] = 1;
  out.mIr[11] = 2;
  out.mIr[12] = 3;
  out.mIr[13] = 1;
  out.mIr[14] = 2;
  out.mIr[15] = 3;
  out.mIr[16] = 1;
  out.mIr[17] = 2;
  out.mIr[18] = 3;
  out.mIr[19] = 0;
  out.mIr[20] = 0;
  out.mIr[21] = 0;
  out.mIr[22] = 0;
  out.mIr[23] = 0;
  out.mIr[24] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
