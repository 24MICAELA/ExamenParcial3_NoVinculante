#include <iostream>
#include "Asistencia.h"

Asistencia::Asistencia(const std::string& fecha, const std::string& materia, const std::string& estado)
    : fecha(fecha), materia(materia), estado(estado) {}

void Asistencia::mostrarAsistencia() const {
    std::cout << "Fecha: " << fecha << " | Materia: " << materia << " | Estado: " << estado << std::endl;
}
