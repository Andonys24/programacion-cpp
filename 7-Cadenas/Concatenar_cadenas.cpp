// Agregar o concatenar una cadena con otra - funcion strcat()

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char cad1[] = "Esto es una cadena";
	char cad2[] = " de ejemplo";
	char *cad3 = nullptr;
	int cantidad;

	cantidad = strlen(cad1) + strlen(cad2) + 1;

	cad3 = new char[cantidad];

	strcpy(cad3, cad1);
	strcat(cad3, cad2);

	cout << cad3 << endl;

	// Liberar memoria
	delete[] cad3;
	cad3 = nullptr;

	cin.get();
	return 0;
}