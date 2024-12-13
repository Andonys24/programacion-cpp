/* 15. Realice un programa que solicite al usuario que piense un numero entero
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo
rango [1, 100], e indicalr al usuario si el numero que digito es menor o mayor
al numero aleatorio, asi hasta que lo adivine. y por ultimo mostrarle el numero
de intentos que le llevo.
variable = limite_inferior + rand() % (limite superior + 1 - limite_inferior);
*/

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int number, secret_number, attempts = 0, upper_limit = 100, lower_limit = 1;

    srand(time(NULL));
    secret_number = lower_limit + rand() % (upper_limit - lower_limit);

    do
    {
        cout << "Digite un numero: ";
        cin >> number;

        if (number < secret_number)
        {
            cout << "El numero secreto es mayor a '" << number << "'" << endl;
        }
        if (number > secret_number)
        {
            cout << "El numero secreto es menor a '" << number << "'" << endl;
        }

        attempts++;

    } while (number != secret_number);

    cout << "FELICIDADES has adivinado el numero secreto!" << endl;
    cout << "Te tomo un total de: " << attempts << " intentos." << endl;
    cin.ignore();
    cin.get();

    return 0;
}