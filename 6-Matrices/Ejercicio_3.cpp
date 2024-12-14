/* 3. Hacer una matriz de tipo entera de 2x2, llenarla de
numeros y luego copiar todo su contenido hacia otra matriz*/

#include <iostream>

using namespace std;

int main()
{
    int numeros[2][2] = {{1, 2}, {3, 4}};
    int new_matriz[2][2];

    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 2; c++)
        {
            new_matriz[f][c] = numeros[f][c];
            cout << "|  " << new_matriz[f][c] << "  ";
        }
        cout << "|" << endl;
    }

    cin.get();

    return 0;
}