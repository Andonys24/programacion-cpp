/* 9. Realice un programa que lea una cadena de caracteres de la entrada estandar y
muestre en la salida estandar cuantas ocurrencias de cada vocal existen en la cadena. */

#include <cctype>
#include <iostream>

using namespace std;

int main() {
	string frase = "Solo imagina lo precioso que puede ser arriesgarse y que todo salga bien.";
	char vocales[] = {'a', 'e', 'i', 'o', 'u'};

	// cout << "Ingrese una frase: ";
	// getline(cin, frase);

	// Mostrar cuantas veces aparece cada vocal
	for (char &vocal : vocales) {
		int cantidad = 0;
		for (char &letra : frase) {
			if (tolower(letra) == vocal) {
				cantidad++;
			}
		}
		cout << "La vocal '" << vocal << "' se repitio una cantidad de: " << cantidad << endl;
	}

	cin.get();
	return 0;
}