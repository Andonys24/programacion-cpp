/* Ejercicio 1: Crear una lista que almacene "n" numeros enteros y calcular el menor y mayor de ellos */

#include <iostream>
#include <limits>

using namespace std;

struct Nodo {
	int numero;
	Nodo *siguiente;
};

// Prototipos de funciones
int validarNumero(string);
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMenorMayor(Nodo *);
void liberarMemoria(Nodo *&);

int main() {
	Nodo *lista = nullptr;
	int opcion = 0;

	// Pedir datos al usuario
	do {
		insertarLista(lista, validarNumero("Ingrese un numero"));

		opcion = validarNumero("Desea ingresar otro numero? (1. Si / 0. No): ");
	} while (opcion != 0);

	// Mostrar lista
	mostrarLista(lista);

	// Calcular el menor y mayor de la lista
	calcularMenorMayor(lista);

	// Liberar memoria
	liberarMemoria(lista);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "\nPresione Enter para salir...";
	cin.get();

	return 0;
}

int validarNumero(string mensaje) {
	int numero = 0;
	bool validado = false;

	while (!validado) {
		cout << "\n" << mensaje << ": ";
		if (cin >> numero) {
			validado = true;
		} else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Por favor, ingrese un numero valido" << endl;
		}
	}

	return numero;
}

void insertarLista(Nodo *&lista, int elemento) {
	Nodo *nuevoNodo = new Nodo();
	Nodo *aux = nullptr;

	nuevoNodo->numero = elemento;
	nuevoNodo->siguiente = nullptr;

	if (lista == nullptr) {
		lista = nuevoNodo;
	} else {
		aux = lista;						// apuntar al inicio de la lista
		while (aux->siguiente != nullptr) { // recorrer la lista
			aux = aux->siguiente;			// avanzar al siguiente nodo
		}
		aux->siguiente = nuevoNodo; // agregar nuevo nodo al final de la lista
	}

	cout << "Elemento " << elemento << " fue insertado correctamente." << endl;
}

void mostrarLista(Nodo *lista) {
	cout << "Los elementos de la lista son:" << endl;
	while (lista != nullptr) {
		cout << lista->numero << ((lista->siguiente != nullptr) ? " -> " : ".\n");
		lista = lista->siguiente; // avanzar al siguiente nodo
	}
}

void calcularMenorMayor(Nodo *lista) {
	int mayor = lista->numero;
	int menor = lista->numero;

	while (lista != nullptr) {
		mayor = (lista->numero > mayor) ? lista->numero : mayor;
		menor = (lista->numero < menor) ? lista->numero : menor;
		lista = lista->siguiente;
	}

	cout << "El numero mayor de la lista es: " << mayor << endl;
	cout << "El numero menor de la lista es: " << menor << endl;
}

void liberarMemoria(Nodo *&lista) {
	Nodo *aux = nullptr;

	while (lista != nullptr) {
		aux = lista;
		lista = aux->siguiente;
		delete aux;
	}
}