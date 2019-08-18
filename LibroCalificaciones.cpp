#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>

LibroCalificaciones::LibroCalificaciones(){}

LibroCalificaciones::LibroCalificaciones(const std::string &nombreCurso, int calificaciones[][EXAMENES]){
    setNombreCurso(nombreCurso);
    
    for(int est = 0; est < ESTUDIANTES; est++){
        for(int ex = 0; ex < EXAMENES; ex++){
    
            calificaciones[estudiantes][examenes]=calificaciones[estudiantes][examenes];
        }
    }
}

int LibroCalificaciones::obtenerNotaMinima(){
    int notaMinima=0;
    for(int estudiantes=0;estudiantes<ESTUDIANTES;estudiantes++){
        for(examenes=0;examenes<EXAMENES;examenes++){
            if(calificaciones[estudiantes][examenes]){
                notaMinima=calificaciones[estudiantes][examenes];
            }
        }
    }
    
    return notaMinima;
}