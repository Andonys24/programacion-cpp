/* La setencia switch
    switch(expresion) {
        case literal1:
            conjunto de intrucciones1;
            break;
        case literal2:
            conjunto de instrucciones2;
            break;
        case literal3:
            conjunto de instrucciones3;
            break;
        default:
            conjunto de intrucciones por defecto;
            break;
    }
*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un numero entero: " << endl;
    cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "Elegiste opcion 1 " << endl;
        break;
    case 2:
        cout << "Elegiste opcion 2 " << endl;
        break;
    case 3:
        cout << "Elegiste opcion 3 " << endl;
        break;
    case 4:
        cout << "Elegiste opcion 4 " << endl;
        break;
    default:
        cout << "Eleccion no valida" << endl;
        break;
    }

    return 0;
}