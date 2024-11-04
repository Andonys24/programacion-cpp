/* 2. Escribe la siguiente expresion matematica como
expresion en C++ */

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, resultado;

    cout << "Ingrese el valor de a: " << endl;
    cin >> a;
    cout << "Ingrese el valor de b: " << endl;
    cin >> b;
    cout << "Ingrese el valor de c: " << endl;
    cin >> c;
    cout << "Ingrese el valor de d: " << endl;
    cin >> d;

    resultado = (a + b) / (c + d);

    cout.precision(2);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}