#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>

LibroCalificaciones::LibroCalificaciones() {
}

LibroCalificaciones::LibroCalificaciones(const std::string& nombreCurso, int calificaciones[][EXAMENES]) {
    setNombreCurso(nombreCurso);

    for (int est = 0; est < ESTUDIANTES; est++) {
        for (int ex = 0; ex < EXAMENES; ex++) {

            calificaciones[estudiantes][examenes] = calificaciones[estudiantes][examenes];
        }
    }
}

int LibroCalificaciones::obtenerNotaMinima() {
    int notaMinima = 0;
    for (int estudiantes = 0; estudiantes < ESTUDIANTES; estudiantes++) {
        for (int examenes = 0; examenes < EXAMENES; examenes++) {
            if (calificaciones[estudiantes][examenes]) {
                notaMinima = calificaciones[estudiantes][examenes];
            }
        }
    }

    return notaMinima;
}

int LibroCalificaciones::obtenerNotaMaxima() {
    int notaMaxima = 0;
    for (int estudiantes = 0; estudiantes < ESTUDIANTES; estudiantes++) {
        for (int examenes = 0; examenes < EXAMENES; examenes++) {
            if (calificaciones[estudiantes][examenes]) {
                notaMaxima = calificaciones[estudiantes][examenes];
            }
        }
        return notaMaxima;
    }
}

double LibroCalificaciones::ObtenerPromedio(const int[], const int) {
    double suma = 0;

    for (int i = 0; i <= EXAMENES; i++) {
        suma += i;
    }

    return suma / (EXAMENES);
}

std::string LibroCalificaciones::obtenerReporteNotas() {
    return std::string();
}

const std::string LibroCalificaciones::obtenerReporteNotasMaxMin() {
    return std::string();
}

std::string LibroCalificaciones::getNombreCurso() {
    return std::string();
}

void LibroCalificaciones::setNombreCurso(const std::string& nombreCurso) {
}