/* Punteros - Declaracion de punteros
&n =  la direccion de n
*n = la variable cuya direccione esta almacenada en n
*/

#include <iostream>

using namespace std;

int main() {
	int *puntero = nullptr; // Declaracion de un puntero
	int numero = 20;

	puntero = &numero; // Asignacion de la direccion de memoria de la variable numero al puntero

	cout << "Numero: " << *puntero << endl;						   // Imprime el valor de la variable numero
	cout << "Direccion de memoria de numero: " << puntero << endl; // Imprime la direccion de memoria

	puntero = nullptr; // Se libera la direccion de memoria

	cin.get();
	return 0;
}