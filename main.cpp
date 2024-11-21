
#include "Estudiante.h"
#include <iostream>

int main() {

    Estudiante estudiante("Juan Pérez", 20, 8.5);


    mostrarEstudiante(estudiante);


    agregarMateria(estudiante, "Matemáticas");
    agregarMateria(estudiante, "Física");


    mostrarMaterias(estudiante);

    return 0;
}