#include "utils.h"
#include "ee_marine_electrical_system.h"
#include <string.h>

#define TIME_STEP_SIZE (1e-3) // Model originally variable step, unknown if this is sufficiently small

#define SIM_TIME (70)

#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_OUTPUTS (2)

void get_outputs(double *outputs);

int main(int argc, char *argv[]) {
	struct sim_config_T config;

	init_config(&config);
	parse_args(&config, argc, argv);

	const char *result_names[] = {
		"GeneratorPower", // 0
		"TurbinePower"    // 1
	};
	config.num_steps = NUM_SIM_STEPS;
	config.output_names = result_names;
	config.num_outputs = NUM_OUTPUTS;
	config.initialize_p = ee_marine_electrical_system_initialize;
	config.step0_p = ee_marine_electrical_system_step;
	config.terminate_p = NULL; // None
	config.get_outputs_p = get_outputs;
#ifdef HLS_TESTBENCH
	config.reference_filename = "ee_marine_electrical_system.dat";
#else
	config.reference_filename = "../dat_files/ee_marine_electrical_system.dat";
#endif

	return run_sim(&config);
}

void get_outputs(double *outputs){
	memcpy(outputs, &rtY, sizeof(double)*NUM_OUTPUTS);
}
