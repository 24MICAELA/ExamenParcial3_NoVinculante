//
// Created by barba on 21/11/2024.
//

#include "Estudiante.h"
#include <iostream>
#include <utility>

Estudiante::Estudiante(std::string nombre, int edad, double promedio)
    : nombre(std::move(nombre)), edad(edad), promedio(promedio) {}

void mostrarEstudiante(const Estudiante& est) {
    std::cout << "Nombre: " << est.nombre << std::endl;
    std::cout << "Edad: " << est.edad << std::endl;
    std::cout << "Promedio: " << est.promedio << std::endl;
}

void agregarMateria(Estudiante& est, const std::string& materia) {
    est.materias.push_back(materia);
}

void mostrarMaterias(const Estudiante& est) {
    std::cout << "Materias de " << est.nombre << ":" << std::endl;
    for (const auto& materia : est.materias) {
        std::cout << materia << std::endl;
    }
}