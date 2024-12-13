/* La sentencia For
    for(inicializacion; expresion logica; incremento)
    {
        conjunto de instrucciones;
    }
*/

#include <iostream>

using namespace std;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << endl;
    }
    cout << "Fin del ciclo...";
    cin.ignore();

    return 0;
}