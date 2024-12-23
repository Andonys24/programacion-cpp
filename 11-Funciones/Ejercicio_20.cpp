/* 20. Realice una funcion recursiva para la seria Fibonacci
Nota: La serie fibonacci esta formada por secuencia de numeros:
0, 1, 2, 3, 5, 8, 13, 21, 34*/

#include <iostream>

using namespace std;

void serieFibonacci(int, int &, int &);

int main() {
	int suma = 0, anterio = 1, n;

	do {
		cout << "Ingrese la cantidad de numeros que desea ver de la serie Fibonacci: ";
		cin >> n;
	} while (n <= 0);

	serieFibonacci(n, suma, anterio);

	cin.get();
	return 0;
}

void serieFibonacci(int cat, int &suma, int &anterior) {
	if (cat == 0) {
		cout << suma << "." << endl;
		cout << "fin serie fibonacci...";
		cin.ignore();
	}

	if (cat > 0) {
		int aux = suma;

		cout << suma << ", ";

		suma += anterior;
		anterior = aux;

		serieFibonacci((cat - 1), suma, anterior);
	}
}