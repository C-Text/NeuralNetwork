//
// Created by vinetos on 10/23/20.
//

#ifndef NN_LAYER_H
#define NN_LAYER_H

#include "neuron.h"
#include <stdlib.h>

typedef struct layer_t {

  size_t number_of_neurons;
  struct neuron_t *neurons;

} layer;

layer create_layer(size_t number_of_neurons);

#endif // NN_LAYER_H
