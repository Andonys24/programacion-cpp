/* 4. Pedir al usuario N numeros, almacenarlos en un arreglo dinamico, posteriormente
ordenar los numeros en orden ascendete y mostrarlos en pantalla
NOTA: Utiliza cualquier metodo de ordenamento */

#include <iostream>

using namespace std;

void pedirDatos(int &, int *&);
void ordenarArrayBurbuja(int, int *&);
void mostrarArray(int, int *, string);

int main() {
	int *numeros = nullptr;
	int n;

	// Llamada a las funciones
	pedirDatos(n, numeros);
	ordenarArrayBurbuja(n, numeros);
	mostrarArray(n, numeros, "Numeros ordenados");

	// Liberar memoria
	delete[] numeros;
	numeros = nullptr;

	cin.ignore();
	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

void pedirDatos(int &n, int *&numeros) {
	cout << "Ingrese la cantidad de numeros a ingresar: ";
	cin >> n;

	numeros = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Ingrese un numero para la posicion [" << i << "]: ";
		cin >> *(numeros + i);
	}
}

void ordenarArrayBurbuja(int n, int *&numeros) {
	int aux;
	// Algoritmo metodo burbuja
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n - 1); j++) {
			if (*(numeros + j) > *(numeros + j + 1)) {
				aux = *(numeros + j);
				*(numeros + j) = *(numeros + j + 1);
				*(numeros + j + 1) = aux;
			}
		}
	}
}

void mostrarArray(int n, int *numeros, string titulo) {
	cout << "\n" << titulo << endl;
	for (int i = 0; i < n; i++) {
		cout << "Numero [" << i << "]: " << *(numeros + i) << endl;
	}
}