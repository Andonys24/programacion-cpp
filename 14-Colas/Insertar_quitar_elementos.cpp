/*
Insetar elementos en una cola:
para insertar elementos en una cola, solo hay que seguir 3 pasos:
1. Crear espacio en memoria para almacenar un nodo.
2. Asignar ese nuevo nodo al dato que queremos insertar.
3. Asignar los punteros frente y fin hacia el nuevo nodo.

Eliminar elementos en una cola:
1. Obtener el valor del nodo
2. Crear unb nodo aux y asignarle el frente de la cola
3. Eliminar el nodo del frente de la cola.
*/
#include <iostream>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

// Prototipos de la funcion
void insertarcola(Nodo *&, Nodo *&, int);
void eliminarCola(Nodo *&, Nodo *&, int &);

int main() {
	// Crear una cola vacia
	Nodo *frente = nullptr;
	Nodo *fin = nullptr;
	int dato;

	// Insertar elementos en la cola
	for (int i = 0; i < 3; i++) {
		dato = 0;
		cout << i + 1 << ". Digite un numero: ";
		cin >> dato;
		insertarcola(frente, fin, dato);
	}

	// Eliminar elementos en la cola
	cout << "\nQuitando los elementos de la cola..." << endl;
	while (frente != nullptr) {
		eliminarCola(frente, fin, dato);
		cout << dato << ((frente != nullptr) ? ", " : ".");
	}

	// Limpiar los punteros
	delete frente;
	frente = nullptr;
	delete fin;
	fin = nullptr;

	cin.ignore();
	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

// Funcion para insertar elementos en una cola
void insertarcola(Nodo *&frente, Nodo *&fin, int dato) {
	// Crear espacio en memoria para almacenar un nodo
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = dato;
	nuevo_nodo->siguiente = nullptr;

	// Asignar el nuevo nodo a la cola
	if (frente == nullptr) {
		frente = nuevo_nodo;
	} else {
		fin->siguiente = nuevo_nodo;
	}

	// Asignar el nuevo nodo al final de la cola
	fin = nuevo_nodo;

	cout << "El elemento " << dato << " se ha insertado correctamente." << endl;
}

// Funcion para eliminar elementos de la cola
void eliminarCola(Nodo *&frente, Nodo *&fin, int &dato) {
	// Obtener el valor del nodo
	dato = frente->dato;
	Nodo *aux = frente;

	if (frente == fin) { // Eliminar el nodo del frente de la cola
		// Si la cola solo tiene un elemento
		frente = nullptr;
		fin = nullptr;
	} else {
		// Asignar el nodo siguiente como frente
		frente = frente->siguiente;
	}

	// Eliminar el nodo aux
	delete aux;
	aux = nullptr;
}
