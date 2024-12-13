// 10. Escriba un programa que calcule el valor de: 1! + 2! + 3! + ... + n! (Suma de factoriales)

#include <iostream>

using namespace std;

int factorial(int numero)
{
    int resultado = 1;

    for (int i = 1; i <= numero; i++)
    {
        resultado *= i;
    }

    return resultado;
}

int main()
{

    int numero, suma;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        suma += factorial(i);
    }

    cout << "La suma de los numeros de 1! hasta " << numero << "! es: " << suma << endl;
    cin.ignore();
    cin.get();

    return 0;
}