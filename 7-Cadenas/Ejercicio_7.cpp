/* 7. Pedir su nombre al usuario en MAYUSCULA,
si s nombre comienza por la letra A, convertir
su nombre a minuscula, caso contrario no convertirlo. */

#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string nombre;

	cout << "Ingrese su nombre: ";
	getline(cin, nombre);

	if (!nombre.empty() && nombre[0] == 'A') {
		for (char &c : nombre) {
			c = tolower(c);
		}
	}

	cout << "Tu nombre es: " << nombre << endl;

	cin.get();
	return 0;
}