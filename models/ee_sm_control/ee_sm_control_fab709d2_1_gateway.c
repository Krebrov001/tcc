/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "nesl_rtw.h"
#include "ee_sm_control_fab709d2_1.h"

void ee_sm_control_fab709d2_1_gateway(void)
{
  NeModelParameters modelparams = { (NeSolverType) 0, 0.001, 0, 0.001, 0, 0, 0,
    0, (SscLoggingSetting) 1, 489588079, };

  NeSolverParameters solverparams = { 0, 0, 1, 0, 0, 0.001, 1e-06, 1e-09, 0, 0,
    100, 0, 1, 0, 1e-09, 1, (NeLocalSolverChoice) 0, 0.001, 1, 3, 2,
    (NeLinearAlgebraChoice) 0, (NeEquationFormulationChoice) 0, 1024, 1, 0.001,
    (NePartitionStorageMethod) 0, 1024, (NePartitionMethod) 1, };

  const NeOutputParameters* outputparameters = NULL;
  NeDae* dae;
  size_t numOutputs = 0;

  {
    static const NeOutputParameters outputparameters_init[] = { { 0, 0, }, };

    outputparameters = outputparameters_init;
    numOutputs = sizeof(outputparameters_init)/sizeof(outputparameters_init[0]);
  }

  ee_sm_control_fab709d2_1_dae(&dae,
    &modelparams,
    &solverparams);
  nesl_register_simulator_group("ee_sm_control/Solver Configuration_1",
    1,
    &dae,
    &solverparams,
    &modelparams,
    numOutputs,
    outputparameters);
}
