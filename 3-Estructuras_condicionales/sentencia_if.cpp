/* La sentencia if
    if(condition) {
        Intrucciones
    } else {
        Intrucciones
    }
*/

#include <iostream>

using namespace std;

int main()
{
    int numero, dato = 5;
    string mensaje;

    cout << "Ingrese un numero entero: " << endl;
    cin >> numero;

    if (numero == dato)
    {
        mensaje = "El numero es igual al dato";
    }
    else
    {
        mensaje = "El numero es diferente al dato";
    }

    cout << mensaje << endl;

    return 0;
}