cmake_minimum_required(VERSION 3.29)
project(ExamenParcial3_NoVinculante)

set(CMAKE_CXX_STANDARD 14)

include_directories(estudiante)

add_executable(ExamenParcial3_NoVinculante
        estudiante/estudiante.h
        estudiante/estudiante.c
        main.c)
