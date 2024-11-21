#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include <vector>

class Estudiante {
public:
    Estudiante(std::string nombre, int edad, double promedio);
    std::string nombre;
    int edad;
    double promedio;
    std::vector<std::string> materias;
};

// Function declarations
void mostrarEstudiante(const Estudiante& est);
void agregarMateria(Estudiante& est, const std::string& materia);
void mostrarMaterias(const Estudiante& est);

#endif