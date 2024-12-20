/* 1. Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos:
Nombre, edad, sexo, club, pedir al usuario para un corredor, y asignarle una nueva categoria de competicion:
-   Juvenil <= 18 anios
-   Senior <= 40 anios
-   veterano > 40 anios
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion. */

#include <cctype>
#include <iostream>

using namespace std;

void limpiar_consola() {
	const char *comando = ((system("clear") == 0) ? "clear" : "cls");
	system(comando);
}

struct corredor {
	string nombre;
	int edad;
	string sexo;
	string club;
};

int main() {
	struct corredor c1;
	string categoria;
	int sexo;

	// Pedir datos del corredor al usuario
	cout << "Ingrese su nombre: ";
	getline(cin, c1.nombre);

	cout << "Ingrese su edad: ";
	cin >> c1.edad;

	cout << "Ingrese su sexo." << endl;
	cout << "[1] - Femenino" << endl;
	cout << "[2] - Masculino" << endl;
	cout << "Opcion: ";
	cin >> sexo;

	// Definir Sexo segun eleccion
	c1.sexo = ((sexo == 1) ? "Femenino" : ((sexo == 2) ? "Masculino" : "Genero No Definido"));

	cout << "Ingrese el nombre del club al que pertenece: ";
	cin >> c1.club;

	// Definir categoria del corredor segun su edad
	categoria = ((c1.edad <= 18) ? "Juvenil" : ((c1.edad <= 40) ? "Senior" : "Veterano"));

	// Limpiar y imprimir los datos
	limpiar_consola();
	cout << "Datos del corredor" << endl;
	cout << "Nombre: " << c1.nombre << endl;
	cout << "Edad: " << c1.edad << endl;
	cout << "Sexo: " << c1.sexo << endl;
	cout << "Club: " << c1.club << endl;
	cout << "Categoria de Competicion: " << categoria << endl;

	cin.get();
	return 0;
}