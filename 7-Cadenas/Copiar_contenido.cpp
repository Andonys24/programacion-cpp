// Copiar el contenido de una cadena a otra - Fucion strcpy()

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char nombre[] = "Andoni";
	char nombre2[20];

	strcpy(nombre2, nombre);

	cout << nombre2 << endl;

	cin.get();
	return 0;
}