/* 19. Realice una funcion recrsiva que sume los primeros n enteros positivos
Nota: para plantear la funcion recursiva tenga en cuenta que la suma puede
expresarse de la siguiente recursividad:
suma(n) = 1     , si n = 1
n + suma (n-1)  , si n > 1
*/

#include <iostream>

using namespace std;

int sumar(int);

int main() {
	int nElements;

	do {
		cout << "Ingrese el numero de elementos: ";
		cin >> nElements;
	} while (nElements <= 0);

	cout << "La suma es: " << sumar(nElements) << endl;

	cin.get();
	return 0;
}

// Funcion recursiva
int sumar(int n) {
	int suma = 0;

	if (n == 1) {
		suma = 1;
	}

	if (n > 1) {
		suma = n + sumar(n - 1);
	}

	return suma;
}