//
// Created by vinetos on 10/23/20.
//

#include "neuron.h"

neuron create_neuron() {
  struct neuron_t neuron;
  neuron.dias = 0;
  neuron.value = 0;
  neuron.derivedValue = 0;
  return neuron;
}
