/* 7. Desarollar un programa que determine si una matriz es simetrica
o no. Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta.

| 8 1 3 |             | 8 1 3 |
| 1 7 4 |     -->     | 1 7 4 |
| 3 4 9 |             | 3 4 9 |
*/

#include <iostream>

using namespace std;

int main()
{
    int filas, columnas;
    bool simetrico = true;
    string motivo;

    cout << "Ingrese la cantidad de filas: ";
    cin >> filas;

    cout << "Ingrese la cantidad de columnas: ";
    cin >> columnas;

    int matriz_a[filas][columnas];
    int matriz_b[filas][columnas];

    // Ingresar datos de matriz a
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Ingrese un valor para F:[" << f << "] C:[" << c << "]: ";
            cin >> matriz_a[f][c];
        }
    }

    // Verificar si son simetricas
    if (filas == columnas)
    {
        for (int f = 0; f < filas; f++)
        {
            for (int c = 0; c < columnas; c++)
            {

                if (matriz_a[f][c] != matriz_a[c][f])
                {
                    simetrico = false;
                    motivo = "Su Transpuesta No es simetrica a la Matriz Original";
                    break;
                }
            }
        }
    }
    else
    {
        simetrico = false;
        motivo = "El numero de filas no son simetrica a el numero de columnas";
    }

    // Mostrar respuesta en pantalla
    cout << "La matriz '" << ((simetrico) ? "Es" : "No es") << " Simetrica'" << endl;
    cout << ((!simetrico) ? "Motivo: " + motivo + "\n" : "");
    cin.get();

    return 0;
}