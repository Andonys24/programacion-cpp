/* Ejercicio 2: Realice un programa que lea de la entrada
estandar numeros hasta quw se introdusca un cero. En ese momento
el programa debe terminar y mostrar en la salida estandar el numero
de valores mayores que cero leidos*/

#include <iostream>

using namespace std;

int main()
{
    int num, contador = 0;

    do
    {
        cout << "Ingrese un numero: " << endl;
        cin >> num;

        (num > 0) ? contador++ : contador;

    } while (num != 0);

    cout << "Numeros mayores que cero: " << contador << endl;
    return 0;
}