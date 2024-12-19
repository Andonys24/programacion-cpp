// Ordenamiento por Insercion

#include <iostream>

using namespace std;

int main() {
	int numeros[] = {4, 2, 3, 1, 5}, aux, posicion, contador = 1;

	// Algoritmo del ordenamiento por insercion
	for (int i = 0; i < 5; i++) {
		posicion = i;
		aux = numeros[i];

		while ((posicion > 0) && (numeros[posicion - 1] > aux)) {
			numeros[posicion] = numeros[posicion - 1];
			posicion--;
		}
		numeros[posicion] = aux;
	}

	// Imprimir numeross ordenados
	for (int i = 0; i < 10; i++) {
		cout << ((i == 0) ? "\nascendente\n" : (i == 5) ? "\ndecendente\n" : "");
		(i > 5) ? contador += 2 : contador;
		cout << ((i < 5) ? numeros[i] : numeros[i - contador]) << endl;
	}

	cin.get();
	return 0;
}