/* 5. Hacer un programa que determine si una palabra
es polindroma */

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	string palabra = "reconocer";
	string palindromo = palabra;

	reverse(palindromo.begin(), palindromo.end());

	cout << "La palabra: '" << palabra << "' " << ((palabra == palindromo) ? "Es" : "No es") << " palindroma." << endl;

	cin.get();
	return 0;
}