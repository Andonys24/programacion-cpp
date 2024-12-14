/* 1. Hacer un programa para rellenar una matriz pidiendo al usuario
el numero de filas y columnas, Posteriormente mostrar la matriz en pantalla. */

#include <iostream>

using namespace std;

int main()
{
    int filas, columnas;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;

    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    int numeros[filas][columnas];

    // Almacenando elementos en la matriz
    for (int fila = 0; fila < filas; fila++)
    {
        for (int columna = 0; columna < columnas; columna++)
        {
            cout << "Ingrese un numero [" << fila << "][" << columna << "]: ";
            cin >> numeros[fila][columna];
        }
    }

    // Mostrar la matriz en pantalla
    for (int fila = 0; fila < filas; fila++)
    {
        for (int columna = 0; columna < columnas; columna++)
        {
            cout << " | " << numeros[fila][columna] << " | ";
        }
        cout << endl;
    }

    cin.get();

    return 0;
}