/* hacer un programa que calcule el resultado de la siguiente expresion:
1 - 2 + 3 - 4 + 5 - 6 ... n */

#include <iostream>

using namespace std;

int main()
{
    int n, result;

    cout << "ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result -= i;
        }
        else
        {
            result += i;
        }
    }

    cout << "El resultado del calculo es: " << result << endl;
    cin.ignore();
    cin.get();

    return 0;
}