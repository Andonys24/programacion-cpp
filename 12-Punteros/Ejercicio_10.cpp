/* 10. Realice un programa que lea una matriz de n x m y cree su matriz transpuesta.

NOTA: La matriz transpuesta es aquella en la que l columna i era la fila i de la matriz original. */

#include <iomanip>
#include <iostream>

using namespace std;

void limpiarConsola();
void pedirDatos(int &, int &);
int **crearMatriz(int, int);
void llenarMatriz(int **, int, int);
void obtenerTranspuesta(int **, int **, int, int);
void imprimirMatriz(int **, int, int, string);
void liberarMatriz(int **&, int);

int main() {
	int **matriz = nullptr, **transpuesta = nullptr;
	int filas, columnas;

	// Pedir los datos al usuario
	pedirDatos(filas, columnas);

	// Crear matrices dinamicas
	matriz = crearMatriz(filas, columnas);
	transpuesta = crearMatriz(columnas, filas);

	// Llenar la matriz de datos
	llenarMatriz(matriz, filas, columnas);

	// Obtener Matriz Transpuesta
	obtenerTranspuesta(matriz, transpuesta, filas, columnas);

	// Mostrar resultado
	limpiarConsola();
	imprimirMatriz(matriz, filas, columnas, "Ingresada");
	cout << endl;
	imprimirMatriz(transpuesta, columnas, filas, "Transpuesta");

	// Liberar memoria reservada
	liberarMatriz(matriz, filas);
	liberarMatriz(transpuesta, columnas);

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
	cout << "Ingrese la cantidad de filas de la matriz: ";
	cin >> filas;
	cout << "Ingrese la cantidad de columnas de la matriz: ";
	cin >> columnas;
}

int **crearMatriz(int filas, int columnas) {
	int **matriz = new int *[filas];

	for (int f = 0; f < filas; f++) {
		matriz[f] = new int[columnas];
	}

	return matriz;
}

void llenarMatriz(int **matriz, int filas, int columnas) {
	limpiarConsola();
	for (int f = 0; f < filas; f++) {
		for (int c = 0; c < columnas; c++) {
			cout << "Ingrese el valor de la Fila [" << f << "] y Columna [" << c << "]: ";
			cin >> *(*(matriz + f) + c);
		}
	}
}

void obtenerTranspuesta(int **matriz, int **transpuesta, int filas, int columnas) {
	for (int f = 0; f < filas; f++) {
		for (int c = 0; c < columnas; c++) {
			*(*(transpuesta + c) + f) = *(*(matriz + f) + c);
		}
	}
}

void imprimirMatriz(int **matriz, int filas, int columnas, string nombre) {
	int espacio = 5;
	cout << "*** Matriz " << nombre << " ***" << endl;
	for (int f = 0; f < filas; f++) {
		cout << "|";
		for (int c = 0; c < columnas; c++) {
			cout << setw(espacio) << *(*(matriz + f) + c) << setw(espacio) << "|";
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