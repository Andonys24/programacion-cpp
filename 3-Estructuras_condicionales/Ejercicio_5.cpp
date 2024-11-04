/* 5. Escriba un progama que lea la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal minuscula o no. */

#include <iostream>

using namespace std;

int main()
{
    char caracter, vocales[5] = {'a', 'e', 'i', 'o', 'u'};
    bool resultado = false;

    cout << "Ingrese un caracter:" << endl;
    cin >> caracter;

    // Iterar y validar
    for (int i = 0; i < 5; i++)
    {
        if (caracter == vocales[i])
        {
            resultado = true;
            // Terminar iteracion si se encontro resultado
            break;
        }
    }
    // Mensaje segun el resultado
    if (resultado)
    {
        cout << "El caracter es una vocal minuscula" << endl;
    }
    else
    {
        cout << "El caracter NO es una vocal minuscula" << endl;
    }

    return 0;
}