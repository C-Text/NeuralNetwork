//
// Created by vinetos on 10/23/20.
//

#ifndef NN_UTIL_H
#define NN_UTIL_H

#include "network/neuron.h"
#include "network/layer.h"
#include <math.h>
#include <stdio.h>

/**
 *
 * Returns the minimum in an unsorted array. This will test all the array
 *
 * @throw error if size is null of size > array's size *
 * @param inputs the array
 * @param size   the size of the array
 *
 * @return the minimum if found.
 */
double find_min(double *inputs, size_t size);

void print_array(double *arr, size_t size);

#endif // NN_UTIL_H
