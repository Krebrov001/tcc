#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <math.h>
#include "complete_system_io.h"

#define TIME_STEP_SIZE (50e-6)

// Read verification data one block at a time
#define BLOCK_SIZE 1024

// Total simulation time (seconds) to verify
#define SIM_TIME (10)

// Total number of test points.
// +1 to account for time 0 and time SIM_TIME
#define NUM_SIM_STEPS ((long)(SIM_TIME/TIME_STEP_SIZE)+1)

// Number of result values
#define NUM_RESULTS 9

struct statistics_T {
	double max;
	double mean;
	double var;

	// Used to calculate the variance
	long n;
	double var_q;
};
const struct statistics_T statistics_T_init = {0.0, 0.0, 0.0, 0, 0.0};

const char* result_names[] = {
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

void update_statistics(struct statistics_T *stats, double sample);
void print_results(FILE* out, const char *name, struct statistics_T* abs_stats, struct statistics_T *rel_stats);
void simulation(double results[9]);

int main(void) {
	double results[NUM_RESULTS]; // Results generated at each step
	double reference_data[NUM_RESULTS*BLOCK_SIZE];
	struct statistics_T abs_errs[NUM_RESULTS];
	struct statistics_T rel_errs[NUM_RESULTS];
	FILE *reference_fp, *results_fp, *stats_fp;
	long step, i, j;
	char save_results = 0;  // Set to save data and statistics to files
	char reference_file[] = "../dat_files/complete_system_correct_results.dat"; // Output from Simulink Coder software
	char results_file[] = "results.dat";
	char stats_file[] = "error_statistics";


	char error_found = 0;

	printf("Initializing\n");

	// Initialize statistics
	for (i = 0; i< NUM_RESULTS; i++ ){
		abs_errs[i] = statistics_T_init;
		rel_errs[i] = statistics_T_init;
	}

	// Open the reference file
	reference_fp = fopen(reference_file,"rb");
	if( reference_fp == NULL ){
		fprintf(stderr, "Unable to open file '%s'\n", reference_file);
		return 1;
	}
	if( save_results ){
		results_fp = fopen(results_file,"w");
		if( results_fp == NULL ){
			fprintf(stderr, "Unable to open file '%s'\n", results_file);
			fclose(reference_fp);
		}
		stats_fp = fopen(stats_file, "wb");
		if( stats_fp == NULL ){
			fprintf(stderr, "Unable to open file '%s'\n", stats_file);
			fclose(reference_fp);
			fclose(results_fp);
		}
	}

	// Prepare the simulation
	complete_system_io_initialize();

	for( step = 0; step < NUM_SIM_STEPS; step++ ){
		// Perform one step through the module
		complete_system_io_step();

		// Get the current outputs
		memcpy(results, &complete_system_io_Y, sizeof(double)*NUM_RESULTS);

		// Read in next block of data values if needed
		if( step%BLOCK_SIZE == 0 ){
			fread(reference_data, sizeof(double), NUM_RESULTS*BLOCK_SIZE, reference_fp);
			printf("Starting step %ld of %ld ...\n", step, NUM_SIM_STEPS);
		}

		for( j = 0; j < NUM_RESULTS; j++ ){
			if( save_results ){
				fwrite(&(results[j]), sizeof(double), 1, results_fp);
			}
			double sim_value = results[j];
			double ref_value = reference_data[(step%BLOCK_SIZE)*NUM_RESULTS + j];
			double err = fabs(sim_value-ref_value);
			if( err != 0.0 ) {
				if( fabs(err/ref_value) > 1e-6 )
					error_found = 1;
			}
			update_statistics(&abs_errs[j], err);
			if( ref_value != 0.0 ){
				update_statistics(&rel_errs[j], fabs(err/ref_value));
			}
		}
	}

	// Finish the simulation
	complete_system_io_terminate();

	for( i = 0; i < NUM_RESULTS; i++ ){
		print_results(stdout, result_names[i], &abs_errs[i], &rel_errs[i]);
		if(save_results){
			print_results(stats_fp, result_names[i], &abs_errs[i], &rel_errs[i]);
		}
	}

	fclose(reference_fp);
	if( save_results ){
		fclose(results_fp);
		fclose(stats_fp);
	}

	if( error_found ){
		fprintf(stderr, "Results do not match!\n");
	}

	return error_found;
}

void update_statistics(struct statistics_T *stats, double sample) {
	long new_n = stats->n + 1;

	if( sample > stats->max ){
		stats->max = sample;
	}
	double new_mean = stats->mean + (sample - stats->mean)/new_n;
	stats->var_q = stats->var_q + (sample - stats->mean)*(sample - new_mean);
	stats->mean = new_mean;
	stats->var = stats->var_q / stats->n;
	stats->n = new_n;
}

void print_results(FILE *out, const char *name, struct statistics_T* abs_stats, struct statistics_T *rel_stats){
	fprintf(out, "============================\n");
	fprintf(out, "%s Results\n", name);
	fprintf(out, "============================\n");
	fprintf(out, " Absolute Error (n=%ld)\n", abs_stats->n);
	fprintf(out, "   Maximum  = %g\n", abs_stats->max);
	fprintf(out, "   Mean     = %g\n", abs_stats->mean);
	fprintf(out, "   Variance = %g\n", abs_stats->var);
	fprintf(out, " Relative Error (n=%ld)\n", rel_stats->n);
	fprintf(out, "   Maximum  = %g\n", rel_stats->max);
	fprintf(out, "   Mean     = %g\n", rel_stats->mean);
	fprintf(out, "   Variance = %g\n", rel_stats->var);
}
