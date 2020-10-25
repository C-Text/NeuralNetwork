//
// Created by vinetos on 10/23/20.
//

#include "layer.h"
#include "neuron.h"
#include "method.h"
#include <stdio.h>

layer create_layer(size_t number_of_neurons, size_t next_layer_size) {
  struct layer_t layer;
  layer.number_of_neurons = number_of_neurons;
  layer.next_layer_size = next_layer_size;
  layer.neurons =
      (struct neuron_t *) malloc(number_of_neurons * sizeof(struct neuron_t));

  for (size_t i = 0; i < number_of_neurons; i++)
    layer.neurons[i] = create_neuron(layer.next_layer_size);

  return layer;
}

void feed(struct layer_t *layer, const double input[layer->number_of_neurons]) {
  for (int i = 0; i < layer->number_of_neurons; i++) {
    layer->neurons[i].value = input[i];
  }
}

void activate(struct layer_t *layer) {
  double values[layer->number_of_neurons];
  for (int i = 0; i < layer->number_of_neurons; i++) {
    values[i] = layer->neurons[i].value;
  }
  softmax(values, layer->number_of_neurons);
  for (int i = 0; i < layer->number_of_neurons; i++) {
    layer->neurons[i].value = values[i];
  }
}

double sum(struct layer_t *layer, size_t neuron_num) {
  double sum = 0;
  for (size_t i = 0; i < layer->number_of_neurons; ++i) {
    sum += layer->neurons[i].value * layer->neurons[i].weights[neuron_num];
  }
  return sum;
}

void feedforward(struct layer_t *l1, struct layer_t *l2) {
  for (size_t i = 0; i < l2->number_of_neurons; ++i) {
    l2->neurons[i].value = sum(l1, i);
  }
}

void lprint(struct layer_t *l, bool pretty) {
  if (pretty) {
    printf("Layer={num=%zu,next=%zu,\n", l->number_of_neurons, l->next_layer_size);
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