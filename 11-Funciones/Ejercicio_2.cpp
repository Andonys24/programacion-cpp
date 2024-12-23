/* Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor
que se le transmite y despliegue el resultado. La funcion debera ser capaz de
elevar al cuadrado numeros flotantes*/

#include <cmath>
#include <iostream>

using namespace std;

void al_cuadrado(float num);

int main() {
	float num;

	cout << "Ingrese un numero para elevar al cuadrado: ";
	cin >> num;

	al_cuadrado(num);

	cin.get();
	return 0;
}

void al_cuadrado(float num) {
	float resultado;

	resultado = pow(num, 2);

	cout << "El numero " << num << " elevado al cuadrado es: " << resultado << endl;
}