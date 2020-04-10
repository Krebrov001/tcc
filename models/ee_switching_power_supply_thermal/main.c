#include "utils.h"
#include "ee_switching_power_supply_thermal.h"
#include <string.h>

#define TIME_STEP_SIZE (1e-10) // Model originally variable step, unknown if this is sufficiently small

#define SIM_TIME (0.006)

#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_OUTPUTS (5)

void get_outputs(double *outputs);

int main(int argc, char *argv[]) {
	struct sim_config_T config;

	init_config(&config);
	parse_args(&config, argc, argv);

	const char *result_names[] = {
		"OutputVoltage",     // 0
		"ControlSignal",     // 1
		"CyclicLoadCurrent", // 2
		"SupplyCurrent",     // 3
		"HeatFLow"           // 4
	};
	config.num_steps = NUM_SIM_STEPS;
	config.output_names = result_names;
	config.num_outputs = NUM_OUTPUTS;
	config.initialize_p = initialize;
	config.step0_p = step;
	config.terminate_p = NULL; // None
	config.get_outputs_p = get_outputs;
#ifdef HLS_TESTBENCH
	config.reference_filename = "ee_switching_power_supply_thermal.dat";
#else
	config.reference_filename = "../dat_files/ee_switching_power_supply_thermal.dat";
#endif

	return run_sim(&config);
}

void get_outputs(double *outputs){
	memcpy(outputs, &rtY, sizeof(double)*NUM_OUTPUTS);
}
