/* 4. Comprobar si un numero digitado por el
usuario es positivo o negativo */

#include <iostream>

using namespace std;

int main()
{
    float num;
    string mensaje = "Ingrese un numero: ";

    cout << mensaje << endl;
    cin >> num;

    if (num == 0)
    {
        mensaje = "El numero es neutro";
    }
    else if (num > 0)
    {
        mensaje = "El numero es positivo";
    }
    else
    {
        mensaje = "El numero es negativo";
    }

    cout << mensaje << endl;

    return 0;
}