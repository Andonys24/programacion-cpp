/* 17. Suma de numeros complejos
z1 = 5-3i   ,   z2 = -4+2i
z1 + z2 = (5-3i) + (-4+2i)
		= 5 - 3i -4 + 2i
		= 1 - i
*/

#include <iostream>

using namespace std;

struct Complejo {
	double real, imaginaria;
};

void pedirDatos(Complejo &, Complejo &);
Complejo sumar(Complejo, Complejo);
void mostrar(Complejo);

int main() {
	Complejo z1, z2, resultado;

	pedirDatos(z1, z2);

	resultado = sumar(z1, z2);

	mostrar(resultado);

	cin.get();
	return 0;
}

void pedirDatos(Complejo &z1, Complejo &z2) {
	cout << "Ingrese la parte real de z1: ";
	cin >> z1.real;
	cout << "Ingrese la parte imaginaria de z1: ";
	cin >> z1.imaginaria;

	cout << "Ingrese la parte real de z2: ";
	cin >> z2.real;
	cout << "Ingrese la parte imaginaria de z2: ";
	cin >> z2.imaginaria;
}

Complejo sumar(Complejo z1, Complejo z2) {
	Complejo resultado;

	resultado.real = z1.real + z2.real;
	resultado.imaginaria = z1.imaginaria + z2.imaginaria;

	return resultado;
}

void mostrar(Complejo resultado) {
	cout << "Resultado de la suma: " << resultado.real << " , " << resultado.imaginaria << endl;
}