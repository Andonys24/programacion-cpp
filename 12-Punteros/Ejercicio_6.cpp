/* 6. Hacer una funcion para lamacenar N numeros en un arreglo dinamico,
posteriormente en otra funcion buscar un numero en particular.
NOTA: Puedes utilizar cualquier metodo de busqueda (secuencial o Binario). */

#include <iostream>

using namespace std;

void pedirDatos(int &, int *&);
void encontrarNumero(int, int *);

int main() {
	int *numeros = nullptr;
	int tam;

	// Llamada a las funciones
	pedirDatos(tam, numeros);
	encontrarNumero(tam, numeros);

	// limpiar puntero
	delete[] numeros;
	numeros = nullptr;

	cin.ignore();
	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

void pedirDatos(int &cantidad, int *&arreglo) {
	cout << "Digite la cantidad de elementos: ";
	cin >> cantidad;

	arreglo = new int[cantidad];

	for (int i = 0; i < cantidad; i++) {
		cout << "Digite un numero para la posicion [" << i << "]: ";
		cin >> *(arreglo + i);
	}
}

void encontrarNumero(int cantidad, int *arreglo) {
	int dato, i = 0;
	bool encontrado = false;

	cout << "Digite el numero a buscar: ";
	cin >> dato;

	while (!encontrado && i < cantidad) {
		encontrado = (*(arreglo + i) == dato) ? true : false;
		i++;
	}

	cout << "El numero '" << dato << "' " << ((encontrado) ? "fue" : "no fue") << " encontrado";
	cout << ((encontrado) ? (" en la posicion: " + to_string(i - 1)) : "") << endl;
}