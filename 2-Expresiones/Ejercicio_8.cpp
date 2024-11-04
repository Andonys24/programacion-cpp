/* 8. Escriba un progama que lea de la estrada estandar
los dos catetos de un triangula rectangulo y escriba en la
salida estandar su hipotenusa */

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    float adyacente, opuesto, hipotenusa;

    cout << "**Encontrar la Hipotenusa de un triangulo rectangulo**" << endl;
    cout << "Ingrese el valor del lado Adyacente: " << endl;
    cin >> adyacente;
    cout << "Ingrese el valor del lado Opuesto: " << endl;
    cin >> opuesto;

    hipotenusa = sqrt(pow(adyacente, 2) + pow(opuesto, 2));

    cout << "La Hipotenusa es: " << hipotenusa << endl;
    return 0;
}