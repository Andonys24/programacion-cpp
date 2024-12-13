/* 7. Realiza un programa que defina dos vectores de caracteres y despues almacene el
contenido de ambos vectores en un nuevo vector, situado en primer lugar los elemenetos
del primer vector seguido por los elementos del segundo vector. Muestre el contenido
del nuevo vector en la salida estandar */

#include <iostream>

using namespace std;

int main()
{
    char letras_1[] = {'a', 'b', 'c', 'd', 'e'};
    char letras_2[] = {'f', 'g', 'h', 'i', 'j'};
    char letras_3[10];

    for (int i = 0; i < 10; i++)
    {
        // Copiar los elementos del arreglos letras 1 haci letras 3
        if (i < 5)
        {
            letras_3[i] = letras_1[i];
        }
        // Copiar los elementos del arreglos letras 2 haci letras 3
        else
        {
            letras_3[i] = letras_2[i - 5];
        }
    }

    // Mostrar el nuevo vector
    for (int i = 0; i < 10; i++)
    {
        cout << letras_3[i] << endl;
    }

    cin.get();
    return 0;
}