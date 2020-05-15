/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_dtf.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_dtf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t116, NeDsMethodOutput *t117)
{
  PmRealVector out;
  real_T intermediate_der61;
  real_T t0[15];
  real_T t18[3];
  real_T t19[3];
  real_T t20[3];
  real_T t23[10];
  real_T t24[10];
  size_t t48;
  real_T t76;
  real_T t77;
  real_T t87;
  real_T t88;
  real_T t91;
  real_T t93;
  real_T t94;
  real_T t107;
  real_T t111;
  real_T t114;
  real_T t115;
  real_T X[42];
  real_T T_idx_0;
  T_idx_0 = t116->mT.mX[0];
  X[4] = t116->mX.mX[4];
  X[7] = t116->mX.mX[7];
  X[23] = t116->mX.mX[23];
  X[24] = t116->mX.mX[24];
  X[25] = t116->mX.mX[25];
  X[39] = t116->mX.mX[39];
  X[41] = t116->mX.mX[41];
  out = t117->mDTF;
  intermediate_der61 = X[4ULL] + T_idx_0 * 376.99111843077515;
  T_idx_0 = -sin(intermediate_der61) * 376.99111843077515 * 0.66666666666666663;
  t115 = -sin(intermediate_der61 + -2.0943951023931953) * 376.99111843077515 *
    0.66666666666666663;
  t107 = -sin(intermediate_der61 + 2.0943951023931953) * 376.99111843077515 *
    0.66666666666666663;
  t111 = -(cos(intermediate_der61) * 376.99111843077515) * 0.66666666666666663;
  t76 = -(cos(intermediate_der61 + -2.0943951023931953) * 376.99111843077515) *
    0.66666666666666663;
  t77 = -(cos(intermediate_der61 + 2.0943951023931953) * 376.99111843077515) *
    0.66666666666666663;
  t87 = -sin(intermediate_der61) * 376.99111843077515;
  t88 = -(cos(intermediate_der61) * 376.99111843077515);
  t114 = -sin(intermediate_der61 + -2.0943951023931953) * 376.99111843077515;
  t91 = -(cos(intermediate_der61 + -2.0943951023931953) * 376.99111843077515);
  t93 = -sin(intermediate_der61 + 2.0943951023931953) * 376.99111843077515;
  t94 = -(cos(intermediate_der61 + 2.0943951023931953) * 376.99111843077515);
  T_idx_0 = ((X[23ULL] * T_idx_0 + X[24ULL] * t115) + X[25ULL] * t107) *
    5.1031036307982872E-5;
  intermediate_der61 = ((X[23ULL] * t111 + X[24ULL] * t76) + X[25ULL] * t77) *
    5.1031036307982872E-5;
  t18[0ULL] = X[39ULL];
  t19[1ULL] = X[41ULL];
  t20[2ULL] = X[7ULL] * -6.666666666666667;
  t107 = (t18[0ULL] * t87 * -18881.483433953665 + t19[1ULL] * t88 *
          -18881.483433953665) + t20[2ULL] * 0.0 * -18881.483433953665;
  t18[0ULL] = X[39ULL];
  t19[1ULL] = X[41ULL];
  t20[2ULL] = X[7ULL] * -6.666666666666667;
  t111 = (t18[0ULL] * t114 * -18881.483433953665 + t19[1ULL] * t91 *
          -18881.483433953665) + t20[2ULL] * 0.0 * -18881.483433953665;
  t18[0ULL] = X[39ULL];
  t19[1ULL] = X[41ULL];
  t20[2ULL] = X[7ULL] * -6.666666666666667;
  t23[0ULL] = 0.0;
  t23[1ULL] = 0.0;
  t23[2ULL] = 0.0;
  t23[3ULL] = 0.0;
  t23[4ULL] = T_idx_0;
  t23[5ULL] = intermediate_der61;
  t23[6ULL] = 0.0;
  t23[7ULL] = 0.0;
  t23[8ULL] = 0.0;
  t23[9ULL] = 0.0;
  t24[0] = 1.0;
  t24[1] = 1.0;
  t24[2] = 1.0;
  t24[3] = 1.0;
  t24[4] = 1.0;
  t24[5] = 1.0;
  t24[6] = 1.0;
  t24[7] = 1.0;
  t24[8] = 1.0;
  t24[9] = 0.15;
  t0[0ULL] = -(T_idx_0 * 333.33333333333331);
  t0[1ULL] = -(intermediate_der61 * 333.33333333333331);
  t0[2ULL] = -t107 * 7.9442910576751712E-6;
  t0[3ULL] = -t111 * 7.9442910576751712E-6;
  t0[4ULL] = -((t18[0ULL] * t93 * -18881.483433953665 + t19[1ULL] * t94 *
                -18881.483433953665) + t20[2ULL] * 0.0 * -18881.483433953665) *
    7.9442910576751712E-6;
  for (t48 = 0ULL; t48 < 10ULL; t48++) {
    t0[t48 + 5ULL] = -t23[t48] * t24[t48];
  }

  out.mX[0] = t0[0];
  out.mX[1] = t0[1];
  out.mX[2] = t0[2];
  out.mX[3] = t0[3];
  out.mX[4] = t0[4];
  out.mX[5] = t0[5];
  out.mX[6] = t0[6];
  out.mX[7] = t0[7];
  out.mX[8] = t0[8];
  out.mX[9] = t0[9];
  out.mX[10] = t0[10];
  out.mX[11] = t0[11];
  out.mX[12] = t0[12];
  out.mX[13] = t0[13];
  out.mX[14] = t0[14];
  (void)sys;
  (void)t117;
  return 0;
}
