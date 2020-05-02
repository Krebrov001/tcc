/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */
/* ee_pwm_three_level_8ad899e3_1_ds.c - body for module ee_pwm_three_level_8ad899e3_1_ds */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_zc.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_mdxy_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_dxy_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_qx_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_obs_all.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_obs_act.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_obs_exp.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_eq_tol.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_var_tol.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_mode.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_dxm_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_m_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_log.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_lv.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_dnf_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_dnf_v_x.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_tdxy_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_slf.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_tdxf_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_a_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_slv.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_dxf_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_vmf.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_ic.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_slf0.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_dxf.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_f.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_obs_il.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_dxicr_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_dxdelt_p.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_a.h"
#include "ee_pwm_three_level_8ad899e3_1_ds.h"
#include "ssc_ml_fun.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"

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
static int32_T ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
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
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_assert(const NeDynamicSystem *ds, const NeDynamicSystemInput
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
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
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
static NeEquationData s_equation_data[40] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/C1", 1U, 0U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/C2", 1U, 1U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/RLC",
    2U, 2U, TRUE, 1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/RLC", 2U, 2U, TRUE, 1.0, "1", }, { "", 2U, 8,
    NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/RLC", 2U, 2U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/RLC", 2U, 4U, TRUE,
    1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/RLC",
    2U, 4U, TRUE, 1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/RLC", 2U, 4U, TRUE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/C1", 1U, 6U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/RLC", 1U, 7U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 8U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    5U, 13U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 18U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    5U, 23U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 28U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    5U, 33U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 38U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    3U, 43U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 46U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    3U, 51U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 54U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    3U, 59U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 62U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    3U, 67U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 70U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    3U, 75U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 78U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    3U, 83U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 86U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    3U, 91U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 94U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "ee_pwm_three_level/Three-Level Converter",
    3U, 99U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 102U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 3U, 107U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 110U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 3U, 115U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 118U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 3U, 123U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 5U, 126U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "ee_pwm_three_level/Three-Level Converter", 3U, 131U, TRUE, 1.0, "1", } };

static NeVariableData s_variable_data[40] = { { "C2.vc", 0U, 0,
    "ee_pwm_three_level/C2", 1.0, "1", 0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY,
    "Capacitor voltage", }, { "C1.vc", 0U, 0, "ee_pwm_three_level/C1", 1.0, "1",
    0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "RLC.wye_impedance.IL", 0U, 0, "ee_pwm_three_level/RLC", 1.0, "1", 0.0, TRUE,
    1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for current through inductors", }, {
    "RLC.wye_impedance.IL", 1U, 0, "ee_pwm_three_level/RLC", 1.0, "1", 0.0, TRUE,
    1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for current through inductors", }, {
    "RLC.wye_impedance.IL", 2U, 0, "ee_pwm_three_level/RLC", 1.0, "1", 0.0, TRUE,
    1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for current through inductors", }, {
    "RLC.wye_impedance.VC", 0U, 0, "ee_pwm_three_level/RLC", 1.0, "1", 0.0, TRUE,
    1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for voltage across capacitors", }, {
    "RLC.wye_impedance.VC", 1U, 0, "ee_pwm_three_level/RLC", 1.0, "1", 0.0, TRUE,
    1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for voltage across capacitors", }, {
    "RLC.wye_impedance.VC", 2U, 0, "ee_pwm_three_level/RLC", 1.0, "1", 0.0, TRUE,
    1U, 3U, NE_INIT_MODE_MANDATORY,
    "Internal variable for voltage across capacitors", }, { "C2.i", 0U, 0,
    "ee_pwm_three_level/C2", 1.0, "1", 0.0, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Current", }, { "Three_Level_Converter.converter_Xabc.Q1.diode.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q1.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q12.diode.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q4.diode.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q5.diode.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q8.diode.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q9.diode.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, { "Open_Circuit.V.v", 0U, 1,
    "ee_pwm_three_level/Open Circuit", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.E.v", 0U, 1,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.E.v", 0U, 1,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.E.v", 0U, 1,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D1.n.v", 0U, 1,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D2.p.v", 0U, 1,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D3.n.v", 0U, 1,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D4.p.v", 0U, 1,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D5.n.v", 0U, 1,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D6.p.v", 0U, 1,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.diode.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q7.diode.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q11.diode.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch.i", 0U, 0,
    "ee_pwm_three_level/Three-Level Converter", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[460] = { { "C1.i",
    "ee_pwm_three_level/C1", 1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Current", }, { "C1.n.v", "ee_pwm_three_level/C1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "C1.p.v",
    "ee_pwm_three_level/C1", 1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "C1.v", "ee_pwm_three_level/C1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "C1.vc",
    "ee_pwm_three_level/C1", 1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Capacitor voltage", }, { "C2.i", "ee_pwm_three_level/C2", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "C2.n.v",
    "ee_pwm_three_level/C2", 1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "C2.p.v", "ee_pwm_three_level/C2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "C2.v",
    "ee_pwm_three_level/C2", 1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "C2.vc", "ee_pwm_three_level/C2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "DC_Voltage_Source.i", "ee_pwm_three_level/DC Voltage Source", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "DC_Voltage_Source.n.v",
    "ee_pwm_three_level/DC Voltage Source", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "DC_Voltage_Source.p.v",
    "ee_pwm_three_level/DC Voltage Source", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "DC_Voltage_Source.v",
    "ee_pwm_three_level/DC Voltage Source", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference.V.v", "ee_pwm_three_level/Electrical Reference", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Open_Circuit.V.v",
    "ee_pwm_three_level/Open Circuit", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Open_Circuit.v",
    "ee_pwm_three_level/Open Circuit", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "RLC.N.V",
    "ee_pwm_three_level/RLC", 1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", },
    { "RLC.n.v", "ee_pwm_three_level/RLC", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "RLC.neutral_point.I",
    "ee_pwm_three_level/RLC", 1U, 3U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", },
    { "RLC.neutral_point.N.V", "ee_pwm_three_level/RLC", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "RLC.neutral_point.i_n",
    "ee_pwm_three_level/RLC", 1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", },
  { "RLC.neutral_point.n.v", "ee_pwm_three_level/RLC", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "RLC.wye_impedance.I",
    "ee_pwm_three_level/RLC", 1U, 3U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", },
    { "RLC.wye_impedance.IL", "ee_pwm_three_level/RLC", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Internal variable for current through inductors", }, {
    "RLC.wye_impedance.N1.V", "ee_pwm_three_level/RLC", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "RLC.wye_impedance.N2.V",
    "ee_pwm_three_level/RLC", 1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", },
    { "RLC.wye_impedance.V", "ee_pwm_three_level/RLC", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "RLC.wye_impedance.VC",
    "ee_pwm_three_level/RLC", 1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_MANDATORY, FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Internal variable for voltage across capacitors", }, {
    "RLC.wye_impedance.power_dissipated", "ee_pwm_three_level/RLC", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Sensing_current.Conn1.V", "ee_pwm_three_level/Sensing current", 1U, 3U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "V", }, { "Sensing_current.Conn2.V",
    "ee_pwm_three_level/Sensing current", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "V", }, {
    "Sensing_current.Current_Sensor.I",
    "ee_pwm_three_level/Sensing current/Current Sensor", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Sensing_current.Current_Sensor.I_output",
    "ee_pwm_three_level/Sensing current/Current Sensor", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Sensing_current.Current_Sensor.N1.V",
    "ee_pwm_three_level/Sensing current/Current Sensor", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Sensing_current.Current_Sensor.N2.V",
    "ee_pwm_three_level/Sensing current/Current Sensor", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Sensing_voltage_Vc1.Vc1.V",
    "ee_pwm_three_level/Sensing voltage Vc1/Vc1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Sensing_voltage_Vc1.Vc1.i1",
    "ee_pwm_three_level/Sensing voltage Vc1/Vc1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Sensing_voltage_Vc1.Vc1.n.v", "ee_pwm_three_level/Sensing voltage Vc1/Vc1",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Sensing_voltage_Vc1.Vc1.p.v", "ee_pwm_three_level/Sensing voltage Vc1/Vc1",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Sensing_voltage_Vc1.Vc1.v1", "ee_pwm_three_level/Sensing voltage Vc1/Vc1",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Sensing_voltage_Vc1.x0.v", "ee_pwm_three_level/Sensing voltage Vc1", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Sensing_voltage_Vc1.x1.v", "ee_pwm_three_level/Sensing voltage Vc1", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Sensing_voltage_Vc2.Conn1.v", "ee_pwm_three_level/Sensing voltage Vc2", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Sensing_voltage_Vc2.Conn3.v", "ee_pwm_three_level/Sensing voltage Vc2", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Sensing_voltage_Vc2.Vc2.V", "ee_pwm_three_level/Sensing voltage Vc2/Vc2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Sensing_voltage_Vc2.Vc2.i1", "ee_pwm_three_level/Sensing voltage Vc2/Vc2",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Sensing_voltage_Vc2.Vc2.n.v", "ee_pwm_three_level/Sensing voltage Vc2/Vc2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Sensing_voltage_Vc2.Vc2.p.v", "ee_pwm_three_level/Sensing voltage Vc2/Vc2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Sensing_voltage_Vc2.Vc2.v1", "ee_pwm_three_level/Sensing voltage Vc2/Vc2",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Controller.Conn1.V",
    "ee_pwm_three_level/Three-Level Controller", 1U, 24U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "V", }, {
    "Three_Level_Controller.Gate.G.V",
    "ee_pwm_three_level/Three-Level Controller/Gate", 1U, 24U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "V", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga1",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ga(1)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga2",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ga(2)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga3",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ga(3)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga4",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Ga(4)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb1",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gb(1)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb2",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gb(2)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb3",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gb(3)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb4",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gb(4)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc1",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gc(1)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc2",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gc(2)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc3",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gc(3)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc4",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Gc(4)", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.I",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 24U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.p.V",
    "ee_pwm_three_level/Three-Level Controller/Gate/Twelve-Pulse Gate Multiplexer",
    1U, 24U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.G.V", "ee_pwm_three_level/Three-Level Converter", 1U,
    24U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Three_Level_Converter.N.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.D1.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.D1.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.D1.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.D1.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D1.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D1.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.D1.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D1.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.D2.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.D2.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.D2.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.D2.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D2.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D2.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.D2.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D2.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.D3.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.D3.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.D3.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.D3.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D3.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D3.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.D3.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D3.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.D4.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.D4.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.D4.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.D4.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D4.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D4.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.D4.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D4.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.D5.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.D5.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.D5.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.D5.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D5.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D5.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.D5.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D5.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.D6.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.D6.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.D6.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.D6.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D6.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D6.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.D6.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.D6.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.G.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 24U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q1.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q1.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q1.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q1.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q1.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q1.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q1.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q1.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q1.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q1.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q1.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q1.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q10.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q10.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q10.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q10.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q10.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q10.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q10.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q11.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q11.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q11.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q11.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q11.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q11.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q11.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q12.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q12.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q12.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q12.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q12.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q12.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q12.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q2.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q2.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q2.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q2.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q2.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q2.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q2.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q3.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q3.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q3.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q3.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q3.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q3.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q3.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q4.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q4.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q4.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q4.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q4.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q4.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q4.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q5.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q5.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q5.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q5.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q5.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q5.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q5.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q6.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q6.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q6.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q6.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q6.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q6.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q6.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q7.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q7.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q7.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q7.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q7.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q7.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q7.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q8.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q8.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q8.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q8.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q8.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q8.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q8.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q9.C.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.E.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.G.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.diode.Tsim",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "Three_Level_Converter.converter_Xabc.Q9.diode.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q9.diode.i_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Three_Level_Converter.converter_Xabc.Q9.diode.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.diode.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.diode.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Three_Level_Converter.converter_Xabc.Q9.diode.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.diode.v_capacitor",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.gate_voltage_sensor.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.Q9.gate_voltage_sensor.i1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Three_Level_Converter.converter_Xabc.Q9.gate_voltage_sensor.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.gate_voltage_sensor.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.gate_voltage_sensor.v1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch.G",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch.i",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch.isOn",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch.power_dissipated",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_Level_Converter.converter_Xabc.a.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.b.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.c.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.G.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 24U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Ga1.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Ga2.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Ga3.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Ga4.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Gb1.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Gb2.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Gb3.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Gb4.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Gc1.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Gc2.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Gc3.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Gc4.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.I",
    "ee_pwm_three_level/Three-Level Converter", 1U, 24U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Ka1.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Ka2.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Ka3.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Ka4.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Kb1.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Kb2.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Kb3.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Kb4.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Kc1.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Kc2.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Kc3.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.Kc4.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Ga1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Ga1", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Ga2",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Ga2", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Ga3",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Ga3", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Ga4",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Ga4", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Gb1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Gb1", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Gb2",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Gb2", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Gb3",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Gb3", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Gb4",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Gb4", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Gc1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Gc1", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Gc2",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Gc2", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Gc3",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Gc3", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Gc4",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Gc4", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Ka1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Ka1", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Ka2",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Ka2", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Ka3",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Ka3", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Ka4",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Ka4", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Kb1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Kb1", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Kb2",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Kb2", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Kb3",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Kb3", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Kb4",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Kb4", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Kc1",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Kc1", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Kc2",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Kc2", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Kc3",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Kc3", }, {
    "Three_Level_Converter.converter_Xabc.demux_gates.i_Kc4",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_Kc4", }, {
    "Three_Level_Converter.converter_Xabc.n.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.p.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.converter_Xabc.z.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.n.v", "ee_pwm_three_level/Three-Level Converter", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.p.v", "ee_pwm_three_level/Three-Level Converter", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.phase_splitter.I",
    "ee_pwm_three_level/Three-Level Converter", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Three_Level_Converter.phase_splitter.N.V",
    "ee_pwm_three_level/Three-Level Converter", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_Level_Converter.phase_splitter.a.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.phase_splitter.b.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.phase_splitter.c.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_Level_Converter.phase_splitter.i_a",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Three_Level_Converter.phase_splitter.i_b",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Three_Level_Converter.phase_splitter.i_c",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, { "Three_Level_Converter.z.v",
    "ee_pwm_three_level/Three-Level Converter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[60] = { { "ee_pwm_three_level/Three-Level Converter",
    1U, 0U, "Three_Level_Converter.converter_Xabc.Q1.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 1U,
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 2U,
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 3U,
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 4U,
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 5U,
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 6U,
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 7U,
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 8U,
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 9U,
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 10U,
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 11U,
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 12U,
    "Three_Level_Converter.converter_Xabc.D1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 13U,
    "Three_Level_Converter.converter_Xabc.D2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 14U,
    "Three_Level_Converter.converter_Xabc.D3",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 15U,
    "Three_Level_Converter.converter_Xabc.D4",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 16U,
    "Three_Level_Converter.converter_Xabc.D5",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 17U,
    "Three_Level_Converter.converter_Xabc.D6",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 18U,
    "Three_Level_Converter.converter_Xabc.Q1.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 19U,
    "Three_Level_Converter.converter_Xabc.Q10.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 20U,
    "Three_Level_Converter.converter_Xabc.Q11.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 21U,
    "Three_Level_Converter.converter_Xabc.Q12.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 22U,
    "Three_Level_Converter.converter_Xabc.Q2.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 23U,
    "Three_Level_Converter.converter_Xabc.Q3.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 24U,
    "Three_Level_Converter.converter_Xabc.Q4.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 25U,
    "Three_Level_Converter.converter_Xabc.Q5.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 26U,
    "Three_Level_Converter.converter_Xabc.Q6.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 27U,
    "Three_Level_Converter.converter_Xabc.Q7.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 28U,
    "Three_Level_Converter.converter_Xabc.Q8.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 29U,
    "Three_Level_Converter.converter_Xabc.Q9.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 30U,
    "Three_Level_Converter.converter_Xabc.D1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 31U,
    "Three_Level_Converter.converter_Xabc.D2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 32U,
    "Three_Level_Converter.converter_Xabc.D3",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 33U,
    "Three_Level_Converter.converter_Xabc.D4",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 34U,
    "Three_Level_Converter.converter_Xabc.D5",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 35U,
    "Three_Level_Converter.converter_Xabc.D6",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 36U,
    "Three_Level_Converter.converter_Xabc.Q1.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 37U,
    "Three_Level_Converter.converter_Xabc.Q10.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 38U,
    "Three_Level_Converter.converter_Xabc.Q11.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 39U,
    "Three_Level_Converter.converter_Xabc.Q12.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 40U,
    "Three_Level_Converter.converter_Xabc.Q2.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 41U,
    "Three_Level_Converter.converter_Xabc.Q3.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 42U,
    "Three_Level_Converter.converter_Xabc.Q4.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 43U,
    "Three_Level_Converter.converter_Xabc.Q5.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 44U,
    "Three_Level_Converter.converter_Xabc.Q6.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 45U,
    "Three_Level_Converter.converter_Xabc.Q7.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 46U,
    "Three_Level_Converter.converter_Xabc.Q8.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 47U,
    "Three_Level_Converter.converter_Xabc.Q9.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 48U,
    "Three_Level_Converter.converter_Xabc.Q1.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 49U,
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 50U,
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 51U,
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 52U,
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 53U,
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 54U,
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 55U,
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 56U,
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 57U,
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 58U,
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "ee_pwm_three_level/Three-Level Converter", 1U, 59U,
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[60] = { {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[106] = { { "ee_pwm_three_level/RLC", 1U, 0U,
    "RLC.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_pwm_three_level/RLC", 1U, 1U, "RLC.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_pwm_three_level/RLC", 1U, 2U, "RLC.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "ee_pwm_three_level/RLC", 1U, 3U, "RLC.wye_impedance",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 4U,
    "Three_Level_Converter.converter_Xabc.D1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 5U,
    "Three_Level_Converter.converter_Xabc.D1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 6U,
    "Three_Level_Converter.converter_Xabc.D1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 7U,
    "Three_Level_Converter.converter_Xabc.D1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 8U,
    "Three_Level_Converter.converter_Xabc.D1",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 9U,
    "Three_Level_Converter.converter_Xabc.D2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 10U,
    "Three_Level_Converter.converter_Xabc.D2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 11U,
    "Three_Level_Converter.converter_Xabc.D2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 12U,
    "Three_Level_Converter.converter_Xabc.D2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 13U,
    "Three_Level_Converter.converter_Xabc.D2",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 14U,
    "Three_Level_Converter.converter_Xabc.D3",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 15U,
    "Three_Level_Converter.converter_Xabc.D3",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 16U,
    "Three_Level_Converter.converter_Xabc.D3",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 17U,
    "Three_Level_Converter.converter_Xabc.D3",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 18U,
    "Three_Level_Converter.converter_Xabc.D3",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 19U,
    "Three_Level_Converter.converter_Xabc.D4",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 20U,
    "Three_Level_Converter.converter_Xabc.D4",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 21U,
    "Three_Level_Converter.converter_Xabc.D4",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 22U,
    "Three_Level_Converter.converter_Xabc.D4",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 23U,
    "Three_Level_Converter.converter_Xabc.D4",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 24U,
    "Three_Level_Converter.converter_Xabc.D5",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 25U,
    "Three_Level_Converter.converter_Xabc.D5",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 26U,
    "Three_Level_Converter.converter_Xabc.D5",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 27U,
    "Three_Level_Converter.converter_Xabc.D5",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 28U,
    "Three_Level_Converter.converter_Xabc.D5",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 29U,
    "Three_Level_Converter.converter_Xabc.D6",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 30U,
    "Three_Level_Converter.converter_Xabc.D6",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 31U,
    "Three_Level_Converter.converter_Xabc.D6",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 32U,
    "Three_Level_Converter.converter_Xabc.D6",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 33U,
    "Three_Level_Converter.converter_Xabc.D6",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 34U,
    "Three_Level_Converter.converter_Xabc.Q1.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 35U,
    "Three_Level_Converter.converter_Xabc.Q1.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 36U,
    "Three_Level_Converter.converter_Xabc.Q1.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 37U,
    "Three_Level_Converter.converter_Xabc.Q1.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 38U,
    "Three_Level_Converter.converter_Xabc.Q1.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 39U,
    "Three_Level_Converter.converter_Xabc.Q1.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 40U,
    "Three_Level_Converter.converter_Xabc.Q10.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 41U,
    "Three_Level_Converter.converter_Xabc.Q10.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 42U,
    "Three_Level_Converter.converter_Xabc.Q10.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 43U,
    "Three_Level_Converter.converter_Xabc.Q10.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 44U,
    "Three_Level_Converter.converter_Xabc.Q10.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 45U,
    "Three_Level_Converter.converter_Xabc.Q10.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 46U,
    "Three_Level_Converter.converter_Xabc.Q11.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 47U,
    "Three_Level_Converter.converter_Xabc.Q11.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 48U,
    "Three_Level_Converter.converter_Xabc.Q11.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 49U,
    "Three_Level_Converter.converter_Xabc.Q11.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 50U,
    "Three_Level_Converter.converter_Xabc.Q11.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 51U,
    "Three_Level_Converter.converter_Xabc.Q11.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 52U,
    "Three_Level_Converter.converter_Xabc.Q12.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 53U,
    "Three_Level_Converter.converter_Xabc.Q12.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 54U,
    "Three_Level_Converter.converter_Xabc.Q12.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 55U,
    "Three_Level_Converter.converter_Xabc.Q12.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 56U,
    "Three_Level_Converter.converter_Xabc.Q12.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 57U,
    "Three_Level_Converter.converter_Xabc.Q12.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 58U,
    "Three_Level_Converter.converter_Xabc.Q2.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 59U,
    "Three_Level_Converter.converter_Xabc.Q2.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 60U,
    "Three_Level_Converter.converter_Xabc.Q2.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 61U,
    "Three_Level_Converter.converter_Xabc.Q2.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 62U,
    "Three_Level_Converter.converter_Xabc.Q2.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 63U,
    "Three_Level_Converter.converter_Xabc.Q2.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 64U,
    "Three_Level_Converter.converter_Xabc.Q3.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 65U,
    "Three_Level_Converter.converter_Xabc.Q3.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 66U,
    "Three_Level_Converter.converter_Xabc.Q3.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 67U,
    "Three_Level_Converter.converter_Xabc.Q3.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 68U,
    "Three_Level_Converter.converter_Xabc.Q3.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 69U,
    "Three_Level_Converter.converter_Xabc.Q3.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 70U,
    "Three_Level_Converter.converter_Xabc.Q4.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 71U,
    "Three_Level_Converter.converter_Xabc.Q4.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 72U,
    "Three_Level_Converter.converter_Xabc.Q4.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 73U,
    "Three_Level_Converter.converter_Xabc.Q4.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 74U,
    "Three_Level_Converter.converter_Xabc.Q4.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 75U,
    "Three_Level_Converter.converter_Xabc.Q4.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 76U,
    "Three_Level_Converter.converter_Xabc.Q5.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 77U,
    "Three_Level_Converter.converter_Xabc.Q5.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 78U,
    "Three_Level_Converter.converter_Xabc.Q5.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 79U,
    "Three_Level_Converter.converter_Xabc.Q5.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 80U,
    "Three_Level_Converter.converter_Xabc.Q5.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 81U,
    "Three_Level_Converter.converter_Xabc.Q5.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 82U,
    "Three_Level_Converter.converter_Xabc.Q6.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 83U,
    "Three_Level_Converter.converter_Xabc.Q6.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 84U,
    "Three_Level_Converter.converter_Xabc.Q6.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 85U,
    "Three_Level_Converter.converter_Xabc.Q6.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 86U,
    "Three_Level_Converter.converter_Xabc.Q6.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 87U,
    "Three_Level_Converter.converter_Xabc.Q6.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 88U,
    "Three_Level_Converter.converter_Xabc.Q7.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 89U,
    "Three_Level_Converter.converter_Xabc.Q7.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 90U,
    "Three_Level_Converter.converter_Xabc.Q7.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 91U,
    "Three_Level_Converter.converter_Xabc.Q7.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 92U,
    "Three_Level_Converter.converter_Xabc.Q7.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 93U,
    "Three_Level_Converter.converter_Xabc.Q7.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 94U,
    "Three_Level_Converter.converter_Xabc.Q8.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 95U,
    "Three_Level_Converter.converter_Xabc.Q8.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 96U,
    "Three_Level_Converter.converter_Xabc.Q8.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 97U,
    "Three_Level_Converter.converter_Xabc.Q8.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 98U,
    "Three_Level_Converter.converter_Xabc.Q8.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 99U,
    "Three_Level_Converter.converter_Xabc.Q8.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 100U,
    "Three_Level_Converter.converter_Xabc.Q9.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 101U,
    "Three_Level_Converter.converter_Xabc.Q9.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 102U,
    "Three_Level_Converter.converter_Xabc.Q9.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 103U,
    "Three_Level_Converter.converter_Xabc.Q9.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 104U,
    "Three_Level_Converter.converter_Xabc.Q9.diode",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "ee_pwm_three_level/Three-Level Converter", 1U, 105U,
    "Three_Level_Converter.converter_Xabc.Q9.ideal_switch",
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", } };

static NeRange s_assert_range[106] = { {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[134] = { {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    32U, 5U, 32U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+passive/+rlc_assemblies/+rlc/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    31U, 5U, 31U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+connectors/+neutral_port/abc.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
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
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static real_T s_constant_table0[24] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
};

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 40;
  out->mM_P.mNumRow = 40;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    41);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 20;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 20);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 20;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 40;
  out->mDXM_P.mNumRow = 20;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    41);
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
  out->mDUM_P.mNumCol = 12;
  out->mDUM_P.mNumRow = 20;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
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
  out->mDTM_P.mNumRow = 20;
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
  out->mA_P.mNumCol = 40;
  out->mA_P.mNumRow = 40;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    41);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    73);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 73;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 73);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 12;
  out->mB_P.mNumRow = 40;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 0;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
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
  out->mC_P.mNumRow = 40;
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
  out->mF.mN = 40;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 40);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 40;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    40);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 40;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    40);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 40;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 40);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 40;
  out->mDXF_P.mNumRow = 40;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    41);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    138);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 138;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 138);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 12;
  out->mDUF_P.mNumRow = 40;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
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
  out->mDTF_P.mNumRow = 40;
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
  out->mDDF_P.mNumRow = 40;
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
  out->mTDUF_P.mNumCol = 12;
  out->mTDUF_P.mNumRow = 40;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
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
  out->mTDXF_P.mNumCol = 40;
  out->mTDXF_P.mNumRow = 40;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    41);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    211);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 43;
  out->mDNF_P.mNumRow = 40;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    44);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 0;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 40;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 40);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 40;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 40);
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
  out->mDXICR_P.mNumCol = 40;
  out->mDXICR_P.mNumRow = 0;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 41);
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
  out->mTDUICR_P.mNumCol = 12;
  out->mTDUICR_P.mNumRow = 0;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 13);
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
  out->mMDUY_P.mNumCol = 12;
  out->mMDUY_P.mNumRow = 5;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
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
  out->mMDXY_P.mNumCol = 40;
  out->mMDXY_P.mNumRow = 5;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    41);
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
  out->mTDUY_P.mNumCol = 12;
  out->mTDUY_P.mNumRow = 5;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
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
  out->mTDXY_P.mNumCol = 40;
  out->mTDXY_P.mNumRow = 5;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    41);
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
  out->mY.mN = 5;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 5);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 40;
  out->mDXY_P.mNumRow = 5;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    41);
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
  out->mDUY_P.mNumCol = 12;
  out->mDUY_P.mNumRow = 5;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
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
  out->mDTY_P.mNumRow = 5;
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
  out->mMODE.mN = 60;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    60);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 60;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 60);
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
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
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
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
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
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 680;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 680);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 106;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    106);
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
  out->mDXDELT_P.mNumCol = 40;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 41);
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
  out->mDUDELT_P.mNumCol = 12;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 13);
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
  out->mOBS_EXP.mN = 680;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    680);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 680;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    680);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 680;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    680);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 680;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 680);
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
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
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
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 40;
  out->mQX_P.mNumRow = 40;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    41);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 12;
  out->mQU_P.mNumRow = 40;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
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
  out->mQT_P.mNumRow = 40;
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
  out->mQ1_P.mNumRow = 40;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 40;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    40);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 40;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    40);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 40;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    40);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 40;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    40);
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

NeDynamicSystem *ee_pwm_three_level_8ad899e3_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[12];
  static NeDsIoInfo output_info[3];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 40;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 8;
  ds->mNumEquations = 40;
  ds->mNumICResiduals = 0;
  ds->mNumModes = 60;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 460;
  ds->mNumObservableElements = 680;
  ds->mNumZcs = 60;
  ds->mNumAsserts = 106;
  ds->mNumAssertRanges = 106;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 60;
  ds->mNumEquationRanges = 134;
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
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 12;
  input_info[0].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga1";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga1";
  input_info[0].mUnit = "V";
  input_info[1].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga2";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga2";
  input_info[1].mUnit = "V";
  input_info[2].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga3";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga3";
  input_info[2].mUnit = "V";
  input_info[3].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga4";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Ga4";
  input_info[3].mUnit = "V";
  input_info[4].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb1";
  input_info[4].mM = 1;
  input_info[4].mN = 1;
  input_info[4].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb1";
  input_info[4].mUnit = "V";
  input_info[5].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb2";
  input_info[5].mM = 1;
  input_info[5].mN = 1;
  input_info[5].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb2";
  input_info[5].mUnit = "V";
  input_info[6].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb3";
  input_info[6].mM = 1;
  input_info[6].mN = 1;
  input_info[6].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb3";
  input_info[6].mUnit = "V";
  input_info[7].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb4";
  input_info[7].mM = 1;
  input_info[7].mN = 1;
  input_info[7].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gb4";
  input_info[7].mUnit = "V";
  input_info[8].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc1";
  input_info[8].mM = 1;
  input_info[8].mN = 1;
  input_info[8].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc1";
  input_info[8].mUnit = "V";
  input_info[9].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc2";
  input_info[9].mM = 1;
  input_info[9].mN = 1;
  input_info[9].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc2";
  input_info[9].mUnit = "V";
  input_info[10].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc3";
  input_info[10].mM = 1;
  input_info[10].mN = 1;
  input_info[10].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc3";
  input_info[10].mUnit = "V";
  input_info[11].mIdentifier =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc4";
  input_info[11].mM = 1;
  input_info[11].mN = 1;
  input_info[11].mName =
    "Three_Level_Controller.Gate.Twelve_Pulse_Gate_Multiplexer.Gc4";
  input_info[11].mUnit = "V";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 3;
  output_info[0].mIdentifier = "Sensing_current.Current_Sensor.I_output";
  output_info[0].mM = 1;
  output_info[0].mN = 3;
  output_info[0].mName = "Sensing_current.Current_Sensor.I_output";
  output_info[0].mUnit = "A";
  output_info[1].mIdentifier = "Sensing_voltage_Vc1.Vc1.V";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName = "Sensing_voltage_Vc1.Vc1.V";
  output_info[1].mUnit = "V";
  output_info[2].mIdentifier = "Sensing_voltage_Vc2.Vc2.V";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName = "Sensing_voltage_Vc2.Vc2.V";
  output_info[2].mUnit = "V";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mMethods[NE_DS_METHOD_M_P] = ee_pwm_three_level_8ad899e3_1_ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ee_pwm_three_level_8ad899e3_1_ds_dxm_p;
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
  ds->mMethods[NE_DS_METHOD_A_P] = ee_pwm_three_level_8ad899e3_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = ee_pwm_three_level_8ad899e3_1_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = ee_pwm_three_level_8ad899e3_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = ee_pwm_three_level_8ad899e3_1_ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_SLF] = ee_pwm_three_level_8ad899e3_1_ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ee_pwm_three_level_8ad899e3_1_ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = ee_pwm_three_level_8ad899e3_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = ee_pwm_three_level_8ad899e3_1_ds_dxf;
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
  ds->mMethods[NE_DS_METHOD_TDXF_P] = ee_pwm_three_level_8ad899e3_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = ee_pwm_three_level_8ad899e3_1_ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = ee_pwm_three_level_8ad899e3_1_ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_IC] = ee_pwm_three_level_8ad899e3_1_ds_ic;
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
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ee_pwm_three_level_8ad899e3_1_ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ee_pwm_three_level_8ad899e3_1_ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = ee_pwm_three_level_8ad899e3_1_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = ee_pwm_three_level_8ad899e3_1_ds_dxy_p;
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
  ds->mMethods[NE_DS_METHOD_MODE] = ee_pwm_three_level_8ad899e3_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = ee_pwm_three_level_8ad899e3_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = ee_pwm_three_level_8ad899e3_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = ds_assert;
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
    ee_pwm_three_level_8ad899e3_1_ds_dxdelt_p;
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
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = ee_pwm_three_level_8ad899e3_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = ee_pwm_three_level_8ad899e3_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = ee_pwm_three_level_8ad899e3_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = ee_pwm_three_level_8ad899e3_1_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ee_pwm_three_level_8ad899e3_1_ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ee_pwm_three_level_8ad899e3_1_ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ee_pwm_three_level_8ad899e3_1_ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ee_pwm_three_level_8ad899e3_1_ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ee_pwm_three_level_8ad899e3_1_ds_slv;
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
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_assert (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  int32_T t0[106];
  int32_T b;
  (void)t1;
  out = t2->mASSERT;
  for (b = 0; b < 106; b++) {
    t0[b] = 1;
  }

  for (b = 0; b < 106; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t2;
  return 0;
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
  out.mNumCol = 12ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
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

static int32_T ds_cache_i (const NeDynamicSystem *sys, const
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
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
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
  out.mNumCol = 12ULL;
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
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
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
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
  out.mNumCol = 12ULL;
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
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
  out.mNumRow = 40ULL;
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
  out.mNumCol = 12ULL;
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 7;
  out.mJc[8] = 8;
  out.mJc[9] = 9;
  out.mJc[10] = 10;
  out.mJc[11] = 11;
  out.mJc[12] = 12;
  out.mIr[0] = 17;
  out.mIr[1] = 25;
  out.mIr[2] = 27;
  out.mIr[3] = 29;
  out.mIr[4] = 31;
  out.mIr[5] = 33;
  out.mIr[6] = 35;
  out.mIr[7] = 37;
  out.mIr[8] = 39;
  out.mIr[9] = 19;
  out.mIr[10] = 21;
  out.mIr[11] = 23;
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
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
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
  out.mNumCol = 12ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
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
  out.mX[0] = -0.002;
  out.mX[1] = -0.002;
  out.mX[2] = -0.00024056388173879573;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  out.mX[6] = -0.00024056388173879573;
  out.mX[7] = -0.0;
  out.mX[8] = -0.0;
  out.mX[9] = -0.0;
  out.mX[10] = -0.00024056388173879573;
  out.mX[11] = -0.00703619330849568;
  out.mX[12] = -0.0;
  out.mX[13] = -0.0;
  out.mX[14] = -0.0;
  out.mX[15] = -0.00703619330849568;
  out.mX[16] = -0.0;
  out.mX[17] = -0.0;
  out.mX[18] = -0.0;
  out.mX[19] = -0.00703619330849568;
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
  out.mNumCol = 12ULL;
  out.mNumRow = 20ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
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
  out.mNumRow = 20ULL;
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
  out.mX[18] = false;
  out.mX[19] = false;
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

static int32_T ds_qx (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
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

static int32_T ds_q1 (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
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
  out.mNumCol = 12ULL;
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
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
  out.mNumRow = 40ULL;
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
  out.mNumRow = 40ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *t0, const NeDynamicSystemInput *t13,
                     NeDsMethodOutput *t14)
{
  PmRealVector out;
  real_T X_idx_0;
  real_T X_idx_8;
  real_T X_idx_2;
  real_T X_idx_3;
  real_T X_idx_4;
  (void)t0;
  X_idx_0 = t13->mX.mX[0];
  X_idx_2 = t13->mX.mX[2];
  X_idx_3 = t13->mX.mX[3];
  X_idx_4 = t13->mX.mX[4];
  X_idx_8 = t13->mX.mX[8];
  out = t14->mY;
  out.mX[0] = X_idx_2;
  out.mX[1] = X_idx_3;
  out.mX[2] = X_idx_4;
  out.mX[3] = -((-X_idx_0 + X_idx_8 * -1.0E-5) + 1800.0) / -1.0;
  out.mX[4] = (-X_idx_0 + X_idx_8 * -1.0E-5) / -1.0;
  (void)t0;
  (void)t14;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDXY;
  out.mX[0] = -1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 1.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 1.0;
  out.mX[11] = -1.0E-5;
  out.mX[12] = 1.0E-5;
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
  out.mNumCol = 12ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
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
  out.mNumCol = 12ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
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
  out.mNumCol = 12ULL;
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
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
  out.mNumRow = 5ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
