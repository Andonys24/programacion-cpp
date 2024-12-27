/* Matrices Dinamicas

Ejemplo: Rellenar una matriz de n x m y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int] [int]
				-> *puntero_fila -> [int] [int] [int]
				-> *puntero_fila -> [int] [int] [int] */

#include <iomanip>
#include <iostream>

using namespace std;

void limpiarConsola();
void pedirDatos(int &, int &);
int **crearMatriz(int, int);
void pedirDatosMatriz(int **, int, int);
void mostrarMatriz(int, int, int **);
void liberarMatriz(int **&, int);

int main() {
	int **matriz = nullptr;
	int filas, columnas;

	// Pedir datos al usuario
	pedirDatos(filas, columnas);

	// Crear matriz dinamica
	matriz = crearMatriz(filas, columnas);

	// Pedir datos de la matriz
	pedirDatosMatriz(matriz, filas, columnas);

	// Mostrar matriz
	mostrarMatriz(filas, columnas, matriz);

	// Liberar matriz
	liberarMatriz(matriz, filas);

	cin.ignore();
	cout << "\nPresione una tecla para continuar...";
	cin.get();

	return 0;
}

void limpiarConsola() {
	const char *comando = (system("clear") == 0) ? "clear" : "cls";
	system(comando);
}

void pedirDatos(int &filas, int &columnas) {
	cout << "Ingrese el numero de filas: ";
	cin >> filas;
	cout << "Ingrese el numero de columnas: ";
	cin >> columnas;
}

int **crearMatriz(int filas, int columnas) {
	int **matriz = new int *[filas];
	for (int f = 0; f < filas; f++) {
		matriz[f] = new int[columnas];
	}
	return matriz;
}

void pedirDatosMatriz(int **matriz, int filas, int columnas) {
	limpiarConsola();
	for (int f = 0; f < filas; f++) {
		for (int c = 0; c < columnas; c++) {
			cout << "Ingrese el valor del indice [" << f << "][" << c << "]: ";
			cin >> *(*(matriz + f) + c);
		}
	}
}

void mostrarMatriz(int filas, int columnas, int **matriz) {
	limpiarConsola();
	int ancho = 5;
	for (int f = 0; f < filas; f++) {
		for (int c = 0; c < columnas; c++) {
			cout << "|" << setw(ancho) << *(*(matriz + f) + c) << setw(ancho) << "|";
		}
		cout << endl;
	}
}

void liberarMatriz(int **&matriz, int filas) {
	for (int f = 0; f < filas; f++) {
		delete[] matriz[f];
		matriz[f] = nullptr;
	}
	delete[] matriz;
	matriz = nullptr;
}