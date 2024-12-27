#include <iostream>

using namespace std;

int main() {
	int *dir_numeros = nullptr;
	int numeros[] = {10, 22, 38, 43, 50, 64, 77, 81, 79, 120}, tam;

	dir_numeros = numeros;
	tam = sizeof(numeros) / sizeof(*numeros);

	for (int i = 0; i < tam; i++) {
		cout << "Posicion del vector: " << i << endl;
		cout << "Elemento del vector: " << *(dir_numeros + i) << endl;
		cout << "Direccion de memoria: " << dir_numeros + i << endl;
		cout << endl;
	}

	dir_numeros = nullptr;

	cin.get();
	return 0;
}