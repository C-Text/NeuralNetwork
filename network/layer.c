//
// Created by vinetos on 10/23/20.
//

#include "layer.h"
#include "neuron.h"

layer create_layer(size_t number_of_neurons) {
  struct layer_t layer;
  layer.number_of_neurons = number_of_neurons;
  layer.neurons =
      (struct neuron_t *) malloc(number_of_neurons * sizeof(struct neuron_t));

  for (size_t i = 0; i < number_of_neurons; i++)
    layer.neurons[i] = create_neuron();

  return layer;
}