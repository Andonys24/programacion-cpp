// Lectura de un archivo de texto

#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;

namespace fs = std::filesystem;

fs::path workdir = fs::current_path() / "temp";

void lectura() {
	string nombre = "programacion.txt", texto;
	ifstream arch;

	if (!fs::exists(workdir / nombre)) { // si el archivo no existe
		cout << "El archivo '" << workdir / nombre << "' No se encontro.";
		return;
	}

	arch.open(workdir / nombre, ios::in); // abrir archivo en modo lectura

	if (!arch.is_open()) { // Error al abrir el archivo
		cout << "Error al abrir el archivo : " << nombre << endl;
		return;
	}

	// Leer cada linea del archivo
	while (getline(arch, texto)) {
		cout << texto << endl;
	}

	// Cerrar el archivo
	arch.close();
}

int main() {
	lectura();
	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}