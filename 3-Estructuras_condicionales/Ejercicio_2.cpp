/* 2. Escriba un progama que lea tres numeros
y determine cual de ellos es el mayor */

#include <iostream>

using namespace std;

int main()
{
    const int rango = 3;
    float numeros[rango], mayor;

    // Iterar para pedir datos
    for (int i = 0; i < rango; i++)
    {
        cout << "Ingrese el digito " << i + 1 << ": " << endl;
        cin >> numeros[i];
    }

    // Iterar para buscar el numero mayor
    for (int i = 0; i < rango; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
    }

    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}