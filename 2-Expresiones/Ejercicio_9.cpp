/* 9. Realice u progama que calcule el valor que toma la siguiente funcion para unos
valores datos para x e y: */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y, resultado;

    cout << "Ingrese el valor de X: " << endl;
    cin >> x;
    cout << "Ingrese el valor de Y: " << endl;
    cin >> y;


    resultado = (sqrt(x)) / (pow(y, 2) - 1);

    cout.precision(2);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}