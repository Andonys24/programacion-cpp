/* 6. Realice un programa que calcule la suma
de dos matrices cuadradas de 3x3. */

#include <iostream>

using namespace std;

void imprimir_matriz(int matriz[3][3], string nombre = "")
{
    cout << "\n*** " << nombre << " ***" << endl;
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "  " << matriz[f][c] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int a[3][3] = {{2, 5, 4}, {3, 6, 0}, {9, 1, 7}};
    int b[3][3] = {{8, 7, 3}, {7, 2, 1}, {4, 5, 9}};
    int suma[3][3];

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            suma[f][c] = a[f][c] + b[f][c];
        }
    }

    imprimir_matriz(a, "Matriz A");
    imprimir_matriz(b, "Matriz B");
    imprimir_matriz(suma, "La suma de Matrices A y B");

    return 0;
}