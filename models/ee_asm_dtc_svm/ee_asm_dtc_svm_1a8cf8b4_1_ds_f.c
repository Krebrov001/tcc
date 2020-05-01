/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_f.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_sys_struct.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_externals.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_asm_dtc_svm_1a8cf8b4_1_ds_f(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t109, NeDsMethodOutput *t110)
{
  PmRealVector out;
  real_T t3[27];
  real_T t14[8];
  real_T t15[8];
  size_t t40;
  real_T t63;
  real_T t64;
  real_T t65;
  real_T t67;
  real_T t68;
  real_T t71;
  real_T t80;
  real_T t82;
  real_T t94;
  real_T t98;
  real_T t102;
  real_T t107;
  real_T t108;
  real_T X[27];
  real_T T_idx_0;
  int32_T M_idx_0;
  int32_T M_idx_1;
  real_T U_idx_0;
  int32_T M_idx_12;
  int32_T M_idx_17;
  real_T U_idx_1;
  int32_T M_idx_18;
  int32_T M_idx_19;
  real_T U_idx_2;
  M_idx_0 = t109->mM.mX[0];
  M_idx_1 = t109->mM.mX[1];
  M_idx_12 = t109->mM.mX[12];
  M_idx_17 = t109->mM.mX[17];
  M_idx_18 = t109->mM.mX[18];
  M_idx_19 = t109->mM.mX[19];
  T_idx_0 = t109->mT.mX[0];
  U_idx_0 = t109->mU.mX[0];
  U_idx_1 = t109->mU.mX[1];
  U_idx_2 = t109->mU.mX[2];
  X[1] = t109->mX.mX[1];
  X[2] = t109->mX.mX[2];
  X[3] = t109->mX.mX[3];
  X[4] = t109->mX.mX[4];
  X[5] = t109->mX.mX[5];
  X[6] = t109->mX.mX[6];
  X[7] = t109->mX.mX[7];
  X[8] = t109->mX.mX[8];
  X[9] = t109->mX.mX[9];
  X[10] = t109->mX.mX[10];
  X[11] = t109->mX.mX[11];
  X[12] = t109->mX.mX[12];
  X[15] = t109->mX.mX[15];
  X[17] = t109->mX.mX[17];
  out = t110->mF;
  t108 = 1.0 - X[1ULL] * 0.0053051647697298452;
  t107 = T_idx_0 * 376.99111843077515;
  t82 = cos(t107) * 0.66666666666666663;
  T_idx_0 = cos(t107 + -2.0943951023931953) * 0.66666666666666663;
  t94 = cos(t107 + 2.0943951023931953) * 0.66666666666666663;
  t98 = -sin(t107) * 0.66666666666666663;
  t102 = -sin(t107 + -2.0943951023931953) * 0.66666666666666663;
  t63 = -sin(t107 + 2.0943951023931953) * 0.66666666666666663;
  t64 = cos(t107);
  t65 = -sin(t107);
  t67 = cos(t107 + -2.0943951023931953);
  t68 = -sin(t107 + -2.0943951023931953);
  t80 = cos(t107 + 2.0943951023931953);
  t71 = -sin(t107 + 2.0943951023931953);
  t107 = ((t82 * X[7ULL] + T_idx_0 * X[8ULL]) + t94 * X[9ULL]) /
    777.81745930520231;
  T_idx_0 = ((t98 * X[7ULL] + t102 * X[8ULL]) + t63 * X[9ULL]) /
    777.81745930520231;
  if (M_idx_0 != 0) {
    U_idx_0 = 1.0;
  } else {
    if (M_idx_1 != 0) {
      U_idx_0 = -1.0;
    }
  }

  if (M_idx_12 != 0) {
    U_idx_1 = 1.0;
  } else {
    if (M_idx_17 != 0) {
      U_idx_1 = -1.0;
    }
  }

  if (M_idx_18 != 0) {
    U_idx_2 = 1.0;
  } else {
    if (M_idx_19 != 0) {
      U_idx_2 = -1.0;
    }
  }

  t82 = -(500.0 * U_idx_1);
  U_idx_1 = X[2ULL] * 44.62529504327302;
  t14[0ULL] = 0.0;
  t14[1ULL] = 0.0;
  t14[2ULL] = t107;
  t14[3ULL] = T_idx_0;
  t14[4ULL] = 0.0;
  t14[5ULL] = 0.0;
  t14[6ULL] = 0.0;
  t14[7ULL] = 0.0;
  t15[0] = 1.0;
  t15[1] = 1.0;
  t15[2] = 1.0;
  t15[3] = 1.0;
  t15[4] = 1.0;
  t15[5] = 1.0;
  t15[6] = 1.0;
  t15[7] = 44.62529504327302;
  t3[0ULL] = 188.49555921538757;
  t3[1ULL] = -t107;
  t3[2ULL] = -T_idx_0;
  t3[3ULL] = -0.0;
  t3[4ULL] = -(X[5ULL] * t108);
  t3[5ULL] = X[3ULL] * t108;
  t3[6ULL] = -0.0;
  t3[7ULL] = -((t64 * X[15ULL] * 140.56425710859855 + t65 * X[17ULL] *
                140.56425710859855) + U_idx_1 * 140.56425710859855) /
    6272.7214460096975;
  t3[8ULL] = -((t67 * X[15ULL] * 140.56425710859855 + t68 * X[17ULL] *
                140.56425710859855) + U_idx_1 * 140.56425710859855) /
    6272.7214460096975;
  t3[9ULL] = -((t80 * X[15ULL] * 140.56425710859855 + t71 * X[17ULL] *
                140.56425710859855) + U_idx_1 * 140.56425710859855) /
    6272.7214460096975;
  t3[10ULL] = 0.0;
  t3[11ULL] = 0.0;
  t3[12ULL] = 0.0;
  t3[13ULL] = 0.0;
  t3[14ULL] = -(X[17ULL] * X[4ULL] - X[15ULL] * X[6ULL]) / 0.0011493631659474852;
  for (t40 = 0ULL; t40 < 8ULL; t40++) {
    t3[t40 + 15ULL] = -t14[t40] / (t15[t40] == 0.0 ? 1.0E-16 : t15[t40]);
  }

  out.mX[0] = t3[0];
  out.mX[1] = t3[1];
  out.mX[2] = t3[2];
  out.mX[3] = t3[3];
  out.mX[4] = t3[4];
  out.mX[5] = t3[5];
  out.mX[6] = t3[6];
  out.mX[7] = t3[7];
  out.mX[8] = t3[8];
  out.mX[9] = t3[9];
  out.mX[10] = t3[10];
  out.mX[11] = t3[11];
  out.mX[12] = t3[12];
  out.mX[13] = t3[13];
  out.mX[14] = t3[14];
  out.mX[15] = t3[15];
  out.mX[16] = t3[16];
  out.mX[17] = t3[17];
  out.mX[18] = t3[18];
  out.mX[19] = t3[19];
  out.mX[20] = t3[20];
  out.mX[21] = t3[21];
  out.mX[22] = t3[22];
  out.mX[23] = -(500.0 * U_idx_0) / 1.0E+6;
  out.mX[24] = t82 / 1.0E+6;
  out.mX[25] = -(500.0 * U_idx_2) / 1.0E+6;
  out.mX[26] = -0.001 + -(-((X[10ULL] * (((X[7ULL] * 1.0E-12 + -X[11ULL]) + -X
    [12ULL]) + X[10ULL] * -1.0E-12) + ((-X[7ULL] + X[8ULL]) + X[10ULL]) * X
    [11ULL]) + ((-X[7ULL] + X[9ULL]) + X[10ULL]) * X[12ULL]) * 0.001 / 1000.0 *
    1000.0);
  (void)sys;
  (void)t110;
  return 0;
}
