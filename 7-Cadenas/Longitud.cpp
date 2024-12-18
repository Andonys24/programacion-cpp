// Longitud de una cadenas de caracteres - Funcion strlen()

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char palabra[] = "Hola como esta?";
	int longitud;

	longitud = strlen(palabra);

	cout << "Numero de elementos de la cadena es: " << longitud << endl;

	cin.get();
	return 0;
}