/* Paso de parametros de tipo vector (array)
Parametros de la funcion:
	void nombreFuncion(tipo arreglo[], int tamanioArreglo)

Llamada a la funcion
	nombreFuncion(nombreArreglo, tamanioArreglo)

Ejemplo: Cuadrados de los elementos del vector. */

#include <iostream>

using namespace std;

void cuadrado(int vec[], int tam);
void mostrar_vector(int vec[], int tam);

int main() {
	int vec[] = {1, 2, 3, 4, 5};
	int tam;

	tam = sizeof(vec) / sizeof(vec[0]);

	cuadrado(vec, tam);
	mostrar_vector(vec, tam);

	cin.get();
	return 0;
}

void cuadrado(int vec[], int tam) {
	for (int i = 0; i < tam; i++) {
		vec[i] *= vec[i];
	}
}

void mostrar_vector(int vec[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << "El indice [" << i << "] tiene como valor: " << vec[i] << endl;
	}
}