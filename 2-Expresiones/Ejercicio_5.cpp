/* 5. Escribe un fragmento de programa que intercambie los valores de dos variables*/

#include <iostream>

using namespace std;

int main()
{
    float x, y, z;

    cout << "Digite el valor de X: " << endl;
    cin >> x;
    cout << "Digite el valor de Y: " << endl;
    cin >> y;

    z = x;
    x = y;
    y = z;

    cout << "El valor de X ahora es: " << x << endl;
    cout << "El valor de Y ahora es: " << y << endl;
    return 0;
}
