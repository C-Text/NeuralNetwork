//
// Created by vinetos on 10/23/20.
//

#include "neuron.h"
#include <stdio.h>

neuron create_neuron() {
  struct neuron_t neuron = {0, 0, 0};
  return neuron;
}

void nprint(struct neuron_t *n, bool pretty) {
  if (pretty)
    printf("Neuron={b=%lf, v=%lf, dv=%lf}", n->value,
           n->derived_value, n->bias);
  else
    printf("{%lf,%lf,%lf}", n->value, n->derived_value, n->bias);
}