/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_f.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_f(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t109, NeDsMethodOutput *t110)
{
  PmRealVector out;
  real_T intrm_sf_mf_51;
  real_T t6[42];
  real_T t18[10];
  real_T t19[10];
  size_t t42;
  real_T t56;
  real_T t57;
  real_T t66;
  real_T t67;
  real_T t69;
  real_T t70;
  real_T t80;
  real_T t84;
  real_T t85;
  real_T t90;
  real_T t94;
  real_T t101;
  real_T t108;
  real_T X[42];
  real_T T_idx_0;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T Q_idx_3;
  int32_T Q_idx_4;
  int32_T Q_idx_5;
  Q_idx_0 = t109->mQ.mX[0];
  Q_idx_1 = t109->mQ.mX[1];
  Q_idx_2 = t109->mQ.mX[2];
  Q_idx_3 = t109->mQ.mX[3];
  Q_idx_4 = t109->mQ.mX[4];
  Q_idx_5 = t109->mQ.mX[5];
  T_idx_0 = t109->mT.mX[0];
  X[0] = t109->mX.mX[0];
  X[4] = t109->mX.mX[4];
  X[7] = t109->mX.mX[7];
  X[10] = t109->mX.mX[10];
  X[11] = t109->mX.mX[11];
  X[23] = t109->mX.mX[23];
  X[24] = t109->mX.mX[24];
  X[25] = t109->mX.mX[25];
  X[26] = t109->mX.mX[26];
  X[27] = t109->mX.mX[27];
  X[28] = t109->mX.mX[28];
  X[29] = t109->mX.mX[29];
  X[30] = t109->mX.mX[30];
  X[31] = t109->mX.mX[31];
  X[32] = t109->mX.mX[32];
  X[33] = t109->mX.mX[33];
  X[34] = t109->mX.mX[34];
  X[35] = t109->mX.mX[35];
  X[36] = t109->mX.mX[36];
  X[37] = t109->mX.mX[37];
  X[39] = t109->mX.mX[39];
  X[41] = t109->mX.mX[41];
  out = t110->mF;
  intrm_sf_mf_51 = X[4ULL] + T_idx_0 * 376.99111843077515;
  t57 = cos(intrm_sf_mf_51) * 0.66666666666666663;
  T_idx_0 = cos(intrm_sf_mf_51 + -2.0943951023931953) * 0.66666666666666663;
  t80 = cos(intrm_sf_mf_51 + 2.0943951023931953) * 0.66666666666666663;
  t101 = -sin(intrm_sf_mf_51) * 0.66666666666666663;
  t84 = -sin(intrm_sf_mf_51 + -2.0943951023931953) * 0.66666666666666663;
  t85 = -sin(intrm_sf_mf_51 + 2.0943951023931953) * 0.66666666666666663;
  t90 = cos(intrm_sf_mf_51);
  t94 = -sin(intrm_sf_mf_51);
  t66 = cos(intrm_sf_mf_51 + -2.0943951023931953);
  t67 = -sin(intrm_sf_mf_51 + -2.0943951023931953);
  t69 = cos(intrm_sf_mf_51 + 2.0943951023931953);
  t70 = -sin(intrm_sf_mf_51 + 2.0943951023931953);
  t108 = ((t57 * X[23ULL] + T_idx_0 * X[24ULL]) + t80 * X[25ULL]) /
    19595.917942265427;
  intrm_sf_mf_51 = ((t101 * X[23ULL] + t84 * X[24ULL]) + t85 * X[25ULL]) /
    19595.917942265427;
  if (Q_idx_0 == 1) {
    T_idx_0 = X[26ULL] - X[29ULL] / 0.0001;
  } else {
    T_idx_0 = X[26ULL] - X[29ULL] * 0.001;
  }

  if (Q_idx_1 == 1) {
    t80 = X[27ULL] - X[30ULL] / 0.0001;
  } else {
    t80 = X[27ULL] - X[30ULL] * 0.001;
  }

  if (Q_idx_2 == 1) {
    t101 = X[28ULL] - X[31ULL] / 0.0001;
  } else {
    t101 = X[28ULL] - X[31ULL] * 0.001;
  }

  if (Q_idx_3 == 1) {
    t84 = X[32ULL] - X[35ULL] / 0.0001;
  } else {
    t84 = X[32ULL] - X[35ULL] * 0.001;
  }

  if (Q_idx_4 == 1) {
    t56 = X[33ULL] - X[36ULL] / 0.0001;
  } else {
    t56 = X[33ULL] - X[36ULL] * 0.001;
  }

  if (Q_idx_5 == 1) {
    t57 = X[34ULL] - X[37ULL] / 0.0001;
  } else {
    t57 = X[34ULL] - X[37ULL] * 0.001;
  }

  t85 = X[7ULL] * -6.666666666666667;
  t18[0ULL] = 0.0;
  t18[1ULL] = 0.0;
  t18[2ULL] = 0.0;
  t18[3ULL] = 0.0;
  t18[4ULL] = t108;
  t18[5ULL] = intrm_sf_mf_51;
  t18[6ULL] = 0.0;
  t18[7ULL] = 0.0;
  t18[8ULL] = 0.0;
  t18[9ULL] = 0.0;
  t19[0] = 1.0;
  t19[1] = 1.0;
  t19[2] = 1.0;
  t19[3] = 1.0;
  t19[4] = 1.0;
  t19[5] = 1.0;
  t19[6] = 1.0;
  t19[7] = 1.0;
  t19[8] = 1.0;
  t19[9] = 6.666666666666667;
  t6[0ULL] = 0.0;
  t6[1ULL] = 0.0;
  t6[2ULL] = 0.0;
  t6[3ULL] = -0.0;
  t6[4ULL] = -((t108 - (-(X[0ULL] * X[11ULL] * 0.0026525823848649226))) / 0.003);
  t6[5ULL] = -((intrm_sf_mf_51 - X[0ULL] * X[10ULL] * 0.0026525823848649226) /
               0.003);
  t6[6ULL] = -0.0;
  t6[7ULL] = -0.0;
  t6[8ULL] = -0.0;
  t6[9ULL] = -0.0;
  t6[10ULL] = -0.0;
  t6[11ULL] = 376.99111843077515;
  t6[12ULL] = T_idx_0 / 10000.0;
  t6[13ULL] = t80 / 10000.0;
  t6[14ULL] = t101 / 10000.0;
  t6[15ULL] = t84 / 10000.0;
  t6[16ULL] = t56 / 10000.0;
  t6[17ULL] = t57 / 10000.0;
  t6[18ULL] = 0.0;
  t6[19ULL] = 0.0;
  t6[20ULL] = 0.0;
  t6[21ULL] = 0.0;
  t6[22ULL] = 0.0;
  t6[23ULL] = 0.0;
  t6[24ULL] = -((t90 * X[39ULL] * -18881.483433953665 + t94 * X[41ULL] *
                 -18881.483433953665) + t85 * -18881.483433953665) /
    125876.55622635777;
  t6[25ULL] = -((t66 * X[39ULL] * -18881.483433953665 + t67 * X[41ULL] *
                 -18881.483433953665) + t85 * -18881.483433953665) /
    125876.55622635777;
  t6[26ULL] = -((t69 * X[39ULL] * -18881.483433953665 + t70 * X[41ULL] *
                 -18881.483433953665) + t85 * -18881.483433953665) /
    125876.55622635777;
  t6[27ULL] = 0.0;
  t6[28ULL] = 0.0;
  t6[29ULL] = 0.0;
  t6[30ULL] = 0.0;
  t6[31ULL] = -(X[41ULL] * X[10ULL] - X[39ULL] * X[11ULL]) / 0.79882512690099672;
  for (t42 = 0ULL; t42 < 10ULL; t42++) {
    t6[t42 + 32ULL] = -t18[t42] / (t19[t42] == 0.0 ? 1.0E-16 : t19[t42]);
  }

  out.mX[0] = t6[0];
  out.mX[1] = t6[1];
  out.mX[2] = t6[2];
  out.mX[3] = t6[3];
  out.mX[4] = t6[4];
  out.mX[5] = t6[5];
  out.mX[6] = t6[6];
  out.mX[7] = t6[7];
  out.mX[8] = t6[8];
  out.mX[9] = t6[9];
  out.mX[10] = t6[10];
  out.mX[11] = t6[11];
  out.mX[12] = t6[12];
  out.mX[13] = t6[13];
  out.mX[14] = t6[14];
  out.mX[15] = t6[15];
  out.mX[16] = t6[16];
  out.mX[17] = t6[17];
  out.mX[18] = t6[18];
  out.mX[19] = t6[19];
  out.mX[20] = t6[20];
  out.mX[21] = t6[21];
  out.mX[22] = t6[22];
  out.mX[23] = t6[23];
  out.mX[24] = t6[24];
  out.mX[25] = t6[25];
  out.mX[26] = t6[26];
  out.mX[27] = t6[27];
  out.mX[28] = t6[28];
  out.mX[29] = t6[29];
  out.mX[30] = t6[30];
  out.mX[31] = t6[31];
  out.mX[32] = t6[32];
  out.mX[33] = t6[33];
  out.mX[34] = t6[34];
  out.mX[35] = t6[35];
  out.mX[36] = t6[36];
  out.mX[37] = t6[37];
  out.mX[38] = t6[38];
  out.mX[39] = t6[39];
  out.mX[40] = t6[40];
  out.mX[41] = t6[41];
  (void)sys;
  (void)t110;
  return 0;
}
