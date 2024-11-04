// 3. Escribe la siguiente exprecion como C++:

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, e, f, resultado;

    cout << "Ingrese el valor de a: " << endl;
    cin >> a;
    cout << "Ingrese el valor de b: " << endl;
    cin >> b;
    cout << "Ingrese el valor de c: " << endl;
    cin >> c;
    cout << "Ingrese el valor de d: " << endl;
    cin >> d;
    cout << "Ingrese el valor de e: " << endl;
    cin >> e;
    cout << "Ingrese el valor de f: " << endl;
    cin >> f;

    resultado = (a + (b / c)) / (d + (e / f));

    cout.precision(2);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}