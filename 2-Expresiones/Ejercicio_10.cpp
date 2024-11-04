/* 10. Escriba un progama que calcule las soluciones
de una ecuacion de segundo grado de la forma ax^2 + bx + c = 0
teniendo en cuenta la formula general de ecuacion cuadratica */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a = 0, b = 0, c = 0;

    // Pedir al usuario que ingrese los coeficientes
    cout << "Ingrese los coeficientes a, b y c (separado por espacios): ";
    cin >> a >> b >> c;

    // Calcular el discriminante
    double discriminante = pow(b, 2) - 4 * a * c;

    // Verificar si la solución es real
    if (discriminante > 0)
    {
        // Dos soluciones reales diferentes
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las soluciones son: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    else if (discriminante == 0)
    {
        // Una solución real
        double x = -b / (2 * a);
        cout << "Solucion Unica: " << endl;
        cout << "x = " << x << endl;
    }
    else
    {
        // Soluciones complejas
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminante) / (2 * a);
        cout << "Las soluciones son: " << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}