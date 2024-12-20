/* 7. Defina una estructura que indique el tiempo empleado por un ciclista en
una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado n etapadas calcule el tiempo total empleado en correr
todas las etapas. */

#include <iostream>

using namespace std;

struct Etapa {
	int horas, minutos, segundos;
};

void limpiar_consola() {
	const char *comando = ((system("clear") == 0) ? "clear" : "cls");
	system(comando);
}

int main() {
	Etapa *etapas = nullptr;
	int n_etapas, hor_tot = 0, min_tot = 0, seg_tot = 0;

	cout << "Ingrese el numero de etapas: ";
	cin >> n_etapas;

	// Crear nuevo arreglo dinamico
	etapas = new Etapa[n_etapas];

	// Pedir los datos al usuario
	for (int i = 0; i < n_etapas; i++) {
		limpiar_consola();
		cout << "Ingrese el timepo de la Etapa N." << i + 1 << endl;
        
		cout << "Horas: ";
		cin >> etapas[i].horas;

		cout << "Minutos: ";
		cin >> etapas[i].minutos;

		cout << "Segundos: ";
		cin >> etapas[i].segundos;

		seg_tot += etapas[i].segundos;
		(seg_tot >= 60) ? (seg_tot -= 60, min_tot++) : seg_tot;

		min_tot += etapas[i].minutos;
		(min_tot >= 60) ? (min_tot -= 60, hor_tot++) : min_tot;

		hor_tot += etapas[i].horas;
	}

	// Mostrar el total de tiempo empleado
	limpiar_consola();
	cout << "Tiempo empleado:" << endl;
	cout << hor_tot << " horas con " << min_tot << " minutos y " << seg_tot << " segundos." << endl;
	cout << hor_tot << ":" << min_tot << ":" << seg_tot << endl;

	// Limpiar puntero
	delete[] etapas;
	etapas = nullptr;

	cin.get();
	return 0;
}