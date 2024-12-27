// Punteros a estructuras

#include <iostream>

using namespace std;

struct Persona {
	string nombre;
	int edad;
} persona, *puntero = &persona;

void PedirDatos();
void mostrarDatos(Persona *);

int main() {
	PedirDatos();
	mostrarDatos(puntero);

	cin.ignore();
	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

void PedirDatos() {
	cout << "Ingrese su nombre: ";
	getline(cin, puntero->nombre);
	cout << "Ingrese su edad: ";
	cin >> puntero->edad;
}

void mostrarDatos(Persona *puntero) {
	cout << endl;
	cout << "Su nombre es: " << puntero->nombre << endl;
	cout << "Su edad es: " << puntero->edad << endl;
}