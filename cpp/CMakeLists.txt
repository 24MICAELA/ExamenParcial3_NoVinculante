cmake_minimum_required(VERSION 3.29)
project(ExamenParcial3_NoVinculante)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ExamenParcial3_NoVinculante
    Estudiante.cpp
    Estudiante.h
        main.h
        main.cpp
        Asistencia.cpp
        Asistencia.h)
