#include "utils.h"
#include "power_converters_switching_function.h"
#include <string.h>

#define TIME_STEP_SIZE (5e-6)

#define SIM_TIME (1.0)

#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_OUTPUTS (53)

void get_outputs(double *outputs);

int main(int argc, char *argv[]) {
	struct sim_config_T config;

	init_config(&config);
	parse_args(&config, argc, argv);

	const char *result_names[] = {
		"Pgrid",        // 0
		"Pbuck",        // 1
		"Pboost",       // 2
		"Pmotor",       // 3
		"PFB",          // 4
		"PHB",          // 5
		"PQstat0",      // 6
		"PQstat1",      // 7
		"VHB",          // 8
		"IHB",          // 9
		"QHB",          // 10
		"3LId0",        // 11
		"3LId1",        // 12
		"3LIq",         // 13
		"3Lm",          // 14
		"Vsec_3L_LLA",  // 15
		"Vsec_3L_LLB",  // 16
		"Vsec_3L_LLC",  // 17
		"Vdc_3L",       // 18
		"VdcP_3L",      // 19
		"VdcM_3L",      // 20
		"Vgrid0",       // 21
		"Vgrid1",       // 22
		"Vgrid2",       // 23
		"Igrid0",       // 24
		"Igrid1",       // 25
		"Igrid2",       // 26
		"V1grid_pu",    // 27
		"Qgrid",        // 29
		"Vbuck",        // 30
		"Ibuck",        // 31
		"statId0",      // 32
		"statId1",      // 33
		"statIq0",      // 34
		"statIq1",      // 35
		"statm",        // 36
		"Vdc_stat",     // 37
		"Vstat0",       // 38
		"Vstat1",       // 39
		"Vstat2",       // 40
		"Istat0",       // 41
		"Istat1",       // 42
		"Istat2",       // 43
		"Vboost",       // 44
		"Iboost",       // 45
		"Imotor0",      // 46
		"Imotor1",      // 47
		"D_motor",      // 48
		"w_motor",      // 49
		"Vmotor",       // 50
		"Imotor_m",     // 51
		"VFB",          // 52
		"IFB",          // 53
	};
	config.num_steps = NUM_SIM_STEPS;
	config.output_names = result_names;
	config.num_outputs = NUM_OUTPUTS;
	config.initialize_p = power_converters_switching_function_initialize;
	config.step0_p = power_converters_switching_function_step0;
	config.step1_multirate = 10;
	config.step1_p = power_converters_switching_function_step1;
	config.terminate_p = NULL; // None
	config.get_outputs_p = get_outputs;
#ifdef HLS_TESTBENCH
	config.reference_filename = "power_converters_switching_function.dat";
#else
	config.reference_filename = "../dat_files/power_converters_switching_function.dat";
#endif

	return run_sim(&config);
}

void get_outputs(double *outputs){
	memcpy(outputs, &rtY, sizeof(double)*NUM_OUTPUTS);
}
