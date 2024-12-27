/* 7. Pedir su nombre al usuario y devolver el numero de vocales que hay.
NOTA: Recuerde que debes utilizar punteros. */

#include <cctype>
#include <iostream>

using namespace std;

void pedirDatos(string &);
void convertirMinuscula(string &);
int contarVocales(string *);

int main() {
	string nombre;
	int contador;

	// Pedir los datos al usuario
	pedirDatos(nombre);

	// Contar cuantas vocales hay en el nombre
	contador = contarVocales(&nombre);

	// Mostrar el resultado
	cout << "Tu nombre tiene " << contador << " vocales." << endl;

	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}

void pedirDatos(string &nombre) {
	cout << "ingrese su nombre: ";
	getline(cin, nombre);

	convertirMinuscula(nombre);
}

void convertirMinuscula(string &nombre) {
	for (char &c : nombre) {
		c = tolower(c);
	}
}

int contarVocales(string *nombre) {
	int contador = 0;

	for (char &c : *nombre) {
		switch (c) {
		case 'a':
			contador++;
			break;
		case 'e':
			contador++;
			break;
		case 'i':
			contador++;
			break;
		case 'o':
			contador++;
			break;
		case 'u':
			contador++;
			break;
		}
	}

	return contador;
}