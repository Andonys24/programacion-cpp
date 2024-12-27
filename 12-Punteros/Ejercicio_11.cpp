/* 11. Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los 3
tiene el mejor promedio y posteriormente imprimir datos del alumno.
NOTA: Usar punteros a estructura. */

#include <iostream>

using namespace std;

struct Alumno {
	string nombre;
	int edad;
	float promedio;
} alumnos[3];

void PedirDatos(Alumno *);
int calcularMejorProm(Alumno *);
void imprimirAlumno(Alumno *, int);

int main() {
	Alumno *puntero = alumnos;
	int mejorProm = 0;

	// Pedir datos
	PedirDatos(puntero);
	// Obtener alumno con mejor promedio
	mejorProm = calcularMejorProm(puntero);
	// Imprimir quien fue el mejor alumno
	imprimirAlumno(puntero, mejorProm);

	puntero = nullptr;

	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

void PedirDatos(Alumno *puntero) {
	for (int i = 0; i < 3; i++) {
		cout << "Alumnos #" << i + 1 << endl;
		cout << "Ingrese el nombre: ";
		getline(cin, (puntero + i)->nombre);
		cout << "Ingrese la edad: ";
		cin >> (puntero + i)->edad;
		cout << "Ingrese el promedio: ";
		cin >> (puntero + i)->promedio;
		cout << endl;
		cin.ignore();
	}
}

int calcularMejorProm(Alumno *puntero) {
	int mejor = 0;
	for (int i = 1; i < 3; i++) {
		if ((puntero + i)->promedio > (puntero + mejor)->promedio) {
			mejor = i;
		}
	}

	return mejor;
}

void imprimirAlumno(Alumno *puntero, int mejor) {
	cout << endl;
	cout << "El alumno con la mejor nota es:" << endl;
	cout << "Nombre: " << (puntero + mejor)->nombre << endl;
	cout << "Edad: " << (puntero + mejor)->edad << endl;
	cout << "Promedio: " << (puntero + mejor)->promedio << "%" << endl;
}