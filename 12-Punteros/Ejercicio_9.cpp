/* 9. realice un programa que calcule la suma de dos matrices dinamicas. */

#include <iomanip>
#include <iostream>

using namespace std;

void limpiarConsola();
void pedirDatos(int &, int &);
int **generarMatriz(int, int);
void pedirDatosMatriz(int **, int, int, char);
void sumarMatrices(int **, int **, int **, int, int);
void imprimirMatriz(int **, int, int, string);
void liberarMatriz(int **&, int);

int main() {
	int **matriz1 = nullptr, **matriz2 = nullptr, **suma = nullptr;
	int filas, columnas;

	// Pedir datos al usuario
	pedirDatos(filas, columnas);

	// Crear matrices Dinamicas
	matriz1 = generarMatriz(filas, columnas);
	matriz2 = generarMatriz(filas, columnas);
	suma = generarMatriz(filas, columnas);

	// Llenar Matrices
	pedirDatosMatriz(matriz1, filas, columnas, 'A');
	cout << endl;
	pedirDatosMatriz(matriz2, filas, columnas, 'B');

	// Realizar suma de matrices
	sumarMatrices(matriz1, matriz2, suma, filas, columnas);

	// Imprimir matrices
	limpiarConsola();
	imprimirMatriz(matriz1, filas, columnas, "A");
	imprimirMatriz(matriz2, filas, columnas, "B");
	imprimirMatriz(suma, filas, columnas, "A + B");

	// Liberar matrices dinamicas
	liberarMatriz(matriz1, filas);
	liberarMatriz(matriz2, filas);
	liberarMatriz(suma, filas);

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
	limpiarConsola();
	cout << "Ingrese el numero de filas: ";
	cin >> filas;
	cout << "Ingrese el numero de columnas: ";
	cin >> columnas;
	cout << endl;
}

int **generarMatriz(int filas, int columnas) {
	int **matriz = new int *[filas];
	for (int f = 0; f < filas; f++) {
		matriz[f] = new int[columnas];
	}

	return matriz;
}

void pedirDatosMatriz(int **matriz, int filas, int columnas, char l) {
	cout << "Matriz " << l << endl;
	for (int f = 0; f < filas; f++) {
		for (int c = 0; c < columnas; c++) {
			cout << "Ingrese el valor del indice [" << f << "][" << c << "]: ";
			cin >> *(*(matriz + f) + c);
		}
	}
}

void sumarMatrices(int **matriz1, int **matriz2, int **resultado, int filas, int columnas) {
	for (int f = 0; f < filas; f++) {
		for (int c = 0; c < columnas; c++) {
			*(*(resultado + f) + c) = *(*(matriz1 + f) + c) + *(*(matriz2 + f) + c);
		}
	}
}

void imprimirMatriz(int **matriz, int filas, int columnas, string nombre) {
	int ancho = 5;
	cout << "*** " << "Matriz " << nombre << " ***" << endl;
	for (int f = 0; f < filas; f++) {
		cout << "|";
		for (int c = 0; c < columnas; c++) {
			cout << setw(ancho) << *(*(matriz + f) + c) << setw(ancho) << "|";
		}
		cout << endl;
	}

	cout << endl;
}

void liberarMatriz(int **&matriz, int filas) {
	for (int f = 0; f < filas; f++) {
		delete[] matriz[f];
		matriz[f] = nullptr;
	}

	delete[] matriz;
	matriz = nullptr;
}