/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_ic.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_ic(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[138];
  int32_T b;
  static real_T _cg_const_1[138] = { 0.0, 0.0, -137.39125159841541,
    -1886.0466779616802, 2023.4379295600966, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.502754, -0.70277179341494889, 94.247779607693786, 0.97818608680978125,
    0.0, -0.25654683387593591, 0.95100936210395381, 1.3079532851704527,
    -0.32651415220573654, 0.500751, -2.4378018087442896, 376.99111843077515,
    0.953857864681891, -0.59289060657314452, 0.0, 0.81431995077937824,
    -0.59289060657314452, 0.76349933336243758, -0.64812886184393415, 0.500751,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  (void)t1;
  out = t2->mIC;
  for (b = 0; b < 138; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 138; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
