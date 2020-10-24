cmake_minimum_required(VERSION 3.17)
project(NN C)

set(CMAKE_C_STANDARD 99)

add_executable(
        NN main.c
        network/neuron.c network/neuron.h
        network/method.c network/method.h
        network/layer.c network/layer.h
        util.c util.h
)

add_executable(
        NN-tests test/main.c
        network/neuron.c network/neuron.h
        network/method.c network/method.h
        network/layer.c network/layer.h
        util.c util.h
        test/test.c test/test.h
        test/test_method.c test/test_method.h
)

target_link_libraries(NN m)
target_link_libraries(NN-tests m)