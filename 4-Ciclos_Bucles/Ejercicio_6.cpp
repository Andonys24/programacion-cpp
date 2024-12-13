/* Escriba un programa que calcule x^y, donde
tanto x como y son enteros positivos,
sin utilizar la funcion pow */

#include <iostream>

using namespace std;

int main()
{
    int x, y, resultado = 1;

    cout << "Elevar numero al exponente (x^y)" << endl;

    do
    {
        cout << "Ingrese el valor de X: ";
        cin >> x;
        cout << "Ingrese el valor de Y: ";
        cin >> y;

    } while (x <= 0 || y <= 0);

    for (int i = 0; i < y; i++)
    {
        resultado *= x;
    }

    cout << "El numero '" << x << "' elevado al '" << y << "' es igual a: " << resultado << endl;
}