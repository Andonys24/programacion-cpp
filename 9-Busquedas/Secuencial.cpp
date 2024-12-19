// Busqueda Secuencial

#include <iostream>

using namespace std;

int main() {
	int a[] = {3, 4, 2, 1, 5};
	int i = 0, dato = 4;
	bool encontrado = false;

	while (!encontrado && i < 5) {
		encontrado = (a[i] == dato) ? true : false;
		i++;
	}

	cout << "El numero '" << dato << "' " << ((encontrado) ? "fue" : "no fue") << " encontrado";
	cout << ((encontrado) ? (" en la posicion: " + to_string(i - 1)) : "") << endl;

	cin.get();
	return 0;
}