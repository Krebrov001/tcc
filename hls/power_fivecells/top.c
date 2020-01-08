#include "power_fivecells.h"

#define TIME_STEP_SIZE (2e-6)

#define SIM_TIME (0.04)

#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_RESULTS (12)

void generate_output(double *outputs);

void top(double results[NUM_RESULTS]) {

	power_fivecells_initialize();

	for( long step = 0; step < NUM_SIM_STEPS; ++step) {
		power_fivecells_step();

		generate_output(results);
	}
}

void generate_output(double *outputs){
	outputs[0] = rtY.ISRC[0];
	outputs[1] = rtY.ISRC[1];
	outputs[2] = rtY.ISRC[2];
	outputs[3] = rtY.VSRC[0];
	outputs[4] = rtY.VSRC[1];
	outputs[5] = rtY.VSRC[2];
	outputs[6] = rtY.VLOAD[0];
	outputs[7] = rtY.VLOAD[1];
	outputs[8] = rtY.VLOAD[2];
	outputs[9] = rtY.ILOAD[0];
	outputs[10] = rtY.ILOAD[1];
	outputs[11] = rtY.ILOAD[2];
}
