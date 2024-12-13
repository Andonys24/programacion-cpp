/* Escriba un programa que lea los valores enteros hasta que se introduzca un
 * valor en el rango [20-30] o se introduzca el valor 0. El programa debe
 * entregarse la suma de los valores mayores a 0 introducidos */

#include <iostream>

using namespace std;

int main()
{
	int numero, suma;

	do
	{
		cout << "Digite un numero: ";
		cin >> numero;

		if (numero > 0)
		{
			suma += numero;
		}

	} while ((numero < 20 || numero > 30) && numero != 0);

	cout << "La suma de los numeros es: " << suma << endl;

	return 0;
}
