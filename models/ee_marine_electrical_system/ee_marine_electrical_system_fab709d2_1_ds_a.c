/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_a.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_marine_electrical_system_fab709d2_1_ds_a(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[959];
  int32_T b;
  static real_T _cg_const_1[959] = { 0.002, 0.57735026918962584,
    0.57735026918962584, 0.57735026918962584, -1.4707821048680187E-5,
    -1.4707821048680187E-5, -1.4707821048680187E-5, 0.004, 0.57735026918962584,
    0.57735026918962584, 0.57735026918962584, -0.000473829295843978,
    0.000473829295843978, 0.0, 1.7320508075688776, 1.0, 0.0, 0.0,
    -0.0008206964145163545, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, -0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 1.0, -0.0, 0.0008206964145163545, 0.0, 1.0, 0.002,
    0.000473829295843978, -0.000473829295843978, 0.0, -8.8246926292081146E-5,
    -8.8246926292081146E-5, -8.8246926292081146E-5, -1.7320508075688776, -1.0,
    -0.0, -0.013262911924324612, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.99999999999999989,
    0.56941122878943173, 1.0, 0.56941122878943173, 0.56941122878943173, -1.0,
    0.56941122878943173, 0.0, 0.0, 0.0, -0.05, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -1.0, 0.0014184397163120566, -0.0, -0.0, -0.0, -0.01061032953945969, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 0.91052187769581694, -0.78044732373927161,
    -0.635763558554178, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 1.0, 1.0, 0.95238095238095233, 0.7758231529117402, 1.0, 0.0, 0.0, 0.0,
    -0.05, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0, -1.0, 0.00198019801980198, -0.0,
    -0.0, -0.0, -0.0026525823848649226, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    0.60240963855421681, -0.5524861878453039, -0.60240963855421681,
    0.41357549880857986, -0.37832758697830327, -0.384259025761088, 1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 0.54705949618959038,
    0.577089801072926, 0.5524861878453039, 0.56818181818181823, 1.0,
    -0.99999999999999989, 1.0, -1.0, 0.002, 1.0E-6, -1.0E-6, -0.0, -1.0, -0.0,
    -1.0, 1.0, -1.0, 0.002, 1.0E-6, -1.0E-6, -0.0, -1.0, -0.0, -1.0, 1.0, -1.0,
    0.002, 1.0E-6, -1.0E-6, -0.0, -1.0, -0.0, -1.0, 1.0, -1.0, 0.002, 1.0E-6,
    -1.0E-6, -0.0, -1.0, -0.0, -1.0, 1.0, -1.0, 0.004, 1.0E-6, -1.0E-6, -0.0,
    -1.0, -0.0, -1.0, 1.0, -1.0, 0.004, 1.0E-6, -1.0E-6, -0.0, -1.0, -0.0, -1.0,
    -1.0E-9, 1.0, 1.0E-9, -0.0084988795815690785, -1.0, 5.7735026918962578E-7,
    5.7735026918962578E-7, 5.7735026918962578E-7, -1.4707821048680186E-11,
    -1.4707821048680186E-11, -1.4707821048680186E-11, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.00016997759163138158, -0.0, -0.0, -0.0, 1.0,
    0.81649658092772615, -0.408248290463863, -0.408248290463863, 1.0E-6, 1.0,
    0.0, 0.70710678118654757, -0.70710678118654757, 1.0E-6, 1.0,
    -0.57735026918962584, -5.7735026918962578E-7, -5.7735026918962578E-7,
    -5.7735026918962578E-7, 1.4707821048680186E-11, 1.4707821048680186E-11,
    1.4707821048680186E-11, 0.57735026918962584, 0.57735026918962584,
    0.57735026918962584, -1.0, 5.7735026918962578E-7, 5.7735026918962578E-7,
    5.7735026918962578E-7, -4.7382929584397793E-10, 4.7382929584397793E-10, 0.0,
    -0.57735026918962584, -0.57735026918962584, -0.57735026918962584,
    1.7320508075688774E-6, 1.0, 0.81649658092772615, -0.408248290463863,
    -0.408248290463863, 1.0E-6, 1.0, 0.0, 0.70710678118654757,
    -0.70710678118654757, 1.0E-6, 1.0, -5.7735026918962578E-7,
    -5.7735026918962578E-7, -5.7735026918962578E-7, 4.7382929584397793E-10,
    -4.7382929584397793E-10, 0.0, -0.57735026918962584, -0.57735026918962584,
    -0.57735026918962584, -1.7320508075688774E-6, -1.0E-6, 1.0E-6, 1.0,
    -3.7007434154171883E-17, -1.0E-12, 1.000000000001, 0.81649658092772615,
    -0.408248290463863, -0.408248290463863, -1.0E-6, 1.0E-6, 1.0, -0.0, -1.0E-12,
    1.000000000001, 0.0, 0.70710678118654757, -0.70710678118654757,
    -0.54459253276318875, 0.27229626638159438, 0.27229626638159438, -1.0E-6,
    1.0E-6, 1.0, -0.00023232863899568025, -0.00011616431949784013, 0.0, -1.0E-12,
    1.000000000001, 0.81649658092772615, -0.408248290463863, -0.408248290463863,
    0.0, -0.0, -0.47163096808423066, 0.47163096808423066, -1.0E-6, 1.0E-6, 1.0,
    0.0, -0.00020120250339692307, 0.0, -1.0E-12, 1.000000000001, 0.0,
    0.70710678118654757, -0.70710678118654757, 2.7755575615628914E-17,
    -0.38508507290040783, -0.38508507290040783, -0.38508507290040783, 1.0,
    -0.00016428162992698271, 0.00016428162992698271, 0.0, 8.8246926292081134E-11,
    8.8246926292081134E-11, 8.8246926292081134E-11, 0.57735026918962584,
    0.57735026918962584, 0.57735026918962584, 0.6005203398766974, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.093, 0.00028454248839093283, 0.0, 0.0, -0.34670857988165682, 0.0,
    -0.00028454248839093283, 0.0, -0.34670857988165682, -0.00231787624951884,
    -1.0, 4.7382929584397793E-10, -4.7382929584397793E-10, 0.0,
    -8.8246926292081134E-11, -8.8246926292081134E-11, -8.8246926292081134E-11,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.00016997759163138158, -0.0, -0.0,
    -0.0, -1.7320508075688774E-6, 1.0, 0.00067009581643224733,
    0.00033504790821612361, 0.0, 1.0E-6, -1.1102230246251565E-16, 1.0, 0.0,
    0.00058032000000000005, 0.0, 1.0E-6, 0.0, 1.0, 0.00067009581643224733,
    0.00033504790821612361, 0.0, 1.0E-6, -1.1102230246251565E-16, 1.0, 0.0,
    0.00058032000000000005, 0.0, 1.0E-6, 0.0, 0.0008206964145163545,
    0.0008206964145163545, 0.0008206964145163545, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.99999999999999989, 7.5398223686155033E-5, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -1.0, 0.0145, -1.0, -1.0241430361006718, 0.0258,
    -1.052955244277417, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0,
    0.0145, -1.0, -1.0241430361006718, 0.0258, -1.052955244277417, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.001, -1.0, 0.24802866531259915,
    -0.91052187769581716, -0.17193362864168049, -0.36423644144582173, -0.0, -1.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 0.0, 0.0, 0.0,
    -0.010000000000000002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.15, 1.0,
    0.00012480000000000002, -6.24E-5, -6.24E-5, 1.0E-6, 1.0, 0.0,
    0.00010807997039229795, -0.00010807997039229795, 1.0E-6, -0.0, 1.0E-6,
    -1.0E-6, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    1.000000000001, -1.0E-12, -0.0, 1.0E-6, -1.0E-6, -1.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.000000000001, -1.0E-12,
    1.9820578716320078E-5, -0.0, -0.0, -1.8849555921538758E-5, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 1.8849572868678796E-5, -1.0, 0.81946968992623526,
    0.29759740863465556, 0.126053634921806, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -0.0, -0.0, 1.0, -0.54999999999999993, -0.80666666666666653,
    -1.0, 0.7, 0.54999999999999993, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -0.0, -0.00025198989960228144, 1.8849572868678796E-5,
    0.14019494934243468, -0.66346641236745907, 0.055996820182310489,
    0.11640691617786864, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 1.0, 0.0, 0.0, 0.0, -0.005000000000000001, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.15, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 1.0, 2.0799999999999997E-5, -1.0399999999999997E-5,
    -1.0399999999999997E-5, 1.0E-6, 1.0, 0.0, 1.801332839871632E-5,
    -1.801332839871632E-5, 1.0E-6, -0.0, 1.0E-6, -1.0E-6, -1.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.000000000001, -1.0E-12, -0.0,
    1.0E-6, -1.0E-6, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 1.000000000001, -1.0E-12, 1.6458914979030954E-5, -0.0, -0.0,
    -1.2566370614359172E-5, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    1.2566366121076937E-5, -1.0, 0.99999999999999989, 0.082872928176795535,
    -0.091881236325279947, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, 1.0, -0.66585655308181368, -0.30566531223765914, -0.38134296852464822,
    -1.0, 0.66585655308181368, 0.39089258496493184, 0.31045754825205912, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.00093810101238077045, 1.2566366121076937E-5, 1.0, 0.2,
    -0.34670857988165682, 1.0E-6, -1.0E-6, -1.0, 1.000000000001, -1.0E-12,
    -0.81649658092772615, 0.408248290463863, 0.408248290463863, -1.0E-6, 1.0E-6,
    1.0, -1.0E-12, 1.000000000001, -0.81649658092772615, 0.408248290463863,
    0.408248290463863, 1.0E-6, -1.0E-6, -1.0, 1.000000000001, -1.0E-12, -0.0,
    -0.70710678118654757, 0.70710678118654757, -1.0E-6, 1.0E-6, 1.0, -1.0E-12,
    1.000000000001, -0.0, -0.70710678118654757, 0.70710678118654757 };

  (void)t1;
  out = t2->mA;
  for (b = 0; b < 959; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 959; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}