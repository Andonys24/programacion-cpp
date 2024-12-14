/* 4. Hacer una matriz preguntando al usuario el numero de
filas y coplumnas, llenarla de numeros aleatorios, copiar
el contenido a otra matriz y por ultimo mostrarla en pantalla. */

#include <iostream>
#include <random>

using namespace std;

int numero_aleatorio(int max = 100)
{
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dis(1, max);
    return dis(gen);
}

int main()
{
    int filas, columnas;

    cout << "Ingrese el numero de filas de la Matriz: ";
    cin >> filas;

    cout << "Ingrese el numero de columnas de la Matriz: ";
    cin >> columnas;

    int numeros[filas][columnas], numeros_2[filas][columnas];

    // Llenar la matriz de numeros con los datos ingresados por el usuario
    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < columnas; c++)
        {
            numeros[f][c] = numero_aleatorio((filas * columnas) * 10);
        }
    }

    // Guardar los datos de la matriz de numeros a la matriz de numeros_2
    // Mostrar los datos de la nueva raiz
    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < columnas; c++)
        {
            numeros_2[f][c] = numeros[f][c];
            cout << "   " << numeros_2[f][c] << "   ";
        }
        cout << endl;
    }

    return 0;
}