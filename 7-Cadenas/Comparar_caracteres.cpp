// Comparar cadenas - Funcion strcmp()
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char p1[] = "Becerro";
	char p2[] = "Avioneta";

	if (strcmp(p1, p2) == 0) {
		cout << "Ambas cadenas son exactamente iguales." << endl;
	} else {
		cout << "Las cadenas no son iguales." << endl;
	}
	
	if (strcmp(p1, p2) > 0) {
		cout << "La palabra: " << p1 << " esta alfabeticamente despues que: " << p2 << endl;
	} else {
		cout << "La palabra: " << p1 << " esta alfabeticamente antes que: " << p2 << endl;
	}

	cin.get();
	return 0;
}