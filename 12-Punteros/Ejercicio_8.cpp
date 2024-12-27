/* 8. Pedir una cadena de caracteres (string) al usuario, e indicar
cuantas veces aparece la vocal a, e, i, o, u; en la cadena de caracteres. */

#include <iostream>

using namespace std;

void pedirDatos(string &);
void contarVocales(string, int &, int &, int &, int &, int &);

int main() {
	string cadena;
	int a = 0, e = 0, i = 0, o = 0, u = 0;

	pedirDatos(cadena);
	contarVocales(cadena, a, e, i, o, u);

	cout << "\nLa vocal 'a' aparece " << a << " veces.";
	cout << "\nLa vocal 'e' aparece " << e << " veces.";
	cout << "\nLa vocal 'i' aparece " << i << " veces.";
	cout << "\nLa vocal 'o' aparece " << o << " veces.";
	cout << "\nLa vocal 'u' aparece " << u << " veces.";

	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

void pedirDatos(string &cadena) {
	cout << "Ingrese una cadena de caracteres: ";
	getline(cin, cadena);
}

void contarVocales(string cadena, int &a, int &e, int &i, int &o, int &u) {
	for (char c : cadena) {
		switch (tolower(c)) {
		case 'a':
			a++;
			break;
		case 'e':
			e++;
			break;
		case 'i':
			i++;
			break;
		case 'o':
			o++;
			break;
		case 'u':
			u++;
			break;
		}
	}
}