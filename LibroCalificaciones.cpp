#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>

LibroCalificaciones::LibroCalificaciones() {
}

LibroCalificaciones::LibroCalificaciones(const std::string& nombreCurso, int arregloCalificaciones[ESTUDIANTES][EXAMENES]) {
    setNombreCurso(nombreCurso);

    for (int est = 0; est < ESTUDIANTES; est++) {
        for (int ex = 0; ex < EXAMENES; ex++) {

            calificaciones[est][ex] = arregloCalificaciones[est][ex];
        }
    }
}

int LibroCalificaciones::obtenerNotaMinima() {
    int notaMinima = 100;
    for (int est = 0; est < ESTUDIANTES; est++) {
        for (int ex = 0; ex < EXAMENES; ex++) {
            if (calificaciones[est][ex] < notaMinima) {
                notaMinima = calificaciones[est][ex];
            }
        }
    }

    return notaMinima;
}

int LibroCalificaciones::obtenerNotaMaxima() {
    int notaMaxima = 0;
    for (int est = 0; est < ESTUDIANTES; est++) {
        for (int ex = 0; ex < EXAMENES; ex++) {
            if (calificaciones[est][ex] > notaMaxima) {
                notaMaxima = calificaciones[est][ex];
            }
        }
    }
    return notaMaxima;
}

double LibroCalificaciones::ObtenerPromedio(const int est, const int examen) {
    float promedio = 0;
    float suma = 0;

    for (int ex = 0; ex < examen; ex++) {
        suma = suma + calificaciones[est][ex];

    }
    promedio = suma / 3;
    return promedio;
}

std::string LibroCalificaciones::obtenerReporteNotas() {
    std::string reporteNotas = "\nLas siguientes son las notas del curso [Curso Progra I] :\n\t\t\t\Examen 1\tExamen 2\tExamen 3\tPromedio";
    for (int est = 0; est < ESTUDIANTES; est++) {
        reporteNotas = reporteNotas + "\nEstudiante[" + std::to_string(est) + "]\t\t" + std::to_string(calificaciones[est][0]) + "\t\t"
                + std::to_string(calificaciones[est][1]) + "\t\t" + std::to_string(calificaciones[est][2]) + "\t\t"
                + std::to_string(ObtenerPromedio(est, 3)) + "\t\t";
    }
    return reporteNotas;
}

const std::string LibroCalificaciones::obtenerReporteNotasMaxMin() {
    std::string reporte = "";

    reporte = "\nLa nota minima es: [" + std::to_string(obtenerNotaMinima()) + "]\n";
    reporte += "La nota maxima es: [" + std::to_string(obtenerNotaMaxima()) + "]\n";

    return reporte;
}

const std::string LibroCalificaciones::getNombreCurso() {
    return nombreCurso;
}

void LibroCalificaciones::setNombreCurso(const std::string& nombreCurso) {
    LibroCalificaciones::nombreCurso = nombreCurso;
}