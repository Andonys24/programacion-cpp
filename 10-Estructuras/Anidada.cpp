// Estructura Anidadas en c++

#include <iostream>
#include <limits>
#include <string>

using namespace std;

void limpiar_consola() {
	const char *comando = ((system("clear") == 0) ? "clear" : "cls");
	system(comando);
}

struct info_direccion {
	string direccion;
	string ciudad;
	string provincia;
};

struct empleado {
	string nombre;
	struct info_direccion dir_empleado;
	double salario;
} empleados[2];

int main() {
	for (int i = 0; i < 2; i++) {
		cout << "\nEmpleado #" << i + 1 << endl;
		cout << "Ingrese su nombre: ";
		getline(cin, empleados[i].nombre);

		cout << "Ingrese su direccion: ";
		getline(cin, empleados[i].dir_empleado.direccion);

		cout << "Ingrese su Ciudad: ";
		getline(cin, empleados[i].dir_empleado.ciudad);

		cout << "Ingrese su Provincia: ";
		getline(cin, empleados[i].dir_empleado.provincia);

		cout << "Ingrese su Salario: ";
		cin >> empleados[i].salario;

		// Vaciar buffer
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	// Limpiar consola
	limpiar_consola();

	// Imprimir los datos del empleado
	for (int i = 0; i < 2; i++) {
		cout << "Empleado #" << i + 1 << endl;
		cout << "Nombre: " << empleados[i].nombre << endl;
		cout << "Direccion: " << empleados[i].dir_empleado.direccion << endl;
		cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << endl;
		cout << "Provincia: " << empleados[i].dir_empleado.provincia << endl;
		cout << "Salario: " << empleados[i].salario << endl;
		cout << endl;
	}

	cin.get();
	return 0;
}