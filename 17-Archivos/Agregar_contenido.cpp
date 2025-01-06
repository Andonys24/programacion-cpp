// Agregar texto al final de un archivo

#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;

bool existe(string archivo) { return filesystem::exists(archivo); }

void leerContenido(string archivo) {
	ifstream arch(archivo);
	string linea;

	if (!arch.is_open()) {
		cout << "Error: No se pudo abrir el archivo.";
		return;
	}

	while (getline(arch, linea)) {
		cout << linea << endl;
	}

	arch.close();
}

void agregarContenido(string archivo) {
	ofstream arch(archivo, ios::app);
	string contenido;

	if (!arch.is_open()) {
		cerr << "Error: No se pudo abrir el archivo.";
		return;
	}

	// Solicitar contenido a agregar
	cout << "Ingrese el contenido a agregar: ";
	getline(cin, contenido);

	// Agregar contenido al final del archivo
	arch << contenido << endl;

	arch.close();

	cout << "Contenido agregado correctamente.";
}

int main() {
	string archivo = "archivo.txt";

	cout << "Ingrese la ruta del archivo: ";
	getline(cin, archivo);

	if (existe(archivo)) {
		cout << "Archivo encontrado, mostrando su contenido..." << endl;
		leerContenido(archivo);
		agregarContenido(archivo);
		leerContenido(archivo);
	} else {
		cout << "Error: El archivo no existe.";
	}

	cout << "\nPresione una tecla para continuar...";
	cin.get();
	return 0;
}