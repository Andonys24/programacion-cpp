/* 3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados
de la empresa y que imprima los datos del empleado con mayor y menor salario. */

#include <iostream>

using namespace std;

void limpiar_consola() {
	const char *comando = ((system("clear") == 0) ? "clear" : "cls");
	system(comando);
}

struct empleado {
	string nombre;
	float salario;
};

int main() {
	empleado *empleados = nullptr;
	int n, mayor = 0, menor = 0;

	cout << "Ingrese la cantidad de empleados de la empresa: ";
	cin >> n;

	// Puntero con el arrglo de empleados
	empleados = new empleado[n];

	// Leer los datos de los empleados
	for (int i = 0; i < n; i++) {
		limpiar_consola();
		cin.ignore();

		cout << "Ingrese los datos del Empleado #" << i + 1 << endl;
		cout << "Nombre: ";
		getline(cin, empleados[i].nombre);
		cout << "Salario: ";
		cin >> empleados[i].salario;
	}

	// Obtener empleado con mayor y menor sueldo
	for (int i = 0; i < n; i++) {
		if (empleados[i].salario > empleados[mayor].salario) {
			mayor = i;
		}
		if (empleados[i].salario < empleados[menor].salario) {
			menor = i;
		}
	}

	// Imprimir empleado con mayor y menor sueldo
	limpiar_consola();
	for (int i = 0; i < 2; i++) {
		cout << "Empleado con el " << ((i == 0) ? "mayor" : "menor") << " salario:" << endl;
		cout << "Nombre: " << empleados[((i == 0) ? mayor : menor)].nombre << endl;
		cout << "Salario: " << empleados[((i == 0) ? mayor : menor)].salario << endl;
		cout << endl;
	}

	// Limpiar puntero
	delete[] empleados;
	empleados = nullptr;

	cin.get();
	return 0;
}