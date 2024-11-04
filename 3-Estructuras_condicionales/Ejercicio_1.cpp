/* 1. Escriba un progama que lea dos numero y determine
cual de ellos es el mayor */

#include <iostream>

using namespace std;

int main()
{
    float n1, n2;

    cout << "Ingrese 2 numeros: " << endl;
    cin >> n1 >> n2;

    if (n1 == n2)
    {
        cout << "Ambos numeros son iguales: " << n1 << " = " << n2 << endl;
    }
    else if (n1 > n2)
    {
        cout << "El numero mayor es: " << n1 << endl;
    }
    else
    {
        cout << "El numero mayor es: " << n2 << endl;
    }

    return 0;
}