/* 5. Realice un programa que lea una matriz de 3x3 y cree
su matriz transpuesta. La matriz transpuesta es aquella en la que la
columna i era la fila i de la matriz original.

| 1 2 3 |           | 1 4 7 |
| 4 5 6 |   --->    | 2 5 8 |
| 7 8 9 |           | 3 6 9 |

*/

#include <iostream>
#include <random>

using namespace std;

int generar_numero()
{
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 9);
    return dis(gen);
}

int main()
{
    int numeros[3][3];

    // Generar los datos de la matriz 3x3
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            numeros[f][c] = generar_numero();
        }
    }

    // Mostrar la raiz 3x3 original y genera la transpuesta
    for (int f = 0; f < 6; f++)
    {
        cout << ((f == 0) ? "\n***Matriz Original***\n" : ((f == 3) ? "\n***Matriz Transpuesta***\n" : ""));

        for (int c = 0; c < 3; c++)
        {
            cout << "|   " << ((f < 3) ? numeros[f][c] : numeros[c][f - 3]) << "   ";
        }
        cout << " |" << endl;
    }

    cin.get();

    return 0;
}