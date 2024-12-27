/* 2. Determinar si un numero es primo o no; con punteros y ademas indicar
en que posicion de memoria se guardo el numero. */

#include <iostream>

using namespace std;

int main() {
	int numero, division = 1, contador = 0;
	int *puntero = &numero;

	cout << "Ingrese un numero: ";
	cin >> numero;

	do {
		if (numero % division == 0) {
			contador++;
		}
		division++;

	} while (division <= numero && contador <= 2);

	cout << "El numero " << numero << " es " << ((contador == 2) ? "primo" : "no primo") << endl;

	puntero = nullptr;

	cin.ignore();
	cin.get();
	return 0;
}