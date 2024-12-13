// 13. Hacer un programa que realize la serie fibonazzi - > 1 1 2 3 5 8 13 ...

#include <iostream>

using namespace std;

int main()
{
    int n, x = 0, y = 1, result;

    cout << "Digite el numero de elementos: ";
    cin >> n;

    cout << "1 ";

    for (int i = 0; i < n; i++)
    {
        result = x + y;
        cout << result << " ";
        x = y;
        y = result;
    }

    cout << "\n";
    cin.ignore();
    cin.get();

    return 0;
}