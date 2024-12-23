/* Plantilla de Funcion
Ejemplo: Sacar el valor absoluto de un numero */

#include <iostream>

using namespace std;

// Template para englobar un tipo de variable
template <class TIPOD>
// Prototipo de Funcion
void mostrar_abs(TIPOD numero);

int main() {
	int n1 = -4;
	float n2 = -56.67;
	double n3 = -123.5678;

	mostrar_abs(n1);
	mostrar_abs(n2);
	mostrar_abs(n3);

	cin.get();
	return 0;
}

template <class TIPOD> void mostrar_abs(TIPOD numero) {
	if (numero < 0) {
		numero *= -1;
	}

	cout << "El valor absoluto del numero es: " << numero << endl;
}