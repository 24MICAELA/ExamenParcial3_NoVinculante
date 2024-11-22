#ifndef ASISTENCIA_H
#define ASISTENCIA_H

#include <string>

class Asistencia {
public:
    std::string fecha;
    std::string materia;
    std::string estado; // Ejemplo: "Asistió", "Falta", "Tardanza"


    Asistencia(const std::string& fecha, const std::string& materia, const std::string& estado);

    // Método para mostrar la asistencia
    void mostrarAsistencia() const;
};

#endif
