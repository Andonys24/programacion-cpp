/* Asignacion inamica de arreglos
new: Reserva el numero de bytes solicitados por la declaracion.
delete: libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al usurio n calificacion y almacenarlos en un arreglo dinamico. */

#include <iostream>

using namespace std;

void pedirNotas(int, int *);
void mostrarCalificaciones(int, int *);

int main() {
	int *califs = nullptr;
	int nCalif;

	pedirNotas(nCalif, califs);

	// Liberar la memoria utilizada
	delete[] califs;  // Se libera el espacio de memoria reservado
	califs = nullptr; // Se asigna el valor nulo al puntero

	cin.ignore();
	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

void pedirNotas(int nCalif, int *calificaciones) {
	cout << "Ingrese el numero de calificaciones: ";
	cin >> nCalif;

	calificaciones = new int[nCalif];

	for (int i = 0; i < nCalif; i++) {
		cout << "Ingrese la calificacion [" << i << "]: ";
		cin >> *(calificaciones + i);
	}

	mostrarCalificaciones(nCalif, calificaciones);
}

void mostrarCalificaciones(int ncalif, int *calificaciones) {
	cout << "Calificaciones ingresadas" << endl;

	for (int i = 0; i < ncalif; i++) {
		cout << "Calificacion [" << i << "]: " << *(calificaciones + i) << endl;
	}
}