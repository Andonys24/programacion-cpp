/* 1. Realice un programa que solicite de la entrada estandar
un entero del 1 al 10 y muestre en la salida estandar su tabla de multiplicar. */

#include <iostream>

using namespace std;

int main()
{
    int num;

    do
    {
        cout << "Ingrese un numero del 1 al 10: " << endl;
        cin >> num;
    } while (num < 1 || num > 10);

    for (int i = 0; i < 21; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }

    cout << "Fin del programa..." << endl;
    cin.ignore();

    return 0;
}