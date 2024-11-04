/* 8. Escribe un progama que lea de la entrada estandar tres numeros.
Despues debe leer un cuarto numero e indicar si el numero
coincide con alguno de los introducidos anteriormente */

#include <iostream>

using namespace std;

int main()
{
    const int rango = 4;
    float numeros[rango], numero;

    for (int i = 0; i < rango; i++)
    {
        cout << "Ingrese el digito " << i + 1 << ":" << endl;
        cin >> numeros[i];
    }


    for (int i = 0; i < (rango - 1); i++)
    {
        if (numeros[3] == numeros[i])
        {
            cout << "El ultimo digito '" << numeros[3] << "' coincide con: " << numeros[i] << endl;
        }
        else
        {
            cout << "El ultimo digito '" << numeros[3] << "' no coincide con: " << numeros[i] << endl;
        }
    }

    return 0;
}