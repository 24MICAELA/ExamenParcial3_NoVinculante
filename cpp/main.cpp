#include "main.h"

#include <iostream>
#include "Estudiante.h"

int main() {
    // Crear objeto Estudiante
    Estudiante estudiante("Juan Pérez", 20, 8.5);

    // Agregar materias
    estudiante.agregarMateria("Matemáticas");
    estudiante.agregarMateria("Historia");

    // Registrar asistencias
    estudiante.registrarAsistencia("2024-11-20", "Matemáticas", "Asistió");
    estudiante.registrarAsistencia("2024-11-21", "Historia", "Falta");

    // Mostrar información del estudiante
    estudiante.mostrarEstudiante();

    return 0;
}
