/* 10. Mostrar los meses del anio, pidiendole al usuario
un numero entre [1 -12], y mostrar el mes al que
corresponde. */

#include <iostream>
#include <map>

using namespace std;

int main()
{
    int numero;
    map<int, string> meses = {
        {1, "Enero"},
        {2, "Febrero"},
        {3, "Marzo"},
        {4, "Abril"},
        {5, "Mayo"},
        {6, "Junio"},
        {7, "Julio"},
        {8, "Agosto"},
        {9, "Septiembre"},
        {10, "Octubre"},
        {11, "Noviembre"},
        {12, "Diciembre"},
    };

    cout << "Ingrese un numero del [1-12]: " << endl;
    cin >> numero;

    if (numero < 1 || numero > 12)
    {
        cout << "Numero fuera del rango" << endl;
        return 0;
    }

    for (const auto &item : meses)
    {

        if (numero == item.first)
        {
            cout << "El mes correspondiente es: " << item.second << endl;
            return 0;
        }
    }
}