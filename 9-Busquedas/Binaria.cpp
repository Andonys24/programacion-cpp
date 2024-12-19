// Busqueda Binaria

#include <iostream>

using namespace std;

int main() {
	int numeros[] = {1, 2, 3, 4, 5};
	int inf, sup, mit, dato;
	bool existe;

	dato = 2;

	// Algoritmo de la buqueda Binaria
	inf = 0;
	sup = 5;

	while (inf <= sup) {
		mit = (inf + sup) / 2;

		if (numeros[mit] == dato) {
			existe = true;
			break;
		}
		if (numeros[mit] > dato) {
			sup = mit;
			mit = (inf + sup) / 2;
		}
		if (numeros[mit] < dato) {
			inf = mit;
			mit = (inf + sup) / 2;
		}
	}

	cout << "El numero " << ((existe) ? "fue" : "NO fue") << " encontrado";
	cout << ((existe) ? " en la pocicion: " + to_string(mit) : "") << endl;

	cin.get();
	return 0;
}