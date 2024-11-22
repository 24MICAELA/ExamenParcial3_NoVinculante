// main.c
#include <stdio.h>
#include "estudiante.h"

int main() {
    // Crear un estudiante
    Estudiante estudiante1 = {"Juan Perez", 20, 8.5, {0}, 0};

    // Agregar materias
    agregarMateria(&estudiante1, "Matematicas");
    agregarMateria(&estudiante1, "Fisica");

    // Mostrar información del estudiante
    mostrarEstudiante(&estudiante1);

    // Eliminar una materia
    eliminarMateria(&estudiante1, "Fisica");

    // Mostrar la nueva información del estudiante
    mostrarEstudiante(&estudiante1);

    return 0;
}
