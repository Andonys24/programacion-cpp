// Devolver valores multiples
// Sumar y multiplicar 2 numeros
#include <iostream>

using namespace std;

void calcular(int n1, int n2, int &sum, int &prod);

int main() {
	int n1, n2, sum = 0, prod = 0;

	cout << "Ingrese el valor del primer numero: ";
	cin >> n1;
	cout << "Ingrese el valor del segundo numero: ";
	cin >> n2;

	calcular(n1, n2, sum, prod);

	cout << "El valor de la suma es: " << sum << endl;
	cout << "El valor de el producto es: " << prod << endl;

	cin.get();
	return 0;
}

void calcular(int n1, int n2, int &sum, int &prod) {
	sum = n1 + n2;
	prod = n1 * n2;
}