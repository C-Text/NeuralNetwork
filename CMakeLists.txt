cmake_minimum_required(VERSION 3.17)
project(NN C)

set(CMAKE_C_STANDARD 99)

add_executable(NN main.c network/neuron.c network/neuron.h network/method.c network/method.h tests/test.c tests/test.h util.c util.h)

target_link_libraries(NN m)