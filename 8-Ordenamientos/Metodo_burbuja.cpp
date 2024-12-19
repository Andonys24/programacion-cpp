// Metodo burbuja

#include <iostream>

using namespace std;

int main() {
	int numeros[] = {4, 1, 2, 3, 5}, aux, contador = 1;

	// Algoritmo metodo burbuja
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (numeros[j] > numeros[j + 1]) {
				aux = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = aux;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << ((i == 0) ? "\nascendente\n" : (i == 5) ? "\ndecendente\n" : "");
		(i > 5) ? contador += 2 : contador;
		cout << ((i < 5) ? numeros[i] : numeros[i - contador]) << endl;
	}

	cin.get();
	return 0;
}