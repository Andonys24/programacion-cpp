/* 1. Escribir un programa que defina un vector de numeros y calcule
la suma de sus elementos */

#include <iostream>

using namespace std;

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int total;

    for (int i = 0; i < 5; i++)
    {
        total += numeros[i];
    }

    cout << "El total de la suma de numeros es: " << total << endl;

    cin.get();

    return 0;
}