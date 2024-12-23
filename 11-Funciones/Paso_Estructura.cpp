// Paso de parametros de tipo estructura

#include <iostream>

using namespace std;

// estructura
struct Persona {
	string nombre;
	int edad;
} p1;

// Prototipo
void pedirDatos();
void mostrarDatos();

// Funcion principal
int main() {
	pedirDatos();
	mostrarDatos();

	cin.get();
	return 0;
}

void pedirDatos() {
	cout << "Ingrese su nombre: ";
	getline(cin, p1.nombre);
	cout << "Ingrese su edad: ";
	cin >> p1.edad;
}

void mostrarDatos() {
	cout << "Nombre: " << p1.nombre << endl;
	cout << "Edad: " << p1.edad << endl;
}