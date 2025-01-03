/*
* Insertar elementos en una lista
	Para insertar elementos en una lista solo hay que seguir 4 pasos:
	1.  Crear un nuevo nodo.
	2. Asignar a nuevo_nodo->dato el elemento que se desea insertar.
	3. Crear dos nodos auxiliares y asignar lista al primero de ellos.
	4. Insertar el elemento a la lista. (habra 3 casos)

* Mostrar elementos de una lista
	Para mostrar los elementos de una lista solo hay que seguir 3 pasos:
	1. Crear un nuevo nodo (actual).
	2. igualar ese nuevo nodo (actual) a lista.
	3. Recorrer lista de inicio a fin.

* Buscar elemento en una lista
	Para buscar un eleemnto en una lista, solo hay que seguri 4 pasos:
	1. Crear un nuevo nodo (actual).
	2. Igualar ese nodo (actual) a lista.
	3. Recorrer la lista.
	4. Determinar si el elemento existe o no en la lista.

* Eliminar un elemento de la lista
	Para eliminar un elemtno X de la lista, solo hay que seguir 5 pasos:
	1. Preguntar si la lista no esta vacia.
	2. Crear un *aux_borrar y *anterior = nullptr.
	3. Igualar *aux_borrar al inicio de la lista.
	4. Recorrer la lista.
	5. Eliminar el elemento.

* Eliminar todos los elementos de una lista
	Para vaciar una lista, solo seguir 4 pasos:
	1. Crear un nodo *aux e igualarlo al inicio de la lista.
	2. Guardar el dato que queremos eliminar dentro de *aux. (opcional)
	3. Pasar la lista al siguiente nodo.
	4. Eliminar el nodo *aux.
*/

#include <iostream>
#include <limits>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

// Prototipos de funciones
void limpiarConsola();
void menu();
int validarNumero(string mensaje = "Ingrese una opcion");
bool listaVacia(Nodo *, bool mensaje = false);
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *);
void eliminarNodo(Nodo *&);
void vaciarLista(Nodo *&, bool mensaje = true);

// Variable global
Nodo *lista = nullptr;

int main() {
	menu();

	return 0;
}

void limpiarConsola() {
	const char *comando = (system("clear") == 0) ? "clear" : "cls";
	system(comando);
}

void menu() {
	int opcion = 0;
	bool continuar = true;

	while (continuar) {
		limpiarConsola();
		cout << "\n\t.:Menu:.\n";
		cout << "1. Insertar elementos a la lista" << endl;
		cout << "2. Mostrar elementos de la lista" << endl;
		cout << "3. Buscar elemento en la lista" << endl;
		cout << "4. Eliminar elemento de la lista" << endl;
		cout << "5. Vaciar lista" << endl;
		cout << "6. Salir" << endl;

		opcion = validarNumero();

		switch (opcion) {
		case 1:
			insertarLista(lista, validarNumero("Ingrese un numero"));
			break;
		case 2:
			mostrarLista(lista);
			break;
		case 3:
			buscarLista(lista);
			break;
		case 4:
			eliminarNodo(lista);
			break;
		case 5:
			vaciarLista(lista);
			break;
		case 6:
			cout << "Saliendo del programa..." << endl;
			vaciarLista(lista, false);
			continuar = false;
			break;
		default:
			cout << "\nOpcion no valida" << endl;
			break;
		}

		cin.ignore();
		cout << "\nPresiona una tecla para continuar...";
		cin.get();
	}
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

bool listaVacia(Nodo *lista, bool mensaje) {
	if (lista == nullptr) {
		if (mensaje) {
			cout << "La lista esta vacia!" << endl;
		}
		return true;
	}
	return false;
}

void insertarLista(Nodo *&lista, int dato) {
	Nodo *newNodo = new Nodo(); // 1. Crear un nuevo nodo
	newNodo->dato = dato;		// 2. Asignar el dato al nuevo nodo

	// 3. Crear dos nodos auxiliares y asignar lista al primero de ellos
	Nodo *aux1 = lista, *aux2 = nullptr;

	// 4. Insertar el elemento a la lista
	while (!(listaVacia(aux1)) && (aux1->dato < dato)) { // Bucle para mantener siempre ordenada la lista
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}

	if (lista == aux1) { // Si el elemento a insertar es el primero
		lista = newNodo;
	} else { // Si el elemento a insertar es el ultimo
		aux2->siguiente = newNodo;
	}

	newNodo->siguiente = aux1;
	cout << "Elemento " << dato << " insertado correctamente" << endl;
}

void mostrarLista(Nodo *lista) {
	if (listaVacia(lista, true)) {
		return;
	}

	Nodo *actual = new Nodo(); // 1. Crear un nuevo nodo (actual)
	actual = lista;			   // 2. Igualar ese nuevo nodo (actual) a lista
	cout << "Mostrando elementos de la lista" << endl;
	while (!listaVacia(actual)) { // 3. Recorrer lista de inicio a fin
		cout << actual->dato << ((actual->siguiente != nullptr) ? " -> " : ".\n");
		actual = actual->siguiente;
	}
}

void buscarLista(Nodo *lista) {
	if (listaVacia(lista, true)) {
		return;
	}

	Nodo *actual = new Nodo(); // 1. Crear un nuevo nodo (actual)
	actual = lista;			   // 2. Igualar ese nodo (actual) a lista
	int numero = validarNumero("Ingrese el numero a buscar");
	bool encontrado = false;

	while (!(listaVacia(actual)) && (actual->dato <= numero)) { // 3. Recorrer la lista
		// La segunda condicion del while es posible ya q la lista esta ordenada

		if (actual->dato == numero) { // 4. Determinar si el elemento existe o no en la lista
			encontrado = true;
			break;
		}
		actual = actual->siguiente; // Avanzar al siguiente nodo
	}

	cout << "El elemento " << numero << ((encontrado) ? " SI" : " NO") << " se encuentra en la lista" << endl;
}

void eliminarNodo(Nodo *&lista) {
	// 1. Verificar si la lista no esta vacia
	if (listaVacia(lista, true)) {
		return;
	}

	int dato = validarNumero("Ingrese el numero a eliminar");

	// 2. Crear un *aux_borrar y *anterior = nullptr
	Nodo *auxBorrar = nullptr, *anterior = nullptr;
	// 3. Igualar *aux_borrar al inicio de la lista
	auxBorrar = lista;

	// 4. Recorrer la lista
	while ((!listaVacia(auxBorrar)) && (auxBorrar->dato != dato)) {
		anterior = auxBorrar;
		auxBorrar = auxBorrar->siguiente;
	}

	// 5. Eliminar el elemento
	if (listaVacia(auxBorrar)) { // Caso 1: El elemento no existe en la lista
		cout << "El elemento " << dato << " no existe en la lista." << endl;
	} else if (listaVacia(anterior)) { // Caso 2: El elemento a eliminar es el primero
		lista = lista->siguiente;
		delete auxBorrar;
		cout << "El elemento " << dato << " ha sido eliminado" << endl;
	} else { // caso 3: El elemento a eliminar esta en medio o al final
		anterior->siguiente = auxBorrar->siguiente;
		delete auxBorrar;
		cout << "El elemento " << dato << " ha sido eliminado" << endl;
	}
}

void vaciarLista(Nodo *&lista, bool mensaje) {
	if (listaVacia(lista, mensaje)) {
		return;
	}

	cout << ((mensaje) ? "Eliminando los elementos de la lista..." : "") << endl;

	while (!listaVacia(lista)) { // Iterar mientras la lista no este vacia
		Nodo *aux = lista;		 // 1. Crear un nodo *aux e igualarlo al inicio de la lista
		lista = aux->siguiente;	 // 3. Pasar la lista al siguiente nodo
		delete aux;				 // 4. Eliminar el nodo *aux
	}

	cout << ((mensaje) ? "La lista ha sido vaciada exitosamente!" : "") << endl;
}