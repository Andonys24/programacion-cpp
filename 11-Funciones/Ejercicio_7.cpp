/* 7. Intercambiar el valor de 2 variables utilizando paso de parametros por referencia */

#include <iostream>

using namespace std;

void intercambiar(int &n1, int &n2);

int main() {
	int n1 = 10, n2 = 15;

	cout << "El valor de num1 es: " << n1 << endl;
	cout << "El valor de num2 es: " << n2 << endl;

	intercambiar(n1, n2);

	cout << "El nuevo valor de num1 es: " << n1 << endl;
	cout << "El nuevo valor de num2 es: " << n2 << endl;

	cin.get();
	return 0;
}

void intercambiar(int &n1, int &n2) {
	int aux;

	aux = n1;
	n1 = n2;
	n2 = aux;
}
