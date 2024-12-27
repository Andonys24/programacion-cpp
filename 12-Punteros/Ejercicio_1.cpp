/* 1. Comprobar si un numero es par o impar, y senalar la posicion
de memoria en donde se esta guardando el numero. Con punteros. */
#include <iostream>

using namespace std;

void limpiarPantalla();

int main() {
	limpiarPantalla();
	int *puntero = nullptr;
	int num;

	cout << "Ingrese un numero: ";
	cin >> num;

	puntero = &num;

	cout << "El numero " << *puntero << " es " << ((*puntero % 2 == 0) ? "PAR" : "IMPAR") << endl;
	cout << "Posicion de memoria: " << puntero << endl;

	puntero = nullptr; // Liberar memoria

	cin.get();
	return 0;
}

void limpiarPantalla() {
	const char *comando = ((system("clear") == 0) ? "clear" : "cls");
	system(comando);
}