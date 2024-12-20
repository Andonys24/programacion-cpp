/* 6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N
alumnos, y calcuar cual de todos tiene el mejor promedio, e imprimir sus datos. */

#include <iomanip>
#include <iostream>

using namespace std;

void limpiar_consola() {
	const char *comando = ((system("clear") == 0) ? "clear" : "cls");
	system(comando);
}

struct Promedio {
	float nota1;
	float nota2;
	float nota3;

	// Metodo para calcular el promedio
	float calcular_promedio() const { return (nota1 + nota2 + nota3) / 3; }
};

struct Alumno {
	string nombre;
	string sexo;
	int edad;
	Promedio prom;
};

int main() {
	Alumno *alumnos = nullptr;
	int n, m = 0;
	float mejor_prom = 0;

	cout << "Ingrese la cantidad de alumnos a ingresar: ";
	cin >> n;

	alumnos = new Alumno[n];

	for (int i = 0; i < n; i++) {
		int g = 0;

		limpiar_consola();
		cout << "Ingrese los datos del alumno #" << i + 1 << endl;
		cin.ignore();

		cout << "Nombre: ";
		getline(cin, alumnos[i].nombre);

		cout << "Ingrese su Sexo:" << endl;
		cout << "[1] - Femenino" << endl;
		cout << "[2] - Masculino" << endl;
		cout << "opcion: ";
		cin >> g;

		alumnos[i].sexo = ((g == 1) ? "Femenino" : (g == 2) ? "Masculino" : "No definido");

		cout << "Edad: ";
		cin >> alumnos[i].edad;

		cout << "Nota 1: ";
		cin >> alumnos[i].prom.nota1;
		cout << "Nota 2: ";
		cin >> alumnos[i].prom.nota2;
		cout << "nota 3: ";
		cin >> alumnos[i].prom.nota3;
	}

	// Obtener el indice del alumno con mejor promedio
	for (int i = 0; i < n; i++) {
		mejor_prom = alumnos[m].prom.calcular_promedio();
		float prom_ac = alumnos[i].prom.calcular_promedio();
		if (prom_ac > mejor_prom) {
			mejor_prom = prom_ac;
			m = i;
		}
	}

	// Imprimir los datos del alumno con mejor promedio
	limpiar_consola();
	cout << "Alumno con mejor promedio:" << endl;
	cout << "Nombre: " << alumnos[m].nombre << endl;
	cout << "Sexo: " << alumnos[m].sexo << endl;
	cout << "Edad: " << alumnos[m].edad << endl;
	cout << fixed << setprecision(2);
	cout << "Promedio Notas: " << mejor_prom << "%" << endl;

	// Limpiar puntero
	delete[] alumnos;
	alumnos = nullptr;

	cin.get();
	return 0;
}