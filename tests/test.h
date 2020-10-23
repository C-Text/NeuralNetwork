//
// Created by vinetos on 10/23/20.
//

#ifndef NN_TEST_H
#define NN_TEST_H

#include "../util.h"
#include <stdio.h>

int tests();

int test_softmax(double *inputs, double *expected, size_t size);

#endif // NN_TEST_H
