/* 11. Realize una funcion que tome como parametros un vector de
numeros entero y devuelva la suma de sus elementos.*/

#include <iostream>

using namespace std;

void limpiar_consola();
void ingresar_datos(int[], int);
void sumarArgs(int[], int, int &);

int main() {
	int *numeros = nullptr;
	int tam, resultado = 0;

	cout << "Ingrese la cantidad de datos a sumar: ";
	cin >> tam;

	numeros = new int[tam];

	// Llamar funciones
	ingresar_datos(numeros, tam);
	sumarArgs(numeros, tam, resultado);

	// Imprimir datos
	limpiar_consola();
	cout << "La suma de todos los elementos del arrglo es: " << resultado << endl;

	// Limpiar puntero
	delete[] numeros;
	numeros = nullptr;

	cin.get();
	return 0;
}

void limpiar_consola() {
	const char *comando = (system("clear") == 0) ? "clear" : "cls";
	system(comando);
}

void ingresar_datos(int array[], int tam) {
	limpiar_consola();
	for (int i = 0; i < tam; i++) {
		cout << "Ingrese el valor del indice [" << i << "]: ";
		cin >> array[i];
	}
}

void sumarArgs(int array[], int tam, int &suma) {
	for (int i = 0; i < tam; i++) {
		suma += array[i];
	}
}