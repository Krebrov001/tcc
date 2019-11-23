#include "power_converters_switching_function.h"

#define TIME_STEP_SIZE (5e-6)

#define SIM_TIME (1.0)

#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

#define NUM_RESULTS (53)

#define MULTIRATE_FACTOR (10)

void generate_output(double *outputs);

void top(double results[NUM_RESULTS]) {

	power_converters_switching_function_initialize();

	long multirate_step = 0;
	for( long step = 0; step < NUM_SIM_STEPS; ++step) {
		power_converters_switching_function_step0();

		if( multirate_step == 0 )
			power_converters_switching_function_step1();

		++multirate_step;
		if( multirate_step >= MULTIRATE_FACTOR )
			multirate_step = 0;


		generate_output(results);
	}
}

void generate_output(double *outputs){
	outputs[ 0] = rtY.Pgrid;
	outputs[ 1] = rtY.Pbuck;
	outputs[ 2] = rtY.Pboost;
	outputs[ 3] = rtY.Pmotor;
	outputs[ 4] = rtY.PFB;
	outputs[ 5] = rtY.PHB;
	outputs[ 6] = rtY.PQstat[0];
	outputs[ 7] = rtY.PQstat[1];
	outputs[ 8] = rtY.VHB;
	outputs[ 9] = rtY.IHB;
	outputs[10] = rtY.QHB;
	outputs[11] = rtY._3LId[0];
	outputs[12] = rtY._3LId[1];
	outputs[13] = rtY._3LIq;
	outputs[14] = rtY._3Lm;
	outputs[15] = rtY.Vsec_3L_LLA;
	outputs[16] = rtY.Vsec_3L_LLB;
	outputs[17] = rtY.Vsec_3L_LLC;
	outputs[18] = rtY.Vdc_3L;
	outputs[19] = rtY.VdcP_3L;
	outputs[20] = rtY.VdcM_3L;
	outputs[21] = rtY.Vgrid[0];
	outputs[22] = rtY.Vgrid[1];
	outputs[23] = rtY.Vgrid[2];
	outputs[24] = rtY.Igrid[0];
	outputs[25] = rtY.Igrid[1];
	outputs[26] = rtY.Igrid[2];
	outputs[27] = rtY.V1grid_pu;
	outputs[28] = rtY.Qgrid;
	outputs[29] = rtY.Vbuck;
	outputs[30] = rtY.Ibuck;
	outputs[31] = rtY.statId[0];
	outputs[32] = rtY.statId[1];
	outputs[33] = rtY.statIq[0];
	outputs[34] = rtY.statIq[1];
	outputs[35] = rtY.statm;
	outputs[36] = rtY.Vdc_stat;
	outputs[37] = rtY.Vstat[0];
	outputs[38] = rtY.Vstat[1];
	outputs[39] = rtY.Vstat[2];
	outputs[40] = rtY.Istat[0];
	outputs[41] = rtY.Istat[1];
	outputs[42] = rtY.Istat[2];
	outputs[43] = rtY.Vboost;
	outputs[44] = rtY.Iboost;
	outputs[45] = rtY.Imotor[0];
	outputs[46] = rtY.Imotor[1];
	outputs[47] = rtY.D_motor;
	outputs[48] = rtY.w_motor;
	outputs[49] = rtY.Vmotor;
	outputs[50] = rtY.Imotor_m;
	outputs[51] = rtY.VFB;
	outputs[52] = rtY.IFB;
}
