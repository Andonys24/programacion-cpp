/* 2. Hacer un programa de C++ utilizando Pilas que contenga el siguiente menu:
1. Insertar un caracter a la pila.
2. Mostrar todos los elementos de la pila.
3. Salir.
*/

#include <iostream>

using namespace std;

struct Nodo {
	char caracter;
	Nodo *siguiente;
};

// Prototipos
void limpiarConsola();
void insertarPila(Nodo *&, char);
void mostrarElementos(Nodo *);
void limpiarPila(Nodo *&);

int main() {
	Nodo *pila = nullptr;
	bool continuar = true;

	// Menu
	while (continuar) {
		int opcion = NULL;

		limpiarConsola();

		cout << "*** Menu ***" << endl;
		cout << "[1] - Insertar caracter a la pila." << endl;
		cout << "[2] - Mostrar todos los elementos ingresados." << endl;
		cout << "[3] - Salir." << endl;
		cout << "Opcion: ";
		cin >> opcion;

		limpiarConsola();
		switch (opcion) {
		case 1:
			char dato;
			cout << "Ingrese un caracter: ";
			cin >> dato;
			insertarPila(pila, dato);
			break;
		case 2:
			mostrarElementos(pila);
			break;
		case 3:
			limpiarPila(pila);
			cout << "Saliendo..." << endl;
			continuar = false;
			break;
		default:
			cout << "Opcion no valida..." << endl;
			break;
		}
		cin.ignore();
		cout << "\nPresione una tecla para continuar...";
		cin.get();
	}

	return 0;
}

// Funciones
void limpiarConsola() {
	const char *commando = (system("clear") == 0) ? "clear" : "cls";
	system(commando);
}

void insertarPila(Nodo *&pila, char dato) {
	Nodo *new_nodo = new Nodo();
	new_nodo->caracter = dato;
	new_nodo->siguiente = pila;
	pila = new_nodo;

	cout << "Caracter ingresado correctamente" << endl;
}

void mostrarElementos(Nodo *pila) {
	Nodo *actual = pila;

	cout << "Caracteres ingresados:" << endl;
	while (actual != nullptr) {
		cout << actual->caracter << ((actual->siguiente != nullptr) ? " , " : ".");
		actual = actual->siguiente;
	}
	cout << endl;
}

void limpiarPila(Nodo *&pila) {
	while (pila != nullptr) {
		Nodo *temp = pila;
		pila = temp->siguiente;
		delete temp;
		temp = nullptr;
	}
}