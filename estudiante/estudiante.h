// estudiante.h
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#define MAX_MATERIAS 10

// Estructura que representa a un estudiante
typedef struct {
    char nombre[100];
    int edad;
    double promedio;
    char materias[MAX_MATERIAS][50]; // Array de materias
    int num_materias; // Número actual de materias inscritas
} Estudiante;

// Declaración de las funciones
void mostrarEstudiante(Estudiante *estudiante);
void agregarMateria(Estudiante *estudiante, const char *materia);
void eliminarMateria(Estudiante *estudiante, const char *materia);

#endif // ESTUDIANTE_H

