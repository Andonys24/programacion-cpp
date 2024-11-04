/* 12. Hacer un menu que considere las siguientes opciones
    Caso 1: Cubo de un numero
    Caso 2: Numero par o impar
    Caso 3 Salir
*/

#include <iostream>
#include <limits>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

string alerta;

void limpiar_pantalla()
{
    const char *comando = (system("clear") == 0) ? "clear" : "cls";
    system(comando);
}

void mostrar_alerta()
{
    if (!alerta.empty())
    {
        cout << alerta << endl;
        alerta.clear();
    }
}

int validar_opcion()
{
    int opcion;

    cout << "Opcion: ";
    cin >> opcion;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        alerta = "Tipo de dato Invalido";
        return 0;
    }

    if (opcion >= 1 && opcion <= 3)
    {
        return opcion;
    }
    else
    {
        alerta = "numero no Valido";
    }

    return 0;
}

int menu()
{
    map<int, string> opciones = {
        {1, "Sacar el cubo de un numero"},
        {2, "Verificar si un numero es par o impar"},
        {3, "Salir"}};
    int opcion;

    while (opcion < 1 || opcion > 3)
    {
        limpiar_pantalla();
        cout << "Ejercicio 12. Condicionales" << endl;
        mostrar_alerta();

        for (const auto &item : opciones)
        {
            cout << "[" << item.first << "] - " << item.second << endl;
        }

        opcion = validar_opcion();
    }

    return opcion;
}

void cubo_numero()
{
    float numero, cubo;
    ostringstream oss;

    cout << "Ingrese un numero para eleval al cubo: ";
    cin >> numero;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        alerta = "El numero no es valido";
        cubo = 0;
    }
    else
    {
        cubo = pow(numero, 3);
    }
    oss << "El cubo del numero " << numero << " es: " << cubo;
    alerta = oss.str();
}

void par_impar()
{
    int numero;
    ostringstream oss;

    cout << "Ingrese un numero para comprobar si es par o impar: ";
    cin >> numero;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        alerta = "El numero no es valido";
    }
    else
    {
        if (numero % 2 == 0)
        {
            oss << "El numero " << numero << " es PAR ";
        }
        else
        {
            oss << "El numero " << numero << " es IMPAR ";
        }
    }

    alerta = oss.str();
}

int main()
{
    int opcion = menu();

    switch (opcion)
    {
    case 1:
        cubo_numero();
        main();
        break;
    case 2:
        par_impar();
        main();
        break;
    case 3:
        cout << "Saliendo del progama..." << endl;
        break;
    }
    return 0;
}