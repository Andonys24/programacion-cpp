/* 7. Escriba un progama que solicite una edad (un entero)
e indique en la salida estandar si la edad introducida
esta en el rango (18,25). */

#include <iostream>

using namespace std;

int main()
{
    int edad;
    string mensaje;

    cout << "Ingrese su edad: " << endl;
    cin >> edad;

    if (edad >= 18 && edad <= 25)
    {
        mensaje = "La edad esta en el rango de [18 - 25]";
    }
    else
    {
        mensaje = "La edad no esta en el rango de [18 - 25]";
    }

    cout << mensaje << endl;

    return 0;
}