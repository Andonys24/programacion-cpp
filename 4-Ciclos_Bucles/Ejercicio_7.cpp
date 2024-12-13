// 7. Escribe un programa que calcule el valor de: 1 + 2 + 3 ... + n

#include <iostream>

using namespace std;

int main()
{
    int n, suma = 0;

    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    for (int x = 1; x <= n; x++)
    {
        suma += x;
    }

    cout << "La suma de todos los numeros  es: " << suma << endl;
    cin.ignore();
    cin.get();

    return 0;
}