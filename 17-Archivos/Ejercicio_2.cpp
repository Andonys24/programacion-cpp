/* Ejercicio 2: Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto y,
a continuacion de lectura a todo el fichero. */

#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

bool existe(const string &nombreArch) { return fs::exists(nombreArch); }

void leerArchivo(const string &rutaArch) {
	ifstream archivo(rutaArch);
	string linea;

	if (!archivo.is_open()) {
		cerr << "Ups, hubo un error al abrir el archivo" << endl;
		return;
	}

	cout << endl;

	while (getline(archivo, linea)) {
		cout << linea << endl;
	}

    cout << "\nFin del archivo." << endl;

	archivo.close();
}

int main() {
	string rutaArch;
	cout << "Ingrese la ruta del archivo que desea leer: ";
	getline(cin, rutaArch);

	if (existe(rutaArch)) {
		cout << "Archivo encontrado. Leyendo el contenido..." << endl;
		leerArchivo(rutaArch);
	} else {
		cout << "El archivo no existe o no se puede acceder a el." << endl;
	}

	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}