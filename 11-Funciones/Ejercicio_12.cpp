/* 12. Realice una funcion que tome como parametros un vector y su tamanio y diga si el vector esta
ordenado crecientemente. Sugerencia: compruebe que para todas las posiciones del vector,
salvo para la 0, el elemento del vector es mayor o igual que el elemento que le precede en el vector. */

#include <iostream>

using namespace std;

template <class T> void pedirDatos(T[], int);
template <class T> bool comprobarOrdCreciente(T[], int);

int main() {
	int *arreglo = nullptr;
	int n;
	bool ordenadoC;

	cout << "Ingrese el tamanio del arreglo: ";
	cin >> n;

	arreglo = new int[n];

	// Llamar funciones
	pedirDatos(arreglo, n);
	ordenadoC = comprobarOrdCreciente(arreglo, n);

	// mostrar el resultado en pantalla
	cout << "El arreglo " << ((ordenadoC) ? "esta" : "no esta") << " ordenado crecientemente." << endl;

	// Limpiar puntero
	delete[] arreglo;
	arreglo = nullptr;

	cin.get();
	return 0;
}

template <class T> void pedirDatos(T arreglo[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << "Ingrese el valor del indice [" << i << "]: ";
		cin >> arreglo[i];
	}
}

template <class T> bool comprobarOrdCreciente(T arreglo[], int tam) {
	bool ordenado;
	int m = 0;

	for (int i = 1; i < tam; i++) {
		if (arreglo[i] > arreglo[m]) {
			ordenado = true;
			m = i;
		} else {
			ordenado = false;
			break;
		}
	}

	return ordenado;
}