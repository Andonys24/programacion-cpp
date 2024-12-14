/* 2. Realizar un programa que defina una matriz
de 3 x 3 y escriba un ciclo para que
muestre la diagonal principal de la matriz. */

#include <iostream>

using namespace std;

int main()
{
    char matriz[3][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (f == c)
            {
                cout << " [" << matriz[f][c] << "] ";
            }
            else
            {
                cout << " " << matriz[f][c] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}