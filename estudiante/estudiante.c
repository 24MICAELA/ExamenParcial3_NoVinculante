// estudiante.c
#include <stdio.h>
#include <string.h>
#include "estudiante.h"

// Función para mostrar los datos de un estudiante
void mostrarEstudiante(Estudiante *estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);
    printf("Materias inscritas: ");
    if (estudiante->num_materias == 0) {
        printf("Ninguna\n");
    } else {
        for (int i = 0; i < estudiante->num_materias; i++) {
            printf("%s ", estudiante->materias[i]);
        }
        printf("\n");
    }
}

// Función para agregar una materia al estudiante
void agregarMateria(Estudiante *estudiante, const char *materia) {
    if (estudiante->num_materias < MAX_MATERIAS) {
        strcpy(estudiante->materias[estudiante->num_materias], materia);
        estudiante->num_materias++;
    } else {
        printf("Error: El estudiante ya tiene el máximo de materias.\n");
    }
}

// Función para eliminar una materia del estudiante
void eliminarMateria(Estudiante *estudiante, const char *materia) {
    int found = 0;
    for (int i = 0; i < estudiante->num_materias; i++) {
        if (strcmp(estudiante->materias[i], materia) == 0) {
            found = 1;
            for (int j = i; j < estudiante->num_materias - 1; j++) {
                strcpy(estudiante->materias[j], estudiante->materias[j + 1]);
            }
            estudiante->num_materias--;
            break;
        }
    }
    if (!found) {
        printf("Materia no encontrada.\n");
    }
}
