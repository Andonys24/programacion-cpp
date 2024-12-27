/* Transimision de arreglos
Ejemplo: Hallar el maximo elemento de un arreglo. */

#include <iostream>

using namespace std;
int encontarMax(int, int *);

int main() {
	const int nElementos = 5;
	int numeros[nElementos] = {1, 5, 3, 4, 2};

	cout << "El maximo elemento del arreglo es: " << numeros[encontarMax(nElementos, numeros)] << endl;

	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

int encontarMax(int nElementos, int *dir_array) {
	int max = 0;

	for (int i = 1; i < nElementos; i++) {
		if (*(dir_array + i) > *(dir_array + max)) {
			max = i;
		}
	}

	return max;
}