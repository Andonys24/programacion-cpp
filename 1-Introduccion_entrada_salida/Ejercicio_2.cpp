/*Escriba un progama que lea de la entrada estandar el precio de un producto
y muestre en la salida estandar el precio del producto al aplicarle el IVA*/

#include <iostream>

using namespace std;

int main()
{
    float price, total, iva = 0.15;
    cout << "Ingrese el precio del producto: " << endl;
    cin >> price;

    total = price + (price * iva);

    cout << "El total a pagar con el IVA es de: " << total << endl;
    return 0;
}