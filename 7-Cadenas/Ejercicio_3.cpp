/* 3. pedir al usuario que digite 2 cadenas de caracteres, e inidicar si ambas cadenas
son iguales, en caso de no serlo, inidicar cual es mayor alfabeticamente. */
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char cadena_1[21], cadena_2[21];

	for (int i = 0; i < 2; i++) {
		cout << "Ingrese datos en la cadena #" << i + 1 << ": " << endl;
		if (i == 0) {
			cin.getline(cadena_1, 21);
		} else {
			cin.getline(cadena_2, 21);
		}
	}

	if (strcmp(cadena_1, cadena_2) == 0) {
		cout << "Las dos cadenas son iguales." << endl;
	} else {
		cout << "La palabra: " << cadena_1 << " esta '" << (strcmp(cadena_1, cadena_2) > 0 ? "despues" : "antes")
			 << "' alfabeticamente que: " << cadena_2 << endl;
	}

	cin.get();
	return 0;
}