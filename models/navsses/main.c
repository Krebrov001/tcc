#include "utils.h"
#include "complete_system_io.h"

#define TIME_STEP_SIZE (50e-6)

// Total simulation time (seconds) to verify
#define SIM_TIME (10)

// Total number of test points.
// +1 to account for time 0 and time SIM_TIME
#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_RESULTS (9)

void get_outputs(double *outputs);

int main(int argc, char *argv[]) {
	struct sim_config_T config;

	init_config(&config);
	parse_args(&config, argc, argv);

	const char *result_names[] = {
		"sm_line_voltage",    // 0
		"asm_i[0]",           // 1
		"asm_i[1]",           // 2
		"asm_i[2]",           // 3
		"asm_speed",          // 4
		"diesel_generator_p", // 5
		"ac1a_vf",            // 6
		"sm_vt",              // 7
		"sm_w"                // 8
	};
	config.num_steps = NUM_SIM_STEPS;
	config.output_names = result_names;
	config.num_outputs = NUM_RESULTS;
	config.initialize_p = complete_system_io_initialize;
	config.step0_p = complete_system_io_step;
	config.terminate_p = complete_system_io_terminate;
	config.get_outputs_p = get_outputs;
#ifdef HLS_TESTBENCH
	config.reference_filename = "navsses_model.dat";
#else
	config.reference_filename = "../dat_files/navsses_model.dat";
#endif

	return run_sim(&config);
}

void get_outputs(double *outputs){
	memcpy(outputs, &complete_system_io_Y, sizeof(double)*NUM_RESULTS);
}
