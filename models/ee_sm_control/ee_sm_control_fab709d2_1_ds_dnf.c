/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_dnf.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_dnf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t97, NeDsMethodOutput *t98)
{
  PmRealVector out;
  real_T t15[3];
  real_T t16[3];
  real_T t17[3];
  real_T t58;
  real_T t59;
  real_T t60;
  real_T t76;
  real_T t77;
  real_T t78;
  real_T t82;
  real_T t83;
  real_T t84;
  real_T X_idx_39;
  real_T X_idx_41;
  real_T X_idx_7;
  X_idx_7 = t97->mX.mX[7];
  X_idx_39 = t97->mX.mX[39];
  X_idx_41 = t97->mX.mX[41];
  out = t98->mDNF;
  t15[0ULL] = X_idx_39;
  t16[1ULL] = X_idx_41;
  t17[2ULL] = X_idx_7 * -6.666666666666667;
  t82 = t15[0ULL];
  t83 = t16[1ULL];
  t84 = t17[2ULL];
  t58 = (t82 * -18881.483433953665 + t83 * -0.0) + t84 * -0.0;
  t59 = (t82 * -0.0 + t83 * -18881.483433953665) + t84 * -0.0;
  t60 = (t82 * -0.0 + t83 * -0.0) + t84 * -18881.483433953665;
  t15[0ULL] = X_idx_39;
  t16[1ULL] = X_idx_41;
  t17[2ULL] = X_idx_7 * -6.666666666666667;
  t82 = t15[0ULL];
  t83 = t16[1ULL];
  t84 = t17[2ULL];
  t76 = (t82 * -18881.483433953665 + t83 * -0.0) + t84 * -0.0;
  t77 = (t82 * -0.0 + t83 * -18881.483433953665) + t84 * -0.0;
  t78 = (t82 * -0.0 + t83 * -0.0) + t84 * -18881.483433953665;
  t15[0ULL] = X_idx_39;
  t16[1ULL] = X_idx_41;
  t17[2ULL] = X_idx_7 * -6.666666666666667;
  t82 = t15[0ULL];
  t83 = t16[1ULL];
  t84 = t17[2ULL];
  out.mX[0] = -t58 * 7.9442910576751712E-6;
  out.mX[1] = -t59 * 7.9442910576751712E-6;
  out.mX[2] = -t60 * 7.9442910576751712E-6;
  out.mX[3] = -t76 * 7.9442910576751712E-6;
  out.mX[4] = -t77 * 7.9442910576751712E-6;
  out.mX[5] = -t78 * 7.9442910576751712E-6;
  out.mX[6] = -((t82 * -18881.483433953665 + t83 * -0.0) + t84 * -0.0) *
    7.9442910576751712E-6;
  out.mX[7] = -((t82 * -0.0 + t83 * -18881.483433953665) + t84 * -0.0) *
    7.9442910576751712E-6;
  out.mX[8] = -((t82 * -0.0 + t83 * -0.0) + t84 * -18881.483433953665) *
    7.9442910576751712E-6;
  (void)sys;
  (void)t98;
  return 0;
}
