/*
* Insertar elementos a una pila
	Pasos a seguir:
		1. Crear el espacio en memoria para almacenar un nodo.
		2. Cargar el valor dentro del nodo (dato).
		3. Cargar el puntero pila dentro del nodo (*siguiente).
		4. Asignar el nuevo nodo a pila.

* Quitar (sacar) elementos de una pila
	Pasos a seguir:
		1. Crear una variable *aux de tipo Nodo
		2. Igualar la variable(dato) a aux->dato;
		3. Pasar pila a siguiente nodo
		4. Eliminar la variable aux
*/
#include <iostream>

using namespace std;

// Structura del nodo
struct Nodo {
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main() {
	Nodo *pila = nullptr;
	int dato;

	// Agregar elementos a la pila
	cout << "Ingrese el primer numero: ";
	cin >> dato;
	agregarPila(pila, dato);
	cout << "Ingrese el segundo numero: ";
	cin >> dato;
	agregarPila(pila, dato);

	// Quitar (Sacar) elementos de la pila
	cout << "Sacando elementos de la pila: ";
	while (pila != nullptr) { // Mientras no sea el final de la pila
		sacarPila(pila, dato);
		cout << dato << ((pila != nullptr) ? " , " : ".");
	}

	cin.ignore();
	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

void agregarPila(Nodo *&pila, int dato) {
	Nodo *new_nodo = new Nodo(); // 1. Crear espacio necesario para un Nodo
	new_nodo->dato = dato;		 // 2. Rellenar el dato
	new_nodo->siguiente = pila;	 // 3. Pasar la pila a puntero siguiente (nullptr)
	pila = new_nodo;			 // 4. Igual pila al nuevo nodo

	// Verificar si se estan pasando los datos correctamente
	cout << "Elemento " << dato << " agregado correctamente" << endl;
}
void sacarPila(Nodo *&pila, int &dato) {
	Nodo *aux = pila;	   // 1. Crear variable auxiliar del tipo Nodo
	dato = aux->dato;	   // 2. Igualar el dato pasado por el usuario a aux->dato
	pila = aux->siguiente; // 3. Pasar pila al siguiente nodo
	delete aux;			   // 4. Limpiar y eliminar la variable auxiliar;
	aux = nullptr;
}