//
// Created by vinetos on 10/23/20.
//

#include "layer.h"
#include "neuron.h"
#include <stdio.h>

layer create_layer(size_t number_of_neurons) {
  struct layer_t layer;
  layer.number_of_neurons = number_of_neurons;
  layer.neurons =
      (struct neuron_t *) malloc(number_of_neurons * sizeof(struct neuron_t));

  for (size_t i = 0; i < number_of_neurons; i++)
    layer.neurons[i] = create_neuron();

  return layer;
}

void lprint(struct layer_t *l, bool pretty) {
  if (pretty) {
    printf("Layer={num=%zu,\n", l->number_of_neurons);
    for (size_t i = 0; i < l->number_of_neurons; i++) {
      printf("\t");
      nprint(&l->neurons[i], true);
      printf("\n");
    }
    printf("}");
  } else {
    printf("[");
    for (size_t i = 0; i < l->number_of_neurons; i++)
      nprint(&l->neurons[i], false);
    printf("]");
  }
}