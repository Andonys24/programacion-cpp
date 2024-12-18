// Invertir una cadena - funcion strrev()

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	string nombre = "andoni";

	reverse(nombre.begin(), nombre.end());

	cout << nombre << endl;

	cin.get();
	return 0;
}