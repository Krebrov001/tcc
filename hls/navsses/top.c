#include "complete_system_io.h"

#define TIME_STEP_SIZE (50e-6)

// Total simulation time (seconds) to verify
#define SIM_TIME (10)

// Total number of test points.
// +1 to account for time 0 and time SIM_TIME
#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_RESULTS (9)

void generate_output(double *outputs);

void top(double results[NUM_RESULTS]) {

	complete_system_io_initialize();

	for( long step = 0; step < NUM_SIM_STEPS; ++step) {
		complete_system_io_step();

		generate_output(results);
	}

	complete_system_io_terminate();
}

void generate_output(double *outputs){
	outputs[0] = complete_system_io_Y.Out1;
	outputs[1] = complete_system_io_Y.Out2[0];
	outputs[2] = complete_system_io_Y.Out2[1];
	outputs[3] = complete_system_io_Y.Out2[2];
	outputs[4] = complete_system_io_Y.Out3;
	outputs[5] = complete_system_io_Y.Out4;
	outputs[6] = complete_system_io_Y.Out5;
	outputs[7] = complete_system_io_Y.Out6;
	outputs[8] = complete_system_io_Y.Out7;
}
