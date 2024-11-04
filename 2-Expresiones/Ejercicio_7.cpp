/* 7. La calificacion final de un estudiante es la media poderada de tres notas:
la nota de practicas que cuenta con un 30% del total, la nota teorica que cuenta un 60%
y la nota de participacion que cuenta el 10% restante. Escriba un progarama que lo lea de
la entrada estandar las tres notas de un alumno y escriba en la salida estandar su nota final */

#include <iostream>

using namespace std;

int main()
{
    float practica, teorica, participacion, nt_final;

    cout << "Ingrese la nota de practica: " << endl;
    cin >> practica;
    cout << "Ingrese la nota de teorica: " << endl;
    cin >> teorica;
    cout << "Ingrese la nota de participacion: " << endl;
    cin >> participacion;

    nt_final = (practica * 0.3) + (teorica * 0.6) + (participacion * 0.1);

    cout << "La nota final es de: " << nt_final << endl;
    return 0;
}