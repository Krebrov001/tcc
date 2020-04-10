/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_eq_tol.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_eq_tol(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mEQ_TOL;
  out.mX[0] = 1.0E-9;
  out.mX[1] = 1.0E-9;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0E-9;
  out.mX[4] = 1.0E-9;
  out.mX[5] = 1.0E-9;
  out.mX[6] = 1.0E-9;
  out.mX[7] = 1.0E-9;
  out.mX[8] = 1.0E-9;
  out.mX[9] = 1.0E-9;
  out.mX[10] = 1.0E-9;
  out.mX[11] = 1.0E-9;
  out.mX[12] = 1.0E-9;
  out.mX[13] = 1.0E-9;
  out.mX[14] = 1.0E-9;
  out.mX[15] = 1.0E-9;
  out.mX[16] = 1.0E-9;
  out.mX[17] = 1.0E-9;
  out.mX[18] = 1.0E-9;
  out.mX[19] = 1.0E-9;
  out.mX[20] = 1.0E-9;
  out.mX[21] = 1.0E-9;
  out.mX[22] = 1.0E-9;
  out.mX[23] = 1.0E-9;
  out.mX[24] = 1.0E-9;
  out.mX[25] = 1.0E-9;
  out.mX[26] = 1.0E-9;
  out.mX[27] = 1.0E-9;
  out.mX[28] = 1.0E-9;
  out.mX[29] = 1.0E-9;
  out.mX[30] = 1.0E-9;
  out.mX[31] = 1.0E-9;
  out.mX[32] = 1.0E-9;
  out.mX[33] = 1.0E-9;
  out.mX[34] = 1.0E-9;
  out.mX[35] = 1.0E-9;
  out.mX[36] = 1.0E-9;
  out.mX[37] = 1.0E-9;
  (void)sys;
  (void)t2;
  return 0;
}
