
struct sim_config_T {
	unsigned long num_steps;                // Number of simulation steps to calculate
	unsigned long num_outputs;              // Number of outputs from the model
	const char **output_names;              // Name of each model output
	void (*initialize_p)(void);             // Model initialize function, skipped if NULL
	void (*step0_p)(void);                  // Base rate model step function, must exist, smallest time step
	void (*step1_p)(void);                  // Higher reate model step function, skipped if NULL
	unsigned int step1_multirate;           // Number of step0 steps per step1 step
	void (*terminate_p)(void);              // Model terminate function, skipped if NULL
	void (*get_outputs_p)(double *outputs); // Get outputs from model
	char save_outputs;                      // Flag to save model outputs when 1
	const char *reference_filename;         // Reference data values for verification
	char verbose;                           // Flag to print extra info when 1
	double abs_error_threshold;             // Absolute error threshold
	double rel_error_threshold;             // Relative error threshold
};

void init_config(struct sim_config_T *config);
void parse_args(struct sim_config_T *config, int argc, char *argv[]);
int run_sim(const struct sim_config_T *config);
