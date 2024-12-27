/* 4. Rellenar un arreglo con n numeros, posteriormente utiliza punteros
determinar el menor elemento del arreglo.*/

#include <iostream>

using namespace std;

int main() {
	int *numeros = nullptr, n, menor = 0;

	// Pedir la cantidad de numeros a ingresar
	cout << "Ingrese la cantidad de numeros a ingresar: ";
	cin >> n;

	// Reservar memoria
	numeros = new int[n];

	// rellenar el array
	for (int i = 0; i < n; i++) {
		cout << "Ingrese un numero para la posicion [" << i << "]: ";
		cin >> numeros[i];
	}

	// Determinar menor
	for (int i = 0; i < n; i++) {
		if (numeros[i] < numeros[menor]) {
			menor = i;
		}
	}

	// imprimir resultado
	cout << endl;
	cout << "El menor numero es: " << numeros[menor] << " y su posicion en memoria es: " << &numeros[menor] << endl;

	// limpiar puntero
	delete[] numeros;
	numeros = nullptr;

	cin.ignore();
	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}