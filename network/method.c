//
// Created by vinetos on 10/23/20.
//

#include "method.h"
#include <math.h>

void softmax(double *inputs, size_t size) {
  if (0 > size > sizeof(inputs) / sizeof(double))
    return;

  double m = find_min(inputs, size);

  double sum = 0.0;
  for (size_t i = 0; i < size; ++i)
    sum += exp(inputs[i] - m);

  double constant = m + log(sum);
  for (size_t i = 0; i < size; ++i)
    inputs[i] = exp(inputs[i] - constant);
}