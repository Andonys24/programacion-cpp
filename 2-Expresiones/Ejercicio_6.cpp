/* 6. Escriba un progama que lea la nota final de cuatro
alumnos y calcule la nota final media de los cuatros alumnos */

#include <iostream>

using namespace std;

int main()
{
    float notas[4], total, promedio;

    for (int i = 0; i < 4; ++i)
    {
        cout << "Ingrese la Nota del alumno " << i + 1 << ": " << endl;
        cin >> notas[i];
    }

    for (int i = 0; i < 4; ++i)
    {
        total += notas[i];
    }

    promedio = total / 4;

    cout.precision(2);
    cout << "El promedio de los 4 alumnos es de: " << promedio << endl;

    return 0;
}