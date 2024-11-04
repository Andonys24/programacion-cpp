/* Ejecute el progama del ejercicio anterior con entradas erroneas y observe
los resultados. Por ejemplo, introduzca un dato de tipo caracter cuando se espera
un dato de tipo entero */

#include <iostream>

using namespace std;

int main()
{
    // Declarar variables
    int age;
    char sex[10];
    float height;

    // Entrada de datos
    cout << "\nDigite su edad: " << endl;
    cin >> age;

    cout << "Digite su sexo: " << endl;
    cin >> sex;

    cout << "Digite su altura: " << endl;
    cin >> height;

    // Imprimir resultados
    cout << "Tienes una edad de: " << age << endl;
    cout << "Eres de Sexo: " << sex << endl;
    cout << "Tienes una altura de: " << height << endl;

    return 0;
}