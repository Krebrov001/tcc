/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */
/* ee_sm_control_fab709d2_1_ds.c - body for module ee_sm_control_fab709d2_1_ds */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_zc.h"
#include "ee_sm_control_fab709d2_1_ds_tdxy_p.h"
#include "ee_sm_control_fab709d2_1_ds_mdxy_p.h"
#include "ee_sm_control_fab709d2_1_ds_dxy_p.h"
#include "ee_sm_control_fab709d2_1_ds_dxy.h"
#include "ee_sm_control_fab709d2_1_ds_y.h"
#include "ee_sm_control_fab709d2_1_ds_qx_p.h"
#include "ee_sm_control_fab709d2_1_ds_obs_all.h"
#include "ee_sm_control_fab709d2_1_ds_obs_act.h"
#include "ee_sm_control_fab709d2_1_ds_obs_exp.h"
#include "ee_sm_control_fab709d2_1_ds_eq_tol.h"
#include "ee_sm_control_fab709d2_1_ds_mode.h"
#include "ee_sm_control_fab709d2_1_ds_var_tol.h"
#include "ee_sm_control_fab709d2_1_ds_dxm_p.h"
#include "ee_sm_control_fab709d2_1_ds_m_p.h"
#include "ee_sm_control_fab709d2_1_ds_log.h"
#include "ee_sm_control_fab709d2_1_ds_dxicr_p.h"
#include "ee_sm_control_fab709d2_1_ds_obs_il.h"
#include "ee_sm_control_fab709d2_1_ds_slf0.h"
#include "ee_sm_control_fab709d2_1_ds_dnf_v_x.h"
#include "ee_sm_control_fab709d2_1_ds_dnf_p.h"
#include "ee_sm_control_fab709d2_1_ds_lv.h"
#include "ee_sm_control_fab709d2_1_ds_slf.h"
#include "ee_sm_control_fab709d2_1_ds_tdxf_p.h"
#include "ee_sm_control_fab709d2_1_ds_a_p.h"
#include "ee_sm_control_fab709d2_1_ds_ic.h"
#include "ee_sm_control_fab709d2_1_ds_slv.h"
#include "ee_sm_control_fab709d2_1_ds_vmf.h"
#include "ee_sm_control_fab709d2_1_ds_dxf_p.h"
#include "ee_sm_control_fab709d2_1_ds_qx.h"
#include "ee_sm_control_fab709d2_1_ds_dnf.h"
#include "ee_sm_control_fab709d2_1_ds_dxf.h"
#include "ee_sm_control_fab709d2_1_ds_update_i.h"
#include "ee_sm_control_fab709d2_1_ds_f.h"
#include "ee_sm_control_fab709d2_1_ds_cache_i.h"
#include "ee_sm_control_fab709d2_1_ds_a.h"
#include "ee_sm_control_fab709d2_1_ds_dxdelt_p.h"
#include "ee_sm_control_fab709d2_1_ds_dtf.h"
#include "ee_sm_control_fab709d2_1_ds_assert.h"
#include "ee_sm_control_fab709d2_1_ds.h"
#include "ssc_ml_fun.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"

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
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
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
static NeEquationData s_equation_data[42] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "ee_sm_control/Initial Load", 2U, 0U, TRUE, 1.0,
    "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME, "ee_sm_control/Initial Load",
    2U, 0U, TRUE, 1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Initial Load", 2U, 0U, TRUE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "ee_sm_control/Machine Inertia", 1U, 2U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 3U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 4U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 5U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 6U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 7U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 8U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 9U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 2U, 10U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Circuit Breaker Step off", 4U, 12U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_sm_control/Circuit Breaker Step off", 4U,
    16U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Circuit Breaker Step off", 4U, 20U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_sm_control/Circuit Breaker Step on", 4U,
    24U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Circuit Breaker Step on", 4U, 28U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_sm_control/Circuit Breaker Step on", 4U,
    32U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Load Step off", 1U, 36U, TRUE, 1.0, "1", }, { "", 1U, 8,
    NE_EQUATION_DOMAIN_TIME, "ee_sm_control/Load Step off", 1U, 36U, TRUE, 1.0,
    "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME, "ee_sm_control/Load Step off",
    1U, 36U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Load Step on", 1U, 37U, TRUE, 1.0, "1", }, { "", 1U, 8,
    NE_EQUATION_DOMAIN_TIME, "ee_sm_control/Load Step on", 1U, 37U, TRUE, 1.0,
    "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME, "ee_sm_control/Load Step on",
    1U, 37U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 38U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 39U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 40U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 41U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 42U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 43U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 44U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 45U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 46U, FALSE,
    1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 46U, FALSE,
    1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 46U, FALSE,
    1.0, "1", }, { "", 3U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 46U, FALSE,
    1.0, "1", }, { "", 4U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 46U, FALSE,
    1.0, "1", }, { "", 5U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 46U, FALSE,
    1.0, "1", }, { "", 6U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 46U, FALSE,
    1.0, "1", }, { "", 7U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 46U, FALSE,
    1.0, "1", }, { "", 8U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 46U, FALSE,
    1.0, "1", }, { "", 9U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 46U, FALSE,
    1.0, "1", } };

static NeVariableData s_variable_data[42] = { { "Machine_Inertia.w", 0U, 0,
    "ee_sm_control/Machine Inertia", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Rotational velocity", }, {
    "Initial_Load.wye_impedance.IL", 0U, 0, "ee_sm_control/Initial Load", 1.0,
    "1", 0.0, TRUE, 1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for current through inductors", }, {
    "Initial_Load.wye_impedance.IL", 1U, 0, "ee_sm_control/Initial Load", 1.0,
    "1", 0.0, TRUE, 1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for current through inductors", }, {
    "Initial_Load.wye_impedance.IL", 2U, 0, "ee_sm_control/Initial Load", 1.0,
    "1", 0.0, TRUE, 1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for current through inductors", }, {
    "Synchronous_Machine_Round_Rotor_standard.angular_position_diff", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "angular_position_diff", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psifd", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psifd", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psi2q", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi2q", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psi0", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi0", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psi1d", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi1d", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psi1q", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psi1q", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psid", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psid", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psiq", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "pu_psiq", }, {
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu", 0U, 0,
    "ee_sm_control/AVR and Exciter/Synchronous Machine Field Circuit (pu)", 1.0,
    "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Ifd_pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input", 0U, 0,
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1.0, "1", 0.0,
    FALSE, 1U, 10U, NE_INIT_MODE_NONE, "pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input", 1U, 0,
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1.0, "1", 0.0,
    FALSE, 1U, 10U, NE_INIT_MODE_NONE, "pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input", 2U, 0,
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1.0, "1", 0.0,
    FALSE, 1U, 10U, NE_INIT_MODE_NONE, "pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input", 3U, 0,
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1.0, "1", 0.0,
    FALSE, 1U, 10U, NE_INIT_MODE_NONE, "pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input", 4U, 0,
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1.0, "1", 0.0,
    FALSE, 1U, 10U, NE_INIT_MODE_NONE, "pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input", 5U, 0,
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1.0, "1", 0.0,
    FALSE, 1U, 10U, NE_INIT_MODE_NONE, "pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input", 6U, 0,
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1.0, "1", 0.0,
    FALSE, 1U, 10U, NE_INIT_MODE_NONE, "pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input", 7U, 0,
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1.0, "1", 0.0,
    FALSE, 1U, 10U, NE_INIT_MODE_NONE, "pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input", 8U, 0,
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1.0, "1", 0.0,
    FALSE, 1U, 10U, NE_INIT_MODE_NONE, "pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input", 9U, 0,
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1.0, "1", 0.0,
    FALSE, 1U, 10U, NE_INIT_MODE_NONE, "pu", }, {
    "Synchronous_Machine_Round_Rotor_standard.V", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    FALSE, 1U, 3U, NE_INIT_MODE_NONE, "V", }, {
    "Synchronous_Machine_Round_Rotor_standard.V", 1U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    FALSE, 1U, 3U, NE_INIT_MODE_NONE, "V", }, {
    "Synchronous_Machine_Round_Rotor_standard.V", 2U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    FALSE, 1U, 3U, NE_INIT_MODE_NONE, "V", }, {
    "Circuit_Breaker_Step_off.breakerA.v", 0U, 0,
    "ee_sm_control/Circuit Breaker Step off", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", }, { "Circuit_Breaker_Step_off.breakerB.v", 0U, 0,
    "ee_sm_control/Circuit Breaker Step off", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", }, { "Circuit_Breaker_Step_off.breakerC.v", 0U, 0,
    "ee_sm_control/Circuit Breaker Step off", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", }, { "Circuit_Breaker_Step_off.breakerA.i", 0U, 0,
    "ee_sm_control/Circuit Breaker Step off", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, { "Circuit_Breaker_Step_off.breakerB.i", 0U, 0,
    "ee_sm_control/Circuit Breaker Step off", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, { "Circuit_Breaker_Step_off.breakerC.i", 0U, 0,
    "ee_sm_control/Circuit Breaker Step off", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, { "Circuit_Breaker_Step_on.breakerA.v", 0U, 0,
    "ee_sm_control/Circuit Breaker Step on", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", }, { "Circuit_Breaker_Step_on.breakerB.v", 0U, 0,
    "ee_sm_control/Circuit Breaker Step on", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", }, { "Circuit_Breaker_Step_on.breakerC.v", 0U, 0,
    "ee_sm_control/Circuit Breaker Step on", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "v", }, { "Circuit_Breaker_Step_on.breakerA.i", 0U, 0,
    "ee_sm_control/Circuit Breaker Step on", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, { "Circuit_Breaker_Step_on.breakerB.i", 0U, 0,
    "ee_sm_control/Circuit Breaker Step on", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, { "Circuit_Breaker_Step_on.breakerC.i", 0U, 0,
    "ee_sm_control/Circuit Breaker Step on", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Synchronous_Machine_Round_Rotor_standard.angular_torque", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "angular_torque", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_id", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_id", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_i1q", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_i1q", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_iq", 0U, 0,
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "pu_iq", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[179] = { {
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.Efd",
    "ee_sm_control/AVR and Exciter/Synchronous Machine Field Circuit (pu)", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Efd", }, {
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.Efd_pu",
    "ee_sm_control/AVR and Exciter/Synchronous Machine Field Circuit (pu)", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Efd_pu", }, {
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.Ifd",
    "ee_sm_control/AVR and Exciter/Synchronous Machine Field Circuit (pu)", 1U,
    1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ifd", }, {
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu",
    "ee_sm_control/AVR and Exciter/Synchronous Machine Field Circuit (pu)", 1U,
    1U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ifd_pu", }, {
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.fd_n.v",
    "ee_sm_control/AVR and Exciter/Synchronous Machine Field Circuit (pu)", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.fd_p.v",
    "ee_sm_control/AVR and Exciter/Synchronous Machine Field Circuit (pu)", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.i",
    "ee_sm_control/AVR and Exciter/Synchronous Machine Field Circuit (pu)", 1U,
    1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Field current", }, {
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.i0",
    "ee_sm_control/AVR and Exciter/Synchronous Machine Field Circuit (pu)", 1U,
    1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Electrical reference current", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_input",
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1U, 10U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_output",
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "AVR_and_Exciter.Terminal_Voltage_Measurement.pu_input",
    "ee_sm_control/AVR and Exciter/Terminal Voltage Measurement", 1U, 10U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "AVR_and_Exciter.Terminal_Voltage_Measurement.pu_output",
    "ee_sm_control/AVR and Exciter/Terminal Voltage Measurement", 1U, 1U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, { "AVR_and_Exciter.fd0.v",
    "ee_sm_control/AVR and Exciter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "AVR_and_Exciter.fd1.v",
    "ee_sm_control/AVR and Exciter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, { "AVR_and_Exciter.pu",
    "ee_sm_control/AVR and Exciter", 1U, 10U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Circuit_Breaker_Step_off.N1.V", "ee_sm_control/Circuit Breaker Step off",
    1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Circuit_Breaker_Step_off.N2.V", "ee_sm_control/Circuit Breaker Step off",
    1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Circuit_Breaker_Step_off.breakerA.i",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Circuit_Breaker_Step_off.breakerA.p1.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.breakerA.p2.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.breakerA.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Circuit_Breaker_Step_off.breakerA.vT",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Circuit_Breaker_Step_off.breakerA.internal_mode_var_m__",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_off.breakerB.i",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Circuit_Breaker_Step_off.breakerB.p1.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.breakerB.p2.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.breakerB.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Circuit_Breaker_Step_off.breakerB.vT",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Circuit_Breaker_Step_off.breakerB.internal_mode_var_m__",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_off.breakerC.i",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Circuit_Breaker_Step_off.breakerC.p1.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.breakerC.p2.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.breakerC.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Circuit_Breaker_Step_off.breakerC.vT",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Circuit_Breaker_Step_off.breakerC.internal_mode_var_m__",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_off.phase_splitter1.I",
    "ee_sm_control/Circuit Breaker Step off", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Circuit_Breaker_Step_off.phase_splitter1.N.V",
    "ee_sm_control/Circuit Breaker Step off", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Circuit_Breaker_Step_off.phase_splitter1.a.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.phase_splitter1.b.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.phase_splitter1.c.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.phase_splitter1.i_a",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Circuit_Breaker_Step_off.phase_splitter1.i_b",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Circuit_Breaker_Step_off.phase_splitter1.i_c",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Circuit_Breaker_Step_off.phase_splitter2.I",
    "ee_sm_control/Circuit Breaker Step off", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Circuit_Breaker_Step_off.phase_splitter2.N.V",
    "ee_sm_control/Circuit Breaker Step off", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Circuit_Breaker_Step_off.phase_splitter2.a.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.phase_splitter2.b.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.phase_splitter2.c.v",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_off.phase_splitter2.i_a",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Circuit_Breaker_Step_off.phase_splitter2.i_b",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Circuit_Breaker_Step_off.phase_splitter2.i_c",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, { "Circuit_Breaker_Step_off.vT",
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, { "Circuit_Breaker_Step_on.N1.V",
    "ee_sm_control/Circuit Breaker Step on", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Circuit_Breaker_Step_on.N2.V",
    "ee_sm_control/Circuit Breaker Step on", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Circuit_Breaker_Step_on.breakerA.i",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Circuit_Breaker_Step_on.breakerA.p1.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.breakerA.p2.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.breakerA.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Circuit_Breaker_Step_on.breakerA.vT",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Circuit_Breaker_Step_on.breakerA.internal_mode_var_m__",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_on.breakerB.i",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Circuit_Breaker_Step_on.breakerB.p1.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.breakerB.p2.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.breakerB.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Circuit_Breaker_Step_on.breakerB.vT",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Circuit_Breaker_Step_on.breakerB.internal_mode_var_m__",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_on.breakerC.i",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Circuit_Breaker_Step_on.breakerC.p1.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.breakerC.p2.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.breakerC.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Circuit_Breaker_Step_on.breakerC.vT",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, {
    "Circuit_Breaker_Step_on.breakerC.internal_mode_var_m__",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_on.phase_splitter1.I",
    "ee_sm_control/Circuit Breaker Step on", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Circuit_Breaker_Step_on.phase_splitter1.N.V",
    "ee_sm_control/Circuit Breaker Step on", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Circuit_Breaker_Step_on.phase_splitter1.a.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.phase_splitter1.b.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.phase_splitter1.c.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.phase_splitter1.i_a",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Circuit_Breaker_Step_on.phase_splitter1.i_b",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Circuit_Breaker_Step_on.phase_splitter1.i_c",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Circuit_Breaker_Step_on.phase_splitter2.I",
    "ee_sm_control/Circuit Breaker Step on", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Circuit_Breaker_Step_on.phase_splitter2.N.V",
    "ee_sm_control/Circuit Breaker Step on", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Circuit_Breaker_Step_on.phase_splitter2.a.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.phase_splitter2.b.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.phase_splitter2.c.v",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Circuit_Breaker_Step_on.phase_splitter2.i_a",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Circuit_Breaker_Step_on.phase_splitter2.i_b",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Circuit_Breaker_Step_on.phase_splitter2.i_c",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, { "Circuit_Breaker_Step_on.vT",
    "ee_sm_control/Circuit Breaker Step on", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "vT", }, { "Electrical_Reference.V.v",
    "ee_sm_control/Electrical Reference", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference1.V.v", "ee_sm_control/Electrical Reference1", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference2.V.v", "ee_sm_control/Electrical Reference2", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference3.V.v", "ee_sm_control/Electrical Reference3", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Governor_and_Prime_Mover.C.w", "ee_sm_control/Governor and Prime Mover ",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Governor_and_Prime_Mover.Ideal_Torque_Source.C.w",
    "ee_sm_control/Governor and Prime Mover /Ideal Torque Source", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Governor_and_Prime_Mover.Ideal_Torque_Source.R.w",
    "ee_sm_control/Governor and Prime Mover /Ideal Torque Source", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Governor_and_Prime_Mover.Ideal_Torque_Source.S",
    "ee_sm_control/Governor and Prime Mover /Ideal Torque Source", 1U, 1U, "N*m",
    1.0, "N*m", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Governor_and_Prime_Mover.Ideal_Torque_Source.t",
    "ee_sm_control/Governor and Prime Mover /Ideal Torque Source", 1U, 1U, "N*m",
    1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Governor_and_Prime_Mover.Ideal_Torque_Source.w",
    "ee_sm_control/Governor and Prime Mover /Ideal Torque Source", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Governor_and_Prime_Mover.Mechanical_Rotational_Reference.W.w",
    "ee_sm_control/Governor and Prime Mover /Mechanical Rotational Reference",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Governor_and_Prime_Mover.R.w", "ee_sm_control/Governor and Prime Mover ",
    1U, 1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", },
    { "Governor_and_Prime_Mover.Rotor_Velocity_Measurement.pu_input",
    "ee_sm_control/Governor and Prime Mover /Rotor Velocity Measurement", 1U,
    10U, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Governor_and_Prime_Mover.Rotor_Velocity_Measurement.pu_output",
    "ee_sm_control/Governor and Prime Mover /Rotor Velocity Measurement", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, { "Governor_and_Prime_Mover.pu",
    "ee_sm_control/Governor and Prime Mover ", 1U, 10U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, { "Initial_Load.N.V",
    "ee_sm_control/Initial Load", 1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", },
    { "Initial_Load.n.v", "ee_sm_control/Initial Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Initial_Load.neutral_point.I", "ee_sm_control/Initial Load", 1U, 3U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Initial_Load.neutral_point.N.V", "ee_sm_control/Initial Load", 1U, 3U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Initial_Load.neutral_point.i_n", "ee_sm_control/Initial Load", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, {
    "Initial_Load.neutral_point.n.v", "ee_sm_control/Initial Load", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Initial_Load.wye_impedance.I", "ee_sm_control/Initial Load", 1U, 3U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Initial_Load.wye_impedance.IL",
    "ee_sm_control/Initial Load", 1U, 3U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Internal variable for current through inductors", }, {
    "Initial_Load.wye_impedance.N1.V", "ee_sm_control/Initial Load", 1U, 3U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Initial_Load.wye_impedance.N2.V", "ee_sm_control/Initial Load", 1U, 3U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Initial_Load.wye_impedance.V",
    "ee_sm_control/Initial Load", 1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", },
    { "Initial_Load.wye_impedance.power_dissipated",
    "ee_sm_control/Initial Load", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Load_Step_off.N.V", "ee_sm_control/Load Step off", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Load_Step_off.n.v",
    "ee_sm_control/Load Step off", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Load_Step_off.neutral_point.I", "ee_sm_control/Load Step off", 1U, 3U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Load_Step_off.neutral_point.N.V", "ee_sm_control/Load Step off", 1U, 3U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Load_Step_off.neutral_point.i_n", "ee_sm_control/Load Step off", 1U, 1U,
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, {
    "Load_Step_off.neutral_point.n.v", "ee_sm_control/Load Step off", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Load_Step_off.wye_impedance.I", "ee_sm_control/Load Step off", 1U, 3U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Load_Step_off.wye_impedance.N1.V", "ee_sm_control/Load Step off", 1U, 3U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Load_Step_off.wye_impedance.N2.V", "ee_sm_control/Load Step off", 1U, 3U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Load_Step_off.wye_impedance.V",
    "ee_sm_control/Load Step off", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Load_Step_off.wye_impedance.power_dissipated",
    "ee_sm_control/Load Step off", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Load_Step_on.N.V", "ee_sm_control/Load Step on", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Load_Step_on.n.v",
    "ee_sm_control/Load Step on", 1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage",
  }, { "Load_Step_on.neutral_point.I", "ee_sm_control/Load Step on", 1U, 3U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Load_Step_on.neutral_point.N.V", "ee_sm_control/Load Step on", 1U, 3U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Load_Step_on.neutral_point.i_n", "ee_sm_control/Load Step on", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, {
    "Load_Step_on.neutral_point.n.v", "ee_sm_control/Load Step on", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Load_Step_on.wye_impedance.I", "ee_sm_control/Load Step on", 1U, 3U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Load_Step_on.wye_impedance.N1.V", "ee_sm_control/Load Step on", 1U, 3U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Load_Step_on.wye_impedance.N2.V", "ee_sm_control/Load Step on", 1U, 3U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Load_Step_on.wye_impedance.V",
    "ee_sm_control/Load Step on", 1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", },
    { "Load_Step_on.wye_impedance.power_dissipated",
    "ee_sm_control/Load Step on", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Machine_Inertia.R.w", "ee_sm_control/Machine Inertia", 1U, 1U, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Machine_Inertia.t", "ee_sm_control/Machine Inertia", 1U, 1U, "N*m", 1.0,
    "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, { "Machine_Inertia.w",
    "ee_sm_control/Machine Inertia", 1U, 1U, "rad*Hz", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Synchronous_Machine_Round_Rotor_standard.C.w",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Synchronous_Machine_Round_Rotor_standard.I",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 3U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Synchronous_Machine_Round_Rotor_standard.Lad",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Lad", }, {
    "Synchronous_Machine_Round_Rotor_standard.Laq",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Laq", }, {
    "Synchronous_Machine_Round_Rotor_standard.N.V",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Synchronous_Machine_Round_Rotor_standard.R.w",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Synchronous_Machine_Round_Rotor_standard.V",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Synchronous_Machine_Round_Rotor_standard.angular_position_diff",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "rad",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_position_diff", }, {
    "Synchronous_Machine_Round_Rotor_standard.angular_torque",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "N*m",
    1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_torque", }, {
    "Synchronous_Machine_Round_Rotor_standard.angular_velocity",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_velocity", }, {
    "Synchronous_Machine_Round_Rotor_standard.efd",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "efd", }, {
    "Synchronous_Machine_Round_Rotor_standard.fd_n.v",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Synchronous_Machine_Round_Rotor_standard.fd_p.v",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Synchronous_Machine_Round_Rotor_standard.i_n",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, {
    "Synchronous_Machine_Round_Rotor_standard.ifd",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "ifd", }, {
    "Synchronous_Machine_Round_Rotor_standard.n.v",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_fd_Efd",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_fd_Efd", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_fd_Ifd",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_fd_Ifd", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_i0",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_i0", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_i1d",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_i1d", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_i1q",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_i1q", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_i2q",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_i2q", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_id",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_id", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_iq",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "pu_iq", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_output",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 10U, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psi0",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi0", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psi1d",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi1d", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psi1q",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi1q", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psi2q",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psi2q", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psid",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psid", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psifd",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psifd", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_psiq",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_psiq", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_torque",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_torque", }, {
    "Synchronous_Machine_Round_Rotor_standard.pu_velocity",
    "ee_sm_control/Synchronous Machine Round Rotor (standard)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu_velocity", }, {
    "Terminal_Voltage_Measurement.pu_input",
    "ee_sm_control/Terminal Voltage Measurement", 1U, 10U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Terminal_Voltage_Measurement.pu_output",
    "ee_sm_control/Terminal Voltage Measurement", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", }, {
    "Terminal_Voltage_Measurement1.pu_input",
    "ee_sm_control/Terminal Voltage Measurement1", 1U, 10U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "pu", }, {
    "Terminal_Voltage_Measurement1.pu_output",
    "ee_sm_control/Terminal Voltage Measurement1", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "o", } };

static NeModeData s_major_mode_data[7] = { {
    "Circuit_Breaker_Step_off.breakerA.internal_mode_var_m__", 0U,
    "ee_sm_control/Circuit Breaker Step off", 0, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_off.breakerB.internal_mode_var_m__", 0U,
    "ee_sm_control/Circuit Breaker Step off", 0, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_off.breakerC.internal_mode_var_m__", 0U,
    "ee_sm_control/Circuit Breaker Step off", 0, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_on.breakerA.internal_mode_var_m__", 0U,
    "ee_sm_control/Circuit Breaker Step on", 0, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_on.breakerB.internal_mode_var_m__", 0U,
    "ee_sm_control/Circuit Breaker Step on", 0, "internal_mode_var_m__", }, {
    "Circuit_Breaker_Step_on.breakerC.internal_mode_var_m__", 0U,
    "ee_sm_control/Circuit Breaker Step on", 0, "internal_mode_var_m__", }, {
    "ie0", 0U, "", 0, "", } };

static NeZCData s_zc_data[42] = { { "ee_sm_control/Circuit Breaker Step off", 1U,
    0U, "Circuit_Breaker_Step_off.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 1U,
    "Circuit_Breaker_Step_off.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 2U,
    "Circuit_Breaker_Step_off.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 3U,
    "Circuit_Breaker_Step_on.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 4U,
    "Circuit_Breaker_Step_on.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 5U,
    "Circuit_Breaker_Step_on.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 6U,
    "Circuit_Breaker_Step_off.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 7U,
    "Circuit_Breaker_Step_off.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 8U,
    "Circuit_Breaker_Step_off.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 9U,
    "Circuit_Breaker_Step_off.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 10U,
    "Circuit_Breaker_Step_off.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 11U,
    "Circuit_Breaker_Step_off.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 12U,
    "Circuit_Breaker_Step_on.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 13U,
    "Circuit_Breaker_Step_on.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 14U,
    "Circuit_Breaker_Step_on.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 15U,
    "Circuit_Breaker_Step_on.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 16U,
    "Circuit_Breaker_Step_on.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 17U,
    "Circuit_Breaker_Step_on.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 18U,
    "Circuit_Breaker_Step_off.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 19U,
    "Circuit_Breaker_Step_off.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 20U,
    "Circuit_Breaker_Step_off.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 21U,
    "Circuit_Breaker_Step_off.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 22U,
    "Circuit_Breaker_Step_off.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 23U,
    "Circuit_Breaker_Step_off.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 24U,
    "Circuit_Breaker_Step_on.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 25U,
    "Circuit_Breaker_Step_on.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 26U,
    "Circuit_Breaker_Step_on.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 27U,
    "Circuit_Breaker_Step_on.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 28U,
    "Circuit_Breaker_Step_on.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 29U,
    "Circuit_Breaker_Step_on.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 30U,
    "Circuit_Breaker_Step_off.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 31U,
    "Circuit_Breaker_Step_off.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 32U,
    "Circuit_Breaker_Step_off.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 33U,
    "Circuit_Breaker_Step_on.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 34U,
    "Circuit_Breaker_Step_on.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 35U,
    "Circuit_Breaker_Step_on.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 36U,
    "Circuit_Breaker_Step_off.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 37U,
    "Circuit_Breaker_Step_off.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 38U,
    "Circuit_Breaker_Step_off.breakerC", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 39U,
    "Circuit_Breaker_Step_on.breakerA", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 40U,
    "Circuit_Breaker_Step_on.breakerB", "", NE_ZC_TYPE_FALSE, }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 41U,
    "Circuit_Breaker_Step_on.breakerC", "", NE_ZC_TYPE_FALSE, } };

static NeRange s_range[42] = { { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
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
  { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[31] = { {
    "ee_sm_control/Circuit Breaker Step off", 2U, 0U,
    "Circuit_Breaker_Step_off.breakerA",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_sm_control/Circuit Breaker Step off", 2U, 2U,
    "Circuit_Breaker_Step_off.breakerB",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_sm_control/Circuit Breaker Step off", 2U, 4U,
    "Circuit_Breaker_Step_off.breakerC",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_sm_control/Circuit Breaker Step on", 2U, 6U,
    "Circuit_Breaker_Step_on.breakerA",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_sm_control/Circuit Breaker Step on", 2U, 8U,
    "Circuit_Breaker_Step_on.breakerB",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_sm_control/Circuit Breaker Step on", 2U, 10U,
    "Circuit_Breaker_Step_on.breakerC",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+circuit_breaker/+ps/abc.sscp",
    FALSE,
    "Mode value is out of range for 'internal_mode_var_m__'.  Mode must be between 1 and 5.",
    "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange", }, {
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1U, 12U,
    "AVR_and_Exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1U, 13U,
    "AVR_and_Exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1U, 14U,
    "AVR_and_Exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1U, 15U,
    "AVR_and_Exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_sm_control/AVR and Exciter/Terminal Current Measurement", 1U, 16U,
    "AVR_and_Exciter.Terminal_Current_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "ee_sm_control/AVR and Exciter/Terminal Voltage Measurement", 1U, 17U,
    "AVR_and_Exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_sm_control/AVR and Exciter/Terminal Voltage Measurement", 1U, 18U,
    "AVR_and_Exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_sm_control/AVR and Exciter/Terminal Voltage Measurement", 1U, 19U,
    "AVR_and_Exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_sm_control/AVR and Exciter/Terminal Voltage Measurement", 1U, 20U,
    "AVR_and_Exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_sm_control/AVR and Exciter/Terminal Voltage Measurement", 1U, 21U,
    "AVR_and_Exciter.Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "ee_sm_control/Initial Load", 1U, 22U, "Initial_Load.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_sm_control/Initial Load", 1U, 23U, "Initial_Load.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_sm_control/Initial Load", 1U, 24U, "Initial_Load.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_sm_control/Initial Load", 1U, 25U, "Initial_Load.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_sm_control/Terminal Voltage Measurement", 1U, 26U,
    "Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_sm_control/Terminal Voltage Measurement", 1U, 27U,
    "Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_sm_control/Terminal Voltage Measurement", 1U, 28U,
    "Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_sm_control/Terminal Voltage Measurement", 1U, 29U,
    "Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_sm_control/Terminal Voltage Measurement", 1U, 30U,
    "Terminal_Voltage_Measurement",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+sync/sm_measurement.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:core:asserts:RequireArgumentNonnegative", }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 31U,
    "Circuit_Breaker_Step_off.breakerA",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 32U,
    "Circuit_Breaker_Step_off.breakerB",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_sm_control/Circuit Breaker Step off", 1U, 33U,
    "Circuit_Breaker_Step_off.breakerC",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 34U,
    "Circuit_Breaker_Step_on.breakerA",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 35U,
    "Circuit_Breaker_Step_on.breakerB",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_sm_control/Circuit Breaker Step on", 1U, 36U,
    "Circuit_Breaker_Step_on.breakerC",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+switches/+fundamental/+circuit_breaker/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", } };

static NeRange s_assert_range[37] = { {
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
static NeRange s_equation_range[47] = { {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
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
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 42;
  out->mM_P.mNumRow = 42;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    43);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    18);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 18;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 18);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 18;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    18);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 42;
  out->mDXM_P.mNumRow = 18;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    43);
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
  out->mDUM_P.mNumCol = 4;
  out->mDUM_P.mNumRow = 18;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
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
  out->mDTM_P.mNumRow = 18;
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
  out->mA_P.mNumCol = 42;
  out->mA_P.mNumRow = 42;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    43);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    332);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 332;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 332);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 4;
  out->mB_P.mNumRow = 42;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 12;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 12);
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
  out->mC_P.mNumRow = 42;
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
  out->mF.mN = 42;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 42);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 42;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    42);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 42;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    42);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 42;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 42);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 42;
  out->mDXF_P.mNumRow = 42;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    43);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    80);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 80;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 80);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 4;
  out->mDUF_P.mNumRow = 42;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 0;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
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
  out->mDTF_P.mNumRow = 42;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 15;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 15);
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
  out->mDDF_P.mNumRow = 42;
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
  out->mTDUF_P.mNumCol = 4;
  out->mTDUF_P.mNumRow = 42;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 42;
  out->mTDXF_P.mNumRow = 42;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    43);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    382);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 31;
  out->mDNF_P.mNumRow = 42;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 9;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 42;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 42);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 42;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 42);
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
  out->mDXICR_P.mNumCol = 42;
  out->mDXICR_P.mNumRow = 0;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 43);
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
  out->mTDUICR_P.mNumCol = 4;
  out->mTDUICR_P.mNumRow = 0;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
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
  out->mMDUY_P.mNumCol = 4;
  out->mMDUY_P.mNumRow = 6;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
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
  out->mMDXY_P.mNumCol = 42;
  out->mMDXY_P.mNumRow = 6;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    43);
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
  out->mTDUY_P.mNumCol = 4;
  out->mTDUY_P.mNumRow = 6;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
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
  out->mTDXY_P.mNumCol = 42;
  out->mTDXY_P.mNumRow = 6;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    43);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    51);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 6;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 42;
  out->mDXY_P.mNumRow = 6;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    43);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    51);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 51;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 51);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 4;
  out->mDUY_P.mNumRow = 6;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
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
  out->mDTY_P.mNumRow = 6;
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
  out->mMODE.mN = 42;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    42);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 42;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 42);
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
  out->mLOG.mN = 325;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 325);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 31;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    31);
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
  out->mDXDELT_P.mNumCol = 42;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 43);
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
  out->mDUDELT_P.mNumCol = 4;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
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
  out->mOBS_EXP.mN = 325;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 325;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 325;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    325);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 325;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 325);
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
  out->mQX.mN = 146;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 146);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 1;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 1);
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
  out->mQ1.mN = 14;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 14);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 42;
  out->mQX_P.mNumRow = 42;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    43);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    146);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 4;
  out->mQU_P.mNumRow = 42;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
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
  out->mQT_P.mNumRow = 42;
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
  out->mQ1_P.mNumRow = 42;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    14);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 42;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    42);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 42;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    42);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 42;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    42);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 42;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    42);
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

NeDynamicSystem *ee_sm_control_fab709d2_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[4];
  static NeDsIoInfo output_info[6];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 42;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 12;
  ds->mNumEquations = 42;
  ds->mNumICResiduals = 0;
  ds->mNumModes = 42;
  ds->mNumMajorModes = 7;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 42;
  ds->mNumObservables = 179;
  ds->mNumObservableElements = 325;
  ds->mNumZcs = 42;
  ds->mNumAsserts = 31;
  ds->mNumAssertRanges = 37;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 42;
  ds->mNumEquationRanges = 47;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
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
  ds->mNumIo[NE_INPUT_IO_TYPE] = 4;
  input_info[0].mIdentifier =
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.Efd_pu";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName =
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.Efd_pu";
  input_info[0].mUnit = "1";
  input_info[1].mIdentifier = "Circuit_Breaker_Step_off.vT";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName = "Circuit_Breaker_Step_off.vT";
  input_info[1].mUnit = "V";
  input_info[2].mIdentifier = "Circuit_Breaker_Step_on.vT";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName = "Circuit_Breaker_Step_on.vT";
  input_info[2].mUnit = "V";
  input_info[3].mIdentifier = "Governor_and_Prime_Mover.Ideal_Torque_Source.S";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName = "Governor_and_Prime_Mover.Ideal_Torque_Source.S";
  input_info[3].mUnit = "N*m";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 6;
  output_info[0].mIdentifier =
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName =
    "AVR_and_Exciter.Synchronous_Machine_Field_Circuit_pu.Ifd_pu";
  output_info[0].mUnit = "1";
  output_info[1].mIdentifier =
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_output";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName =
    "AVR_and_Exciter.Terminal_Current_Measurement.pu_output";
  output_info[1].mUnit = "1";
  output_info[2].mIdentifier =
    "AVR_and_Exciter.Terminal_Voltage_Measurement.pu_output";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName =
    "AVR_and_Exciter.Terminal_Voltage_Measurement.pu_output";
  output_info[2].mUnit = "1";
  output_info[3].mIdentifier =
    "Governor_and_Prime_Mover.Rotor_Velocity_Measurement.pu_output";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName =
    "Governor_and_Prime_Mover.Rotor_Velocity_Measurement.pu_output";
  output_info[3].mUnit = "1";
  output_info[4].mIdentifier = "Terminal_Voltage_Measurement.pu_output";
  output_info[4].mM = 1;
  output_info[4].mN = 1;
  output_info[4].mName = "Terminal_Voltage_Measurement.pu_output";
  output_info[4].mUnit = "1";
  output_info[5].mIdentifier = "Terminal_Voltage_Measurement1.pu_output";
  output_info[5].mM = 1;
  output_info[5].mN = 1;
  output_info[5].mName = "Terminal_Voltage_Measurement1.pu_output";
  output_info[5].mUnit = "1";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mMethods[NE_DS_METHOD_M_P] = ee_sm_control_fab709d2_1_ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ee_sm_control_fab709d2_1_ds_dxm_p;
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
  ds->mMethods[NE_DS_METHOD_A_P] = ee_sm_control_fab709d2_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = ee_sm_control_fab709d2_1_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = ee_sm_control_fab709d2_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = ee_sm_control_fab709d2_1_ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_SLF] = ee_sm_control_fab709d2_1_ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ee_sm_control_fab709d2_1_ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = ee_sm_control_fab709d2_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = ee_sm_control_fab709d2_1_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ee_sm_control_fab709d2_1_ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = ee_sm_control_fab709d2_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = ee_sm_control_fab709d2_1_ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ee_sm_control_fab709d2_1_ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = ee_sm_control_fab709d2_1_ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_IC] = ee_sm_control_fab709d2_1_ds_ic;
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
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ee_sm_control_fab709d2_1_ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ee_sm_control_fab709d2_1_ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = ee_sm_control_fab709d2_1_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ee_sm_control_fab709d2_1_ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = ee_sm_control_fab709d2_1_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ee_sm_control_fab709d2_1_ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = ee_sm_control_fab709d2_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = ee_sm_control_fab709d2_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ee_sm_control_fab709d2_1_ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ee_sm_control_fab709d2_1_ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = ee_sm_control_fab709d2_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = ee_sm_control_fab709d2_1_ds_assert;
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
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ee_sm_control_fab709d2_1_ds_dxdelt_p;
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
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = ee_sm_control_fab709d2_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = ee_sm_control_fab709d2_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = ee_sm_control_fab709d2_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = ee_sm_control_fab709d2_1_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ee_sm_control_fab709d2_1_ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ee_sm_control_fab709d2_1_ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ee_sm_control_fab709d2_1_ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ee_sm_control_fab709d2_1_ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ee_sm_control_fab709d2_1_ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ee_sm_control_fab709d2_1_ds_slv;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
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

static int32_T ds_duf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
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
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 15;
  out.mIr[0] = 4;
  out.mIr[1] = 5;
  out.mIr[2] = 24;
  out.mIr[3] = 25;
  out.mIr[4] = 26;
  out.mIr[5] = 32;
  out.mIr[6] = 33;
  out.mIr[7] = 34;
  out.mIr[8] = 35;
  out.mIr[9] = 36;
  out.mIr[10] = 37;
  out.mIr[11] = 38;
  out.mIr[12] = 39;
  out.mIr[13] = 40;
  out.mIr[14] = 41;
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
  out.mX[0] = -0.14019494934243462;
  out.mX[1] = -0.99999999999999989;
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  out.mX[6] = -0.0;
  out.mX[7] = -0.0;
  out.mX[8] = -0.0;
  out.mX[9] = -0.0;
  out.mX[10] = -0.0;
  out.mX[11] = -3.6322868411139665E-5;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 11;
  out.mJc[2] = 11;
  out.mJc[3] = 11;
  out.mJc[4] = 12;
  out.mIr[0] = 7;
  out.mIr[1] = 32;
  out.mIr[2] = 33;
  out.mIr[3] = 34;
  out.mIr[4] = 35;
  out.mIr[5] = 36;
  out.mIr[6] = 37;
  out.mIr[7] = 38;
  out.mIr[8] = 39;
  out.mIr[9] = 40;
  out.mIr[10] = 41;
  out.mIr[11] = 3;
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
  out.mNumRow = 42ULL;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 11;
  out.mJc[2] = 11;
  out.mJc[3] = 11;
  out.mJc[4] = 12;
  out.mIr[0] = 7;
  out.mIr[1] = 32;
  out.mIr[2] = 33;
  out.mIr[3] = 34;
  out.mIr[4] = 35;
  out.mIr[5] = 36;
  out.mIr[6] = 37;
  out.mIr[7] = 38;
  out.mIr[8] = 39;
  out.mIr[9] = 40;
  out.mIr[10] = 41;
  out.mIr[11] = 3;
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
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
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
  out.mX[0] = -1.0;
  out.mX[1] = -0.00026525823848649231;
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.00026525823848649231;
  out.mX[6] = -0.0;
  out.mX[7] = -0.0;
  out.mX[8] = -0.0;
  out.mX[9] = -0.00026525823848649231;
  out.mX[10] = -1.0;
  out.mX[11] = -1.0;
  out.mX[12] = -0.35377702816434425;
  out.mX[13] = -0.13262911924324614;
  out.mX[14] = -0.095255771475687256;
  out.mX[15] = -0.12383712729505199;
  out.mX[16] = -0.88419412828830746;
  out.mX[17] = -0.88419412828830746;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 18ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
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
  out.mNumRow = 18ULL;
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
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
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
  out.mX[0] = -1.0;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 1;
  out.mIr[0] = 38;
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
  out.mNumRow = 42ULL;
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
  out.mNumRow = 42ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 14;
  out.mIr[0] = 1;
  out.mIr[1] = 2;
  out.mIr[2] = 3;
  out.mIr[3] = 12;
  out.mIr[4] = 23;
  out.mIr[5] = 24;
  out.mIr[6] = 25;
  out.mIr[7] = 29;
  out.mIr[8] = 30;
  out.mIr[9] = 31;
  out.mIr[10] = 35;
  out.mIr[11] = 36;
  out.mIr[12] = 37;
  out.mIr[13] = 38;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
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
  out.mNumCol = 4ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
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
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
