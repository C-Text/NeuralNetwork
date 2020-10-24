//
// Created by vinetos on 10/23/20.
//

#ifndef NN_NEURON_H
#define NN_NEURON_H

typedef struct neuron_t {
  double dias;
  double value;
  double derivedValue;
} neuron;

neuron create_neuron();

#endif // NN_NEURON_H
