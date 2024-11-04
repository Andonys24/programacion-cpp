/* 11. Hacer un progama que simule un cajeo con
un saldo inicial de 1,000 Dolares (USD). */

#include <iostream>
#include <limits>
#include <map>

using namespace std;

float saldo = 1000.00;
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
        cout << "\n"
             << alerta << "\n"
             << endl;
        alerta.clear();
    }
}

int validar_opcion()
{
    int opc;

    cout << "Opcion: ";
    cin >> opc;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        alerta = "Tipo de dato Invalido";
        return 0;
    }

    if (opc >= 1 && opc <= 3)
    {
        return opc;
    }
    else
    {
        alerta = "Opcion no valida.";
    }

    return 0;
}

int menu()
{
    int opc;
    map<int, string> opciones = {
        {1, "Depositar"},
        {2, "Retirar"},
        {3, "Salir"}};

    while (opc < 1 || opc > 3)
    {
        limpiar_pantalla();
        cout << "Cajero Automatico" << endl;
        cout << "Tu saldo actual es: $ " << saldo << endl;

        mostrar_alerta();

        for (const auto &item : opciones)
        {
            cout << "[" << item.first << "] - " << item.second << endl;
        }

        opc = validar_opcion();
    }

    return opc;
}

void depositar()
{
    float deposito;

    cout << "Ingrese la cantidad que quiere depositar: $ ";
    cin >> deposito;

    if (deposito > 0)
    {
        saldo += deposito;
        alerta = "Deposito realizado correctamente.";
    }
    else
    {
        alerta = "Deposito Invalido...";
    }
}

void retirar()
{
    float retiro;

    cout << "Ingrese la cantidad de dinero a retirar: $ ";
    cin >> retiro;

    if (retiro <= saldo)
    {
        saldo -= retiro;
        alerta = "Saldo retirado correctamente.";
    }
    else
    {
        alerta = "Saldo Insuficiente...";
    }
}

int main()
{
    int opc = menu();

    switch (opc)
    {
    case 1:
        depositar();
        main();
        break;
    case 2:
        retirar();
        main();
        break;
    case 3:
        cout << "Saliendo del progama..." << endl;
        break;
    }

    return 0;
}