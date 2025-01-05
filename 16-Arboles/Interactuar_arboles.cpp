/*
1. Insertar un nodo en un arbol binario de busqueda (ABB)
2. Mostar el arbol
3. Buscar un nodo en el arbol
4. Recorrido de arboles
	- Preorden: Raiz, izquierda, derecha.
	- Inorden: Izquierda, raiz, derecha.
	- Postorden: Izquierda, derecha, raiz.
5. Eliminar un nodo en el arbol
	- Caso 1: El nodo tiene dos hijos
	- Caso 2: El nodo tiene un hijo (izquierdo o derecho)
	- Caso 3: El nodo no tiene hijos

*/

#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

// Estructuras
struct Nodo {
	int dato;
	Nodo *der, *izq, *padre;
};

struct Trunk {
	Trunk *anterior;
	string str;

	Trunk(Trunk *anterior, string str) {
		this->anterior = anterior;
		this->str = str;
	}
};

// Prototipos

// Helpers
void limpiarPantalla();
int validarNumero(string mensaje = "Ingrese una opcion");
void generarTitulo(string titulo = "Titulo");
Nodo *crearNodo(Nodo *, int);
void ejecutarSi(function<void()>);

void menu();

// Funciones del arbol
void insertarNodo(Nodo *&, Nodo *, int);
void mostrarVault(Trunk *);
void mostrarArbol(Nodo *, Trunk *anterior = nullptr, bool esIzquierdo = false);
bool busqueda(Nodo *, int, bool = false);
void preOrden(Nodo *);
void inOrden(Nodo *);
void PostOrden(Nodo *, bool eliminar = false);
Nodo *minimo(Nodo *);
void eliminar(Nodo *);
void remplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *&);
void mostrarDatosNodo(Nodo *&, string = "Datos del Nodo");
void eliminarNodo(Nodo *);
void vaciarArbol(Nodo *&);

// Variables globales
Nodo *arbol = nullptr;

int main() {
	menu();
	return 0;
}

// Definiciones

// Helpers

void limpiarPantalla() {
	// const char *comando = (system("clear") == 0) ? "clear" : "cls";
	// system(comando);
	system("cls");
}

int validarNumero(string mensaje) {
	int num = 0;
	bool validado = false;

	while (!validado) {
		cout << mensaje << ": ";
		if (cin >> num) {
			validado = true;
		} else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Por favor, ingrese un numero valido." << endl;
		}
	}
	return num;
}

void generarTitulo(string titulo) {
	int largo = titulo.length();
	int anchoPantalla = largo * 2;
	int padding = largo / 2;
	string lineas(anchoPantalla, '=');

	limpiarPantalla();
	cout << lineas << endl;
	cout << setw(padding + largo) << titulo << endl;
	cout << lineas << endl << endl;
}

void ejecutarSi(function<void()> funcion) {
	if (arbol == nullptr) {
		cout << "El arbol esta vacio." << endl;
		return;
	}

	funcion();
}

Nodo *crearNodo(Nodo *padre, int num) {
	Nodo *nuevoNodo = new Nodo();

	nuevoNodo->dato = num;
	nuevoNodo->der = nullptr;
	nuevoNodo->izq = nullptr;
	nuevoNodo->padre = padre;

	return nuevoNodo;
}

void menu() {
	bool continuar = true;

	while (continuar) {
		int opcion = 0;
		bool respuesta = false;
		generarTitulo("Menu de Principal");
		cout << "[1] - Insertar un nuevo nodo" << endl;
		cout << "[2] - Mostrar arbol" << endl;
		cout << "[3] - Buscar un nodo" << endl;
		cout << "[4] - Recorrer arbol en 'PreOrden'" << endl;
		cout << "[5] - Recorrer arbol en 'InOrden'" << endl;
		cout << "[6] - Recorrer arbol en 'PostOrden'" << endl;
		cout << "[7] - Eliminar un nodo" << endl;
		cout << "[8] - Salir" << endl;

		opcion = validarNumero();

		switch (opcion) {
		case 1:
			generarTitulo("Insertar un nuevo nodo");
			insertarNodo(arbol, nullptr, validarNumero("Ingrese un numero"));
			break;
		case 2:
			generarTitulo("Mostrando arbol");
			ejecutarSi([&]() { mostrarArbol(arbol); });
			break;
		case 3:
			generarTitulo("Buscando un nodo");
			ejecutarSi([&]() {
				respuesta = busqueda(arbol, validarNumero("Ingrese el nodo a buscar"));
				cout << ((respuesta) ? "" : "Nodo no Encontrado.\n");
			});
			break;
		case 4:
			generarTitulo("Recorrido PreOrden");
			ejecutarSi([&]() { preOrden(arbol); });
			break;
		case 5:
			generarTitulo("Recorrido InOrden");
			ejecutarSi([&]() { inOrden(arbol); });
			break;
		case 6:
			generarTitulo("Recorrido PostOrden");
			ejecutarSi([&]() { PostOrden(arbol); });
			break;
		case 7:
			generarTitulo("Eliminar un nodo");
			ejecutarSi([&]() { eliminar(arbol); });
			break;
		case 8:
			cout << "\nSaliendo del programa..." << endl;
			vaciarArbol(arbol);
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

// Funciones del arbol

void insertarNodo(Nodo *&arbol, Nodo *padre, int num) {
	if (arbol == nullptr) { // Caso 1: El arbol esta vacio
		Nodo *nuevoNodo = crearNodo(padre, num);
		arbol = nuevoNodo;
	} else {						 // Caso 2: El arbol tiene uno o mas nodos
		int valorRaiz = arbol->dato; // Obtenemos el valor de la raiz
		// Si el numero a insertar es menor al valor de la raiz, lo insertamos en el subarbol izquierdo
		insertarNodo((num < valorRaiz) ? arbol->izq : arbol->der, arbol, num);
	}
}

void mostrarVault(Trunk *p) {
	if (p == nullptr) return;

	mostrarVault(p->anterior);
	cout << p->str;
}

void mostrarArbol(Nodo *arbol, Trunk *anterior, bool esIzquierdo) {
	if (arbol == nullptr) return;

	string anterior_str = "    ";
	Trunk *trunk = new Trunk(anterior, anterior_str);

	mostrarArbol(arbol->der, trunk, true);

	if (!anterior) {
		trunk->str = "---";
	} else if (esIzquierdo) {
		trunk->str = ".---";
		anterior_str = "   |";
	} else {
		trunk->str = "`---";
		anterior->str = anterior_str;
	}

	mostrarVault(trunk);
	cout << " " << arbol->dato << endl;

	if (anterior) anterior->str = anterior_str;

	trunk->str = "   |";

	mostrarArbol(arbol->izq, trunk, false);

	delete trunk;
	trunk = nullptr;
}

bool busqueda(Nodo *arbol, int num, bool eliminar) {
	if (arbol == nullptr) return false;

	if (num == arbol->dato) {
		mostrarDatosNodo(arbol, (eliminar) ? "Datos del Nodo a Eliminar" : "Datos del Nodo");
		if (eliminar) eliminarNodo(arbol);
		return true; // Encontramos el nodo
	}
	if (num < arbol->dato) {
		return busqueda(arbol->izq, num, eliminar); // Buscamos en el subarbol izquierdo
	}
	return busqueda(arbol->der, num, eliminar); // Buscamos en el subarbol derecho
}

// Recorrido de arboles
void preOrden(Nodo *arbol) {
	if (arbol == nullptr) return;

	cout << arbol->dato << " - "; // Visitamos la raiz
	preOrden(arbol->izq);		  // Recorremos el subarbol izquierdo
	preOrden(arbol->der);		  // Recorremos el subarbol derecho
}

void inOrden(Nodo *arbol) {
	if (arbol == nullptr) return;

	inOrden(arbol->izq);		  // Recorremos el subarbol izquierdo
	cout << arbol->dato << " - "; // Visitamos la raiz
	inOrden(arbol->der);		  // Recorremos el subarbol derecho
}

void PostOrden(Nodo *arbol, bool eliminar) {
	if (arbol == nullptr) return;

	PostOrden(arbol->izq, eliminar); // Recorremos el subarbol izquierdo
	PostOrden(arbol->der, eliminar); // Recorremos el subarbol derecho
	if (eliminar) {
		eliminarNodo(arbol); // Eliminamos el nodo
	} else {
		cout << arbol->dato << " - "; // Visitamos la raiz
	}
}

void eliminar(Nodo *arbol) { busqueda(arbol, validarNumero("Ingrese el nodo a eliminar"), true); }

// Busca el nodo con el valor minimo en laizquierda en un arbol
Nodo *minimo(Nodo *arbol) {
	if (arbol == nullptr) return nullptr;	   // Si el arbol esta vacio
	if (arbol->izq) return minimo(arbol->izq); // Si tiene hijo izquierdo
	return arbol;							   // Si no tiene hijo izquierdo, entonces es el nodo minimo
}

// Funcion para remplazar dos nodos
void remplazar(Nodo *arbol, Nodo *nuevoNodo) {
	if (arbol->padre) {
		if (arbol == arbol->padre->izq) {
			arbol->padre->izq = nuevoNodo;
		}
		if (arbol == arbol->padre->der) {
			arbol->padre->der = nuevoNodo;
		}
	}
	if (nuevoNodo) nuevoNodo->padre = arbol->padre;
}

void mostrarDatosNodo(Nodo *&nodo, string titulo) {
	generarTitulo(titulo);
	cout << "Dato del Nodo: " << nodo->dato << endl;
	cout << "Direccion de memoria del Nodo: " << nodo << endl;

	cout << "\nDato del nodo Padre: " << ((nodo->padre) ? to_string(nodo->padre->dato) : "Nulo") << endl;
	cout << "Direccion de memoria del nodo Padre: " << nodo->padre << endl;

	cout << "\nDato del nodo Izquierdo: " << ((nodo->izq) ? to_string(nodo->izq->dato) : "Nulo") << endl;
	cout << "Direccion de memoria del nodo Izquierdo: " << nodo->izq << endl;

	cout << "\nDato del nodo Derecho: " << ((nodo->der) ? to_string(nodo->der->dato) : "Nulo") << endl;
	cout << "Direccion de memoria del nodo Derecho: " << nodo->der << endl;
}

void destruirNodo(Nodo *&nodo) {
	if (nodo == nullptr) return;
	nodo->izq = nullptr;
	nodo->der = nullptr;
	nodo->padre = nullptr;
	delete nodo;
	nodo = nullptr;

	cout << "\nNodo eliminado correctamente!!" << endl;
}

void eliminarNodo(Nodo *nodo) {
	if (nodo == nullptr) return;
	// Caso 1: El nodo tiene dos hijos
	if (nodo->izq && nodo->der) {
		Nodo *menor = minimo(nodo->der); // Buscamos el nodo minimo en el subarbol derecho
		nodo->dato = menor->dato;		 // Copiamos el valor del nodo minimo al nodo actual
		eliminarNodo(menor);			 // Eliminamos el nodo minimo
		return;
	}
	// Caso 2: El nodo tiene un hijo (izquierdo o derecho)
	if (nodo->izq) {
		remplazar(nodo, nodo->izq);
		destruirNodo(nodo);
		return;
	}
	if (nodo->der) {
		remplazar(nodo, nodo->der);
		destruirNodo(nodo);
		return;
	}
	// Caso 3: El nodo no tiene hijos
	remplazar(nodo, nullptr);
	destruirNodo(nodo);
}

void vaciarArbol(Nodo *&arbol) {
	PostOrden(arbol, true);
	arbol = nullptr;
}