#include "power_fivecells.h"

#define NUM_TIME_STEPS 10

int main() {
  /* Initialize model */
  power_fivecells_initialize();

  for( unsigned long step = 0; step < NUM_TIME_STEPS; ++step ){
    /* Set model inputs here */

    /* Step the model for base rate */
    power_fivecells_step();

    /* Get model outputs here */
  }

  printf("Result comparison not yet implemented\n");

  return 0;
}

