/* Ejercicio 1: Realice un programa que pida al usuario el nombre de un ficher de texto y,
a continuacion permita almacenar al usuario tantas frases como el usuario desee. */

#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

fs::path workdir = fs::current_path() / "temp";

void escribir() {
	string nombre = "archivo";
	ofstream arch;
	int contador = 1, opcion = 0;

	cout << "Ingrese el nombre de su archivo de texto: ";
	getline(cin, nombre);

	arch.open(workdir / (nombre + ".txt"), ios::out);

	if (arch.fail()) {
		cout << "Hubo un error al crear el archivo." << endl;
		return;
	}

	do {
		string frase = "";

		// Pedir la frase al usuario
		cout << "Ingrese la frase #" << contador << ": ";
		getline(cin, frase);

		// Guardar la frase en el archivo txt
		arch << "Frase #" << contador << ":" << endl;
		arch << frase << endl << endl;

		// Preguntarle al usuario si desea continuar
		cout << "Desea continuar ? (1: Si / 0: No): ";
		cin >> opcion;

		cin.ignore();

		contador += 1;

	} while (opcion != 0);

	// Cerrar el archivo
	arch.close();
}

int main() {
	escribir();
	cout << "\nFin del Programa...";
	cin.get();
	return 0;
}