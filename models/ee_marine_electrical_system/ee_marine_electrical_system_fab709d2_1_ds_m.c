/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_m.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_m(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mM;
  out.mX[0] = -7.0E-5;
  out.mX[1] = -0.00014;
  out.mX[2] = -0.00016146153647003873;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  out.mX[6] = -0.00016146153647003873;
  out.mX[7] = -0.0;
  out.mX[8] = -0.0;
  out.mX[9] = -0.0;
  out.mX[10] = -0.00016146153647003873;
  out.mX[11] = -7.0E-5;
  out.mX[12] = -1.0;
  out.mX[13] = -1.0;
  out.mX[14] = -0.0095616341780014654;
  out.mX[15] = -0.0026525823848649226;
  out.mX[16] = -0.0026525823848649226;
  out.mX[17] = -0.0026525823848649226;
  out.mX[18] = -0.0026525823848649226;
  out.mX[19] = 1.0;
  out.mX[20] = -1.0;
  out.mX[21] = -1.0;
  out.mX[22] = -0.075762127465646187;
  out.mX[23] = -0.03617157797543076;
  out.mX[24] = -0.061983471074380181;
  out.mX[25] = -0.24114385316953846;
  out.mX[26] = -1.0;
  out.mX[27] = -0.24114385316953846;
  out.mX[28] = 1.0;
  out.mX[29] = -1.0;
  out.mX[30] = -1.0;
  out.mX[31] = -1.0;
  out.mX[32] = -0.35377702816434425;
  out.mX[33] = -0.13262911924324614;
  out.mX[34] = -0.095255771475687256;
  out.mX[35] = -0.12383712729505199;
  out.mX[36] = -0.88419412828830746;
  out.mX[37] = -0.88419412828830746;
  out.mX[38] = 1.0;
  out.mX[39] = -3.9999999999999996E-5;
  out.mX[40] = -4.4999999999999993E-8;
  out.mX[41] = -4.4999999999999993E-8;
  out.mX[42] = -3.9999999999999996E-5;
  out.mX[43] = -4.4999999999999993E-8;
  out.mX[44] = -4.4999999999999993E-8;
  out.mX[45] = -3.9999999999999996E-5;
  out.mX[46] = -4.4999999999999993E-8;
  out.mX[47] = -4.4999999999999993E-8;
  out.mX[48] = -3.9999999999999996E-5;
  out.mX[49] = -4.4999999999999993E-8;
  out.mX[50] = -4.4999999999999993E-8;
  out.mX[51] = -7.9999999999999993E-5;
  out.mX[52] = -8.9999999999999985E-8;
  out.mX[53] = -8.9999999999999985E-8;
  out.mX[54] = -7.9999999999999993E-5;
  out.mX[55] = -8.9999999999999985E-8;
  out.mX[56] = -8.9999999999999985E-8;
  (void)sys;
  (void)t2;
  return 0;
}
