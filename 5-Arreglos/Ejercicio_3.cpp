/* 3. Escribe un programa que lea de la entrada estandar un vector
de numeros y muestre en la salida estandar los numeros del vector con sus indices
asociados. */

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Ingrese el numero de elemtos que va a tener el arreglo: ";
    cin >> n;

    int numeros[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    // Mostrear los elementos con sus indices asociados

    for (int i = 0; i < n; i++)
    {
        cout << "En el indice " << i << " Se encuentra --> " << numeros[i] << endl;
    }
    cin.get();
    
    return 0;
}