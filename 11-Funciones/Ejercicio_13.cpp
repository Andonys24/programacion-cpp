/* 13. Realizar una funcion que tome como parametro un vector de numeros
y su tamanio y cambie el signo de los elementos del vector. */

#include <iostream>

using namespace std;

void limpiarConsola();
void pedirDatos(int[], int);
void cambiarSigno(int[], int);
void mostrarArreglo(int[], int);

int main() {
	int *numeros = nullptr;
	int n;

	cout << "Ingrese el tamanio del arreglo: ";
	cin >> n;

	numeros = new int[n];

	// Pedir datos al usuario
	pedirDatos(numeros, n);
	// Cambiar signo a los valores
	cambiarSigno(numeros, n);

	// Mostrar el vector
	mostrarArreglo(numeros, n);

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

void cambiarSigno(int arreglo[], int tam) {
	for (int i = 0; i < tam; i++) {
		arreglo[i] *= -1;
	}
}

void mostrarArreglo(int arreglo[], int tam) {
	limpiarConsola();
	cout << "Elementos del vector con el signo cambiado:" << endl;
	for (int i = 0; i < tam; i++) {
		cout << "[" << i << "] - Valor: " << arreglo[i] << endl;
	}
}