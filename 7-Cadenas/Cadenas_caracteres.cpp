// Cadenas

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char nombre[] = "Andoni";
	char apellido[] = {'H', 'e', 'r', 'n', 'a', 'n', 'd', 'e', 'z'};
	char palabra[30];

	cout << "Este es su nombre: " << nombre << endl;

	// Forma correcta de almacenar una palabra en una variable
	cout << "Ingrese una palabra: ";
	cin.getline(palabra, 20, '\n');

	cout << "La palabra ingresada es: " << palabra << endl;

	cin.get();
	return 0;
}