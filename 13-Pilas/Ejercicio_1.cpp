/* 1. Hacer un programa para agregar numeros enteros a una pila, hasta que
el usuario decida, despues mostrar todos los numeros introducidos en la pila. */

#include <cctype>
#include <iostream>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

// Prototipos
void agregarPila(Nodo *&, int);
void quitarPila(Nodo *&, int &);

int main() {
	Nodo *pila = nullptr;
	int dato;
	char respt;

	// Pedir datos al usuario
	do {
		cout << "Ingrese un numero: ";
		cin >> dato;
		agregarPila(pila, dato);
		cout << "\nDesea agregar otro elemento a la PILA (S/n): ";
		cin >> respt;
		cin.ignore();

	} while (tolower(respt) == 's');

	// Quitar elementos de la pila
	cout << "\nQuitando tood los elementos de la Pila:" << endl;
	while (pila != nullptr) {
		quitarPila(pila, dato);
		cout << dato << ((pila != nullptr) ? " , " : ".");
	}

	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

// Funciones
void agregarPila(Nodo *&pila, int dato) {
	// Agregar elementos a la pila
	Nodo *new_nodo = new Nodo();
	new_nodo->dato = dato;
	new_nodo->siguiente = pila;
	pila = new_nodo;

	// Decirle al usuario q se agrego el elemento correctamente
	cout << "El elemento '" << dato << "' ha sido agregado a la pila." << endl;
}

void quitarPila(Nodo *&pila, int &dato) {
	// Quitar ultimo elemento ingresado de la pila
	Nodo *auxiliar = pila;
	dato = auxiliar->dato;
	pila = auxiliar->siguiente;
	delete auxiliar;
	auxiliar = nullptr;
}