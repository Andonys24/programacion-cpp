/* 5. Desarolle un programa que lea de la entrada estandar un vector
de enteros y determine el mayor elemento del vector */

#include <iostream>

using namespace std;

int main()
{
    int cantidad, mayor;

    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> cantidad;

    int numeros[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese el valor del indice '" << i << "' del arreglo: ";
        cin >> numeros[i];
    }

    mayor = numeros[cantidad - 1];

    for (int i = 0; i < cantidad; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
    }

    cout << "El elemento mayor del arreglo es: " << mayor << endl;

    cin.get();
    return 0;
}