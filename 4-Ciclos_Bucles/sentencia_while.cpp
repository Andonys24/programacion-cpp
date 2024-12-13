/* La sentencia while:
    while (condición) {
        conjunto de instrucciones;
    }
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }
    cin.ignore();
    return 0;
}