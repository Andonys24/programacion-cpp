/* 14. Realizar una funcion que tome como parametros un vector de enteros
y su tamanio e imprimir un vector con los elementos impares del vector recibido*/

#include <iostream>

using namespace std;

void limpiarConsola();
void pedirDatos(int[], int);
void imprimirImpares(int[], int);

int main() {
	int *numeros = nullptr;
	int n;

	cout << "Ingrese el tamanio del arreglo: ";
	cin >> n;

	numeros = new int[n];

	// pedir datos al usuario
	pedirDatos(numeros, n);

	// Imprimir los valores impares del arreglo
	imprimirImpares(numeros, n);

	// Limpiar puntero
	delete[] numeros;
	numeros = nullptr;

	cin.get();
	return 0;
}

void limpiarConsola() {
	const char *comando = (system("clear") == 0) ? "clear" : "cls";
	system(comando);
}

void pedirDatos(int arreglo[], int tam) {
	limpiarConsola();
	for (int i = 0; i < tam; i++) {
		cout << "Ingrese el valor del indice [" << i << "]: ";
		cin >> arreglo[i];
	}
}

void imprimirImpares(int arreglo[], int tam) {
	limpiarConsola();
	for (int i = 0; i < tam; i++) {
		if (!(arreglo[i] % 2 == 0)) {
			cout << "[" << i << "] - valor: " << arreglo[i] << endl;
		}
	}
}