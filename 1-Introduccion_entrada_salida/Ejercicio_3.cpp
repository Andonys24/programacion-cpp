/*Realice un progama que lea de la entrada estandar las siguientes datos de una persona:

    Edad: Dato de tipo entero.
    Sexo: dato de tipo caracter.
    Altura: Dato de tipo real.

Tras leer los datos, el progamara debe mostrarlos en la salida estandar */

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