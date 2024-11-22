cmake_minimum_required(VERSION 3.10)
project(ExamenParcial3_NoVinculante)

# Configurar el estándar de C
set(CMAKE_C_STANDARD 99)

# Añadir los archivos fuente C
set(SOURCES
        main.c
        estudiante/estudiante.c
        main.h
)

# Crear el ejecutable con un nombre diferente
add_executable(ExamenParcial3_Programa ${SOURCES})

# Incluir directorios adicionales si es necesario
include_directories(estudiante)
