// 11. Escriba un programa que calcule el valor de: 2^1 + 2^2 + 2^3 + ... + 2^n

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int base, expo, result;

    cout << "Ingrese el valor de la base: ";
    cin >> base;

    cout << "Ingrese el valor de el exponente: ";
    cin >> expo;

    for (int i = 1; i <= expo; i++)
    {
        result += pow(base, i);
    }

    cout << "El resultado de la suma de " << base << "^" << expo << " es: " << result << endl;
    cin.ignore();
    cin.get();

    return 0;
}