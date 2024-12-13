/* Realice un programa que calcule y muestre en la salida estandar la suma
 * de los cuadrados de los primeros 10 enteros mayores a cero */

#include <iostream>

using namespace std;

int main()
{
	int suma = 0, cuadrado;

	for (int i = 1; i <= 10; i++)
	{
		cuadrado = i * i;
		suma += cuadrado;
	}

	cout << "El resultado de la suma es: " << suma;

	cin.ignore();
	return 0;
}
