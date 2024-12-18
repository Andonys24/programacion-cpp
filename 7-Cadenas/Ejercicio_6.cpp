/* 6. Convertir dos cadenas minusculas a MAYUSCULAS.
compararlas, y decir si son iguales o no.*/

#include <cctype>
#include <iostream>

using namespace std;

string convert_mayus(string palabra) {
	for (char &c : palabra) {
		c = toupper(c);
	}
	return palabra;
}

int main() {
	string palabra_1 = "monotonia";
	string palabra_2 = "palabreria";

	palabra_1 = convert_mayus(palabra_1);
	palabra_2 = convert_mayus(palabra_2);

	cout << "La palabra " << palabra_1 << " es " << ((palabra_1 == palabra_2) ? "igual" : "diferente") << " a "
		 << palabra_2 << endl;

	cin.get();
	return 0;
}