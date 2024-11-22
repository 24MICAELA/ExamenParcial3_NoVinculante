#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include <vector>
#include "Asistencia.h"

class Estudiante {
public:
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
    std::vector<Asistencia> asistencias;


    Estudiante(const std::string& nombre, int edad, float promedio);


    void agregarMateria(const std::string& materia);
    void registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado);
    void mostrarEstudiante() const;
};

#endif
