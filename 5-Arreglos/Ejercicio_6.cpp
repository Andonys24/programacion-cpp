/* 6. Escribe un programa que defina un vector de numeros
y calcule si existe algun numero en el vector cuyo valor
equivale a la suma del resto de numeros del vector */

#include <iostream>

using namespace std;

int main()
{
    int numeros[] = {1, 2, 3, 6, 12, 24};
    bool resultado = false;

    for (int i = 0; i < 6; i++)
    {
        int suma = 0;

        for (int e = 0; e < 6; e++)
        {
            if (i != e)
            {
                suma += numeros[e];
            }
        }

        if (numeros[i] == suma)
        {
            cout << "El numero " << numeros[i] << " coindice con la suma del resto de numeros del arreglo" << endl;
            resultado = true;
        }
    }

    if (!resultado)
    {
        cout << "No existe un numero igual a la suma de los demas numeros del arreglo" << endl;
    }

    cin.get();

    return 0;
}