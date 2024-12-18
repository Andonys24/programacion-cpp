// Pasar una palabra a mayuscula

#include <cctype>
#include <iostream>

using namespace std;

int main() {
	string nombre = "carlos";

	for (char &c : nombre) {
		c = toupper(c);
	}

	cout << nombre << endl;

	cin.get();
	return 0;
}