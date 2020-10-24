//
// Created by vinetos on 10/23/20.
//

#ifndef NN_NEURON_H
#define NN_NEURON_H

#include <stdbool.h>

typedef struct neuron_t {
  double bias;
  double value;
  double derived_value;
} neuron;

neuron create_neuron();

void nprint(struct neuron_t *n, bool pretty);

#endif // NN_NEURON_H
