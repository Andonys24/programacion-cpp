/* 3. Rellenar un array de 10 numeros, posteriormente utilizando punteros
indicar cuales son numeros pares y su posicion en memoria. */

#include <iostream>

using namespace std;

int main() {
	int *puntero = nullptr;
	int numeros[10];

	puntero = numeros;

	// Rellenar el array
	for (int i = 0; i < 10; i++) {
		cout << "Ingrese un numero para la posicion [" << i << "]: ";
		cin >> *(puntero + i);
	}

	// Mostrar los numeros pares
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (*(puntero + i) % 2 == 0) {
			cout << "El numero " << *(puntero + i) << " es par y su posicion en memoria es: " << (puntero + i) << endl;
		}
	}

	puntero = nullptr;

	cin.ignore();
	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}