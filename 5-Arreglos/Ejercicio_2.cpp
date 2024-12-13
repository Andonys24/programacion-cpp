/* 2. Escriba un programa que defina un vector de numeros y calcule
la multiplicacion acumulada de sus elementos */

#include <iostream>

using namespace std;

int main()
{
    int numeros[] = {1, 2, 3, 4, 5}, total = 1;

    for (int i = 0; i < 5; i++)
    {
        total *= numeros[i];
    }

    cout << "El total de la multiplicacion acumulada es: " << total;

    cin.get();

    return 0;
}