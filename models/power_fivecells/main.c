#include "utils.h"
#include "power_fivecells.h"
#include <string.h>

#define TIME_STEP_SIZE (2e-6)

#define SIM_TIME (0.04)

#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_OUTPUTS (12)

void get_outputs(double *outputs);

int main(int argc, char *argv[]) {
	struct sim_config_T config;

	init_config(&config);
	parse_args(&config, argc, argv);

	const char *result_names[] = {
		"ISRCa",    // 0
		"ISRCb",    // 1
		"ISRCc",    // 2
		"VSRCa",    // 3
		"VSRCb",    // 4
		"VSRCc",    // 5
		"VLOADa",   // 6
		"VLOADb",   // 7
		"VLOADc",   // 8
		"ILOADa",   // 9
		"ILOADb",   // 10
		"ILOADc"    // 11
	};
	config.num_steps = NUM_SIM_STEPS;
	config.output_names = result_names;
	config.num_outputs = NUM_OUTPUTS;
	config.initialize_p = power_fivecells_initialize;
	config.step0_p = power_fivecells_step;
	config.terminate_p = NULL; // None
	config.get_outputs_p = get_outputs;
#ifdef HLS_TESTBENCH
	config.reference_filename = "power_fivecells.dat";
#else
	config.reference_filename = "../dat_files/power_fivecells.dat";
#endif

	return run_sim(&config);
}

void get_outputs(double *outputs){
	memcpy(outputs, &rtY, sizeof(double)*NUM_OUTPUTS);
}
