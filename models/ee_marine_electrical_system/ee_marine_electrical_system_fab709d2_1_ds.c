/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_marine_electrical_system/Solver Configuration'.
 */
/* ee_marine_electrical_system_fab709d2_1_ds.c - body for module ee_marine_electrical_system_fab709d2_1_ds */

#include "ne_ds.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_zc.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_tdxy_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dxy_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dxy.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_y.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_q1_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_obs_il.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_obs_all.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_q1.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_obs_act.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_obs_exp.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_mode.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_qx_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_vmm.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_m_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_m.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_log.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_slf0.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dnf_v_x.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dnf_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_lv.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_tdxf_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_a_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_a.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_slf.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dtf_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_ic.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_slv.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_vmf.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dxf_p.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_qx.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dnf.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dxf.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_update_i.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_f.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_cache_i.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_dtf.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_assert.h"
#include "ee_marine_electrical_system_fab709d2_1_ds.h"
#include "ssc_ml_fun.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_external_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_sys_struct.h"
#include "ee_marine_electrical_system_fab709d2_1_ds_externals.h"

static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
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
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
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
static int32_T ds_dxicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
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
static int32_T ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
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
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
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
static NeEquationData s_equation_data[138] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "ee_marine_electrical_system/Base Load", 2U, 0U,
    TRUE, 1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Base Load", 2U, 0U, TRUE, 1.0, "1", }, { "", 2U,
    8, NE_EQUATION_DOMAIN_TIME, "ee_marine_electrical_system/Base Load", 2U, 0U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 2U, 2U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 4U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 5U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 6U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 7U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 8U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Inertia", 2U, 9U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 11U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 12U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 13U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 14U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 15U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 16U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    2U, 17U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/PS Integrator",
    2U, 19U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Inertia", 1U, 21U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    22U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    23U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    24U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    25U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    26U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    27U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    28U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 2U,
    29U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Inertia", 1U, 31U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/PS Integrator",
    2U, 32U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/PS Integrator",
    2U, 34U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 36U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 37U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 38U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 39U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 2U, 40U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 2U, 42U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 2U, 44U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 46U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 47U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 48U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 49U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 2U, 50U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 2U, 52U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 2U, 54U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 56U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 57U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 58U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 59U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 2U, 60U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 2U, 62U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 2U, 64U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Average Value Propulsion Load", 3U, 66U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 69U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 70U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 2U, 71U,
    FALSE, 1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 2U, 71U,
    FALSE, 1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 2U, 71U,
    FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 73U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 74U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 75U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 76U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 77U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 78U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 79U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 80U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 81U, FALSE,
    1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 81U, FALSE,
    1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 81U, FALSE,
    1.0, "1", }, { "", 3U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 81U, FALSE,
    1.0, "1", }, { "", 4U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 81U, FALSE,
    1.0, "1", }, { "", 5U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 81U, FALSE,
    1.0, "1", }, { "", 6U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 81U, FALSE,
    1.0, "1", }, { "", 7U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 81U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 4U, 82U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 4U, 86U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 4U, 90U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Bow Thrusters/Thruster Torque-Speed Characteristic",
    1U, 94U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 95U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 96U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 97U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 98U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 99U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 100U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 101U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 102U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 103U, FALSE, 1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 103U, FALSE, 1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 103U, FALSE, 1.0, "1", }, { "", 3U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 103U, FALSE, 1.0, "1", }, { "", 4U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 103U, FALSE, 1.0, "1", }, { "", 5U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 103U, FALSE, 1.0, "1", }, { "", 6U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 103U, FALSE, 1.0, "1", }, { "", 7U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 103U, FALSE, 1.0, "1", }, { "", 8U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 103U, FALSE, 1.0, "1", }, { "", 9U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 103U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Diesel Generator",
    1U, 104U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    105U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    106U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    107U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    108U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    109U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    110U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    111U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    112U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    113U, FALSE, 1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    113U, FALSE, 1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    113U, FALSE, 1.0, "1", }, { "", 3U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    113U, FALSE, 1.0, "1", }, { "", 4U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    113U, FALSE, 1.0, "1", }, { "", 5U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    113U, FALSE, 1.0, "1", }, { "", 6U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    113U, FALSE, 1.0, "1", }, { "", 7U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    113U, FALSE, 1.0, "1", }, { "", 8U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    113U, FALSE, 1.0, "1", }, { "", 9U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    113U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/PS Subtract1",
    1U, 114U, TRUE, 1.0, "1", }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Gas turbine", 4U, 115U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Hotel Load Breaker", 4U, 119U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Hotel Load Breaker", 4U, 123U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Hotel Load Breaker", 4U, 127U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 131U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 132U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 133U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 134U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 135U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 136U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 137U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 138U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 139U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 140U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 141U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 142U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 143U, TRUE, 1.0, "1",
  }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 143U, TRUE, 1.0, "1",
  }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 143U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 144U, TRUE, 1.0, "1",
  }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 144U, TRUE, 1.0, "1",
  }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 144U, TRUE, 1.0, "1",
  }, { "", 0U, 1, NE_EQUATION_DOMAIN_TIME, "", 3U, 145U, TRUE, 1.0, "1", } };

static NeVariableData s_variable_data[138] = { {
    "Port_Aft_Cable.transmission_line.inductor_a1.i_L", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_a1.i_L", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "Base_Load.wye_impedance.IL", 0U, 0, "ee_marine_electrical_system/Base Load",
    1.0, "1", 0.0, TRUE, 1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for current through inductors", }, {
    "Base_Load.wye_impedance.IL", 1U, 0, "ee_marine_electrical_system/Base Load",
    1.0, "1", 0.0, TRUE, 1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for current through inductors", }, {
    "Base_Load.wye_impedance.IL", 2U, 0, "ee_marine_electrical_system/Base Load",
    1.0, "1", 0.0, TRUE, 1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for current through inductors", }, {
    "Port_Forward_Cable.transmission_line.inductor_a1.i_L", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "Bow_Thrusters.Bow_Thrusters.angular_position_diff", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_NONE, "angular_position_diff", }, {
    "Bow_Thrusters.Inertia.w", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Inertia", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Rotational velocity", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psi0s", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_NONE,
    "Stator zero-sequence magnetic flux linkage", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psidr", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_NONE, "Rotor d-axis magnetic flux linkage", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psids", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_NONE, "Stator d-axis magnetic flux linkage", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psiqr", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_NONE, "Rotor q-axis magnetic flux linkage", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psiqs", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_NONE, "Stator q-axis magnetic flux linkage", }, {
    "Diesel_generator.Generator_and_governor.Governor.PS_Integrator.x", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/PS Integrator",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "x", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.angular_position_diff",
    0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "angular_position_diff",
  }, { "Diesel_generator.Inertia.w", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Inertia", 1.0, "1", 0.0, TRUE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Rotational velocity", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psi1d", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi1d", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psi0", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi0", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psi1q", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi1q", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psid", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psid", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psifd", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psifd", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psiq", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psiq", }, {
    "Gas_turbine.Turbine_and_governor.Governor.PS_Integrator.x", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/PS Integrator",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "x", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.angular_position_diff", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "angular_position_diff", },
    { "Gas_turbine.Inertia.w", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Inertia", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Rotational velocity", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psifd", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psifd", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psi2q", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi2q", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psi0", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi0", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psi1d", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi1d", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psi1q", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi1q", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psid", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psid", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psiq", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psiq", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.PS_Integrator.x", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/PS Integrator",
    1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "x", }, {
    "Port_Aft_Cable.transmission_line.inductor_b1.i_L", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "Port_Aft_Cable.transmission_line.C_b0.vc", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Aft_Cable.transmission_line.C_b1.vc", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_c1.i_L", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "Port_Aft_Cable.transmission_line.C_c0.vc", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c1.vc", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_b1.i_L", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "Port_Forward_Cable.transmission_line.C_b0.vc", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Forward_Cable.transmission_line.C_b1.vc", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_c1.i_L", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "Port_Forward_Cable.transmission_line.C_c0.vc", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c1.vc", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_b1.i_L", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b0.vc", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b1.vc", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_c1.i_L", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c0.vc", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c1.vc", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, TRUE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "Average_Value_Propulsion_Load.i", 0U, 0,
    "ee_marine_electrical_system/Average Value Propulsion Load", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "Average_Value_Propulsion_Load.n.v", 0U, 1,
    "ee_marine_electrical_system/Average Value Propulsion Load", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Average_Value_Propulsion_Load.p.v", 0U, 1,
    "ee_marine_electrical_system/Average Value Propulsion Load", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T1.zero.v", 0U, 1,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T2.i_alpha", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i_alpha", }, {
    "Port_Aft_Cable.transmission_line.T2.i_beta", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i_beta", }, {
    "Port_Aft_Cable.transmission_line.T2.zero.v", 0U, 1,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.zero.v", 0U, 1,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.i_alpha", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "i_alpha", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.i_beta", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "i_beta", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.zero.v", 0U, 1,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_b1.p.v", 0U, 1,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c1.p.v", 0U, 1,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_b1.p.v", 0U, 1,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c1.p.v", 0U, 1,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T2.zero.v", 0U, 1,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Bow_Thrusters.Asynchronous_Machine_Measurement.pu_output", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Asynchronous Machine Measurement",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "o", }, {
    "retained_variable_entry13", 0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "retained_variable_entry14", 0U, 0, "", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, { "retained_variable_entry15",
    0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "retained_variable_entry16", 0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "retained_variable_entry17", 0U, 0, "", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, { "retained_variable_entry18",
    0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "retained_variable_entry19", 0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "Hotel_Load_Breaker.breakerA.v", 0U, 0,
    "ee_marine_electrical_system/Hotel Load Breaker", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "v", }, { "Hotel_Load_Breaker.breakerC.v", 0U, 0,
    "ee_marine_electrical_system/Hotel Load Breaker", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "v", }, {
    "Port_Forward_Cable.transmission_line.T1.zero.v", 0U, 1,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T2.i_alpha", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "i_alpha", }, {
    "Port_Forward_Cable.transmission_line.T2.i_beta", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "i_beta", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.i_alpha", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "i_alpha", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.i_beta", 0U, 0,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "i_beta", }, { "retained_variable_entry3", 0U, 0, "",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "retained_variable_entry0", 0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "retained_variable_entry1", 0U, 0, "", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, { "retained_variable_entry2",
    0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "Bow_Thrusters.Bow_Thrusters.angular_torque", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "angular_torque", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_idr", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_idr", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_ids", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_ids", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_iqr", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_iqr", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_iqs", 0U, 0,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_iqs", }, { "Bow_Thrusters.Inertia.t",
    0U, 0, "ee_marine_electrical_system/Bow Thrusters/Inertia", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu",
    0U, 0,
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Ifd_pu", }, {
    "Diesel_generator.Generator_and_governor.Governor.PS_Integrator.I", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/PS Integrator",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "I", }, {
    "retained_variable_entry20", 0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "retained_variable_entry21", 0U, 0, "", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, { "retained_variable_entry22",
    0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "retained_variable_entry23", 0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "retained_variable_entry24", 0U, 0, "", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, { "retained_variable_entry25",
    0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "retained_variable_entry26", 0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "retained_variable_entry27", 0U, 0, "", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, { "retained_variable_entry28",
    0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "Port_Forward_Cable.transmission_line.T1.i_alpha", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "i_alpha", }, {
    "Port_Forward_Cable.transmission_line.T1.i_beta", 0U, 0,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "i_beta", }, {
    "Port_Forward_Cable.transmission_line.C_b0.p.v", 0U, 1,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c0.p.v", 0U, 1,
    "ee_marine_electrical_system/Port-Forward Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.angular_torque", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "angular_torque", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_id", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_id", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_i1q", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_i1q", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_iq", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_iq", }, {
    "Diesel_generator.Inertia.t", 0U, 0,
    "ee_marine_electrical_system/Diesel generator /Inertia", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu",
    0U, 0,
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Ifd_pu", }, {
    "Gas_turbine.Turbine_and_governor.Governor.PS_Integrator.I", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/PS Integrator",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "I", }, {
    "retained_variable_entry10", 0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "retained_variable_entry11", 0U, 0, "", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, { "retained_variable_entry12",
    0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "retained_variable_entry4", 0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "retained_variable_entry5", 0U, 0, "", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, { "retained_variable_entry6",
    0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "retained_variable_entry7", 0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "", }, { "retained_variable_entry8", 0U, 0, "", 1.0, "1",
    0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, { "retained_variable_entry9",
    0U, 0, "", 1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "", }, {
    "Port_Aft_Cable.transmission_line.T1.i_alpha", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i_alpha", }, {
    "Port_Aft_Cable.transmission_line.T1.i_beta", 0U, 0,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i_beta", }, {
    "Port_Aft_Cable.transmission_line.C_b0.p.v", 0U, 1,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c0.p.v", 0U, 1,
    "ee_marine_electrical_system/Port-Aft Cable", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.angular_torque", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "angular_torque", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_id", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_id", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_i1q", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_i1q", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_iq", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1.0,
    "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_iq", }, {
    "Gas_turbine.Inertia.t", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Inertia", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Torque", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.PS_Integrator.I", 0U, 0,
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/PS Integrator",
    1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "I", }, {
    "Hotel_Load_Breaker.breakerB.v", 0U, 0,
    "ee_marine_electrical_system/Hotel Load Breaker", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "v", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b0.p.v", 0U, 1,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b1.p.v", 0U, 1,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c0.p.v", 0U, 1,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c1.p.v", 0U, 1,
    "ee_marine_electrical_system/Port Mid-ship Cable", 1.0, "1", 0.0, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[657] = { {
    "Average_Value_Propulsion_Load.R",
    "ee_marine_electrical_system/Average Value Propulsion Load", 1U, 1U, "Ohm",
    1.0, "Ohm", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Average_Value_Propulsion_Load.i",
    "ee_marine_electrical_system/Average Value Propulsion Load", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Average_Value_Propulsion_Load.n.v",
    "ee_marine_electrical_system/Average Value Propulsion Load", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Average_Value_Propulsion_Load.p.v",
    "ee_marine_electrical_system/Average Value Propulsion Load", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Average_Value_Propulsion_Load.v",
    "ee_marine_electrical_system/Average Value Propulsion Load", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Average_Value_Propulsion_Rectifier.I",
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 3U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Three-phase currents", }, {
    "Average_Value_Propulsion_Rectifier.N.V",
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 3U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Average_Value_Propulsion_Rectifier.i_n",
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "DC -", }, {
    "Average_Value_Propulsion_Rectifier.i_p",
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "DC +", }, {
    "Average_Value_Propulsion_Rectifier.n.v",
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Average_Value_Propulsion_Rectifier.p.v",
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Base_Load.N.V",
    "ee_marine_electrical_system/Base Load", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Base_Load.n.v",
    "ee_marine_electrical_system/Base Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Base_Load.neutral_point.I", "ee_marine_electrical_system/Base Load", 1U, 3U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Base_Load.neutral_point.N.V",
    "ee_marine_electrical_system/Base Load", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Base_Load.neutral_point.i_n",
    "ee_marine_electrical_system/Base Load", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, { "Base_Load.neutral_point.n.v",
    "ee_marine_electrical_system/Base Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Base_Load.wye_impedance.I", "ee_marine_electrical_system/Base Load", 1U, 3U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Base_Load.wye_impedance.IL",
    "ee_marine_electrical_system/Base Load", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Internal variable for current through inductors", }, {
    "Base_Load.wye_impedance.N1.V", "ee_marine_electrical_system/Base Load", 1U,
    3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Base_Load.wye_impedance.N2.V",
    "ee_marine_electrical_system/Base Load", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Base_Load.wye_impedance.V",
    "ee_marine_electrical_system/Base Load", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Base_Load.wye_impedance.power_dissipated",
    "ee_marine_electrical_system/Base Load", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Bow_Thrusters.Asynchronous_Machine_Measurement.pu_input",
    "ee_marine_electrical_system/Bow Thrusters/Asynchronous Machine Measurement",
    1U, 8U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Bow_Thrusters.Asynchronous_Machine_Measurement.pu_output",
    "ee_marine_electrical_system/Bow Thrusters/Asynchronous Machine Measurement",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "Bow_Thrusters.Bow_Thrusters.C.w",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Bow_Thrusters.Bow_Thrusters.I",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 3U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Bow_Thrusters.Bow_Thrusters.Lrrd",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Lrrd", }, {
    "Bow_Thrusters.Bow_Thrusters.Lrrd1",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Lrrd1", }, {
    "Bow_Thrusters.Bow_Thrusters.Lrrd2",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Lrrd2", }, {
    "Bow_Thrusters.Bow_Thrusters.Lss",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Lss", }, {
    "Bow_Thrusters.Bow_Thrusters.N1.V",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Bow_Thrusters.N2.V",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Bow_Thrusters.R.w",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Bow_Thrusters.Bow_Thrusters.V",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Bow_Thrusters.angular_position",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "deg",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor angle", }, {
    "Bow_Thrusters.Bow_Thrusters.angular_position_diff",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "rad",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_position_diff", }, {
    "Bow_Thrusters.Bow_Thrusters.angular_torque",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "N*m",
    1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_torque", }, {
    "Bow_Thrusters.Bow_Thrusters.angular_velocity",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_velocity", }, {
    "Bow_Thrusters.Bow_Thrusters.psi0s",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "Wb", 1.0,
    "m^2*kg/s/C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Stator zero-sequence magnetic flux linkage", }, {
    "Bow_Thrusters.Bow_Thrusters.psidr",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "Wb", 1.0,
    "m^2*kg/s/C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotor d-axis magnetic flux linkage", },
  { "Bow_Thrusters.Bow_Thrusters.psidr1",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "Wb", 1.0,
    "m^2*kg/s/C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotor d-axis magnetic flux linkage in cage 1", }, {
    "Bow_Thrusters.Bow_Thrusters.psidr2",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "Wb", 1.0,
    "m^2*kg/s/C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotor d-axis magnetic flux linkage in cage 2", }, {
    "Bow_Thrusters.Bow_Thrusters.psids",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "Wb", 1.0,
    "m^2*kg/s/C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Stator d-axis magnetic flux linkage", },
  { "Bow_Thrusters.Bow_Thrusters.psiqr",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "Wb", 1.0,
    "m^2*kg/s/C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotor q-axis magnetic flux linkage", },
  { "Bow_Thrusters.Bow_Thrusters.psiqr1",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "Wb", 1.0,
    "m^2*kg/s/C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotor q-axis magnetic flux linkage in cage 1", }, {
    "Bow_Thrusters.Bow_Thrusters.psiqr2",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "Wb", 1.0,
    "m^2*kg/s/C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotor q-axis magnetic flux linkage in cage 2", }, {
    "Bow_Thrusters.Bow_Thrusters.psiqs",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "Wb", 1.0,
    "m^2*kg/s/C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Stator q-axis magnetic flux linkage", },
  { "Bow_Thrusters.Bow_Thrusters.pu_Lm_sat",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_Lm_sat", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_i0s",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_i0s", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_idr",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_idr", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_ids",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_ids", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_iqr",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_iqr", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_iqs",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_iqs", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_output",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 8U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psi0s",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Stator zero-sequence magnetic flux linkage", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psidr",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor d-axis magnetic flux linkage", },
    { "Bow_Thrusters.Bow_Thrusters.pu_psidr1",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotor d-axis magnetic flux linkage in cage 1", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psidr2",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotor d-axis magnetic flux linkage in cage 2", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psids",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Stator d-axis magnetic flux linkage", },
  { "Bow_Thrusters.Bow_Thrusters.pu_psiqr",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor q-axis magnetic flux linkage", },
    { "Bow_Thrusters.Bow_Thrusters.pu_psiqr1",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotor q-axis magnetic flux linkage in cage 1", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psiqr2",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Rotor q-axis magnetic flux linkage in cage 2", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_psiqs",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Stator q-axis magnetic flux linkage", },
  { "Bow_Thrusters.Bow_Thrusters.pu_torque",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_torque", }, {
    "Bow_Thrusters.Bow_Thrusters.pu_velocity",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thrusters", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_velocity", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.N1.V",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 3U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.N2.V",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 3U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA.i",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA.p1.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA.p2.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA.vT",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA.internal_mode_var_m__",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB.i",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB.p1.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB.p2.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB.vT",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB.internal_mode_var_m__",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC.i",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC.p1.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC.p2.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC.vT",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC.internal_mode_var_m__",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter1.I",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 3U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter1.N.V",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 3U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter1.a.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter1.b.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter1.c.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter1.i_a",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter1.i_b",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter1.i_c",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter2.I",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 3U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter2.N.V",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 3U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter2.a.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter2.b.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter2.c.v",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter2.i_a",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter2.i_b",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.phase_splitter2.i_c",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.vT",
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, { "Bow_Thrusters.Conn1.V",
    "ee_marine_electrical_system/Bow Thrusters", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "V", }, {
    "Bow_Thrusters.Ideal_Torque_Source.C.w",
    "ee_marine_electrical_system/Bow Thrusters/Ideal Torque Source", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Bow_Thrusters.Ideal_Torque_Source.R.w",
    "ee_marine_electrical_system/Bow Thrusters/Ideal Torque Source", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Bow_Thrusters.Ideal_Torque_Source.S",
    "ee_marine_electrical_system/Bow Thrusters/Ideal Torque Source", 1U, 1U,
    "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Bow_Thrusters.Ideal_Torque_Source.t",
    "ee_marine_electrical_system/Bow Thrusters/Ideal Torque Source", 1U, 1U,
    "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Bow_Thrusters.Ideal_Torque_Source.w",
    "ee_marine_electrical_system/Bow Thrusters/Ideal Torque Source", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Bow_Thrusters.Inertia.I.w",
    "ee_marine_electrical_system/Bow Thrusters/Inertia", 1U, 1U, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Bow_Thrusters.Inertia.t",
    "ee_marine_electrical_system/Bow Thrusters/Inertia", 1U, 1U, "N*m", 1.0,
    "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, { "Bow_Thrusters.Inertia.w",
    "ee_marine_electrical_system/Bow Thrusters/Inertia", 1U, 1U, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Bow_Thrusters.Mechanical_Rotational_Reference1.W.w",
    "ee_marine_electrical_system/Bow Thrusters/Mechanical Rotational Reference1",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Bow_Thrusters.Phase_Permute.N123.V",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Phase_Permute.N231.V",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_123.I",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 3U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_123.N.V",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_123.a.v",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_123.b.v",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_123.c.v",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_123.i_a",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_123.i_b",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_123.i_c",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_231.I",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 3U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_231.N.V",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_231.a.v",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_231.b.v",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_231.c.v",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_231.i_a",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_231.i_b",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Bow_Thrusters.Phase_Permute.phase_splitter_231.i_c",
    "ee_marine_electrical_system/Bow Thrusters/Phase Permute", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Bow_Thrusters.Thruster_Torque_Speed_Characteristic.I",
    "ee_marine_electrical_system/Bow Thrusters/Thruster Torque-Speed Characteristic",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "Bow_Thrusters.Thruster_Torque_Speed_Characteristic.O",
    "ee_marine_electrical_system/Bow Thrusters/Thruster Torque-Speed Characteristic",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "f", }, {
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Efd",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Efd", }, {
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Efd_pu",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Efd_pu", }, {
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Ifd",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ifd", }, {
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ifd_pu", }, {
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.fd_n.v",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.fd_p.v",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.i",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Field current", }, {
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.i0",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Electrical reference current", },
  { "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Measurement.pu_input",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Measurement",
    1U, 10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Measurement.pu_output",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Synchronous Machine Measurement",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "Diesel_generator.AVR_and_exciter.Terminal_Current_Measurement.pu_input",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Current Measurement",
    1U, 10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Diesel_generator.AVR_and_exciter.Terminal_Current_Measurement.pu_output",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Current Measurement",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "Diesel_generator.AVR_and_exciter.Terminal_Voltage_Measurement.pu_input",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Voltage Measurement",
    1U, 10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Diesel_generator.AVR_and_exciter.Terminal_Voltage_Measurement.pu_output",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Voltage Measurement",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "Diesel_generator.AVR_and_exciter.fd0.v",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diesel_generator.AVR_and_exciter.fd1.v",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Diesel_generator.AVR_and_exciter.pu",
    "ee_marine_electrical_system/Diesel generator /AVR and exciter", 1U, 10U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.C.w",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.I",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 3U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.Lad",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Lad", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.Laq",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Laq", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.N.V",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.R.w",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.V",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.angular_position_diff",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_position_diff", },
    { "Diesel_generator.Diesel_Generator_Alternator_5MVA.angular_torque",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_torque", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.angular_velocity",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_velocity", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.efd",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "efd", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.fd_n.v",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.fd_p.v",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.i_n",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.ifd",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "ifd", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.n.v",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_fd_Efd",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_fd_Efd", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_fd_Ifd",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_fd_Ifd", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_i0",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_i0", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_i1d",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_i1d", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_i1q",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_i1q", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_id",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_id", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_iq",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_iq", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_output",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psi0",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi0", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psi1d",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi1d", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psi1q",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi1q", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psid",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psid", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psifd",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psifd", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_psiq",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psiq", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_torque",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_torque", }, {
    "Diesel_generator.Diesel_Generator_Alternator_5MVA.pu_velocity",
    "ee_marine_electrical_system/Diesel generator /Diesel Generator Alternator 5MVA",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_velocity", }, {
    "Diesel_generator.Electrical_Reference4.V.v",
    "ee_marine_electrical_system/Diesel generator /Electrical Reference4", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Diesel_generator.Generator_and_governor.C.w",
    "ee_marine_electrical_system/Diesel generator /Generator and governor", 1U,
    1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Diesel_generator.Generator_and_governor.Diesel_Generator.U",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Diesel Generator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "U", }, {
    "Diesel_generator.Generator_and_governor.Diesel_Generator.Y",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Diesel Generator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Y", }, {
    "Diesel_generator.Generator_and_governor.Governor.Delta_load_setpoint.I1",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/Delta load setpoint",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "Diesel_generator.Generator_and_governor.Governor.Delta_load_setpoint.I2",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/Delta load setpoint",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "Diesel_generator.Generator_and_governor.Governor.Delta_load_setpoint.O",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/Delta load setpoint",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Diesel_generator.Generator_and_governor.Governor.Delta_speed.I1",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/Delta speed",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "Diesel_generator.Generator_and_governor.Governor.Delta_speed.I2",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/Delta speed",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "Diesel_generator.Generator_and_governor.Governor.Delta_speed.O",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/Delta speed",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Diesel_generator.Generator_and_governor.Governor.Load_setpoint.O",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/Load_setpoint",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Diesel_generator.Generator_and_governor.Governor.PS_Integrator.I",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/PS Integrator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Diesel_generator.Generator_and_governor.Governor.PS_Integrator.O",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/PS Integrator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Diesel_generator.Generator_and_governor.Governor.PS_Integrator.x",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/PS Integrator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "Diesel_generator.Generator_and_governor.Governor.PS_Subtract1.I1",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/PS Subtract1",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "Diesel_generator.Generator_and_governor.Governor.PS_Subtract1.I2",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/PS Subtract1",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "Diesel_generator.Generator_and_governor.Governor.PS_Subtract1.O",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/PS Subtract1",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Diesel_generator.Generator_and_governor.Governor.Rotor_Velocity_Measurement.pu_input",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/Rotor Velocity Measurement",
    1U, 10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Diesel_generator.Generator_and_governor.Governor.Rotor_Velocity_Measurement.pu_output",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/Rotor Velocity Measurement",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "Diesel_generator.Generator_and_governor.Governor.Speed_ref.O",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/Speed_ref",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Diesel_generator.Generator_and_governor.Governor.delta_y",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "delta_y", }, {
    "Diesel_generator.Generator_and_governor.Governor.pu",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor",
    1U, 10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Diesel_generator.Generator_and_governor.Governor.x1_T_G.I",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/1//T_G",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Diesel_generator.Generator_and_governor.Governor.x1_T_G.O",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/1//T_G",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Diesel_generator.Generator_and_governor.Governor.x1_droop.I",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/1//droop",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Diesel_generator.Generator_and_governor.Governor.x1_droop.O",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Governor/1//droop",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Diesel_generator.Generator_and_governor.Ideal_Torque_Source.C.w",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Diesel_generator.Generator_and_governor.Ideal_Torque_Source.R.w",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Diesel_generator.Generator_and_governor.Ideal_Torque_Source.S",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Ideal Torque Source",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Diesel_generator.Generator_and_governor.Ideal_Torque_Source.t",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Ideal Torque Source",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Diesel_generator.Generator_and_governor.Ideal_Torque_Source.w",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Ideal Torque Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Diesel_generator.Generator_and_governor.Mechanical_Rotational_Reference.W.w",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Diesel_generator.Generator_and_governor.R.w",
    "ee_marine_electrical_system/Diesel generator /Generator and governor", 1U,
    1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Diesel_generator.Generator_and_governor.pu",
    "ee_marine_electrical_system/Diesel generator /Generator and governor", 1U,
    10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Diesel_generator.Generator_and_governor.scale_by_base_torque.I",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/scale by base_torque",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Diesel_generator.Generator_and_governor.scale_by_base_torque.O",
    "ee_marine_electrical_system/Diesel generator /Generator and governor/scale by base_torque",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Diesel_generator.Inertia.R.w",
    "ee_marine_electrical_system/Diesel generator /Inertia", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Diesel_generator.Inertia.t",
    "ee_marine_electrical_system/Diesel generator /Inertia", 1U, 1U, "N*m", 1.0,
    "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Diesel_generator.Inertia.w",
    "ee_marine_electrical_system/Diesel generator /Inertia", 1U, 1U, "rad*Hz",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Diesel_generator.x.V", "ee_marine_electrical_system/Diesel generator ", 1U,
    3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "V", }, { "Electrical_Reference1.V.v",
    "ee_marine_electrical_system/Electrical Reference1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference2.V.v",
    "ee_marine_electrical_system/Electrical Reference2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference3.V.v",
    "ee_marine_electrical_system/Electrical Reference3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference4.V.v",
    "ee_marine_electrical_system/Electrical Reference4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference5.V.v",
    "ee_marine_electrical_system/Electrical Reference5", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference6.V.v",
    "ee_marine_electrical_system/Electrical Reference6", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference8.V.v",
    "ee_marine_electrical_system/Electrical Reference8", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference9.V.v",
    "ee_marine_electrical_system/Electrical Reference9", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Efd",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Efd", }, {
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Efd_pu",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Efd_pu", }, {
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Ifd",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ifd", }, {
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ifd_pu", }, {
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.fd_n.v",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.fd_p.v",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.i",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Field current", }, {
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.i0",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Synchronous Machine Field Circuit (pu)",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Electrical reference current", },
  { "Gas_turbine.AVR_and_exciter.Terminal_Current_Measurement.pu_input",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Current Measurement",
    1U, 10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Gas_turbine.AVR_and_exciter.Terminal_Current_Measurement.pu_output",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Current Measurement",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement.pu_input",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage Measurement",
    1U, 10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement.pu_output",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage Measurement",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement1.pu_input",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage Measurement1",
    1U, 10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement1.pu_output",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage Measurement1",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "Gas_turbine.AVR_and_exciter.fd0.v",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Gas_turbine.AVR_and_exciter.fd1.v",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Gas_turbine.AVR_and_exciter.pu",
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter", 1U, 10U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Gas_turbine.Electrical_Reference.V.v",
    "ee_marine_electrical_system/Gas turbine/Electrical Reference", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.C.w",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.I",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    3U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.Lad",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Lad", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.Laq",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Laq", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.N.V",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.R.w",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.V",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.angular_position_diff",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_position_diff", },
    { "Gas_turbine.Gas_Turbine_Alternator_30MVA.angular_torque",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_torque", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.angular_velocity",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_velocity", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.efd",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "efd", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.fd_n.v",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.fd_p.v",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.i_n",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.ifd",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "ifd", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.n.v",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_fd_Efd",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_fd_Efd", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_fd_Ifd",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_fd_Ifd", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_i0",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_i0", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_i1d",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_i1d", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_i1q",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_i1q", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_i2q",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_i2q", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_id",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_id", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_iq",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_iq", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_output",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psi0",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi0", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psi1d",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi1d", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psi1q",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi1q", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psi2q",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi2q", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psid",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psid", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psifd",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psifd", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_psiq",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psiq", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_torque",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_torque", }, {
    "Gas_turbine.Gas_Turbine_Alternator_30MVA.pu_velocity",
    "ee_marine_electrical_system/Gas turbine/Gas Turbine Alternator 30MVA", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_velocity", }, {
    "Gas_turbine.Inertia.R.w", "ee_marine_electrical_system/Gas turbine/Inertia",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Gas_turbine.Inertia.t", "ee_marine_electrical_system/Gas turbine/Inertia",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Gas_turbine.Inertia.w", "ee_marine_electrical_system/Gas turbine/Inertia",
    1U, 1U, "rad*Hz", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Rotational velocity", }, { "Gas_turbine.Turbine_and_governor.C.w",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor ", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.PS_Integrator.I",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/PS Integrator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.PS_Integrator.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/PS Integrator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.PS_Integrator.x",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/PS Integrator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.PS_Subtract1.I1",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/PS Subtract1",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.PS_Subtract1.I2",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/PS Subtract1",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.PS_Subtract1.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/PS Subtract1",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.delta_y",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "delta_y", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.torque",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "torque", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.x1_T_GT.I",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/1//T_GT",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Gas_turbine.Turbine_and_governor.Gas_Turbine.x1_T_GT.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Gas Turbine/1//T_GT",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Governor.Delta_load_setpoint.I1",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/Delta load setpoint",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "Gas_turbine.Turbine_and_governor.Governor.Delta_load_setpoint.I2",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/Delta load setpoint",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "Gas_turbine.Turbine_and_governor.Governor.Delta_load_setpoint.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/Delta load setpoint",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Governor.Delta_speed.I1",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/Delta speed",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "Gas_turbine.Turbine_and_governor.Governor.Delta_speed.I2",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/Delta speed",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "Gas_turbine.Turbine_and_governor.Governor.Delta_speed.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/Delta speed",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Governor.Load_setpoint.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/Load_setpoint",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Governor.PS_Integrator.I",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/PS Integrator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Gas_turbine.Turbine_and_governor.Governor.PS_Integrator.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/PS Integrator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Governor.PS_Integrator.x",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/PS Integrator",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "x", }, {
    "Gas_turbine.Turbine_and_governor.Governor.PS_Subtract1.I1",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/PS Subtract1",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I1", }, {
    "Gas_turbine.Turbine_and_governor.Governor.PS_Subtract1.I2",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/PS Subtract1",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I2", }, {
    "Gas_turbine.Turbine_and_governor.Governor.PS_Subtract1.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/PS Subtract1",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Governor.Rotor_Velocity_Measurement.pu_input",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/Rotor Velocity Measurement",
    1U, 10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Gas_turbine.Turbine_and_governor.Governor.Rotor_Velocity_Measurement.pu_output",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/Rotor Velocity Measurement",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "Gas_turbine.Turbine_and_governor.Governor.Speed_ref.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/Speed_ref",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Governor.delta_y",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "delta_y", }, {
    "Gas_turbine.Turbine_and_governor.Governor.pu",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor", 1U,
    10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Gas_turbine.Turbine_and_governor.Governor.x1_T_G.I",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/1//T_G",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Gas_turbine.Turbine_and_governor.Governor.x1_T_G.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/1//T_G",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Governor.x1_droop.I",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/1//droop",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Gas_turbine.Turbine_and_governor.Governor.x1_droop.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Governor/1//droop",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, {
    "Gas_turbine.Turbine_and_governor.Ideal_Torque_Source.C.w",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Ideal Torque Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Gas_turbine.Turbine_and_governor.Ideal_Torque_Source.R.w",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Ideal Torque Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Gas_turbine.Turbine_and_governor.Ideal_Torque_Source.S",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Ideal Torque Source",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Gas_turbine.Turbine_and_governor.Ideal_Torque_Source.t",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Ideal Torque Source",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Gas_turbine.Turbine_and_governor.Ideal_Torque_Source.w",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Ideal Torque Source",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Gas_turbine.Turbine_and_governor.Mechanical_Rotational_Reference.W.w",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Gas_turbine.Turbine_and_governor.R.w",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor ", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Gas_turbine.Turbine_and_governor.pu",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor ", 1U, 10U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Gas_turbine.Turbine_and_governor.scale_by_base_torque.I",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /scale by base_torque",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Gas_turbine.Turbine_and_governor.scale_by_base_torque.O",
    "ee_marine_electrical_system/Gas turbine/Turbine and governor /scale by base_torque",
    1U, 1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "O", }, { "Gas_turbine.pu",
    "ee_marine_electrical_system/Gas turbine", 1U, 10U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, { "Gas_turbine.x.V",
    "ee_marine_electrical_system/Gas turbine", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "V", }, { "Hotel_Load.N.V",
    "ee_marine_electrical_system/Hotel Load", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Hotel_Load.n.v",
    "ee_marine_electrical_system/Hotel Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load.neutral_point.I", "ee_marine_electrical_system/Hotel Load", 1U,
    3U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Hotel_Load.neutral_point.N.V",
    "ee_marine_electrical_system/Hotel Load", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Hotel_Load.neutral_point.i_n",
    "ee_marine_electrical_system/Hotel Load", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, {
    "Hotel_Load.neutral_point.n.v", "ee_marine_electrical_system/Hotel Load", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load.wye_impedance.I", "ee_marine_electrical_system/Hotel Load", 1U,
    3U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Hotel_Load.wye_impedance.N1.V",
    "ee_marine_electrical_system/Hotel Load", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Hotel_Load.wye_impedance.N2.V",
    "ee_marine_electrical_system/Hotel Load", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Hotel_Load.wye_impedance.V",
    "ee_marine_electrical_system/Hotel Load", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Hotel_Load.wye_impedance.power_dissipated",
    "ee_marine_electrical_system/Hotel Load", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Hotel_Load_Breaker.N1.V", "ee_marine_electrical_system/Hotel Load Breaker",
    1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Hotel_Load_Breaker.N2.V", "ee_marine_electrical_system/Hotel Load Breaker",
    1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Hotel_Load_Breaker.breakerA.i",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Hotel_Load_Breaker.breakerA.p1.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.breakerA.p2.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.breakerA.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Hotel_Load_Breaker.breakerA.vT",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Hotel_Load_Breaker.breakerA.internal_mode_var_m__",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Hotel_Load_Breaker.breakerB.i",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Hotel_Load_Breaker.breakerB.p1.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.breakerB.p2.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.breakerB.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Hotel_Load_Breaker.breakerB.vT",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Hotel_Load_Breaker.breakerB.internal_mode_var_m__",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Hotel_Load_Breaker.breakerC.i",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Hotel_Load_Breaker.breakerC.p1.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.breakerC.p2.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.breakerC.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Hotel_Load_Breaker.breakerC.vT",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Hotel_Load_Breaker.breakerC.internal_mode_var_m__",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Hotel_Load_Breaker.phase_splitter1.I",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Hotel_Load_Breaker.phase_splitter1.N.V",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Hotel_Load_Breaker.phase_splitter1.a.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.phase_splitter1.b.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.phase_splitter1.c.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.phase_splitter1.i_a",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Hotel_Load_Breaker.phase_splitter1.i_b",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Hotel_Load_Breaker.phase_splitter1.i_c",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Hotel_Load_Breaker.phase_splitter2.I",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Hotel_Load_Breaker.phase_splitter2.N.V",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Hotel_Load_Breaker.phase_splitter2.a.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.phase_splitter2.b.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.phase_splitter2.c.v",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Hotel_Load_Breaker.phase_splitter2.i_a",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Hotel_Load_Breaker.phase_splitter2.i_b",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Hotel_Load_Breaker.phase_splitter2.i_c",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, { "Hotel_Load_Breaker.vT",
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, { "Port_Aft_Cable.N1.V",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Port_Aft_Cable.N2.V",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Port_Aft_Cable.g1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Port_Aft_Cable.g2.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.phase_splitter1.I",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Port_Aft_Cable.phase_splitter1.N.V",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Port_Aft_Cable.phase_splitter1.a.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.phase_splitter1.b.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.phase_splitter1.c.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.phase_splitter1.i_a",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Aft_Cable.phase_splitter1.i_b",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Aft_Cable.phase_splitter1.i_c",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Aft_Cable.phase_splitter2.I",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Port_Aft_Cable.phase_splitter2.N.V",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Port_Aft_Cable.phase_splitter2.a.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.phase_splitter2.b.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.phase_splitter2.c.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.phase_splitter2.i_a",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Aft_Cable.phase_splitter2.i_b",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Aft_Cable.phase_splitter2.i_c",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Aft_Cable.transmission_line.C_b0.i",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Aft_Cable.transmission_line.C_b0.n.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_b0.p.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_b0.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_b0.vc",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Aft_Cable.transmission_line.C_b1.i",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Aft_Cable.transmission_line.C_b1.n.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_b1.p.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_b1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_b1.vc",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c0.i",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Aft_Cable.transmission_line.C_c0.n.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c0.p.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c0.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c0.vc",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c1.i",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Aft_Cable.transmission_line.C_c1.n.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c1.p.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.C_c1.vc",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Aft_Cable.transmission_line.T1.a.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T1.alpha.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T1.b.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T1.beta.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T1.c.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T1.i_a",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Aft_Cable.transmission_line.T1.i_alpha",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_alpha", }, {
    "Port_Aft_Cable.transmission_line.T1.i_b",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Aft_Cable.transmission_line.T1.i_beta",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_beta", }, {
    "Port_Aft_Cable.transmission_line.T1.i_c",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Aft_Cable.transmission_line.T1.i_zero",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_zero", }, {
    "Port_Aft_Cable.transmission_line.T1.zero.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T2.a.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T2.alpha.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T2.b.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T2.beta.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T2.c.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.T2.i_a",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Aft_Cable.transmission_line.T2.i_alpha",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_alpha", }, {
    "Port_Aft_Cable.transmission_line.T2.i_b",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Aft_Cable.transmission_line.T2.i_beta",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_beta", }, {
    "Port_Aft_Cable.transmission_line.T2.i_c",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Aft_Cable.transmission_line.T2.i_zero",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_zero", }, {
    "Port_Aft_Cable.transmission_line.T2.zero.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.a1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.a2.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.b1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.b2.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.c1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.c2.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.g1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.g2.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_a1.i",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Aft_Cable.transmission_line.inductor_a1.n.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_a1.p.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_a1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_a1.i_L",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "Port_Aft_Cable.transmission_line.inductor_b1.i",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Aft_Cable.transmission_line.inductor_b1.n.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_b1.p.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_b1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_b1.i_L",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "Port_Aft_Cable.transmission_line.inductor_c1.i",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Aft_Cable.transmission_line.inductor_c1.n.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_c1.p.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_c1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.inductor_c1.i_L",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "Port_Aft_Cable.transmission_line.node_alpha1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.node_alpha2.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.node_beta1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.node_beta2.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.node_zero1.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Aft_Cable.transmission_line.node_zero2.v",
    "ee_marine_electrical_system/Port-Aft Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Port_Forward_Cable.N1.V",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Port_Forward_Cable.N2.V",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Port_Forward_Cable.g1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Port_Forward_Cable.g2.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.phase_splitter1.I",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Port_Forward_Cable.phase_splitter1.N.V",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Port_Forward_Cable.phase_splitter1.a.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.phase_splitter1.b.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.phase_splitter1.c.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.phase_splitter1.i_a",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Forward_Cable.phase_splitter1.i_b",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Forward_Cable.phase_splitter1.i_c",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Forward_Cable.phase_splitter2.I",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Port_Forward_Cable.phase_splitter2.N.V",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Port_Forward_Cable.phase_splitter2.a.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.phase_splitter2.b.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.phase_splitter2.c.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.phase_splitter2.i_a",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Forward_Cable.phase_splitter2.i_b",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Forward_Cable.phase_splitter2.i_c",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Forward_Cable.transmission_line.C_b0.i",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Forward_Cable.transmission_line.C_b0.n.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_b0.p.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_b0.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_b0.vc",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Forward_Cable.transmission_line.C_b1.i",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Forward_Cable.transmission_line.C_b1.n.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_b1.p.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_b1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_b1.vc",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c0.i",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Forward_Cable.transmission_line.C_c0.n.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c0.p.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c0.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c0.vc",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c1.i",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Forward_Cable.transmission_line.C_c1.n.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c1.p.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.C_c1.vc",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Forward_Cable.transmission_line.T1.a.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T1.alpha.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T1.b.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T1.beta.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T1.c.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T1.i_a",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Forward_Cable.transmission_line.T1.i_alpha",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_alpha", }, {
    "Port_Forward_Cable.transmission_line.T1.i_b",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Forward_Cable.transmission_line.T1.i_beta",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_beta", }, {
    "Port_Forward_Cable.transmission_line.T1.i_c",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Forward_Cable.transmission_line.T1.i_zero",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_zero", }, {
    "Port_Forward_Cable.transmission_line.T1.zero.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T2.a.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T2.alpha.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T2.b.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T2.beta.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T2.c.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.T2.i_a",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Forward_Cable.transmission_line.T2.i_alpha",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_alpha", }, {
    "Port_Forward_Cable.transmission_line.T2.i_b",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Forward_Cable.transmission_line.T2.i_beta",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_beta", }, {
    "Port_Forward_Cable.transmission_line.T2.i_c",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Forward_Cable.transmission_line.T2.i_zero",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_zero", }, {
    "Port_Forward_Cable.transmission_line.T2.zero.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.a1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.a2.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.b1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.b2.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.c1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.c2.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.g1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.g2.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_a1.i",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Forward_Cable.transmission_line.inductor_a1.n.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_a1.p.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_a1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_a1.i_L",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "Port_Forward_Cable.transmission_line.inductor_b1.i",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Forward_Cable.transmission_line.inductor_b1.n.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_b1.p.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_b1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_b1.i_L",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "Port_Forward_Cable.transmission_line.inductor_c1.i",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Forward_Cable.transmission_line.inductor_c1.n.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_c1.p.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_c1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.inductor_c1.i_L",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "Port_Forward_Cable.transmission_line.node_alpha1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.node_alpha2.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.node_beta1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.node_beta2.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.node_zero1.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Forward_Cable.transmission_line.node_zero2.v",
    "ee_marine_electrical_system/Port-Forward Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.N1.V",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Port_Mid_ship_Cable.N2.V",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Port_Mid_ship_Cable.g1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.g2.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.phase_splitter1.I",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Port_Mid_ship_Cable.phase_splitter1.N.V",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Port_Mid_ship_Cable.phase_splitter1.a.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.phase_splitter1.b.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.phase_splitter1.c.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.phase_splitter1.i_a",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Mid_ship_Cable.phase_splitter1.i_b",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Mid_ship_Cable.phase_splitter1.i_c",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Mid_ship_Cable.phase_splitter2.I",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Port_Mid_ship_Cable.phase_splitter2.N.V",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Port_Mid_ship_Cable.phase_splitter2.a.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.phase_splitter2.b.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.phase_splitter2.c.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.phase_splitter2.i_a",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Mid_ship_Cable.phase_splitter2.i_b",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Mid_ship_Cable.phase_splitter2.i_c",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b0.i",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b0.n.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b0.p.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b0.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b0.vc",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b1.i",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b1.n.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b1.p.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_b1.vc",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c0.i",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c0.n.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c0.p.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c0.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c0.vc",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c1.i",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c1.n.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c1.p.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.C_c1.vc",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.a.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.alpha.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.b.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.beta.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.c.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.i_a",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.i_alpha",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_alpha", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.i_b",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.i_beta",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_beta", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.i_c",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.i_zero",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_zero", }, {
    "Port_Mid_ship_Cable.transmission_line.T1.zero.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.a.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.alpha.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.b.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.beta.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.c.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.i_a",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.i_alpha",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_alpha", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.i_b",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.i_beta",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_beta", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.i_c",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.i_zero",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_zero", }, {
    "Port_Mid_ship_Cable.transmission_line.T2.zero.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.a1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.a2.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.b1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.b2.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.c1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.c2.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.g1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.g2.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_a1.i",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_a1.n.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_a1.p.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_a1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_a1.i_L",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_b1.i",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_b1.n.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_b1.p.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_b1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_b1.i_L",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_c1.i",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_c1.n.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_c1.p.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_c1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.inductor_c1.i_L",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "Port_Mid_ship_Cable.transmission_line.node_alpha1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.node_alpha2.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.node_beta1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.node_beta2.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.node_zero1.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Port_Mid_ship_Cable.transmission_line.node_zero2.v",
    "ee_marine_electrical_system/Port Mid-ship Cable", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", } };

static NeModeData s_major_mode_data[7] = { {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA.internal_mode_var_m__", 0U,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 0,
    "internal_mode_var_m__", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB.internal_mode_var_m__", 0U,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 0,
    "internal_mode_var_m__", }, {
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC.internal_mode_var_m__", 0U,
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 0,
    "internal_mode_var_m__", }, {
    "Hotel_Load_Breaker.breakerA.internal_mode_var_m__", 0U,
    "ee_marine_electrical_system/Hotel Load Breaker", 0, "internal_mode_var_m__",
  }, { "Hotel_Load_Breaker.breakerB.internal_mode_var_m__", 0U,
    "ee_marine_electrical_system/Hotel Load Breaker", 0, "internal_mode_var_m__",
  }, { "Hotel_Load_Breaker.breakerC.internal_mode_var_m__", 0U,
    "ee_marine_electrical_system/Hotel Load Breaker", 0, "internal_mode_var_m__",
  }, { "ie0", 0U, "", 0, "", } };

static NeZCData s_zc_data[47] = { {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 0U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Average Value Propulsion Load", 1U, 1U,
    "Average_Value_Propulsion_Load",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/variable_resistor.ssc",
    NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Diesel generator /Generator and governor/Diesel Generator",
    1U, 2U, "Diesel_generator.Generator_and_governor.Diesel_Generator",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+delays/constant_delay.ssc",
    NE_ZC_TYPE_TRUE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 3U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 4U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 5U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 6U,
    "Hotel_Load_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 7U,
    "Hotel_Load_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 8U,
    "Hotel_Load_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 9U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 10U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 11U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 12U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 13U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 14U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 15U,
    "Hotel_Load_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 16U,
    "Hotel_Load_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 17U,
    "Hotel_Load_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 18U,
    "Hotel_Load_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 19U,
    "Hotel_Load_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 20U,
    "Hotel_Load_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 21U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 22U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 23U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 24U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 25U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 26U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 27U,
    "Hotel_Load_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 28U,
    "Hotel_Load_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 29U,
    "Hotel_Load_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 30U,
    "Hotel_Load_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 31U,
    "Hotel_Load_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 32U,
    "Hotel_Load_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 33U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 34U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 35U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 36U,
    "Hotel_Load_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 37U,
    "Hotel_Load_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 38U,
    "Hotel_Load_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 39U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 40U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 41U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 42U,
    "Hotel_Load_Breaker.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 43U,
    "Hotel_Load_Breaker.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 44U,
    "Hotel_Load_Breaker.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 45U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 46U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[47] = { {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/variable_resistor.ssc",
    40U, 8U, 40U, 16U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+delays/constant_delay.ssc",
    30U, 12U, 30U, 84U, NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U,
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[51] = { {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 2U, 0U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 2U, 2U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 2U, 4U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 2U, 6U,
    "Hotel_Load_Breaker.breakerA",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 2U, 8U,
    "Hotel_Load_Breaker.breakerB",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 2U, 10U,
    "Hotel_Load_Breaker.breakerC",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_marine_electrical_system/Base Load", 1U, 12U, "Base_Load.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Base Load", 1U, 13U, "Base_Load.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Base Load", 1U, 14U, "Base_Load.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Base Load", 1U, 15U, "Base_Load.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Current Measurement",
    1U, 16U, "Diesel_generator.AVR_and_exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Current Measurement",
    1U, 17U, "Diesel_generator.AVR_and_exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Current Measurement",
    1U, 18U, "Diesel_generator.AVR_and_exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Current Measurement",
    1U, 19U, "Diesel_generator.AVR_and_exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Current Measurement",
    1U, 20U, "Diesel_generator.AVR_and_exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Voltage Measurement",
    1U, 21U, "Diesel_generator.AVR_and_exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Voltage Measurement",
    1U, 22U, "Diesel_generator.AVR_and_exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Voltage Measurement",
    1U, 23U, "Diesel_generator.AVR_and_exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Voltage Measurement",
    1U, 24U, "Diesel_generator.AVR_and_exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Diesel generator /AVR and exciter/Terminal Voltage Measurement",
    1U, 25U, "Diesel_generator.AVR_and_exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Current Measurement",
    1U, 26U, "Gas_turbine.AVR_and_exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Current Measurement",
    1U, 27U, "Gas_turbine.AVR_and_exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Current Measurement",
    1U, 28U, "Gas_turbine.AVR_and_exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Current Measurement",
    1U, 29U, "Gas_turbine.AVR_and_exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Current Measurement",
    1U, 30U, "Gas_turbine.AVR_and_exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage Measurement",
    1U, 31U, "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage Measurement",
    1U, 32U, "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage Measurement",
    1U, 33U, "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage Measurement",
    1U, 34U, "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Gas turbine/ AVR and exciter/Terminal Voltage Measurement",
    1U, 35U, "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 36U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 37U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 38U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 39U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 40U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 41U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 42U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 43U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 44U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 45U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 46U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 47U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 48U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 49U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_marine_electrical_system/Average-Value Propulsion Rectifier", 1U, 50U,
    "Average_Value_Propulsion_Rectifier",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 51U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerA",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 52U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerB",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_marine_electrical_system/Bow Thrusters/Bow Thurster Breaker", 1U, 53U,
    "Bow_Thrusters.Bow_Thurster_Breaker.breakerC",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 54U,
    "Hotel_Load_Breaker.breakerA",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 55U,
    "Hotel_Load_Breaker.breakerB",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_marine_electrical_system/Hotel Load Breaker", 1U, 56U,
    "Hotel_Load_Breaker.breakerC",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", } };

static NeRange s_assert_range[57] = { {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[148] = { {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+linear/integrator.ssc",
    28U, 5U, 28U, 10U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+linear/integrator.ssc",
    28U, 7U, 28U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+mech/machine_inertia.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+mech/machine_inertia.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+linear/integrator.ssc",
    28U, 5U, 28U, 10U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+linear/integrator.ssc",
    28U, 7U, 28U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+linear/integrator.ssc",
    28U, 5U, 28U, 10U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+linear/integrator.ssc",
    28U, 7U, 28U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 5U, 30U, 23U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 20U, 30U, 27U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 5U, 30U, 23U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 20U, 30U, 27U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 5U, 30U, 23U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 20U, 30U, 27U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 5U, 30U, 23U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 20U, 30U, 27U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 5U, 30U, 23U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 20U, 30U, 27U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 5U, 30U, 23U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    30U, 20U, 30U, 27U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/variable_resistor.ssc",
    40U, 8U, 40U, 16U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/variable_resistor.ssc",
    41U, 9U, 41U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/variable_resistor.ssc",
    43U, 9U, 43U, 20U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+ideal_rectifier/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+async/+squirrel_cage/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+lookup_tables/one_dimensional.ssc",
    39U, 5U, 39U, 87U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+salient_pole/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+delays/constant_delay.ssc",
    30U, 7U, 30U, 84U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/physical_signal_legacy/+foundation/+physical_signal/+functions/subtract.ssc",
    25U, 5U, 25U, 17U, NE_RANGE_TYPE_NORMAL, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+mech/machine_inertia.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/+round_rotor/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sources/torque.ssc",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+transforms/clarke.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+transforms/clarke.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+connectors/+phase_splitter/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static real_T s_constant_table0[21] = { 0.0, 0.1, 0.2, 0.30000000000000004, 0.4,
  0.5, 0.60000000000000009, 0.70000000000000007, 0.8, 0.9, 1.0, 1.1, 1.2,
  1.2999999999999998, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0 };

static real_T s_constant_table1[21] = { 0.0, 132.62900000000002,
  530.51600000000008, 1193.6610000000003, 2122.0640000000003, 3315.725,
  4774.6440000000011, 6498.8210000000008, 8488.2560000000012, 10742.949, 13262.9,
  16048.109000000002, 19098.575999999997, 22414.300999999992, 25995.283999999996,
  29841.524999999998, 33953.024000000005, 38329.780999999995, 42971.796,
  47879.068999999996, 53051.6 };

static real_T s_constant_table2[21] = { 8.777516367186117e-14,
  2652.5799999966848, 5305.1599999983418, 7957.7399999988975, 10610.319999999174,
  13262.899999999332, 15915.479999999445, 18568.059999999532, 21220.639999999588,
  23873.219999999623, 26525.799999999672, 29178.379999999692, 31830.959999999704,
  34483.539999999753, 37136.119999999748, 39788.699999999793, 42441.279999999788,
  45093.859999999782, 47746.439999999842, 50399.019999999815, 53051.5999999998 };

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 138;
  out->mM_P.mNumRow = 138;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    139);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    57);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 57;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 57);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 57;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    57);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 138;
  out->mDXM_P.mNumRow = 57;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    139);
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
  out->mDUM_P.mNumCol = 5;
  out->mDUM_P.mNumRow = 57;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
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
  out->mDTM_P.mNumRow = 57;
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
  out->mA_P.mNumCol = 138;
  out->mA_P.mNumRow = 138;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    139);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    959);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 959;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 959);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 5;
  out->mB_P.mNumRow = 138;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    22);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 22;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 22);
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
  out->mC_P.mNumRow = 138;
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
  out->mF.mN = 138;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 138);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 138;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    138);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 138;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    138);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 138;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 138);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 138;
  out->mDXF_P.mNumRow = 138;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    139);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    264);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 264;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 264);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 5;
  out->mDUF_P.mNumRow = 138;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
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
  out->mDTF_P.mNumRow = 138;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    43);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 43;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 43);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 1;
  out->mDDF_P.mNumRow = 138;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 1;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 5;
  out->mTDUF_P.mNumRow = 138;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    23);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 138;
  out->mTDXF_P.mNumRow = 138;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    139);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1141);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 95;
  out->mDNF_P.mNumRow = 138;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    96);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    28);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 28;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 28);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 138;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 138);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 138;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 138);
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
  out->mDXICR_P.mNumCol = 138;
  out->mDXICR_P.mNumRow = 0;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 139);
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
  out->mTDUICR_P.mNumCol = 5;
  out->mTDUICR_P.mNumRow = 0;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 6);
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
  out->mMDUY_P.mNumCol = 5;
  out->mMDUY_P.mNumRow = 8;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
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
  out->mMDXY_P.mNumCol = 138;
  out->mMDXY_P.mNumRow = 8;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    139);
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
  out->mTDUY_P.mNumCol = 5;
  out->mTDUY_P.mNumRow = 8;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
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
  out->mTDXY_P.mNumCol = 138;
  out->mTDXY_P.mNumRow = 8;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    139);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    68);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 8;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 8);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 138;
  out->mDXY_P.mNumRow = 8;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    139);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    68);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 68;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 68);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 5;
  out->mDUY_P.mNumRow = 8;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
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
  out->mDTY_P.mNumRow = 8;
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
  out->mMODE.mN = 47;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    47);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 47;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 47);
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
  out->mCACHE_I.mN = 42;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    42);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 7;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 7);
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
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 7;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 956;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 956);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 51;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    51);
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
  out->mDEL_T.mN = 1;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 1;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 1;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 1;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 138;
  out->mDXDELT_P.mNumRow = 1;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 139);
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
  out->mDUDELT_P.mNumCol = 5;
  out->mDUDELT_P.mNumRow = 1;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 6);
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
  out->mDTDELT_P.mNumRow = 1;
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
  out->mOBS_EXP.mN = 956;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    956);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 956;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    956);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 956;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    956);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 956;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 956);
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
  out->mQX.mN = 592;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 592);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
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
  out->mQ1.mN = 56;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 56);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 138;
  out->mQX_P.mNumRow = 138;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    139);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    592);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 5;
  out->mQU_P.mNumRow = 138;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
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
  out->mQT_P.mNumRow = 138;
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
  out->mQ1_P.mNumRow = 138;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    56);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 138;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    138);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 138;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    138);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 138;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    138);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 138;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    138);
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

NeDynamicSystem *ee_marine_electrical_system_fab709d2_1_dae_ds(PmAllocator
  *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[5];
  static NeDsIoInfo output_info[8];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 138;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 51;
  ds->mNumEquations = 138;
  ds->mNumICResiduals = 0;
  ds->mNumModes = 47;
  ds->mNumMajorModes = 7;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 42;
  ds->mNumObservables = 657;
  ds->mNumObservableElements = 956;
  ds->mNumZcs = 47;
  ds->mNumAsserts = 51;
  ds->mNumAssertRanges = 57;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 47;
  ds->mNumEquationRanges = 148;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 1;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 0;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = FALSE;
  ds->mIsOutputSwitchedLinear = FALSE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 5;
  input_info[0].mIdentifier = "Average_Value_Propulsion_Load.R";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName = "Average_Value_Propulsion_Load.R";
  input_info[0].mUnit = "Ohm";
  input_info[1].mIdentifier = "Bow_Thrusters.Bow_Thurster_Breaker.vT";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName = "Bow_Thrusters.Bow_Thurster_Breaker.vT";
  input_info[1].mUnit = "V";
  input_info[2].mIdentifier =
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Efd_pu";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName =
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Efd_pu";
  input_info[2].mUnit = "1";
  input_info[3].mIdentifier =
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Efd_pu";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName =
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Efd_pu";
  input_info[3].mUnit = "1";
  input_info[4].mIdentifier = "Hotel_Load_Breaker.vT";
  input_info[4].mM = 1;
  input_info[4].mN = 1;
  input_info[4].mName = "Hotel_Load_Breaker.vT";
  input_info[4].mUnit = "V";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 8;
  output_info[0].mIdentifier =
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName =
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu";
  output_info[0].mUnit = "1";
  output_info[1].mIdentifier =
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Measurement.pu_output";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName =
    "Diesel_generator.AVR_and_exciter.Synchronous_Machine_Measurement.pu_output";
  output_info[1].mUnit = "1";
  output_info[2].mIdentifier =
    "Diesel_generator.AVR_and_exciter.Terminal_Current_Measurement.pu_output";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName =
    "Diesel_generator.AVR_and_exciter.Terminal_Current_Measurement.pu_output";
  output_info[2].mUnit = "1";
  output_info[3].mIdentifier =
    "Diesel_generator.AVR_and_exciter.Terminal_Voltage_Measurement.pu_output";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName =
    "Diesel_generator.AVR_and_exciter.Terminal_Voltage_Measurement.pu_output";
  output_info[3].mUnit = "1";
  output_info[4].mIdentifier =
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu";
  output_info[4].mM = 1;
  output_info[4].mN = 1;
  output_info[4].mName =
    "Gas_turbine.AVR_and_exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu";
  output_info[4].mUnit = "1";
  output_info[5].mIdentifier =
    "Gas_turbine.AVR_and_exciter.Terminal_Current_Measurement.pu_output";
  output_info[5].mM = 1;
  output_info[5].mN = 1;
  output_info[5].mName =
    "Gas_turbine.AVR_and_exciter.Terminal_Current_Measurement.pu_output";
  output_info[5].mUnit = "1";
  output_info[6].mIdentifier =
    "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement.pu_output";
  output_info[6].mM = 1;
  output_info[6].mN = 1;
  output_info[6].mName =
    "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement.pu_output";
  output_info[6].mUnit = "1";
  output_info[7].mIdentifier =
    "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement1.pu_output";
  output_info[7].mM = 1;
  output_info[7].mN = 1;
  output_info[7].mName =
    "Gas_turbine.AVR_and_exciter.Terminal_Voltage_Measurement1.pu_output";
  output_info[7].mUnit = "1";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mMethods[NE_DS_METHOD_M_P] = ee_marine_electrical_system_fab709d2_1_ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ee_marine_electrical_system_fab709d2_1_ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ee_marine_electrical_system_fab709d2_1_ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
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
  ds->mMethods[NE_DS_METHOD_A_P] = ee_marine_electrical_system_fab709d2_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = ee_marine_electrical_system_fab709d2_1_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = ee_marine_electrical_system_fab709d2_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = ee_marine_electrical_system_fab709d2_1_ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_SLF] = ee_marine_electrical_system_fab709d2_1_ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] =
    ee_marine_electrical_system_fab709d2_1_ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] =
    ee_marine_electrical_system_fab709d2_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = ee_marine_electrical_system_fab709d2_1_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] =
    ee_marine_electrical_system_fab709d2_1_ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ee_marine_electrical_system_fab709d2_1_ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] =
    ee_marine_electrical_system_fab709d2_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] =
    ee_marine_electrical_system_fab709d2_1_ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ee_marine_electrical_system_fab709d2_1_ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] =
    ee_marine_electrical_system_fab709d2_1_ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_IC] = ee_marine_electrical_system_fab709d2_1_ds_ic;
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
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] =
    ee_marine_electrical_system_fab709d2_1_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ee_marine_electrical_system_fab709d2_1_ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] =
    ee_marine_electrical_system_fab709d2_1_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ee_marine_electrical_system_fab709d2_1_ds_dxy;
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
    ee_marine_electrical_system_fab709d2_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = ee_marine_electrical_system_fab709d2_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] =
    ee_marine_electrical_system_fab709d2_1_ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] =
    ee_marine_electrical_system_fab709d2_1_ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = ee_marine_electrical_system_fab709d2_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] =
    ee_marine_electrical_system_fab709d2_1_ds_assert;
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
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
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
    ee_marine_electrical_system_fab709d2_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] =
    ee_marine_electrical_system_fab709d2_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] =
    ee_marine_electrical_system_fab709d2_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] =
    ee_marine_electrical_system_fab709d2_1_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ee_marine_electrical_system_fab709d2_1_ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ee_marine_electrical_system_fab709d2_1_ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] =
    ee_marine_electrical_system_fab709d2_1_ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] =
    ee_marine_electrical_system_fab709d2_1_ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ee_marine_electrical_system_fab709d2_1_ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ee_marine_electrical_system_fab709d2_1_ds_slv;
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
  _ds->mTable0 = s_constant_table0;
  _ds->mTable1 = s_constant_table1;
  _ds->mTable2 = s_constant_table2;
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

static int32_T ds_del_v (const NeDynamicSystem *t0, const NeDynamicSystemInput
  *t2, NeDsMethodOutput *t3)
{
  PmRealVector out;
  real_T X[138];
  int32_T b;
  (void)t0;
  for (b = 0; b < 138; b++) {
    X[b] = t2->mX.mX[b];
  }

  out = t3->mDEL_V;
  out.mX[0] = X[13ULL];
  (void)t0;
  (void)t3;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDEL_V0;
  out.mX[0] = 0.502754;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDEL_TMAX;
  out.mX[0] = 0.3;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDEL_T;
  out.mX[0] = 0.3;
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

static int32_T ds_dxdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mDXDELT_P;
  out.mNumCol = 138ULL;
  out.mNumRow = 1ULL;
  for (b = 0; b < 139; b++) {
    out.mJc[b] = 0;
  }

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
  out.mNumCol = 5ULL;
  out.mNumRow = 1ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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
  out.mNumRow = 1ULL;
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
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
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
  out.mX[4] = 1;
  out.mX[5] = 1;
  out.mX[6] = 1;
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

static int32_T ds_duf (const NeDynamicSystem *t0, const NeDynamicSystemInput *t2,
  NeDsMethodOutput *t3)
{
  PmRealVector out;
  real_T X[138];
  int32_T b;
  int32_T M_idx_42;
  (void)t0;
  M_idx_42 = t2->mM.mX[42];
  for (b = 0; b < 138; b++) {
    X[b] = t2->mX.mX[b];
  }

  out = t3->mDUF;
  out.mX[0] = M_idx_42 != 0 ? -X[51ULL] : 0.0;
  (void)t0;
  (void)t3;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUF_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 138ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mIr[0] = 51;
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
  out.mX[0] = -0.24865626167104418;
  out.mX[1] = -1.0025303380061092;
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  out.mX[6] = -0.0;
  out.mX[7] = -0.0;
  out.mX[8] = -0.0;
  out.mX[9] = -0.0;
  out.mX[10] = -0.0;
  out.mX[11] = -0.14019494934243465;
  out.mX[12] = -1.0;
  out.mX[13] = -0.0;
  out.mX[14] = -0.0;
  out.mX[15] = -0.0;
  out.mX[16] = -0.0;
  out.mX[17] = -0.0;
  out.mX[18] = -0.0;
  out.mX[19] = -0.0;
  out.mX[20] = -0.0;
  out.mX[21] = -0.0;
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
  out.mNumCol = 5ULL;
  out.mNumRow = 138ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 11;
  out.mJc[4] = 22;
  out.mJc[5] = 22;
  out.mIr[0] = 13;
  out.mIr[1] = 85;
  out.mIr[2] = 86;
  out.mIr[3] = 87;
  out.mIr[4] = 88;
  out.mIr[5] = 89;
  out.mIr[6] = 90;
  out.mIr[7] = 91;
  out.mIr[8] = 92;
  out.mIr[9] = 93;
  out.mIr[10] = 94;
  out.mIr[11] = 22;
  out.mIr[12] = 104;
  out.mIr[13] = 105;
  out.mIr[14] = 106;
  out.mIr[15] = 107;
  out.mIr[16] = 108;
  out.mIr[17] = 109;
  out.mIr[18] = 110;
  out.mIr[19] = 111;
  out.mIr[20] = 112;
  out.mIr[21] = 113;
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
  out.mNumRow = 138ULL;
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
  out.mNumCol = 5ULL;
  out.mNumRow = 138ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mJc[3] = 12;
  out.mJc[4] = 23;
  out.mJc[5] = 23;
  out.mIr[0] = 51;
  out.mIr[1] = 13;
  out.mIr[2] = 85;
  out.mIr[3] = 86;
  out.mIr[4] = 87;
  out.mIr[5] = 88;
  out.mIr[6] = 89;
  out.mIr[7] = 90;
  out.mIr[8] = 91;
  out.mIr[9] = 92;
  out.mIr[10] = 93;
  out.mIr[11] = 94;
  out.mIr[12] = 22;
  out.mIr[13] = 104;
  out.mIr[14] = 105;
  out.mIr[15] = 106;
  out.mIr[16] = 107;
  out.mIr[17] = 108;
  out.mIr[18] = 109;
  out.mIr[19] = 110;
  out.mIr[20] = 111;
  out.mIr[21] = 112;
  out.mIr[22] = 113;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *t0, const NeDynamicSystemInput *t2,
  NeDsMethodOutput *t3)
{
  PmRealVector out;
  int32_T M_idx_46;
  (void)t0;
  M_idx_46 = t2->mM.mX[46];
  out = t3->mDDF;
  out.mX[0] = -(real_T)(M_idx_46 == 0);
  (void)t0;
  (void)t3;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 138ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mIr[0] = 95;
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

static int32_T ds_dxicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mDXICR_P;
  out.mNumCol = 138ULL;
  out.mNumRow = 0ULL;
  for (b = 0; b < 139; b++) {
    out.mJc[b] = 0;
  }

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
  out.mNumCol = 5ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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

static int32_T ds_dxm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mDXM_P;
  out.mNumCol = 138ULL;
  out.mNumRow = 57ULL;
  for (b = 0; b < 139; b++) {
    out.mJc[b] = 0;
  }

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
  out.mNumCol = 5ULL;
  out.mNumRow = 57ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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
  out.mNumRow = 57ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
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
  (void)t1;
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

static int32_T ds_qu_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQU_P;
  out.mNumCol = 5ULL;
  out.mNumRow = 138ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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
  out.mNumRow = 138ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_var_tol (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[138];
  int32_T b;
  (void)t1;
  out = t2->mVAR_TOL;
  for (b = 0; b < 138; b++) {
    t0[b] = 1.0E-9;
  }

  for (b = 0; b < 138; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_eq_tol (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T t0[138];
  int32_T b;
  (void)t1;
  out = t2->mEQ_TOL;
  for (b = 0; b < 138; b++) {
    t0[b] = 1.0E-9;
  }

  for (b = 0; b < 138; b++) {
    out.mX[b] = t0[b];
  }

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
  out.mNumCol = 5ULL;
  out.mNumRow = 8ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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
  out.mNumCol = 5ULL;
  out.mNumRow = 8ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mMDXY_P;
  out.mNumCol = 138ULL;
  out.mNumRow = 8ULL;
  for (b = 0; b < 139; b++) {
    out.mJc[b] = 0;
  }

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
  out.mNumCol = 5ULL;
  out.mNumRow = 8ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
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
  out.mNumRow = 8ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
