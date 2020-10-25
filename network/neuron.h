//
// Created by vinetos on 10/23/20.
//

#ifndef NN_NEURON_H
#define NN_NEURON_H

#include <stdbool.h>
#include <stdlib.h>

typedef struct neuron_t {
  double value;
  double *weights;
  size_t next_layer_size;
  //Arrays of input (prev_weight * prev_in)
  // activate
  // send to output * weight

} neuron;

neuron create_neuron(size_t next_layer_size);

void nprint(struct neuron_t *n, bool pretty);

#endif // NN_NEURON_H
