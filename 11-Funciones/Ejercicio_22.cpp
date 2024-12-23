/* 22. Escriba una funcion escribeNumeros(int ini, int fin)
que devuelva en la salida estandar los numeros del inicio al fin.
Escriba una version que escriba los numeros en orden ascendente. */

#include <iostream>

using namespace std;
void escribeNumeros(int, int);

int main() {
	int start, end, temp;

	// pedir datos al usuario
	cout << "Ingrese el numero inicial: ";
	cin >> start;
	cout << "Ingrese el numero final: ";
	cin >> end;

	// llamar funcion
	escribeNumeros(start, end);

	cin.ignore();
	cin.get();
	return 0;
}

void escribeNumeros(int start, int end) {
	if (start == end) {
		cout << end << "." << endl;
	}

	if (start > end) {
		cout << start-- << ", ";
		escribeNumeros(start, end);
	}

	if (start < end) {
		cout << start++ << ", ";
		escribeNumeros(start, end);
	}
}