/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */
/* ee_switching_power_supply_thermal_4bd2f3a3_1_ds.c - body for module ee_switching_power_supply_thermal_4bd2f3a3_1_ds */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_zc.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_tdxy_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_mdxy_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxy_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_y.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_qx_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_all.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_act.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_exp.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_eq_tol.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_mode.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_var_tol.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxm_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_m_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_log.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dnf_v_x.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_lv.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slf.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_tdxf_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_a_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_vmf.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxf_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slv.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_ic.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slf0.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_qx.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxf.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_update_i.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_f.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_cache_i.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxicr_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_il.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_a.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxdelt_p.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_assert.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds.h"
#include "ssc_ml_fun.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"

static int32_T ds_m(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_il(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_iassert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(const NeDynamicSystem *ds);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out);
static NeEquationData s_equation_data[38] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "ee_switching_power_supply_thermal/ C", 1U, 0U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_switching_power_supply_thermal/Diode 2",
    1U, 2U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/L", 2U, 3U, TRUE, 1.0, "1", }, { "", 0U,
    8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 5U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 6U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 7U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 8U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 9U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 10U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 11U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 12U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Thermal 1/Heatsink Thermal Mass", 2U, 13U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Thermal 2/Heatsink Thermal Mass", 2U, 15U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Diode 1", 1U, 17U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Diode 1", 5U, 18U, FALSE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Diode 2", 5U, 23U, FALSE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 28U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 4U, 29U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 33U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 3U, 34U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 3U, 37U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 3U, 40U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 3U, 43U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 46U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 47U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 48U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 11U, 49U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 60U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 61U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 62U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 63U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 64U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 11U, 65U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 76U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 77U, FALSE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Thermal 1/Convection Heatsink", 1U, 78U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_switching_power_supply_thermal/Thermal 2/Convection Heatsink", 1U, 79U,
    TRUE, 1.0, "1", } };

static NeVariableData s_variable_data[38] = { { "C.vc", 0U, 0,
    "ee_switching_power_supply_thermal/ C", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Diode_2.private.Cjunction.vc", 0U, 0,
    "ee_switching_power_supply_thermal/Diode 2", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_NONE, "Capacitor voltage", }, { "L.i_L", 0U, 0,
    "ee_switching_power_supply_thermal/L", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "Diode_1.private.Cjunction.vc", 0U, 0,
    "ee_switching_power_supply_thermal/Diode 1", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_NONE, "Capacitor voltage", }, {
    "N_Channel_MOSFET_1.capacitor_GS.vc", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1.0, "1", 0.0, TRUE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "N_Channel_MOSFET_2.capacitor_GS.vc", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0, TRUE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "N_Channel_MOSFET_1.capacitor_GD.vc", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1.0, "1", 0.0, TRUE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "N_Channel_MOSFET_1.thermal_port.Tc", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1.0, "1", 0.0, TRUE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Case temperature", }, {
    "Thermal_1.Heatsink_Thermal_Mass.T", 0U, 0,
    "ee_switching_power_supply_thermal/Thermal 1/Heatsink Thermal Mass", 1.0,
    "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Temperature", }, {
    "N_Channel_MOSFET_1.thermal_port.Tj", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1.0, "1", 0.0, TRUE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Junction temperature", }, {
    "N_Channel_MOSFET_2.capacitor_GD.vc", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0, TRUE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "N_Channel_MOSFET_2.thermal_port.Tc", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0, TRUE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Case temperature", }, {
    "Thermal_2.Heatsink_Thermal_Mass.T", 0U, 0,
    "ee_switching_power_supply_thermal/Thermal 2/Heatsink Thermal Mass", 1.0,
    "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Temperature", }, {
    "N_Channel_MOSFET_2.thermal_port.Tj", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0, TRUE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Junction temperature", }, { "Diode_2.i", 0U,
    0, "ee_switching_power_supply_thermal/Diode 2", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current", }, { "Diode_2.i_capacitor", 0U, 0,
    "ee_switching_power_supply_thermal/Diode 2", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Junction capacitance current", }, {
    "N_Channel_MOSFET_2.drain_resistor.i", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Current", }, { "Diode_1.i_capacitor", 0U, 0,
    "ee_switching_power_supply_thermal/Diode 1", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Junction capacitance current", }, {
    "Driver.Half_Bridge_Driver.iH", 0U, 0,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "High-side current HO->HS", }, {
    "N_Channel_MOSFET_1.source_resistor.i", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "Driver.Controlled_PWM_Voltage.pwm.v2", 0U, 0,
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Output voltage", }, {
    "Driver.Controlled_PWM_Voltage.pwm.duty_cycle", 0U, 0,
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Duty cycle", }, {
    "Driver.Controlled_PWM_Voltage.pwm.pulse_width", 0U, 0,
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pulse_width", }, {
    "N_Channel_MOSFET_2.source_resistor.i", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "Driver.Half_Bridge_Driver.power_dissipated_high_side", 0U, 0,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "power_dissipated_high_side", }, {
    "Driver.Half_Bridge_Driver.power_dissipated_low_side", 0U, 0,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "power_dissipated_low_side", }, {
    "N_Channel_MOSFET_1.mos.ids", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Drain-source current", }, {
    "N_Channel_MOSFET_1.gate_resistor.Q", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Heat flow", }, { "N_Channel_MOSFET_1.mos.Q", 0U,
    0, "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Heat flow", }, {
    "N_Channel_MOSFET_1.source_resistor.Q", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Heat flow", }, {
    "N_Channel_MOSFET_1.thermal_port.Qj", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Heat flow into port J", }, {
    "N_Channel_MOSFET_2.mos.ids", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Drain-source current", }, {
    "N_Channel_MOSFET_2.gate_resistor.Q", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Heat flow", }, { "N_Channel_MOSFET_2.mos.Q", 0U,
    0, "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Heat flow", }, {
    "N_Channel_MOSFET_2.source_resistor.Q", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Heat flow", }, {
    "N_Channel_MOSFET_2.thermal_port.Qj", 0U, 0,
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Heat flow into port J", }, {
    "Thermal_1.Heatsink_Thermal_Mass.Q", 0U, 0,
    "ee_switching_power_supply_thermal/Thermal 1/Heatsink Thermal Mass", 1.0,
    "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Heat flow rate", }, {
    "Thermal_2.Heatsink_Thermal_Mass.Q", 0U, 0,
    "ee_switching_power_supply_thermal/Thermal 2/Heatsink Thermal Mass", 1.0,
    "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Heat flow rate", } };

static NeVariableData s_discrete_data[3] = { {
    "Driver.Controlled_PWM_Voltage.pwm.ZTime", 0U, 0,
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Time when last pulse period ended",
  }, { "Driver.Half_Bridge_Driver.ZoffTime", 0U, 0,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Time at which input last went low", }, {
    "Driver.Half_Bridge_Driver.ZonTime", 0U, 0,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Time at which input last went high", } };

static NeObservableData s_observable_data[254] = { { "C.i",
    "ee_switching_power_supply_thermal/ C", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "C.n.v",
    "ee_switching_power_supply_thermal/ C", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "C.p.v",
    "ee_switching_power_supply_thermal/ C", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "C.v",
    "ee_switching_power_supply_thermal/ C", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "C.vc",
    "ee_switching_power_supply_thermal/ C", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Current_sensor.Current_Sensor.I",
    "ee_switching_power_supply_thermal/Current sensor/Current Sensor", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Current_sensor.Current_Sensor.i1",
    "ee_switching_power_supply_thermal/Current sensor/Current Sensor", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Current_sensor.Current_Sensor.n.v",
    "ee_switching_power_supply_thermal/Current sensor/Current Sensor", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Current_sensor.Current_Sensor.p.v",
    "ee_switching_power_supply_thermal/Current sensor/Current Sensor", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Current_sensor.Current_Sensor.v1",
    "ee_switching_power_supply_thermal/Current sensor/Current Sensor", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Current_sensor.x0.v",
    "ee_switching_power_supply_thermal/Current sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "Current_sensor.x1.v",
    "ee_switching_power_supply_thermal/Current sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Cyclic_Load.Controlled_Current_Source.head.v",
    "ee_switching_power_supply_thermal/Cyclic Load/Controlled Current Source",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cyclic_Load.Controlled_Current_Source.i",
    "ee_switching_power_supply_thermal/Cyclic Load/Controlled Current Source",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Cyclic_Load.Controlled_Current_Source.iT",
    "ee_switching_power_supply_thermal/Cyclic Load/Controlled Current Source",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "iT", }, {
    "Cyclic_Load.Controlled_Current_Source.tail.v",
    "ee_switching_power_supply_thermal/Cyclic Load/Controlled Current Source",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Cyclic_Load.Controlled_Current_Source.v",
    "ee_switching_power_supply_thermal/Cyclic Load/Controlled Current Source",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, { "Cyclic_Load.x0.v",
    "ee_switching_power_supply_thermal/Cyclic Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "Cyclic_Load.x1.v",
    "ee_switching_power_supply_thermal/Cyclic Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "DC_Source.i",
    "ee_switching_power_supply_thermal/DC Source", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "DC_Source.n.v",
    "ee_switching_power_supply_thermal/DC Source", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "DC_Source.p.v",
    "ee_switching_power_supply_thermal/DC Source", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "DC_Source.v",
    "ee_switching_power_supply_thermal/DC Source", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diode_1.private.Cjunction.i", "ee_switching_power_supply_thermal/Diode 1",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current", }, {
    "Diode_1.private.Cjunction.n.v", "ee_switching_power_supply_thermal/Diode 1",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diode_1.private.Cjunction.p.v", "ee_switching_power_supply_thermal/Diode 1",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diode_1.private.Cjunction.v", "ee_switching_power_supply_thermal/Diode 1",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diode_1.private.Cjunction.vc", "ee_switching_power_supply_thermal/Diode 1",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Capacitor voltage", }, {
    "Diode_1.Tsim", "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, { "Diode_1.i",
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Diode_1.i_capacitor",
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Diode_1.private.intNode.v", "ee_switching_power_supply_thermal/Diode 1", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "Diode_1.n.v",
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diode_1.private.ohmicResistance.i",
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current", }, {
    "Diode_1.private.ohmicResistance.n.v",
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diode_1.private.ohmicResistance.p.v",
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diode_1.private.ohmicResistance.v",
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "Diode_1.p.v",
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diode_1.power_dissipated", "ee_switching_power_supply_thermal/Diode 1", 1U,
    1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, { "Diode_1.v",
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Diode_1.v_capacitor",
    "ee_switching_power_supply_thermal/Diode 1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Diode_2.private.Cjunction.i", "ee_switching_power_supply_thermal/Diode 2",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current", }, {
    "Diode_2.private.Cjunction.n.v", "ee_switching_power_supply_thermal/Diode 2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diode_2.private.Cjunction.p.v", "ee_switching_power_supply_thermal/Diode 2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diode_2.private.Cjunction.v", "ee_switching_power_supply_thermal/Diode 2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diode_2.private.Cjunction.vc", "ee_switching_power_supply_thermal/Diode 2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Capacitor voltage", }, {
    "Diode_2.Tsim", "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, { "Diode_2.i",
    "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Diode_2.i_capacitor",
    "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Diode_2.private.intNode.v", "ee_switching_power_supply_thermal/Diode 2", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "Diode_2.n.v",
    "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diode_2.private.ohmicResistance.i",
    "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current", }, {
    "Diode_2.private.ohmicResistance.n.v",
    "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diode_2.private.ohmicResistance.p.v",
    "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diode_2.private.ohmicResistance.v",
    "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "Diode_2.p.v",
    "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diode_2.power_dissipated", "ee_switching_power_supply_thermal/Diode 2", 1U,
    1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, { "Diode_2.v",
    "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Diode_2.v_capacitor",
    "ee_switching_power_supply_thermal/Diode 2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Driver.Controlled_PWM_Voltage.n2.v",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Controlled_PWM_Voltage.p2.v",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Controlled_PWM_Voltage.pwm.duty_cycle",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Duty cycle", }, {
    "Driver.Controlled_PWM_Voltage.pwm.i2",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Output current", }, {
    "Driver.Controlled_PWM_Voltage.pwm.n2.v",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Controlled_PWM_Voltage.pwm.p2.v",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Controlled_PWM_Voltage.pwm.v2",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Output voltage", }, {
    "Driver.Controlled_PWM_Voltage.pwm.ZTime",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time when last pulse period ended", },
    { "Driver.Controlled_PWM_Voltage.pwm.pulse_width",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "s", 1.0, "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pulse_width", }, {
    "Driver.Controlled_PWM_Voltage.pwm.internal_mode_var_M__",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_M__", }, {
    "Driver.Controlled_PWM_Voltage.u",
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "u", }, { "Driver.ERef_PWMH_nRef1.V.v",
    "ee_switching_power_supply_thermal/Driver/ERef PWMH nRef1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.ERef_PWML_REF.V.v",
    "ee_switching_power_supply_thermal/Driver/ERef PWML REF", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Half_Bridge_Driver.ZoffTime",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "s",
    1.0, "s", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time at which input last went low", },
    { "Driver.Half_Bridge_Driver.ZonTime",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "s",
    1.0, "s", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time at which input last went high", },
  { "Driver.Half_Bridge_Driver.power_dissipated",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "W",
    1.0, "W", NE_NOMINAL_SOURCE_BLOCK, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Driver.Half_Bridge_Driver.HO.v",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Half_Bridge_Driver.HS.v",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Half_Bridge_Driver.LO.v",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Half_Bridge_Driver.LS.v",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Half_Bridge_Driver.PWM.v",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Half_Bridge_Driver.REF.v",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Driver.Half_Bridge_Driver.iH",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "High-side current HO->HS", }, {
    "Driver.Half_Bridge_Driver.iL",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Low-side current LO->LS", }, {
    "Driver.Half_Bridge_Driver.power_dissipated_high_side",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "W",
    1.0, "W", NE_NOMINAL_SOURCE_BLOCK, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "power_dissipated_high_side", }, {
    "Driver.Half_Bridge_Driver.power_dissipated_low_side",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "W",
    1.0, "W", NE_NOMINAL_SOURCE_BLOCK, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "power_dissipated_low_side", }, {
    "Driver.Half_Bridge_Driver.u",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Input voltage", }, {
    "Driver.Half_Bridge_Driver.internal_mode_var_ModeHighSide__",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_ModeHighSide__", }, {
    "Driver.Half_Bridge_Driver.internal_mode_var_ModeLowSide__",
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_ModeLowSide__", }, {
    "Driver.PWMH.v", "ee_switching_power_supply_thermal/Driver", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "Driver.PWML.v",
    "ee_switching_power_supply_thermal/Driver", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "Driver.phase.v",
    "ee_switching_power_supply_thermal/Driver", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "ERef.V.v",
    "ee_switching_power_supply_thermal/ERef", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "L.i",
    "ee_switching_power_supply_thermal/L", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "L.n.v",
    "ee_switching_power_supply_thermal/L", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "L.p.v",
    "ee_switching_power_supply_thermal/L", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "L.v",
    "ee_switching_power_supply_thermal/L", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "L.i_L",
    "ee_switching_power_supply_thermal/L", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "N_Channel_MOSFET_1.D.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "N_Channel_MOSFET_1.G.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "N_Channel_MOSFET_1.S.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "N_Channel_MOSFET_1.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_1.capacitor_GD.i",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "N_Channel_MOSFET_1.capacitor_GD.n.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.capacitor_GD.p.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.capacitor_GD.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.capacitor_GD.vc",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "N_Channel_MOSFET_1.capacitor_GS.i",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "N_Channel_MOSFET_1.capacitor_GS.n.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.capacitor_GS.p.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.capacitor_GS.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.capacitor_GS.vc",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "N_Channel_MOSFET_1.drain_resistor.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_1.drain_resistor.Q",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "N_Channel_MOSFET_1.drain_resistor.i",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "N_Channel_MOSFET_1.drain_resistor.n.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.drain_resistor.p.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.drain_resistor.power_dissipated",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "N_Channel_MOSFET_1.drain_resistor.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.gate_resistor.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_1.gate_resistor.Q",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "N_Channel_MOSFET_1.gate_resistor.i",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "N_Channel_MOSFET_1.gate_resistor.n.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.gate_resistor.p.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.gate_resistor.power_dissipated",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "N_Channel_MOSFET_1.gate_resistor.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.mos.D.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.mos.G.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.mos.S.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.mos.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_1.mos.ids",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Drain-source current", }, {
    "N_Channel_MOSFET_1.mos.igs",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gate-source current", }, {
    "N_Channel_MOSFET_1.mos.power_dissipated",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "N_Channel_MOSFET_1.mos.vds",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Drain-source voltage", }, {
    "N_Channel_MOSFET_1.mos.vgs",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gate-source voltage", }, {
    "N_Channel_MOSFET_1.mos.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_1.mos.Q",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "N_Channel_MOSFET_1.source_resistor.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_1.source_resistor.Q",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "N_Channel_MOSFET_1.source_resistor.i",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "N_Channel_MOSFET_1.source_resistor.n.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.source_resistor.p.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.source_resistor.power_dissipated",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "N_Channel_MOSFET_1.source_resistor.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_1.thermal_port.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_1.thermal_port.J.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_1.thermal_port.Qh",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "J/s", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow into port H", }, {
    "N_Channel_MOSFET_1.thermal_port.Qj",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "J/s", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow into port J", }, {
    "N_Channel_MOSFET_1.thermal_port.Tc",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Case temperature", }, {
    "N_Channel_MOSFET_1.thermal_port.Tj",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction temperature", }, {
    "N_Channel_MOSFET_2.D.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "N_Channel_MOSFET_2.G.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "N_Channel_MOSFET_2.S.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "N_Channel_MOSFET_2.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_2.capacitor_GD.i",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "N_Channel_MOSFET_2.capacitor_GD.n.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.capacitor_GD.p.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.capacitor_GD.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.capacitor_GD.vc",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "N_Channel_MOSFET_2.capacitor_GS.i",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "N_Channel_MOSFET_2.capacitor_GS.n.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.capacitor_GS.p.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.capacitor_GS.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.capacitor_GS.vc",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "N_Channel_MOSFET_2.drain_resistor.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_2.drain_resistor.Q",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "N_Channel_MOSFET_2.drain_resistor.i",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "N_Channel_MOSFET_2.drain_resistor.n.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.drain_resistor.p.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.drain_resistor.power_dissipated",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "N_Channel_MOSFET_2.drain_resistor.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.gate_resistor.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_2.gate_resistor.Q",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "N_Channel_MOSFET_2.gate_resistor.i",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "N_Channel_MOSFET_2.gate_resistor.n.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.gate_resistor.p.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.gate_resistor.power_dissipated",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "N_Channel_MOSFET_2.gate_resistor.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.mos.D.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.mos.G.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.mos.S.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.mos.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_2.mos.ids",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Drain-source current", }, {
    "N_Channel_MOSFET_2.mos.igs",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gate-source current", }, {
    "N_Channel_MOSFET_2.mos.power_dissipated",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "N_Channel_MOSFET_2.mos.vds",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Drain-source voltage", }, {
    "N_Channel_MOSFET_2.mos.vgs",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gate-source voltage", }, {
    "N_Channel_MOSFET_2.mos.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_2.mos.Q",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "N_Channel_MOSFET_2.source_resistor.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_2.source_resistor.Q",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow", }, {
    "N_Channel_MOSFET_2.source_resistor.i",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "N_Channel_MOSFET_2.source_resistor.n.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.source_resistor.p.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.source_resistor.power_dissipated",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "N_Channel_MOSFET_2.source_resistor.v",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "N_Channel_MOSFET_2.thermal_port.H.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_2.thermal_port.J.T",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "N_Channel_MOSFET_2.thermal_port.Qh",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "J/s", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow into port H", }, {
    "N_Channel_MOSFET_2.thermal_port.Qj",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "J/s", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow into port J", }, {
    "N_Channel_MOSFET_2.thermal_port.Tc",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Case temperature", }, {
    "N_Channel_MOSFET_2.thermal_port.Tj",
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 1U, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction temperature", }, { "R.i",
    "ee_switching_power_supply_thermal/R", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "R.n.v",
    "ee_switching_power_supply_thermal/R", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "R.p.v",
    "ee_switching_power_supply_thermal/R", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "R.v",
    "ee_switching_power_supply_thermal/R", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "R_Load.i",
    "ee_switching_power_supply_thermal/R Load", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "R_Load.n.v",
    "ee_switching_power_supply_thermal/R Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "R_Load.p.v",
    "ee_switching_power_supply_thermal/R Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "R_Load.v",
    "ee_switching_power_supply_thermal/R Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Thermal_1.Ambient_Temperature.O",
    "ee_switching_power_supply_thermal/Thermal 1/Ambient Temperature", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Thermal_1.Convection_Heatsink.A.T",
    "ee_switching_power_supply_thermal/Thermal 1/Convection Heatsink", 1U, 1U,
    "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_1.Convection_Heatsink.B.T",
    "ee_switching_power_supply_thermal/Thermal 1/Convection Heatsink", 1U, 1U,
    "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_1.Convection_Heatsink.Q",
    "ee_switching_power_supply_thermal/Thermal 1/Convection Heatsink", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Thermal_1.Convection_Heatsink.T",
    "ee_switching_power_supply_thermal/Thermal 1/Convection Heatsink", 1U, 1U,
    "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Thermal_1.H.T", "ee_switching_power_supply_thermal/Thermal 1", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Thermal_1.Heat_Flow_Sensor.A.T",
    "ee_switching_power_supply_thermal/Thermal 1/Heat Flow Sensor", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_1.Heat_Flow_Sensor.B.T",
    "ee_switching_power_supply_thermal/Thermal 1/Heat Flow Sensor", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_1.Heat_Flow_Sensor.H",
    "ee_switching_power_supply_thermal/Thermal 1/Heat Flow Sensor", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "H", }, { "Thermal_1.Heat_Flow_Sensor.Q",
    "ee_switching_power_supply_thermal/Thermal 1/Heat Flow Sensor", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Thermal_1.Heatsink_Thermal_Mass.M.T",
    "ee_switching_power_supply_thermal/Thermal 1/Heatsink Thermal Mass", 1U, 1U,
    "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_1.Heatsink_Thermal_Mass.Q",
    "ee_switching_power_supply_thermal/Thermal 1/Heatsink Thermal Mass", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Thermal_1.Heatsink_Thermal_Mass.T",
    "ee_switching_power_supply_thermal/Thermal 1/Heatsink Thermal Mass", 1U, 1U,
    "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_1.Ideal_Temperature_Source.A.T",
    "ee_switching_power_supply_thermal/Thermal 1/Ideal Temperature Source", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_1.Ideal_Temperature_Source.B.T",
    "ee_switching_power_supply_thermal/Thermal 1/Ideal Temperature Source", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_1.Ideal_Temperature_Source.Q",
    "ee_switching_power_supply_thermal/Thermal 1/Ideal Temperature Source", 1U,
    1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Thermal_1.Ideal_Temperature_Source.S",
    "ee_switching_power_supply_thermal/Thermal 1/Ideal Temperature Source", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Thermal_1.Ideal_Temperature_Source.T",
    "ee_switching_power_supply_thermal/Thermal 1/Ideal Temperature Source", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Thermal_1.Thermal_Reference.H.T",
    "ee_switching_power_supply_thermal/Thermal 1/Thermal Reference", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_2.Ambient_Temperature.O",
    "ee_switching_power_supply_thermal/Thermal 2/Ambient Temperature", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Thermal_2.Convection_Heatsink.A.T",
    "ee_switching_power_supply_thermal/Thermal 2/Convection Heatsink", 1U, 1U,
    "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_2.Convection_Heatsink.B.T",
    "ee_switching_power_supply_thermal/Thermal 2/Convection Heatsink", 1U, 1U,
    "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_2.Convection_Heatsink.Q",
    "ee_switching_power_supply_thermal/Thermal 2/Convection Heatsink", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Thermal_2.Convection_Heatsink.T",
    "ee_switching_power_supply_thermal/Thermal 2/Convection Heatsink", 1U, 1U,
    "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Thermal_2.H.T", "ee_switching_power_supply_thermal/Thermal 2", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Thermal_2.Heat_Flow_Sensor.A.T",
    "ee_switching_power_supply_thermal/Thermal 2/Heat Flow Sensor", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_2.Heat_Flow_Sensor.B.T",
    "ee_switching_power_supply_thermal/Thermal 2/Heat Flow Sensor", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_2.Heat_Flow_Sensor.H",
    "ee_switching_power_supply_thermal/Thermal 2/Heat Flow Sensor", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "H", }, { "Thermal_2.Heat_Flow_Sensor.Q",
    "ee_switching_power_supply_thermal/Thermal 2/Heat Flow Sensor", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Thermal_2.Heatsink_Thermal_Mass.M.T",
    "ee_switching_power_supply_thermal/Thermal 2/Heatsink Thermal Mass", 1U, 1U,
    "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_2.Heatsink_Thermal_Mass.Q",
    "ee_switching_power_supply_thermal/Thermal 2/Heatsink Thermal Mass", 1U, 1U,
    "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Thermal_2.Heatsink_Thermal_Mass.T",
    "ee_switching_power_supply_thermal/Thermal 2/Heatsink Thermal Mass", 1U, 1U,
    "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_2.Ideal_Temperature_Source.A.T",
    "ee_switching_power_supply_thermal/Thermal 2/Ideal Temperature Source", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_2.Ideal_Temperature_Source.B.T",
    "ee_switching_power_supply_thermal/Thermal 2/Ideal Temperature Source", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Thermal_2.Ideal_Temperature_Source.Q",
    "ee_switching_power_supply_thermal/Thermal 2/Ideal Temperature Source", 1U,
    1U, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Thermal_2.Ideal_Temperature_Source.S",
    "ee_switching_power_supply_thermal/Thermal 2/Ideal Temperature Source", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Thermal_2.Ideal_Temperature_Source.T",
    "ee_switching_power_supply_thermal/Thermal 2/Ideal Temperature Source", 1U,
    1U, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", }, {
    "Thermal_2.Thermal_Reference.H.T",
    "ee_switching_power_supply_thermal/Thermal 2/Thermal Reference", 1U, 1U, "K",
    1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Voltage_sensor.ERef.V.v",
    "ee_switching_power_supply_thermal/Voltage sensor/ERef", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Voltage_sensor.Voltage_Sensor.V",
    "ee_switching_power_supply_thermal/Voltage sensor/Voltage Sensor", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Voltage_sensor.Voltage_Sensor.i1",
    "ee_switching_power_supply_thermal/Voltage sensor/Voltage Sensor", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Voltage_sensor.Voltage_Sensor.n.v",
    "ee_switching_power_supply_thermal/Voltage sensor/Voltage Sensor", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Voltage_sensor.Voltage_Sensor.p.v",
    "ee_switching_power_supply_thermal/Voltage sensor/Voltage Sensor", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Voltage_sensor.Voltage_Sensor.v1",
    "ee_switching_power_supply_thermal/Voltage sensor/Voltage Sensor", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Voltage_sensor.x.v",
    "ee_switching_power_supply_thermal/Voltage sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", } };

static NeModeData s_major_mode_data[4] = { {
    "Driver.Controlled_PWM_Voltage.pwm.internal_mode_var_M__", 0U,
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 0,
    "internal_mode_var_M__", }, {
    "Driver.Half_Bridge_Driver.internal_mode_var_ModeHighSide__", 0U,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 0,
    "internal_mode_var_ModeHighSide__", }, {
    "Driver.Half_Bridge_Driver.internal_mode_var_ModeLowSide__", 0U,
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 0,
    "internal_mode_var_ModeLowSide__", }, { "ie0", 0U, "", 0, "", } };

static NeZCData s_zc_data[41] = { {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 0U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_switching_power_supply_thermal/Diode 1", 1U, 1U,
    "Diode_1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_switching_power_supply_thermal/Diode 2", 1U, 2U,
    "Diode_2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 3U,
    "Driver.Controlled_PWM_Voltage.pwm",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_asynchronous.sscp",
    NE_ZC_TYPE_TRUE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 4U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Thermal 1/Heatsink Thermal Mass", 1U, 5U,
    "Thermal_1.Heatsink_Thermal_Mass",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Thermal 2/Heatsink Thermal Mass", 1U, 6U,
    "Thermal_2.Heatsink_Thermal_Mass",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 7U,
    "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_switching_power_supply_thermal/N-Channel MOSFET 2",
    1U, 8U, "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    NE_ZC_TYPE_TRUE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 9U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 10U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 11U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 12U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 13U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 14U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 15U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 16U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 17U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 18U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 19U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 20U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 21U,
    "Driver.Controlled_PWM_Voltage.pwm", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 22U,
    "Driver.Controlled_PWM_Voltage.pwm", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 23U,
    "Driver.Controlled_PWM_Voltage.pwm", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 24U,
    "Driver.Controlled_PWM_Voltage.pwm", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 25U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 26U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 27U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 28U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 29U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 30U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 31U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 32U,
    "Driver.Half_Bridge_Driver", "", NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 33U,
    "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_switching_power_supply_thermal/N-Channel MOSFET 2",
    1U, 34U, "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_switching_power_supply_thermal/N-Channel MOSFET 1",
    1U, 35U, "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 36U,
    "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 37U,
    "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 38U,
    "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 39U,
    "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_switching_power_supply_thermal/N-Channel MOSFET 2",
    1U, 40U, "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    NE_ZC_TYPE_TRUE, } };

static NeRange s_range[41] = { {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_asynchronous.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    35U, 12U, 35U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    35U, 12U, 35U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[46] = { {
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 2U, 0U,
    "Driver.Controlled_PWM_Voltage.pwm",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_ps.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_M__'.  Mode must be between 1 and 3.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 2U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_ModeHighSide__'.  Mode must be between 1 and 7.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 3U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_ModeLowSide__'.  Mode must be between 1 and 7.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_switching_power_supply_thermal/Thermal 1/Heatsink Thermal Mass", 1U, 4U,
    "Thermal_1.Heatsink_Thermal_Mass",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    FALSE, "Temperature must be greater than absolute zero", "", }, {
    "ee_switching_power_supply_thermal/Thermal 2/Heatsink Thermal Mass", 1U, 5U,
    "Thermal_2.Heatsink_Thermal_Mass",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    FALSE, "Temperature must be greater than absolute zero", "", }, {
    "ee_switching_power_supply_thermal/Diode 1", 1U, 6U, "Diode_1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Diode 1", 1U, 7U, "Diode_1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Diode 1", 1U, 8U, "Diode_1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_switching_power_supply_thermal/Diode 2", 1U, 9U, "Diode_2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Diode 2", 1U, 10U, "Diode_2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Diode 2", 1U, 11U, "Diode_2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 12U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 13U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 14U,
    "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 15U,
    "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 16U,
    "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 17U,
    "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Driver/Controlled PWM Voltage", 1U, 18U,
    "Driver.Controlled_PWM_Voltage",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 19U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 20U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 21U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 22U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 23U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 24U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 25U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 26U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 27U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 28U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 29U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 30U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 31U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 32U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 33U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 34U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 35U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 36U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 37U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/Driver/Half-Bridge Driver", 1U, 38U,
    "Driver.Half_Bridge_Driver",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 39U,
    "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 40U,
    "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 41U,
    "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 1", 1U, 42U,
    "N_Channel_MOSFET_1.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 43U,
    "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 44U,
    "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 45U,
    "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_switching_power_supply_thermal/N-Channel MOSFET 2", 1U, 46U,
    "N_Channel_MOSFET_2.mos",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", } };

static NeRange s_assert_range[47] = { {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_asynchronous.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    35U, 5U, 35U, 11U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    35U, 5U, 35U, 11U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[80] = { {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 5U, 30U, 23U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 20U, 30U, 27U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/thermal_port_simple.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/thermal_port_simple.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/thermal_port_simple.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/thermal_port_simple.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    34U, 5U, 34U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    34U, 27U, 34U, 32U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    34U, 5U, 34U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/+elements/mass.ssc",
    34U, 27U, 34U, 32U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_asynchronous.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_asynchronous.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_asynchronous.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_asynchronous.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm_ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/half_bridge_driver_elec.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/res_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/res_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/res_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/res_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/res_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/res_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/mos_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/res_thermal.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/branch.ssc",
    27U, 5U, 27U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+thermal/branch.ssc",
    27U, 5U, 27U, 19U, NE_RANGE_TYPE_NORMAL, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData s_real_parameter_data[2] = { { "T_heatsink1", "", "", 0U,
    1U, }, { "T_heatsink2", "", "", 0U, 1U, } };

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 38;
  out->mM_P.mNumRow = 38;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    39);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    14);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 14;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 14);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 14;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    14);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 38;
  out->mDXM_P.mNumRow = 14;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    39);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 0;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 2;
  out->mDUM_P.mNumRow = 14;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 14;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 38;
  out->mA_P.mNumRow = 38;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    39);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    87);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 87;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 87);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 2;
  out->mB_P.mNumRow = 38;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 1;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 38;
  out->mC_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mC_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 38;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 38);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 38;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    38);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 38;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    38);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 38;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 38);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 38;
  out->mDXF_P.mNumRow = 38;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    39);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    57);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 57;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 57);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 2;
  out->mDUF_P.mNumRow = 38;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 1;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 38;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 38;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 2;
  out->mTDUF_P.mNumRow = 38;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 38;
  out->mTDXF_P.mNumRow = 38;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    39);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    144);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 6;
  out->mDNF_P.mNumRow = 38;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 2;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 38;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 38);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 38;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 38);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 0;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 0;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 0;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 0;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 0;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 38;
  out->mDXICR_P.mNumRow = 0;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 39);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 2;
  out->mTDUICR_P.mNumRow = 0;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 3);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 2;
  out->mMDUY_P.mNumRow = 4;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 38;
  out->mMDXY_P.mNumRow = 4;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    39);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 2;
  out->mTDUY_P.mNumRow = 4;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 38;
  out->mTDXY_P.mNumRow = 4;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    39);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 4;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 38;
  out->mDXY_P.mNumRow = 4;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    39);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 13;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 13);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 2;
  out->mDUY_P.mNumRow = 4;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 0;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 4;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 41;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    41);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 41;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 41);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 27;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    27);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 3;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 4;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 3;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 4;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 254;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 254);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 46;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    46);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIASSERT.mN = 0;
  out->mIASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 38;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 39);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 2;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 3);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 254;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    254);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 254;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    254);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 254;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    254);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 254;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 254);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 144;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 144);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 5;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 5);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 26;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 26);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 38;
  out->mQX_P.mNumRow = 38;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    39);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    144);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 2;
  out->mQU_P.mNumRow = 38;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 38;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 38;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    26);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 38;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    38);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 38;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    38);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 38;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    38);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 38;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    38);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(const NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out)
{
  (void)ds;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

NeDynamicSystem *ee_switching_power_supply_thermal_4bd2f3a3_1_dae_ds(PmAllocator
  *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[2];
  static NeDsIoInfo output_info[4];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 38;
  ds->mNumDiscreteRealVariables = 3;
  ds->mNumDifferentialVariables = 14;
  ds->mNumEquations = 38;
  ds->mNumICResiduals = 0;
  ds->mNumModes = 41;
  ds->mNumMajorModes = 4;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 27;
  ds->mNumObservables = 254;
  ds->mNumObservableElements = 254;
  ds->mNumZcs = 41;
  ds->mNumAsserts = 46;
  ds->mNumAssertRanges = 47;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 41;
  ds->mNumEquationRanges = 80;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 2;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 2;
  input_info[0].mIdentifier = "Cyclic_Load.Controlled_Current_Source.iT";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName = "Cyclic_Load.Controlled_Current_Source.iT";
  input_info[0].mUnit = "A";
  input_info[1].mIdentifier = "Driver.Controlled_PWM_Voltage.u";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName = "Driver.Controlled_PWM_Voltage.u";
  input_info[1].mUnit = "1";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 4;
  output_info[0].mIdentifier = "Current_sensor.Current_Sensor.I";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName = "Current_sensor.Current_Sensor.I";
  output_info[0].mUnit = "A";
  output_info[1].mIdentifier = "Thermal_1.Heat_Flow_Sensor.H";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName = "Thermal_1.Heat_Flow_Sensor.H";
  output_info[1].mUnit = "W";
  output_info[2].mIdentifier = "Thermal_2.Heat_Flow_Sensor.H";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName = "Thermal_2.Heat_Flow_Sensor.H";
  output_info[2].mUnit = "W";
  output_info[3].mIdentifier = "Voltage_sensor.Voltage_Sensor.V";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName = "Voltage_sensor.Voltage_Sensor.V";
  output_info[3].mUnit = "V";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mMethods[NE_DS_METHOD_M_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_A_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_SLF] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_IC] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_IASSERT] = ds_iassert;
  ds->mMakeOutput[NE_DS_METHOD_IASSERT] = ds_output_iassert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] =
    ee_switching_power_supply_thermal_4bd2f3a3_1_ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* initial assert data */
  ds->mInitialAssertData = s_initial_assert_data;

  /* initial assert ranges */
  ds->mInitialAssertRanges = s_initial_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_passert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_iassert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUDELT_P;
  out.mNumCol = 2ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTDELT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mINIT_R;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T T_idx_0;
  real_T X_idx_20;
  int32_T CI_idx_0;
  real_T D_idx_0;
  int32_T CI_idx_23;
  real_T D_idx_1;
  int32_T CI_idx_22;
  real_T D_idx_2;
  T_idx_0 = t1->mT.mX[0];
  X_idx_20 = t1->mX.mX[20];
  D_idx_0 = t1->mD.mX[0];
  D_idx_1 = t1->mD.mX[1];
  D_idx_2 = t1->mD.mX[2];
  CI_idx_0 = t1->mCI.mX[0];
  CI_idx_22 = t1->mCI.mX[22];
  CI_idx_23 = t1->mCI.mX[23];
  out = t2->mUPDATE_R;
  out.mX[0] = (CI_idx_0 == 0) && (T_idx_0 - D_idx_0 >= 2.0E-5) ? T_idx_0 :
    D_idx_0;
  out.mX[1] = (CI_idx_23 == 0) && (X_idx_20 < 0.8) ? T_idx_0 : D_idx_1;
  out.mX[2] = (CI_idx_22 == 0) && (X_idx_20 > 2.0) ? T_idx_0 : D_idx_2;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  out = t2->mINIT_I;
  out.mX[0] = 1;
  out.mX[1] = 1;
  out.mX[2] = 1;
  out.mX[3] = 1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T U_idx_1;
  U_idx_1 = t1->mU.mX[1];
  out = t2->mDUF;
  if (U_idx_1 <= 0.0) {
    U_idx_1 = 0.0;
  } else {
    U_idx_1 = (real_T)!(U_idx_1 >= 1.0);
  }

  out.mX[0] = -U_idx_1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUF_P;
  out.mNumCol = 2ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 1;
  out.mIr[0] = 19;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mB;
  out.mX[0] = 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mB_P;
  out.mNumCol = 2ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mIr[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_c (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_c_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mC_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUF_P;
  out.mNumCol = 2ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mIr[0] = 0;
  out.mIr[1] = 19;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDNF;
  out.mX[0] = -1.0;
  out.mX[1] = -1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDNF_P;
  out.mNumCol = 6ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 2;
  out.mJc[4] = 2;
  out.mJc[5] = 2;
  out.mJc[6] = 2;
  out.mIr[0] = 19;
  out.mIr[1] = 17;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_il (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUICR_P;
  out.mNumCol = 2ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_m (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mM;
  out.mX[0] = -2.2E-5;
  out.mX[1] = -1.0E-10;
  out.mX[2] = -0.001;
  out.mX[3] = -1.0E-10;
  out.mX[4] = -2.7E-10;
  out.mX[5] = -2.7E-10;
  out.mX[6] = -8.0E-11;
  out.mX[7] = 0.308;
  out.mX[8] = -0.0090000000000000011;
  out.mX[9] = 0.00294;
  out.mX[10] = -8.0E-11;
  out.mX[11] = 0.308;
  out.mX[12] = -0.0090000000000000011;
  out.mX[13] = 0.00294;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUM_P;
  out.mNumCol = 2ULL;
  out.mNumRow = 14ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTM_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 14ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vmm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMM;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mQU;
  out.mX[0] = 0.26676666666666665;
  out.mX[1] = 0.0001;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0000000000000002E-6;
  out.mX[4] = 1.0001E-6;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mQ1;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQU_P;
  out.mNumCol = 2ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 5;
  out.mJc[2] = 5;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 14;
  out.mIr[4] = 15;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 38ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 26;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 7;
  out.mIr[4] = 8;
  out.mIr[5] = 11;
  out.mIr[6] = 12;
  out.mIr[7] = 14;
  out.mIr[8] = 15;
  out.mIr[9] = 16;
  out.mIr[10] = 17;
  out.mIr[11] = 18;
  out.mIr[12] = 19;
  out.mIr[13] = 23;
  out.mIr[14] = 26;
  out.mIr[15] = 27;
  out.mIr[16] = 28;
  out.mIr[17] = 29;
  out.mIr[18] = 30;
  out.mIr[19] = 31;
  out.mIr[20] = 32;
  out.mIr[21] = 33;
  out.mIr[22] = 34;
  out.mIr[23] = 35;
  out.mIr[24] = 36;
  out.mIr[25] = 37;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDXY;
  out.mX[0] = -0.0001;
  out.mX[1] = 1.0;
  out.mX[2] = -0.0001;
  out.mX[3] = -1.0;
  out.mX[4] = 0.42016806722689076;
  out.mX[5] = -0.42016806722689076;
  out.mX[6] = 0.42016806722689076;
  out.mX[7] = -0.42016806722689076;
  out.mX[8] = -1.000001;
  out.mX[9] = -1.0000010001;
  out.mX[10] = 1.0;
  out.mX[11] = -1000.0;
  out.mX[12] = -1000.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUY_P;
  out.mNumCol = 2ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDUY_P;
  out.mNumCol = 2ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUY_P;
  out.mNumCol = 2ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTY_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 4ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
