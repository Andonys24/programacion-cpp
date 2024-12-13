// 8. Escribe un programa que calcule el valor de: 1 + 3 + 5 + ... + 2n-1

#include <iostream>

using namespace std;

int main()
{
    int num, suma;

    cout << "Ingrese un numero: ";
    cin >> num;

    for (int i = 1; i <= (2 * num - 1); i += 2)
    {
        suma += i;
    }

    cout << "La suma total de los numeros hasta llegar hasta " << (2 * num - 1) << " es: " << suma << endl;
    cin.ignore();
    cin.get();

    return 0;
}