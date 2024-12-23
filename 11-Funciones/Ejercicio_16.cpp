/* 16. Realice una funcion que dada una matriz y un numero de fila de la matriz
devuelva el menor de los elementos almacenados en dicha fila. */

#include <iostream>

using namespace std;

void limpiarTerminal();
void pedirDatos(int &, int &);
int **crearMatriz(int, int);
void liberarMatriz(int **&, int);
void llenarMatriz(int **, int, int);
void operarMatriz(int **, int, int);

int main() {
	int **matriz = nullptr;
	int filas, columnas;

	pedirDatos(filas, columnas);

	matriz = crearMatriz(filas, columnas);

	llenarMatriz(matriz, filas, columnas);

	operarMatriz(matriz, filas, columnas);

	liberarMatriz(matriz, filas);

	cin.get();
	return 0;
}

void limpiarTerminal() {
	const char *comando = (system("clear") == 0) ? "clear" : "cls";
	system(comando);
}

void pedirDatos(int &filas, int &columnas) {
	limpiarTerminal();
	cout << "Ingrese la cantidad de filas: ";
	cin >> filas;
	cout << "Ingrese la cantidad de columnas: ";
	cin >> columnas;
}

int **crearMatriz(int filas, int columnas) {
	int **matriz = new int *[filas];
	for (int f = 0; f < filas; f++) {
		matriz[f] = new int[columnas];
	}
	return matriz;
}

void liberarMatriz(int **&matriz, int filas) {
	for (int f = 0; f < filas; f++) {
		delete[] matriz[f];
		matriz[f] = nullptr;
	}
	delete[] matriz;
	matriz = nullptr;
}

void llenarMatriz(int **matriz, int filas, int columnas) {
	limpiarTerminal();
	for (int f = 0; f < filas; f++) {
		for (int c = 0; c < columnas; c++) {
			cout << "Ingrese el valor del indice [" << f << "][" << c << "]: ";
			cin >> matriz[f][c];
		}
	}
}

void operarMatriz(int **matriz, int filas, int columnas) {
	limpiarTerminal();
	for (int f = 0; f < filas; f++) {
		int menor = 0;
		for (int c = 0; c < columnas; c++) {
			menor = (matriz[f][menor] > matriz[f][c]) ? c : menor;
		}
		cout << "El menor elemento de la fila #" << f << " es: " << matriz[f][menor] << endl;
	}
}