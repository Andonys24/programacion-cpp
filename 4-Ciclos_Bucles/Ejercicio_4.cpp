/* Escriba un programa que tome cada 24 horas la temperatura exterior,
 * leyendola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas.
 * Calcule la temperatura media del dia, la temperatura mas alta y la mas baja */

#include <iostream>

using namespace std;

int main()
{
	float temperaturas[6], mayor, menor;

	for (int i = 0; i < 6; i++)
	{
		cout << "Ingrese el valor de la temperatura de la hora " << (i + 1) * 4 << " : ";
		cin >> temperaturas[i];
	}

	menor = temperaturas[0];
	mayor = temperaturas[0];

	for (int i = 0; i < 6; i++)
	{
		if (mayor < temperaturas[i])
		{
			mayor = temperaturas[i];
		}
		else if (menor > temperaturas[i])
		{
			menor = temperaturas[i];
		}
	}

	cout << "La temperatura mayor es: " << mayor << endl;
	cout << "La temperatura menor es: " << menor << endl;

	return 0;
}
