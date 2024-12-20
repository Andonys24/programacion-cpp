/* 2. Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos:
Nombre, edad, promedio. Pedir los datos al usuario para 3 alumnos, comprobar cual de los 3
tiene el mejor promedio y posteriormente imrmir los datos del alumno. */

#include <iomanip>
#include <iostream>

using namespace std;

void limpiar_consola() {
	const char *comando = ((system("clear") == 0) ? "clear" : "cls");
	system(comando);
}

struct alumno {
	string nombre;
	int edad;
	float promedio;
};

int main() {
	alumno alumnos[3];
	int mejor_alumno;

	// Pedir los datos al usuario
	for (int i = 0; i < 3; i++) {
		limpiar_consola();
		cout << "Alumno #" << i + 1 << endl;
		cout << "Nombre: ";
		getline(cin, alumnos[i].nombre);

		cout << "Edad: ";
		cin >> alumnos[i].edad;

		cout << "Promedio de notas: ";
		cin >> alumnos[i].promedio;

		cin.ignore();
	}

	// Conseguir el alumno con mayor promedio
	for (int i = 0; i < 3; i++) {
		if (alumnos[i].promedio > alumnos[mejor_alumno].promedio) {
			mejor_alumno = i;
		}
	}

	// Imprimir los datos del alumno con el mejor promedio
	limpiar_consola();
	cout << "El alumno con el mejor promedio es:" << endl;
	cout << "Nombre: " << alumnos[mejor_alumno].nombre << endl;
	cout << "Edad: " << alumnos[mejor_alumno].edad << endl;
	cout << fixed << setprecision(2) << endl;
	cout << "Promedio: " << alumnos[mejor_alumno].promedio << "%" << endl;

	cin.get();
	return 0;
}