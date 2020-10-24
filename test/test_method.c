//
// Created by vinetos on 10/23/20.
//

#include "test_method.h"
#include "../network/method.h"
#include "../util.h"
#include <stdio.h>

int test_softmax(double *inputs, double *expected, size_t size) {
  double *test = inputs;

  // Print input
  printf("Input Array: ");
  print_array(inputs, size);

  // Clone inputs
  for (size_t i = 0; i < size; i++)
    test[i] = inputs[i];

  softmax(test, size);

  // Print results
  printf("Softmax Array: ");
  print_array(test, size);

  // Test results
  for (size_t i = 0; i < size; i++)
    if (test[i] - expected[i] > 0.01) { // Compare the two values
      printf("Error on index %u : expected %lf got %lf. Diff : %lf", i, test[i],
             expected[i], (test[i] - expected[i]));
      return 1;
    }

  return 0;
}