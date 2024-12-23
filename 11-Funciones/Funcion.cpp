// Ejemplo de como encontrar el mayor de 2 numeros

#include <iostream>

using namespace std;

// Prototipo de Funcion (USo importante cuando se trabajan con varios archivos)
// Cuando se trabaja en el mismo archivo declarar la funcion antes del main()
int encontrar_mayor(int n1, int n2);

int main() {
	int n1, n2, resultado;
	cout << "Ingrese 2 numeros: ";
	cin >> n1 >> n2;

	resultado = encontrar_mayor(n1, n2);

	cout << endl;
	cout << "El numero mayor es: " << resultado << endl;

	cin.get();
	return 0;
}

// Definicion de Funcion

int encontrar_mayor(int n1, int n2) {
	int mayor;

	mayor = (n1 > n2) ? n1 : n2;
	return mayor;
}