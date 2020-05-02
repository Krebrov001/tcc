/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_a.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_a(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mA;
  out.mX[0] = -0.0;
  out.mX[1] = -1.0;
  out.mX[2] = -0.0;
  out.mX[3] = -1.0;
  out.mX[4] = 1.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = -1.0;
  out.mX[8] = -0.0;
  out.mX[9] = -0.0;
  out.mX[10] = 1.0;
  out.mX[11] = 0.0;
  out.mX[12] = 1.0;
  out.mX[13] = 0.0;
  out.mX[14] = -0.0;
  out.mX[15] = -1.0;
  out.mX[16] = -0.0;
  out.mX[17] = 1.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 1.0;
  out.mX[21] = -0.0;
  out.mX[22] = -0.0;
  out.mX[23] = -1.0;
  out.mX[24] = 1.0;
  out.mX[25] = 0.24056388173879573;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  out.mX[29] = 0.24056388173879573;
  out.mX[30] = 0.0;
  out.mX[31] = 0.0;
  out.mX[32] = 0.0;
  out.mX[33] = 0.24056388173879573;
  out.mX[34] = -1.0;
  out.mX[35] = -1.0;
  out.mX[36] = -2.0E-5;
  out.mX[37] = -1.0;
  out.mX[38] = -1.0E-5;
  out.mX[39] = 1.0;
  out.mX[40] = 1.0E-5;
  out.mX[41] = 1.0;
  out.mX[42] = 1.0E-5;
  out.mX[43] = -1.0;
  out.mX[44] = -1.0E-5;
  out.mX[45] = 1.0;
  out.mX[46] = 1.0E-5;
  out.mX[47] = -1.0;
  out.mX[48] = -1.0E-5;
  out.mX[49] = -1.0;
  out.mX[50] = -1.0E-5;
  out.mX[51] = 1.0;
  out.mX[52] = 1.0E-5;
  out.mX[53] = 1.0;
  out.mX[54] = 1.0E-5;
  out.mX[55] = -1.0;
  out.mX[56] = -1.0E-5;
  out.mX[57] = -1.0;
  out.mX[58] = -1.0E-5;
  out.mX[59] = 1.0;
  out.mX[60] = 1.0E-5;
  out.mX[61] = 0.24056388173879573;
  out.mX[62] = 0.24056388173879573;
  out.mX[63] = 0.24056388173879573;
  out.mX[64] = -0.0;
  out.mX[65] = -0.0;
  out.mX[66] = -0.24056388173879573;
  out.mX[67] = -0.24056388173879573;
  out.mX[68] = -0.0;
  out.mX[69] = -0.0;
  out.mX[70] = -0.0;
  out.mX[71] = -0.24056388173879573;
  out.mX[72] = -0.0;
  (void)sys;
  (void)t2;
  return 0;
}
