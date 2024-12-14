/* 8. Realice un programa que calcule el producto de dos matrices
cuadradas de 3x3. */

#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

int generar_numero()
{
    // Generar numeros de aleatorios
    static random_device rd;
    static mt19937 gen(rd());
    // Rango de los numeros aleatorios
    uniform_int_distribution<> dis(-10, 10);
    return dis(gen);
}

void generar_matriz(int matriz[3][3], string letra, bool automatico = false)
{
    cout << ((!automatico) ? "Matriz " + letra + "\n" : "");
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (automatico)
            {
                matriz[f][c] = generar_numero();
            }
            else
            {
                cout << "Ingrese el valor de F:[" << f << "] C:[" << c << "]: ";
                cin >> matriz[f][c];
            }
        }
    }
}

void imprimir_matriz(int matriz[3][3], string nombre = "")
{
    int ancho = 5;
    cout << "\n*** " << nombre << " ***" << endl;

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "|" << setw(ancho) << matriz[f][c] << setw(ancho) << "|";
        }
        cout << endl;
    }
}

int main()
{
    int matriz_a[3][3], matriz_b[3][3], matriz_c[3][3];
    bool automatico = true;

    // llenar los elementos de la matriz a y b
    generar_matriz(matriz_a, "A", automatico);
    generar_matriz(matriz_b, "B", automatico);

    // Calcular el producto de la matriz a y b
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            int resultado = 0;
            for (int i = 0; i < 3; i++)
            {
                resultado += matriz_a[f][i] * matriz_b[i][c];
            }
            matriz_c[f][c] = resultado;
        }
    }

    imprimir_matriz(matriz_a, "Matriz A");
    imprimir_matriz(matriz_b, "Matriz B");
    imprimir_matriz(matriz_c, "Producto de la Matriz A * B");

    return 0;
}