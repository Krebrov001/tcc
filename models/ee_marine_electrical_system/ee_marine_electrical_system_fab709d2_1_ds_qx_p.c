/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_qx_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_qx_p(const NeDynamicSystem
  *sys, const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  static int32_T _cg_const_1[139] = { 0, 12, 37, 55, 73, 91, 111, 111, 111, 111,
    111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111,
    111, 111, 111, 111, 111, 111, 111, 111, 112, 117, 117, 117, 122, 122, 122,
    127, 127, 127, 132, 132, 132, 137, 137, 137, 142, 142, 142, 143, 143, 143,
    155, 168, 181, 193, 218, 231, 244, 269, 274, 279, 301, 323, 344, 344, 344,
    344, 344, 344, 344, 344, 344, 363, 382, 402, 422, 442, 463, 484, 502, 502,
    502, 502, 504, 504, 504, 504, 504, 506, 507, 507, 507, 507, 507, 507, 507,
    507, 507, 507, 507, 515, 523, 528, 533, 535, 535, 535, 535, 537, 538, 538,
    538, 538, 538, 538, 538, 538, 538, 538, 538, 546, 554, 559, 564, 565, 565,
    565, 565, 566, 566, 572, 577, 582, 587, 592 };

  static int32_T _cg_const_2[592] = { 0, 1, 54, 55, 56, 57, 58, 59, 60, 61, 123,
    124, 0, 1, 2, 3, 4, 5, 54, 55, 56, 57, 58, 59, 60, 61, 64, 65, 66, 75, 76,
    77, 78, 79, 80, 81, 82, 1, 2, 3, 4, 5, 58, 61, 64, 65, 66, 75, 76, 77, 78,
    79, 80, 81, 82, 1, 2, 3, 4, 5, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80,
    81, 82, 1, 2, 3, 4, 5, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 1,
    2, 3, 4, 5, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 103, 104, 32,
    33, 55, 62, 123, 125, 36, 56, 63, 124, 126, 39, 64, 78, 103, 105, 42, 65, 79,
    104, 106, 45, 59, 80, 134, 135, 48, 60, 81, 136, 137, 51, 0, 1, 54, 55, 56,
    57, 58, 59, 60, 61, 123, 124, 0, 1, 33, 54, 55, 56, 57, 58, 59, 60, 61, 62,
    125, 0, 1, 36, 54, 55, 56, 57, 58, 59, 60, 61, 63, 126, 0, 1, 54, 55, 56, 57,
    58, 59, 60, 61, 123, 124, 0, 1, 2, 3, 4, 5, 54, 55, 56, 57, 58, 59, 60, 61,
    64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 0, 1, 45, 54, 55, 56, 57, 58, 59,
    60, 61, 134, 135, 0, 1, 48, 54, 55, 56, 57, 58, 59, 60, 61, 136, 137, 0, 1,
    2, 3, 4, 5, 54, 55, 56, 57, 58, 59, 60, 61, 64, 65, 66, 75, 76, 77, 78, 79,
    80, 81, 82, 33, 55, 62, 123, 125, 36, 56, 63, 124, 126, 1, 2, 3, 4, 5, 39,
    58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 103, 105, 133, 1, 2, 3,
    4, 5, 42, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 104, 106, 133,
    1, 2, 3, 4, 5, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 103, 104,
    133, 1, 2, 3, 4, 5, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 133,
    1, 2, 3, 4, 5, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 133, 1, 2,
    3, 4, 5, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 103, 104, 1, 2,
    3, 4, 5, 39, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 105, 1, 2,
    3, 4, 5, 42, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 106, 1, 2,
    3, 4, 5, 45, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 134, 135, 1,
    2, 3, 4, 5, 48, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 136, 137,
    1, 2, 3, 4, 5, 58, 61, 64, 65, 66, 75, 76, 77, 78, 79, 80, 81, 82, 86, 91,
    86, 91, 92, 5, 39, 64, 66, 77, 103, 104, 105, 5, 42, 65, 66, 77, 103, 104,
    106, 39, 64, 78, 103, 105, 42, 65, 79, 104, 106, 107, 111, 107, 111, 112, 0,
    33, 54, 57, 62, 123, 124, 125, 0, 36, 54, 57, 63, 123, 124, 126, 33, 55, 62,
    123, 125, 36, 56, 63, 124, 126, 127, 131, 64, 65, 66, 75, 76, 133, 45, 59,
    80, 134, 135, 45, 59, 80, 134, 135, 48, 60, 81, 136, 137, 48, 60, 81, 136,
    137 };

  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 138ULL;
  out.mNumRow = 138ULL;
  for (b = 0; b < 139; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  for (b = 0; b < 592; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
