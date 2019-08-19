#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>

class LibroCalificaciones {
    static const int estudiantes = 10;
    static const int examenes = 3;
    std::string nombreCurso;
    int calificaciones[ESTUDIANTES][EXAMENES];
    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    double ObtenerPromedio(const int[], const int);

public:
    LibroCalificaciones();
    LibroCalificaciones(const std::string& nombreCurso, int[][EXAMENES]);
    std::string obtenerReporteNotas();

    const std::string obtenerReporteNotasMaxMin();
    std::string getNombreCurso();
    void setNombreCurso(const std::string& nombreCurso);

};

#endif //CALIFICACIONES_LIBROCALIFICACIONES_H