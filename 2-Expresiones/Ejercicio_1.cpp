// 1. Escribe la siguiente expresion como expresion en C++

#include <iostream>

using namespace std;

int main()
{
    float a, b, resultado;
    cout << "Digite el valor de a: " << endl;
    cin >> a;
    cout << "Digite el valor de b: " << endl;
    cin >> b;

    resultado = (a / b) + 1;

    cout.precision(2);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}