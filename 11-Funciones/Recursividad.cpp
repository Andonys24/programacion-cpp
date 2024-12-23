/* Recursividad
Factorial de un numero 3! = 3*2*1

	Factorial(n) = 1       , si n = 0
	n * factorial (n-1)    , si n > 0
*/

#include <iostream>

using namespace std;
int factorial(int);

int main() {
	int num;

	cout << "Ingrese un numero para sacar su factorial: !";
	cin >> num;

	cout << "El factorial de !" << num << " es: " << factorial(num) << endl;

	cin.get();
	return 0;
}

int factorial(int n) {
	n = (n > 0) ? n * factorial(n - 1) : 1;

	return n;
}