/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dnf.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_dnf(const NeDynamicSystem *t0,
  const NeDynamicSystemInput *t135, NeDsMethodOutput *t136)
{
  PmRealVector out;
  real_T t1[28];
  real_T t16[8];
  real_T t18[3];
  real_T t24[3];
  real_T t26[3];
  real_T t31[8];
  size_t t54;
  real_T t78;
  real_T t79;
  real_T t80;
  real_T t96;
  real_T t97;
  real_T t98;
  real_T t114;
  real_T t115;
  real_T t116;
  real_T t120;
  real_T t121;
  real_T t122;
  real_T X[138];
  int32_T b;
  (void)t0;
  for (b = 0; b < 138; b++) {
    X[b] = t135->mX.mX[b];
  }

  out = t136->mDNF;
  t24[0ULL] = X[108ULL];
  t18[1ULL] = X[110ULL];
  t26[2ULL] = X[17ULL] * -6.666666666666667;
  t120 = t24[0ULL];
  t121 = t18[1ULL];
  t122 = t26[2ULL];
  t78 = (t120 * -981.36608284582462 + t121 * -0.0) + t122 * -0.0;
  t79 = (t120 * -0.0 + t121 * -981.36608284582462) + t122 * -0.0;
  t80 = (t120 * -0.0 + t121 * -0.0) + t122 * -981.36608284582462;
  t24[0ULL] = X[108ULL];
  t18[1ULL] = X[110ULL];
  t26[2ULL] = X[17ULL] * -6.666666666666667;
  t120 = t24[0ULL];
  t121 = t18[1ULL];
  t122 = t26[2ULL];
  t96 = (t120 * -981.36608284582462 + t121 * -0.0) + t122 * -0.0;
  t97 = (t120 * -0.0 + t121 * -981.36608284582462) + t122 * -0.0;
  t98 = (t120 * -0.0 + t121 * -0.0) + t122 * -981.36608284582462;
  t16[0] = -0.0;
  t16[1] = -0.0;
  t16[2] = -1.0;
  t16[3] = -0.0;
  t16[4] = -0.0;
  t16[5] = -0.0;
  t16[6] = -0.0;
  t16[7] = -0.0;
  t24[0ULL] = X[108ULL];
  t18[1ULL] = X[110ULL];
  t26[2ULL] = X[17ULL] * -6.666666666666667;
  t120 = t24[0ULL];
  t121 = t18[1ULL];
  t122 = t26[2ULL];
  t114 = (t120 * -981.36608284582462 + t121 * -0.0) + t122 * -0.0;
  t115 = (t120 * -0.0 + t121 * -981.36608284582462) + t122 * -0.0;
  t116 = (t120 * -0.0 + t121 * -0.0) + t122 * -981.36608284582462;
  t24[0ULL] = X[88ULL];
  t18[1ULL] = X[90ULL];
  t26[2ULL] = X[8ULL] * 10.75268817204301;
  t120 = t24[0ULL];
  t121 = t18[1ULL];
  t122 = t26[2ULL];
  t31[0] = -0.0;
  t31[1] = -0.0;
  t31[2] = -0.0;
  t31[3] = -1.0;
  t31[4] = -0.0;
  t31[5] = -0.0;
  t31[6] = -0.0;
  t31[7] = -0.0;
  t1[0ULL] = -t78 * 0.00015284815994967031;
  t1[1ULL] = -t79 * 0.00015284815994967031;
  t1[2ULL] = -t80 * 0.00015284815994967031;
  t1[3ULL] = -t96 * 0.00015284815994967031;
  t1[4ULL] = -t97 * 0.00015284815994967031;
  t1[5ULL] = -t98 * 0.00015284815994967031;
  for (t54 = 0ULL; t54 < 8ULL; t54++) {
    t1[t54 + 6ULL] = t16[t54];
  }

  t1[14ULL] = -t114 * 0.00015284815994967031;
  t1[15ULL] = -t115 * 0.00015284815994967031;
  t1[16ULL] = -t116 * 0.00015284815994967031;
  t1[17ULL] = -((t120 * 113.31839442092108 + t121 * -0.0) + t122 * -0.0) *
    0.0008206964145163545;
  t1[18ULL] = -((t120 * -0.0 + t121 * 113.31839442092108) + t122 * -0.0) *
    0.0008206964145163545;
  t1[19ULL] = -((t120 * -0.0 + t121 * -0.0) + t122 * 113.31839442092108) *
    0.0008206964145163545;
  for (t54 = 0ULL; t54 < 8ULL; t54++) {
    t1[t54 + 20ULL] = t31[t54];
  }

  out.mX[0] = t1[0];
  out.mX[1] = t1[1];
  out.mX[2] = t1[2];
  out.mX[3] = t1[3];
  out.mX[4] = t1[4];
  out.mX[5] = t1[5];
  out.mX[6] = t1[6];
  out.mX[7] = t1[7];
  out.mX[8] = t1[8];
  out.mX[9] = t1[9];
  out.mX[10] = t1[10];
  out.mX[11] = t1[11];
  out.mX[12] = t1[12];
  out.mX[13] = t1[13];
  out.mX[14] = t1[14];
  out.mX[15] = t1[15];
  out.mX[16] = t1[16];
  out.mX[17] = t1[17];
  out.mX[18] = t1[18];
  out.mX[19] = t1[19];
  out.mX[20] = t1[20];
  out.mX[21] = t1[21];
  out.mX[22] = t1[22];
  out.mX[23] = t1[23];
  out.mX[24] = t1[24];
  out.mX[25] = t1[25];
  out.mX[26] = t1[26];
  out.mX[27] = t1[27];
  (void)t0;
  (void)t136;
  return 0;
}
