#include "utils.h"
#include "ee_pwm_three_level.h"
#include <string.h>

#define TIME_STEP_SIZE (5e-6) // Model originally fixed step

#define SIM_TIME (0.2)

#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_OUTPUTS (10)

void get_outputs(double *outputs);

int main(int argc, char *argv[]) {
	struct sim_config_T config;

	init_config(&config);
	parse_args(&config, argc, argv);

	const char *result_names[] = {
		"ReferenceVoltageA",   // 0
		"ReferenceVoltageB",   // 1
		"ReferenceVoltageC",   // 2
		"ModulationWaveformA", // 3
		"ModulationWaveformB", // 4
		"ModulationWaveformC", // 5
		"NeutralPoint",        // 6
		"Vc0",                 // 7
		"Vc1",                 // 8
		"Ia"                   // 9

	};
	config.num_steps = NUM_SIM_STEPS;
	config.output_names = result_names;
	config.num_outputs = NUM_OUTPUTS;
	config.initialize_p = ee_pwm_three_level_initialize;
	config.step0_p = ee_pwm_three_level_step0;
	config.step1_multirate = 20;
	config.step1_p = ee_pwm_three_level_step1;
	config.terminate_p = NULL; // None
	config.get_outputs_p = get_outputs;
#ifdef HLS_TESTBENCH
	config.reference_filename = "ee_pwm_three_level.dat";
#else
	config.reference_filename = "../dat_files/ee_pwm_three_level.dat";
#endif

	return run_sim(&config);
}

void get_outputs(double *outputs){
	memcpy(outputs, &rtY, sizeof(double)*NUM_OUTPUTS);
}
