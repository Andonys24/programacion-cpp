// Transformat una cadena a numeros - funciones atoi() y atof()

#include <iostream>
#include <stdlib.h>
#include <typeinfo>

using namespace std;

int main() {
	char cadena[] = "712", cadena_2[] = "3.14159";
	int entero;
	float flotante;

	entero = atoi(cadena);
    flotante = atof(cadena_2);


	cout << "El tipo de dato de " << entero << " es: " << typeid(entero).name() << endl;
	cout << "El tipo de dato de " << flotante << " es: " << typeid(flotante).name() << endl;

	cin.get();
	return 0;
}