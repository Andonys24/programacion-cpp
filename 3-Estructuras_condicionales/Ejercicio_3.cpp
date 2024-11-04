/* 3. Realizace un progama que lea un valor entero
y determine si se trata de un numero par o impar */

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Ingrese un numero entero: " << endl;
    cin >> num;

    if (num != 0)
    {
        if (num % 2 == 0)
        {
            cout << "El numero " << num << " es par" << endl;
        }
        else
        {
            cout << "El numero " << num << " es impar" << endl;
        }
    }
    else
    {
        cout << "El numero es 0" << endl;
    }

    return 0;
}