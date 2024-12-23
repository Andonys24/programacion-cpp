/* 21. Escriba una funcion recursiva que calcule un numero
elevado a una potencia entera mayor o igual que cero: x^y.
potencia(x,y) = x       , y = 1
x * potencia (x, y - 1) , y > 1
*/
#include <iostream>

using namespace std;
int potencia(int, int);

int main() {
	int coefi, expo;

	// pedir datos al usuario
	cout << "Ingrese el coeficiente: ";
	cin >> coefi;
	cout << "Ingrese el exponente: ";
	cin >> expo;

	// Llamar funcion
	cout << "\nPotencia de " << coefi << " elevado a " << expo << " es: " << potencia(coefi, expo) << endl;

	cin.ignore();
	cin.get();
	return 0;
}

int potencia(int coef, int expo) {
	int pot;

	if (expo == 1) {
		pot = coef;
	} else if (expo == 0) {
		pot = 1;
	} else {
		pot = coef * potencia(coef, expo - 1);
	}

	return pot;
}