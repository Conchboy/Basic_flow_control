cmake_minimum_required(VERSION 3.17)
project(Basic_flow_control C)

set(CMAKE_C_STANDARD 99)

add_executable(Basic_flow_control main.c rp_01_FC.c test.c rp_02_average.c rp_03_type_transfer.c rp_04_float_storage_issue.c)
add_executable(rp_01_FC rp_01_FC.c)
add_executable(test test.c)
add_executable(rp_02_average rp_02_average.c)
add_executable(rp_03_type_transfer rp_03_type_transfer.c)
add_executable(rp_04_float_storage_issue rp_04_float_storage_issue.c)