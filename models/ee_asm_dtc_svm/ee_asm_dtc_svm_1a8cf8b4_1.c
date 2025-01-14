/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_asm_dtc_svm/Solver Configuration'.
 */

#include "ne_std.h"
#include "pm_default_allocator.h"
#include "ne_dae_fwd.h"
#include "ne_profiler_fwd.h"
#include "ne_dae_construct.h"
#include "nesl_la.h"
#include "ee_asm_dtc_svm_1a8cf8b4_1_ds.h"

void ee_asm_dtc_svm_1a8cf8b4_1_dae( NeDae **dae, const NeModelParameters
  *modelParams,
  const NeSolverParameters *solverParams)
{
  PmAllocator *ne_allocator;
  const McLinearAlgebraFactory *linear_algebra_ptr =
    (solverParams->mLinearAlgebra == NE_FULL_LA) ?
    get_rtw_linear_algebra() :
    ((solverParams->mLinearAlgebra == NE_SPARSE_LA) ?
     mc_get_csparse_linear_algebra() :
     get_auto_linear_algebra());
  ne_allocator = pm_default_allocator();
  ne_dae_create( dae,
                ee_asm_dtc_svm_1a8cf8b4_1_dae_ds( ne_allocator ),
                NULL,
                FALSE,
                *solverParams,
                *modelParams,
                linear_algebra_ptr,
                NULL,
                NULL,
                NULL,
                ne_allocator);
}
