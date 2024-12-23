/* Paso de parametros tipo matriz
Ejemplo:
Elevar al cuadrado todos los elementos de una matriz. */
#include <iomanip>
#include <iostream>

using namespace std;

void mostrarMatriz(int[][3], int, int, string);
void calcularCuadrado(int[][3], int, int);

int main() {
	const int filas = 2, columnas = 3;
	int matriz[filas][columnas] = {{1, 2, 3}, {4, 5, 6}};

	mostrarMatriz(matriz, filas, columnas, "Original");
	calcularCuadrado(matriz, filas, columnas);
	mostrarMatriz(matriz, filas, columnas, "Elevada al cuadrado");

	cin.get();
	return 0;
}

void mostrarMatriz(int matriz[][3], int filas, int columnas, string nombre) {
	int ancho = 5;
	cout << "\n*** " << "Mostrando Matriz " << nombre << " ***\n" << endl;

	for (int i = 0; i < filas; i++) {
		cout << "|";
		for (int j = 0; j < columnas; j++) {
			cout << setw(ancho) << matriz[i][j] << setw(ancho) << "|";
		}
		cout << endl;
	}
}

void calcularCuadrado(int matriz[][3], int filas, int columnas) {
	for (int f = 0; f < filas; f++) {
		for (int c = 0; c < columnas; c++) {
			matriz[f][c] *= matriz[f][c];
		}
	}
}