/* 15. Desarollar una funcion que determine si una matriz es simetrica o no

Una matriz es simetricaL A = A^t
- La matriz debe ser cuadrada.
- Aij = Aji
|2  5   9|          |2  5   9|
|5  8   -1|     ->  |5  8   -1|
|9  -1   10|        |9  -1  10|
*/
#include <iostream>

using namespace std;

void llenarMatriz(int **, int, int);
bool comprobarSimetria(int **, int, int);
void liberarMatriz(int **&, int);

int main() {
	int **matriz = nullptr;
	int filas, columnas;
	bool simetrico;

	cout << "Ingrese la cantidad de filas: ";
	cin >> filas;
	cout << "Ingrese la cantidad de columnas: ";
	cin >> columnas;

	// Crear matriz dinamica
	matriz = new int *[filas];
	for (int f = 0; f < filas; f++) {
		matriz[f] = new int[columnas];
	}

	// Pedir al usuario que llene la matriz de datos
	llenarMatriz(matriz, filas, columnas);

	// Comprobar si la matriz es simetrica
	simetrico = comprobarSimetria(matriz, filas, columnas);

	// Mostrar resultados
	cout << "\nLa matriz " << ((simetrico) ? "es" : "NO es") << " simetrica." << endl;

	// Liberar matriz
	liberarMatriz(matriz, filas);

	cin.get();
	return 0;
}

void llenarMatriz(int **matriz, int filas, int columnas) {
	for (int f = 0; f < filas; f++) {
		for (int c = 0; c < columnas; c++) {
			cout << "Ingrese el valor del indice [" << f << "][" << c << "]: ";
			cin >> matriz[f][c];
		}
	}
}

bool comprobarSimetria(int **matriz, int filas, int columnas) {
	if (!(filas == columnas)) {
		return false;
	}

	for (int f = 0; f < filas; f++) {
		for (int c = 0; c < columnas; c++) {
			if (matriz[f][c] != matriz[c][f]) {
				return false;
			}
		}
	}

	return true;
}

void liberarMatriz(int **&matriz, int filas) {
	// Liberar cada fila de la matriz
	for (int f = 0; f < filas; f++) {
		delete[] matriz[f];
		matriz[f] = nullptr;
	}
	// Liberar el arreglo
	delete[] matriz;
	matriz = nullptr;
}