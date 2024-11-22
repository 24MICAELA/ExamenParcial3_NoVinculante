cmake_minimum_required(VERSION 3.10)
project(ExamenParcial3_NoVinculante)

# Configurar el estándar de C
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(c
        estudiante/estudiante.c
        main.c
        estudiante/estudiante.h

)