// Estructura Basica en c++

#include <iostream>

using namespace std;

struct persona {
	string nombre;
	int edad;
} persona1 = {"Fernando", 19}, persona2 = {"Sofia", 20}, persona3;

int main() {
	cout << "Ingrese su nombre: ";
	getline(cin, persona3.nombre);
	cout << "Ingrese su edad: ";
	cin >> persona3.edad;

	cout << "Persona 1" << endl;
	cout << "Nombre: " << persona1.nombre << endl;
	cout << "Edad: " << persona1.edad << endl;

	cout << "\nPersona 2" << endl;
	cout << "Nombre: " << persona2.nombre << endl;
	cout << "Edad: " << persona2.edad << endl;

	cout << "\nPersona 3" << endl;
	cout << "Nombre: " << persona3.nombre << endl;
	cout << "Edad: " << persona3.edad << endl;

	cin.get();
	return 0;
}