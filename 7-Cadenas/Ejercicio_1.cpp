/* 1. Hacer un programa que pida al usuario que digite una cadena de caracteres,
luego verifica la longitud de la cadena, y si esta supera a 10 caracteres mostrarla
en pantalla, caso contrario no mostrarla. */

#include <iostream>

using namespace std;

int main() {
	string cadena;
	cout << "Ingrese una cadena de caracteres: ";
	getline(cin, cadena);

	if (cadena.length() > 10) {
		cout << "La cadena ingresada es: " << cadena << endl;
	} else {
		cout << "La cadena tiene mas de 10 caracteres. No se muestra..." << endl;
	}

	cin.get();
	return 0;
}