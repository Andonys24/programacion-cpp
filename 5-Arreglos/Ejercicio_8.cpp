/* 8. Hacer un programa que lea 5 numeros en un arreglo,
los copie a otros arreglos multiplicados por 2 y muestre el segundo arreglo */

#include <iostream>

using namespace std;

int main()
{
    int n = 5, numeros[n], numeros_multiplicados[n];

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Ingrese un numero para almacenar en el arreglo: ";
        cin >> numeros[i];
    }

    for (int i = 0; i < n; i++)
    {
        numeros_multiplicados[i] = numeros[i] * 2;
        cout << numeros[i] << " X 2 = " << numeros_multiplicados[i] << endl;
    }

    cin.get();

    return 0;
}