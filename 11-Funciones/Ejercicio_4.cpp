/* 4. Escriba un programa que devuelva la parte fraccionaria de cualquier numero
introducido por el usuario, por ejemplo si se introduce el numero 256.879, deberia\
desplegarse el numero 0.879. */

#include <iostream>

using namespace std;

void obtener_fraccionaria(double num);

int main() {
	double num;

	cout << "Ingrese un numero decimal: ";
	cin >> num;

	obtener_fraccionaria(num);

	cin.get();
	return 0;
}

void obtener_fraccionaria(double num) {
	double result;
	int aux;

	result = num - (aux = num);

	cout << "La parte fraccionaria del numero " << num << " es: " << result << endl;
}