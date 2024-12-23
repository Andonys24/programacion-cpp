/* 3. Escriba una funcion nombrada funpot() que eleve un numero entero que
se le transmita a una potencia en numero entero positivo y despliegue el resultado.
El numero entero positivo debera ser el segundo valor transmitido a la funcion. */

#include <cmath>
#include <iostream>

using namespace std;

int coeficiente, exponente;

// Prototipos
void pedirDatos();
void funpot();

int main() {
	pedirDatos();
	funpot();

	cin.get();
	return 0;
}
// Funciones
void pedirDatos() {
	cout << "Ingrese el valor del Coeficiente: ";
	cin >> coeficiente;

	cout << "Ingrese el valor del Exponente: ";
	cin >> exponente;
}

void funpot() {
	long resultado;

	resultado = pow(coeficiente, exponente);

	cout << "El numero " << coeficiente << " elevado a " << exponente << " es igual a: " << resultado << endl;
}
