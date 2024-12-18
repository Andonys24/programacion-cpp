/* 8. Pedir al usuario 2 cadenas de caracteres
de numeros, uno entero y el otro real, convertirlos
a sus respectivos valores y por ultimo sumarlos. */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	string c_int, c_real;
	int entero;
	float real;

	// Pedir los datos al usuario
	cout << "Ingrese un numero entero: " << endl;
	getline(cin, c_int);
	cout << "Ingrese un numero real: " << endl;
	getline(cin, c_real);

	// Convertir los strings a numeros
	entero = stoi(c_int);
	real = stof(c_real);

	// Realizar la operacion aritmetica y mostrar resultado
	cout << entero << " + " << real << " = " << entero + real << endl;

	return 0;
}