#include <iostream>
#include "LibroCalificaciones.h"

int main() {
	static const int ESTUDIANTES = 10;
	static const int EXAMENES = 3;

	int listaCalificaciones[ESTUDIANTES][EXAMENES] = {
		{87, 96, 70}, {68, 87, 90}, {94, 100, 90}, {100, 81, 82}, {83, 65, 85},
		{78, 87, 65}, {85, 75, 83}, {91, 94, 100}, {76, 72, 84},  {87, 93, 73}
	};
	LibroCalificaciones libro("Curso Progra I", listaCalificaciones);

	std::cout << libro.obtenerReporteNotas() << std::endl;
	std::cout << libro.obtenerReporteNotasMaxMin() << std::endl;
}