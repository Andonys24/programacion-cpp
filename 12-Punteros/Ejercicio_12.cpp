/* 12. Defina una structura que indique el tiempo empleado por un ciclista en recorrer una etapa.
La estructura debe tener tres campos: horas, minutos, segundos. Escriba un programa que dado 3 etapas
calcule el tiempo total empleado en correr todas las etapas.
Nota: Usar punteros. */

#include <iostream>

using namespace std;

struct Etapa {
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
};

void pedirDatos(Etapa *);
void calcularTiempoEmpleado(Etapa *);
void imprmirTotal(Etapa *);

int main() {
	Etapa etapas[4];
	Etapa *puntero = etapas;

	pedirDatos(puntero);
	calcularTiempoEmpleado(puntero);
	imprmirTotal(puntero);

	puntero = nullptr;

	cin.ignore();
	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

void pedirDatos(Etapa *etapas) {
	// Pedir los datos al usuario de la hora, minutos y segundos empleados
	for (int i = 0; i < 3; i++) {
		cout << "Etapa #" << i + 1 << endl;
		cout << "Ingrese las horas empleados: ";
		cin >> (etapas + i)->hours;
		cout << "Ingrese los minutos empleads: ";
		cin >> (etapas + i)->minutes;
		cout << "Ingrese las segundos empleados: ";
		cin >> (etapas + i)->seconds;
		cout << endl;
	}
}

void calcularTiempoEmpleado(Etapa *etapas) {
	// Sumar todas las horas, minutos y segundos
	for (int i = 0; i < 3; i++) {
		(etapas + 3)->seconds += (etapas + i)->seconds;

		if ((etapas + 3)->seconds >= 60) {
			(etapas + 3)->seconds -= 60;
			(etapas + 3)->minutes++;
		}

		(etapas + 3)->minutes += (etapas + i)->minutes;

		if ((etapas + 3)->minutes >= 60) {
			(etapas + 3)->minutes -= 60;
			(etapas + 3)->hours++;
		}

		(etapas + 3)->hours += (etapas + i)->hours;
	}
}

void imprmirTotal(Etapa *etapas) {
	// Imprmir los datos del tiempo total empleado.
	cout << "Total de tiempo empleado:" << endl;
	cout << (etapas + 3)->hours << " horas con ";
	cout << (etapas + 3)->minutes << " minutos y ";
	cout << (etapas + 3)->seconds << " segundos.";
}