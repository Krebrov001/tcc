#include "utils.h"
#include "ee_asm_dtc_svm.h"
#include <string.h>

#define TIME_STEP_SIZE (5e-6) // Model originally fixed step

#define SIM_TIME (2.5)

#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_OUTPUTS (7)

void get_outputs(double *outputs);

int main(int argc, char *argv[]) {
	struct sim_config_T config;

	init_config(&config);
	parse_args(&config, argc, argv);

	const char *result_names[] = {
		"CurrentA", // 0
		"CurrentB", // 1
		"CurrentC", // 2
		"Torque0",  // 3
		"Torque1",  // 4
		"Speed0",   // 5
		"Speed1"    // 6

	};
	config.num_steps = NUM_SIM_STEPS;
	config.output_names = result_names;
	config.num_outputs = NUM_OUTPUTS;
	config.initialize_p = ee_asm_dtc_svm_initialize;
	config.step0_p = ee_asm_dtc_svm_step0;
	config.step1_multirate = 10;
	config.step1_p = ee_asm_dtc_svm_step1;
	config.terminate_p = NULL; // None
	config.get_outputs_p = get_outputs;
#ifdef HLS_TESTBENCH
	config.reference_filename = "ee_asm_dtc_svm.dat";
#else
	config.reference_filename = "../dat_files/ee_asm_dtc_svm.dat";
#endif

	return run_sim(&config);
}

void get_outputs(double *outputs){
	memcpy(outputs, &rtY, sizeof(double)*NUM_OUTPUTS);
}
