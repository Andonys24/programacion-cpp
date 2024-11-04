/* 1. Escribe un progama que lea de la entrada estadar dos numeros
y muestre en la salida estandar su suma, resta, multiplicacion y division */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Digite el primer numero entero: " << endl;
    cin >> num1;

    cout << "Digite el segundo numero entero: " << endl;
    cin >> num2;

    // Realizar operaciones
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    float division = num1 / num2;

    cout << "\nEl resultado de la suma es: " << suma << endl;
    cout << "El resultado de la resta es: " << resta << endl;
    cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;
    cout << "El resultado de la division es: " << division << endl;

    return 0;
}