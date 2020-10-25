//
// Created by vinetos on 10/23/20.
//

#ifndef NN_LAYER_H
#define NN_LAYER_H

#include "neuron.h"
#include <stdlib.h>
#include <stdbool.h>

typedef struct layer_t {

  size_t number_of_neurons;
  struct neuron_t *neurons;
  size_t next_layer_size;

} layer;

layer create_layer(size_t number_of_neurons, size_t next_layer_size);

void feed(struct layer_t *layer, const double input[layer->number_of_neurons]);

void activate(struct layer_t *layer);

void feedforward(struct layer_t *l1, struct layer_t *l2);

double sum(struct layer_t *layer, size_t neuron_num);

void lprint(struct layer_t *l, bool pretty);

#endif // NN_LAYER_H
