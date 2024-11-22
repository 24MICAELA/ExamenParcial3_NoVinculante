#include <iostream>
#include "Estudiante.h"

Estudiante::Estudiante(const std::string& nombre, int edad, float promedio)
    : nombre(nombre), edad(edad), promedio(promedio) {}

void Estudiante::agregarMateria(const std::string& materia) {
    materias.push_back(materia);
}

void Estudiante::registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado) {
    asistencias.push_back(Asistencia(fecha, materia, estado));
}

void Estudiante::mostrarEstudiante() const {
    std::cout << "Nombre: " << nombre << "\nEdad: " << edad << "\nPromedio: " << promedio << std::endl;

    std::cout << "\nMaterias:" << std::endl;
    for (const auto& materia : materias) {
        std::cout << "  - " << materia << std::endl;
    }

    std::cout << "\nAsistencias:" << std::endl;
    for (const auto& asistencia : asistencias) {
        asistencia.mostrarAsistencia();
    }
}
