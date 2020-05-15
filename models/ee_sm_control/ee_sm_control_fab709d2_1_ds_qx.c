/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_qx.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_qx(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[146];
  int32_T b;
  static real_T _cg_const_1[146] = { 5.0, 2.0, 2.0, 4.9999999999999996E-6,
    2.0E-6, 2.0E-6, 2.0, 1.0, 1.0, 2.0, 1.0, 1.0, 2.0, 5.0, 2.0, 2.0E-6,
    4.9999999999999996E-6, 2.0E-6, 1.0, 2.0, 1.0, 1.0, 2.0, 1.0, 2.0, 2.0, 5.0,
    2.0E-6, 2.0E-6, 4.9999999999999996E-6, 1.0, 1.0, 2.0, 1.0, 1.0, 2.0, 5.07E+6,
    4.9999999999999996E-6, 2.0E-6, 2.0E-6, 5.0E-12, 2.0E-12, 2.0E-12, 2.0E-6,
    1.0E-6, 1.0E-6, 2.0E-6, 1.0E-6, 1.0E-6, 2.0E-6, 4.9999999999999996E-6,
    2.0E-6, 2.0E-12, 5.0E-12, 2.0E-12, 1.0E-6, 2.0E-6, 1.0E-6, 1.0E-6, 2.0E-6,
    1.0E-6, 2.0E-6, 2.0E-6, 4.9999999999999996E-6, 2.0E-12, 2.0E-12, 5.0E-12,
    1.0E-6, 1.0E-6, 2.0E-6, 1.0E-6, 1.0E-6, 2.0E-6, 2.0, 1.0, 1.0, 2.0E-6,
    1.0E-6, 1.0E-6, 10.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0E-6, 2.0E-6,
    1.0E-6, 2.0, 10.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 2.0, 1.0E-6, 1.0E-6, 2.0E-6,
    2.0, 2.0, 10.0, 1.0, 1.0, 2.0, 2.0, 1.0, 1.0, 2.0E-6, 1.0E-6, 1.0E-6, 2.0,
    1.0, 1.0, 10.0, 2.0, 2.0, 1.0, 2.0, 1.0, 1.0E-6, 2.0E-6, 1.0E-6, 1.0, 2.0,
    1.0, 2.0, 10.0, 2.0, 1.0, 1.0, 2.0, 1.0E-6, 1.0E-6, 2.0E-6, 1.0, 1.0, 2.0,
    2.0, 2.0, 10.0, 2.0 };

  (void)t1;
  out = t2->mQX;
  for (b = 0; b < 146; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 146; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
