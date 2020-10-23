//
// Created by vinetos on 10/23/20.
//

#include "util.h"

double find_min(double *inputs, size_t size) {
  if (size <= 0 || size <= (sizeof(inputs) / sizeof(double)))
    return -INFINITY;

  double min;
  for (size_t i = 1; i < size; i++)
    if (inputs[i] < min)
      min = inputs[i];

  return min;
}

void print_array(double *arr, size_t size) {
  if (size == 0) {
    printf("[]");
    return;
  }
  printf("[");
  for (size_t i = 0; i < size - 1; i++)
    printf("%lf, ", arr[i]);
  printf("%lf]\n", arr[size - 1]);
}