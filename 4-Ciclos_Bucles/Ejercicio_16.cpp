/* 16. Realice un programa que calcule las descomposicion en factores
primos de un numero entero, por ejemplo: 20 = 2 * 2 * 5 */

#include <iostream>
#include <vector>

using namespace std;

void descomponer_en_factores_primos(int n)
{
    vector<int> factores_primos;

    int divisor = 2;
    while (n > 1)
    {
        while (n % divisor == 0)
        {
            factores_primos.push_back(divisor);
            n /= divisor;
        }
        divisor++;
    }

    cout << "La descomposición en factores primos es: ";
    for (int i = 0; i < factores_primos.size(); i++)
    {
        if (i != 0)
            cout << " * ";
        cout << factores_primos[i];
    }
    cout << endl;
}

int main()
{
    int numero;

    cout << "Introduce un número entero: ";
    cin >> numero;

    descomponer_en_factores_primos(numero);

    return 0;
}
