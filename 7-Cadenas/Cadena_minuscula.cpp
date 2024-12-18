// Pasar una palabra a minuscula

#include <cctype>
#include <iostream>

using namespace std;

int main() {
	string palabra = "PROGRAMACION_ATS";

	for (char &c : palabra) {
		c = tolower(c);
	}

	cout << palabra << endl;
	return 0;
}