#include "utils.h"
#include "ee_voltage_sourced_converter_spwm.h"
#include <string.h>

#define TIME_STEP_SIZE (1e-5)

#define SIM_TIME (2.0/60.0)

#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_OUTPUTS (10)

void get_outputs(double *outputs);

int main(int argc, char *argv[]) {
	struct sim_config_T config;

	init_config(&config);
	parse_args(&config, argc, argv);

	const char *result_names[] = {
		"PhaseA0",    // 0
		"PhaseA1",    // 1
		"PhaseB0",    // 2
		"PhaseB1",    // 3
		"PhaseC0",    // 4
		"PhaseC1",    // 5
		"ACCurrent0", // 6
		"ACCurrent1", // 7
		"ACCurrent2", // 8
		"DCCurrent"   // 9
	};
	config.num_steps = NUM_SIM_STEPS;
	config.output_names = result_names;
	config.num_outputs = NUM_OUTPUTS;
	config.initialize_p = ee_voltage_sourced_converter_spwm_initialize;
	config.step0_p = ee_voltage_sourced_converter_spwm_step;
	config.terminate_p = NULL; // None
	config.get_outputs_p = get_outputs;
#ifdef HLS_TESTBENCH
	config.reference_filename = "ee_voltage_sourced_converter_spwm.dat";
#else
	config.reference_filename = "../dat_files/ee_voltage_sourced_converter_spwm.dat";
#endif

	return run_sim(&config);
}

void get_outputs(double *outputs){
	memcpy(outputs, &rtY, sizeof(double)*NUM_OUTPUTS);
}
