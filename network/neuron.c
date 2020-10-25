//
// Created by vinetos on 10/23/20.
//

#include "neuron.h"
#include <stdio.h>

neuron create_neuron(size_t next_layer_size) {
  struct neuron_t neuron;
  neuron.next_layer_size = next_layer_size;
  neuron.value = 0;
  // malloc reserved memory with undefined values which can lead to undefined
  // behavior
  neuron.weights = malloc(next_layer_size * sizeof(double));
  // Initialize default weights to 1
  for (int i = 0; i < next_layer_size; ++i) {
    neuron.weights[i] = 1;
  }
  return neuron;
}

void nprint(struct neuron_t *n, bool pretty) {
  if (pretty)
    printf("Neuron={v=%lf,w=[", n->value);
  else
    printf("{%lf,[", n->value);

  // Print weights
  for (int i = 0; i < n->next_layer_size; ++i) {
    printf("%c%lf", (i == 0 ? 0 : ','), n->weights[i]);
  }
  printf("]}");
}