/* Transimicion de Direcciones
Ejemplo: Intercambia el valor de 2 variables */

#include <iostream>

using namespace std;

void mostrarNumeros(float, float, string);
void intercambio(float *, float *);

int main() {
	float num1 = 20.8, num2 = 6.78;

	mostrarNumeros(num1, num2, "Antes");
	intercambio(&num1, &num2);
	mostrarNumeros(num1, num2, "Despues");

	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

void mostrarNumeros(float num1, float num2, string titulo) {
	cout << "\n" << titulo << " del intercambio" << endl;
	cout << "Valor de numero 1: " << num1 << endl;
	cout << "Valor de numero 2: " << num2 << endl;
}

void intercambio(float *num1, float *num2) {
	float aux;

	aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}