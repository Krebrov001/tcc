/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_voltage_sourced_converter_spwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_a_p.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_sys_struct.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_externals.h"
#include "ee_voltage_sourced_converter_spwm_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_voltage_sourced_converter_spwm_8406756f_1_ds_a_p(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 18ULL;
  out.mNumRow = 18ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 2;
  out.mJc[2] = 3;
  out.mJc[3] = 4;
  out.mJc[4] = 5;
  out.mJc[5] = 7;
  out.mJc[6] = 7;
  out.mJc[7] = 11;
  out.mJc[8] = 15;
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
  out.mIr[0] = 0;
  out.mIr[1] = 16;
  out.mIr[2] = 17;
  out.mIr[3] = 17;
  out.mIr[4] = 17;
  out.mIr[5] = 0;
  out.mIr[6] = 16;
  out.mIr[7] = 1;
  out.mIr[8] = 2;
  out.mIr[9] = 3;
  out.mIr[10] = 17;
  out.mIr[11] = 1;
  out.mIr[12] = 2;
  out.mIr[13] = 3;
  out.mIr[14] = 17;
  out.mIr[15] = 1;
  out.mIr[16] = 2;
  out.mIr[17] = 3;
  out.mIr[18] = 17;
  out.mIr[19] = 16;
  out.mIr[20] = 16;
  out.mIr[21] = 16;
  out.mIr[22] = 16;
  out.mIr[23] = 16;
  out.mIr[24] = 16;
  (void)sys;
  (void)t2;
  return 0;
}
