// Paso de parametros por Referencia

#include <iostream>

using namespace std;

template <class T> void valorReferencia(T dato, char nombre);
void valNuevo(int &x, int &y);

int main() {
	int x, y;

	cout << "Ingrese 2 numeros: ";
	cin >> x >> y;

	valNuevo(x, y);

	valorReferencia(x, 'X');
	valorReferencia(y, 'Y');

	cin.get();
	return 0;
}

// Obtener la referencia de las variables
void valNuevo(int &x, int &y) {
	valorReferencia(x, 'X');
	valorReferencia(y, 'Y');

	// Cambiar el valor de las variables
	x = 89;
	y = 3;
}

template <class T> void valorReferencia(T dato, char nombre) {
	cout << "Valor de " << nombre << ": " << dato << " referencia: " << &dato << endl;
}