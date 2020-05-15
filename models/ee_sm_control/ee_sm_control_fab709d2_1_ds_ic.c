/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_ic.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_ic(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mIC;
  out.mX[0] = 376.99111843077515;
  out.mX[1] = -510.31036307982873;
  out.mX[2] = -4164.2622008760063;
  out.mX[3] = 4674.5725639558368;
  out.mX[4] = -2.4944270063804694;
  out.mX[5] = 0.97754101132779847;
  out.mX[6] = -0.55234622068513006;
  out.mX[7] = 0.0;
  out.mX[8] = 0.84279778569449959;
  out.mX[9] = -0.55234622068513006;
  out.mX[10] = 0.79882512690099672;
  out.mX[11] = -0.60380704869927249;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  out.mX[29] = 0.0;
  out.mX[30] = 0.0;
  out.mX[31] = 0.0;
  out.mX[32] = 0.0;
  out.mX[33] = 0.0;
  out.mX[34] = 0.0;
  out.mX[35] = 0.0;
  out.mX[36] = 0.0;
  out.mX[37] = 0.0;
  out.mX[38] = 0.0;
  out.mX[39] = 0.0;
  out.mX[40] = 0.0;
  out.mX[41] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}
