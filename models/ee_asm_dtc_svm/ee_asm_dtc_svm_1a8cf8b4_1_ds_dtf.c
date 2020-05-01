/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_dtf.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_dtf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t116, NeDsMethodOutput *t117)
{
  PmRealVector out;
  real_T intermediate_der35;
  real_T t0[13];
  real_T t18[3];
  real_T t19[3];
  real_T t20[3];
  real_T t23[8];
  real_T t24[8];
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
  real_T t113;
  real_T t115;
  real_T X[27];
  real_T T_idx_0;
  T_idx_0 = t116->mT.mX[0];
  X[2] = t116->mX.mX[2];
  X[7] = t116->mX.mX[7];
  X[8] = t116->mX.mX[8];
  X[9] = t116->mX.mX[9];
  X[15] = t116->mX.mX[15];
  X[17] = t116->mX.mX[17];
  out = t117->mDTF;
  intermediate_der35 = T_idx_0 * 376.99111843077515;
  T_idx_0 = -sin(intermediate_der35) * 376.99111843077515 * 0.66666666666666663;
  t115 = -sin(intermediate_der35 + -2.0943951023931953) * 376.99111843077515 *
    0.66666666666666663;
  t107 = -sin(intermediate_der35 + 2.0943951023931953) * 376.99111843077515 *
    0.66666666666666663;
  t111 = -(cos(intermediate_der35) * 376.99111843077515) * 0.66666666666666663;
  t76 = -(cos(intermediate_der35 + -2.0943951023931953) * 376.99111843077515) *
    0.66666666666666663;
  t77 = -(cos(intermediate_der35 + 2.0943951023931953) * 376.99111843077515) *
    0.66666666666666663;
  t87 = -sin(intermediate_der35) * 376.99111843077515;
  t88 = -(cos(intermediate_der35) * 376.99111843077515);
  t113 = -sin(intermediate_der35 + -2.0943951023931953) * 376.99111843077515;
  t91 = -(cos(intermediate_der35 + -2.0943951023931953) * 376.99111843077515);
  t93 = -sin(intermediate_der35 + 2.0943951023931953) * 376.99111843077515;
  t94 = -(cos(intermediate_der35 + 2.0943951023931953) * 376.99111843077515);
  intermediate_der35 = ((X[7ULL] * T_idx_0 + X[8ULL] * t115) + X[9ULL] * t107) *
    0.00128564869306645;
  T_idx_0 = ((X[7ULL] * t111 + X[8ULL] * t76) + X[9ULL] * t77) *
    0.00128564869306645;
  t18[0ULL] = X[15ULL];
  t19[1ULL] = X[17ULL];
  t20[2ULL] = X[2ULL] * 44.62529504327302;
  t107 = (t18[0ULL] * t87 * 140.56425710859855 + t19[1ULL] * t88 *
          140.56425710859855) + t20[2ULL] * 0.0 * 140.56425710859855;
  t18[0ULL] = X[15ULL];
  t19[1ULL] = X[17ULL];
  t20[2ULL] = X[2ULL] * 44.62529504327302;
  t111 = (t18[0ULL] * t113 * 140.56425710859855 + t19[1ULL] * t91 *
          140.56425710859855) + t20[2ULL] * 0.0 * 140.56425710859855;
  t18[0ULL] = X[15ULL];
  t19[1ULL] = X[17ULL];
  t20[2ULL] = X[2ULL] * 44.62529504327302;
  t23[0ULL] = 0.0;
  t23[1ULL] = 0.0;
  t23[2ULL] = intermediate_der35;
  t23[3ULL] = T_idx_0;
  t23[4ULL] = 0.0;
  t23[5ULL] = 0.0;
  t23[6ULL] = 0.0;
  t23[7ULL] = 0.0;
  t24[0] = 1.0;
  t24[1] = 1.0;
  t24[2] = 1.0;
  t24[3] = 1.0;
  t24[4] = 1.0;
  t24[5] = 1.0;
  t24[6] = 1.0;
  t24[7] = 0.022408815426997242;
  t0[0ULL] = -intermediate_der35;
  t0[1ULL] = -T_idx_0;
  t0[2ULL] = -t107 * 0.00015942043794023975;
  t0[3ULL] = -t111 * 0.00015942043794023975;
  t0[4ULL] = -((t18[0ULL] * t93 * 140.56425710859855 + t19[1ULL] * t94 *
                140.56425710859855) + t20[2ULL] * 0.0 * 140.56425710859855) *
    0.00015942043794023975;
  for (t48 = 0ULL; t48 < 8ULL; t48++) {
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
  (void)sys;
  (void)t117;
  return 0;
}
