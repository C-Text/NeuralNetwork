//
// Created by vinetos on 10/23/20.
//

#include "test.h"
#include "test_method.h"

int tests() {
  double inputs[] = {1., 4.2, 0.6, 1.23, 4.3, 1.2, 2.5};
  double expected[] = {0.016590, 0.4069950, .011121, 0.020880,
                       0.449799, 0.020263, 0.074351};
  test_softmax(inputs, expected, 7);
}