/* 6. Escriba un progama que lea la entrada estandar u caracter
e indique en la salida estanda si el caracter es una vocal
minuscula, es vocal mayuscula o no es vocal */

#include <iostream>

using namespace std;

int main()
{
    char caracter, vocales[5] = {'a', 'e', 'i', 'o', 'u'}, vocales_may[5];
    string mensaje;
    int tipo = 0;
    bool resultado = false;

    cout << "Ingrese una vocal: " << endl;
    cin >> caracter;

    for (int i = 0; i < 5; i++)
    {
        vocales_may[i] = toupper(vocales[i]);

        if (caracter == vocales[i])
        {
            resultado = true;
            tipo = 1;
            break;
        }
        else if (caracter == vocales_may[i])
        {
            resultado = true;
            tipo = 2;
            break;
        }
    }

    if (resultado)
    {
        if (tipo == 1)
        {
            mensaje = "El caracter es una vocal minuscula";
        }
        else if (tipo == 2)
        {
            mensaje = "El caracter es una vocal Mayuscula";
        }
    }
    else
    {
        mensaje = "El caracter no es una vocal";
    }

    cout << mensaje << endl;

    return 0;
}