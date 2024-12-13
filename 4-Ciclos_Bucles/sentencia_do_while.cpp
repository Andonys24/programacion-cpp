/* La sentencia do while

    do{
        conjunto de instrucciones;
    } while(expresion logica);
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 1;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);

    cout << "\nFin del ciclo do while...";
    cin.ignore();
    return 0;
}