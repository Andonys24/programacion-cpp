/* 1. Hacer un programa en c++, utiliznado Colar que contenga el siguiente menu:
1. Insertar un caracter a una cola.
2. Mostrar todos los elementos de la cola.
3. Salir */

#include <iostream>

using namespace std;

struct Nodo {
	char caracter;
	Nodo *siguiente;
};

// Prototipos
void limpiarConsola();
void pausarPrograma(string mensaje = "Presione una tecla para continuar");
void insertarCaracter(Nodo *&, Nodo *&);
void mostrarElementos(Nodo *, Nodo *);
void eliminarElementos(Nodo *&, Nodo *&);
bool salir(Nodo *&, Nodo *&);

int main() {
	Nodo *inicio = nullptr, *fin = nullptr;
	bool continuar = true;

	while (continuar) {
		int opcion = 0;
		limpiarConsola();
		cout << "*** Menu ***" << endl;
		cout << "[1] - Insertar caracter" << endl;
		cout << "[2] - Mostrar elementos ingresados" << endl;
		cout << "[3] - Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1:
			limpiarConsola();
			insertarCaracter(inicio, fin);
			pausarPrograma("Caracter ingresado correctamente");
			break;
		case 2:
			limpiarConsola();
			mostrarElementos(inicio, fin);
			pausarPrograma();
			break;
		case 3:
			continuar = salir(inicio, fin);
			pausarPrograma("Fin del programa");
			break;
		default:
			pausarPrograma("Opcion no valida");
			break;
		}
	}

	return 0;
}

void limpiarConsola() {
	const char *comando = (system("clear") == 0) ? "clear" : "cls";
	system(comando);
}

void pausarPrograma(string mensaje) {
	cin.ignore(1000, '\n');
	cout << "\n" << mensaje << "...";
	cin.get();
}

void insertarCaracter(Nodo *&inicio, Nodo *&fin) {
	char caracter;
	Nodo *newNodo = new Nodo();
	newNodo->siguiente = nullptr;

	// Pedir datos al usuario
	cout << "Ingrese un caracter: ";
	cin >> newNodo->caracter;

	cin.clear();

	if (inicio == nullptr) {
		inicio = newNodo;
	} else {
		fin->siguiente = newNodo;
	}

	fin = newNodo;
}

void mostrarElementos(Nodo *inicio, Nodo *fin) {
	Nodo *actual = inicio;

	cout << "Caracteres ingresados:" << endl;
	while (actual != nullptr) {
		cout << actual->caracter << ((actual != fin) ? ", " : ".");
		actual = actual->siguiente;
	}
	cout << endl;
}

void eliminarElementos(Nodo *&inicio, Nodo *&fin) {
	while (inicio != nullptr) {
		Nodo *aux = inicio;

		if (inicio == fin) {
			inicio = nullptr;
			fin = nullptr;
		} else {
			inicio = inicio->siguiente;
		}
		delete aux;
		aux = nullptr;
	}
}

bool salir(Nodo *&inicio, Nodo *&fin) {
	// Eliminar elementos de los nodos
	eliminarElementos(inicio, fin);

	// Limpiar los punteros
	delete inicio;
	delete fin;
	inicio = nullptr;
	fin = nullptr;

	return false;
}