#include "utils.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Read verification data one block at a time
#define BLOCK_SIZE 1000

struct statistics_T {
	double max;
	double mean;
	double var;

	// Used to calculate the variance
	double n;
	double var_q;
};
const struct statistics_T statistics_T_init = {0.0, 0.0, 0.0, 0.0, 0.0};

void init_config(struct sim_config_T *config) {
	memset(config, 0, sizeof(struct sim_config_T));
}

void print_usage(const char *cmd) {
	fprintf(stderr, "Usage: %s [-v] [-s]\n", cmd);
	fprintf(stderr, "         -v verbose output\n");
	fprintf(stderr, "         -s save data and error outputs\n");
}

void parse_args(struct sim_config_T *config, int argc, char *argv[]) {
	if( argc > 1 ) {
		char error = 0;
		for( int i = 1; i < argc; ++i ){
			if( argv[i][0] != '-' ) {
				error = 1;
			}
			else {
				switch(argv[i][1]){
					case 'v':
						config->verbose = 1;
						break;
					case 's':
						config->save_outputs = 1;
						break;
					default:
						error = 1;
						break;
				}
			}
		}

		if( error != 0 ) {
			print_usage(argv[0]);
			exit(1);
		}
	}
}

void update_statistics(struct statistics_T *stats, double sample);
void print_outputs(FILE* out, const char *name, struct statistics_T* abs_stats, struct statistics_T *rel_stats);

int run_sim(const struct sim_config_T *config) {
	double *outputs; // Results generated at each step
	double *reference_data;
	struct statistics_T *abs_errs;
	struct statistics_T *rel_errs;
	FILE *reference_fp;
	FILE *outputs_fp;
	FILE *stats_fp;
	char outputs_file[] = "outputs.dat";
	char stats_file[] = "error_statistics.txt";
	char error_found = 0;

	// Allocate all necessary arrays
	if( (outputs = calloc(config->num_outputs, sizeof(double))) == NULL ){
		fprintf(stderr, "Unable to allocate array of %ld values for outputs\n", config->num_outputs);
		return 1;
	}
	if( (reference_data = calloc(config->num_outputs * BLOCK_SIZE, sizeof(double))) == NULL ){
		fprintf(stderr, "Unable to allocate array of %ld values for reference outputs\n", config->num_outputs*BLOCK_SIZE);
		free(outputs);
		return 1;
	}
	if( (abs_errs = calloc(config->num_outputs, sizeof(struct statistics_T))) == NULL ){
		fprintf(stderr, "Unable to allocate array of %ld absolute error statistics\n", config->num_outputs);
		free(outputs);
		free(reference_data);
		return 1;
	}
	if( (rel_errs = calloc(config->num_outputs, sizeof(struct statistics_T))) == NULL ){
		fprintf(stderr, "Unable to allocate array of %ld relative error statistics\n", config->num_outputs);
		free(outputs);
		free(reference_data);
		free(abs_errs);
		return 1;
	}

	if( config->verbose ){
		printf("Initializing\n");
	}

	// Initialize statistics
	for (int i = 0; i< config->num_outputs; i++ ){
		abs_errs[i] = statistics_T_init;
		rel_errs[i] = statistics_T_init;
	}

	// Open the reference file
	reference_fp = fopen(config->reference_filename,"rb");
	if( reference_fp == NULL ){
		fprintf(stderr, "Unable to open reference data file '%s'\n", config->reference_filename);
		free(outputs);
		free(reference_data);
		free(abs_errs);
		free(rel_errs);
		return 1;
	}
	if( config->save_outputs ){
		outputs_fp = fopen(outputs_file,"w");
		if( outputs_fp == NULL ){
			fprintf(stderr, "Unable to open outputs data file '%s'\n", outputs_file);
			fclose(reference_fp);
		}
		stats_fp = fopen(stats_file, "wb");
		if( stats_fp == NULL ){
			fprintf(stderr, "Unable to open error statistics file '%s'\n", stats_file);
			fclose(reference_fp);
			fclose(outputs_fp);
		}
	}

	// Prepare the simulation
	if( config->initialize_p != NULL ){
		(*config->initialize_p)();
	}

	if( config->step0_p == NULL ){
		fprintf(stderr, "ERROR: Base rate model step function undefined.\n");
		free(outputs);
		free(reference_data);
		free(abs_errs);
		free(rel_errs);
		return 1;
	}

	unsigned int multistep = 0;
	for( long step = 0; step < config->num_steps; step++ ){
		// Perform one step through the module
		(*config->step0_p)();

		// Perform multirate step as needed
		if( config->step1_p != NULL ){
			if( multistep == 0 ){
				(*config->step1_p)();
			}
			++multistep;
		}

		// Get the current outputs
		(*config->get_outputs_p)(outputs);

		// Read in next block of data values if needed
		if( step%BLOCK_SIZE == 0 ){
			fread(reference_data, sizeof(double), config->num_outputs*BLOCK_SIZE, reference_fp);
			if( config->verbose ){
				printf("Starting step %ld of %ld ...\n", step, config->num_steps);
			}
		}

		for( int j = 0; j < config->num_outputs; j++ ){
			if( config->save_outputs ){
				fwrite(&(outputs[j]), sizeof(double), 1, outputs_fp);
			}
			double sim_value = outputs[j];
			double ref_value = reference_data[(step%BLOCK_SIZE)*config->num_outputs + j];
			double abs_err = fabs(sim_value-ref_value);
			if( abs_err > config->abs_error_threshold ) {
					error_found = 1;
			}
			update_statistics(&abs_errs[j], abs_err);
			if( ref_value != 0.0 ){
				double rel_err = fabs(abs_err/ref_value);
				if( rel_err > config->rel_error_threshold ) {
					error_found = 1;
				}
				update_statistics(&rel_errs[j], rel_err);
			}
		}
	}

	// Finish the simulation
	if( config->terminate_p != NULL ){
		(*config->terminate_p)();
	}

	for( int i = 0; i < config->num_outputs; i++ ){
		if(config->verbose){
			print_outputs(stdout, config->output_names[i], &abs_errs[i], &rel_errs[i]);
		}
		if(config->save_outputs){
			print_outputs(stats_fp, config->output_names[i], &abs_errs[i], &rel_errs[i]);
		}
	}

	fclose(reference_fp);
	if( config->save_outputs ){
		fclose(outputs_fp);
		fclose(stats_fp);
	}

	free(outputs);
	free(reference_data);
	free(abs_errs);
	free(rel_errs);

	if( error_found ){
		fprintf(stderr, "Results DO NOT match!\n");
	}
	else {
		printf("Results match reference values.\n");
	}

	return error_found;
}

void update_statistics(struct statistics_T *stats, double sample) {
	double new_n = stats->n + 1;

	if( sample > stats->max ){
		stats->max = sample;
	}
	double new_mean = stats->mean + (sample - stats->mean)/new_n;
	stats->var_q = stats->var_q + (sample - stats->mean)*(sample - new_mean);
	stats->mean = new_mean;
	stats->var = stats->var_q / stats->n;
	stats->n = new_n;
}

void print_outputs(FILE *out, const char *name, struct statistics_T* abs_stats, struct statistics_T *rel_stats){
	fprintf(out, "============================\n");
	fprintf(out, "%s Results\n", name);
	fprintf(out, "============================\n");
	fprintf(out, " Absolute Error (n=%g)\n", abs_stats->n);
	fprintf(out, "   Maximum  = %g\n", abs_stats->max);
	fprintf(out, "   Mean     = %g\n", abs_stats->mean);
	fprintf(out, "   Variance = %g\n", abs_stats->var);
	fprintf(out, " Relative Error (n=%g)\n", rel_stats->n);
	fprintf(out, "   Maximum  = %g\n", rel_stats->max);
	fprintf(out, "   Mean     = %g\n", rel_stats->mean);
	fprintf(out, "   Variance = %g\n", rel_stats->var);
}
