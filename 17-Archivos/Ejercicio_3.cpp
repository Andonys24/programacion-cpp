/* Ejercicio 3: Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto y,
a continuacion agregue texto en el hasta que el usuario lo decida. */

#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

// variable global
string alerta = "";
string rutaArchivo = "";

void limpiarConsola() {
	const char *comando = (system("clear") == 0) ? "clear" : "cls";
	system(comando);
}

bool existe(string rutaArch) { return filesystem::exists(rutaArch); }

int validarNum(string mensaje) {
	int numero = 0;
	bool validado = false;

	while (!validado) {
		cout << mensaje << ": ";
		if (cin >> numero) {
			validado = true;
		} else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			// alerta = "Por favor ingrese un numero valido.";
			cout << "Por favor ingrese un numero valido." << endl;
		}
	}

	return numero;
}

void generarTitulo(string titulo) {
	int largo = titulo.length();
	int anchoPantalla = largo * 2;
	int padding = largo / 2;
	string lineas(anchoPantalla, '=');

	limpiarConsola();
	cout << "Ruta del archivo: " << rutaArchivo << endl;
	cout << lineas << endl;
	cout << setw(padding + largo) << titulo << endl;
	cout << lineas << endl << endl;

	if (alerta != "") {
		cout << "ALERTA: " << alerta << endl;
		alerta = "";
	}
}

void leerArch() {
	ifstream archivo(rutaArchivo);
	string linea;

	if (!archivo.is_open()) {
		alerta = "Error al abrir el archivo.";
		return;
	}
	generarTitulo("Contenido del archivo");

	while (getline(archivo, linea)) {
		cout << linea << endl;
	}

	archivo.close();
}

void editarArch() {
	int opcion = 1;
	string contenido;
	ofstream archivo(rutaArchivo, ios::app);

	if (!archivo.is_open()) {
		cout << "Error al abrir el archivo." << endl;
		return;
	}

	generarTitulo("Agregando contenido");

	do {
		bool confirmado = false;
		cin.ignore();
		cout << "Ingrese el contenido a agregar: ";
		getline(cin, contenido);

		archivo << contenido << endl;

		while (!confirmado) {
			opcion = validarNum("Desea ingresar mas contenido? (1: SI / 0: NO)");

			if (opcion == 0 || opcion == 1) {
				confirmado = true;
			} else {
				cout << "Opcion no valida." << endl;
			}
		}

	} while (opcion == 1);

	archivo.close();
}

void menu() {
	bool continuar = true;

	while (continuar) {
		generarTitulo("Menu Principal");
		cout << "1. Editar archivo" << endl;
		cout << "2. Leer archivo" << endl;
		cout << "3. Salir" << endl;

		switch (validarNum("opcion")) {
		case 1:
			editarArch();
			break;
		case 2:
			leerArch();
			break;
		case 3:
			continuar = false;
			break;
		default:
			cout << "\nOpcion no valida" << endl;
			break;
		}
		cin.ignore();
		if (continuar == true) {
			cout << "\nPresiona una tecla para continuar...";
			cin.get();
		}
	}
}

int main() {
	limpiarConsola();
	cout << "Ingrese la ruta del archivo de texto a editar: ";
	getline(cin, rutaArchivo);

	if (existe(rutaArchivo)) {
		menu();
	} else {
		cout << "Error: Archivo no encontrado." << endl;
	}

	cout << "\nPresione una tecla para salir...";
	cin.get();
	return 0;
}