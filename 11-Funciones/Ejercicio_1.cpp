/* 1. Escriba una funcion mult() que acepte dos numeros en punto flotante como parametro,
multiplique estos dos numeros y despliegue el resultado. */

#include <iostream>

using namespace std;

// Prototipos de Funciones
void pedirDatos(float &n1, float &n2);
void mult(float n1, float n2);

int main() {
	float n1 = 0, n2 = 0;

	pedirDatos(n1, n2);
	mult(n1, n2);

	cin.get();
	return 0;
}

void pedirDatos(float &n1, float &n2) {
	cout << "Ingrese el valor del primer numero: ";
	cin >> n1;
	cout << "Ingrese el valor del segundo numero: ";
	cin >> n2;
}

void mult(float n1, float n2) {
	float multi;

	multi = n1 * n2;
	cout << "El resutado de la multiplicacion es: " << multi << endl;
}