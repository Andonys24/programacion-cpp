/* 4. Escriba un programa que defina un vector de numeros y muestre en la salida
estandar el vector en orden inverso - del ultimo al primer elemento. */

#include <iostream>

using namespace std;

int main()
{
    int numeros[] = {12, 23, 34, 78, 125, 92};

    for (int i = 5; i >= 0; i--)
    {
        cout << numeros[i] << endl;
    }

    return 0;
}