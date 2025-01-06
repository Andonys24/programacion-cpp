// Creacion y escritura de un archivo de texto

#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

// Variable global
// Se crea un directorio temporal en la carpeta actual
fs::path directorio = fs::current_path() / "temp";

void escribir() {
	ofstream archivo;
	string nombre, frase;

	cout << "Ingrese el nombre del archivo: ";
	getline(cin, nombre);

	archivo.open(directorio / (nombre + ".txt"), ios::out); // Abre el archivo en modo escritura

	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo" << endl;
		return;
	}

	cout << "Ingrese la frase a escribir: ";
	getline(cin, frase);

	archivo << frase; // Escribe la frase en el archivo

	archivo.close(); // Cierra el archivo
}

int main() {
	escribir();

	cout << "\nPresiona una tecla para continuar...";
	cin.get();

	return 0;
}