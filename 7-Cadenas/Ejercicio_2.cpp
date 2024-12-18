/* 2. Pedir al usuario una cadena de caracteres. almacenarla en un arreglo
y copiar todo su contenido haci otro arreglo de caracteres. */

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char cadena_1[40];
	char cadena_2[40];

	cout << "Ingrese una cadena de caracteres corta: ";
	cin.getline(cadena_1, 42);

	if (strlen(cadena_1) > 40) {
		cout << "La cadena de texto es muy larga" << endl;
		return 0;
	}

	strcpy(cadena_2, cadena_1);
	cout << "Contenido copiado exitosamente!" << endl;
	cout << "El contenido de la segunda variable: " << cadena_2 << endl;

	cin.get();
	return 0;
}