// Ordenamiento por seleccion

#include <iostream>

using namespace std;

int main() {
	int numeros[] = {3, 2, 1, 5, 4}, contador = 1, aux, min;

	// Algoritmo del ordenamiento por seleccion
	for (int i = 0; i < 5; i++) {
		min = i;
		for (int j = i + 1; j < 5; j++) {
			if (numeros[j] < numeros[min]) {
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
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