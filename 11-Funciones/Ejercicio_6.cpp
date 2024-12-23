/* 6. Escriba una plantilla de funcion llamada maximo() que
devuelva el valor maximo de tres argumentos que se transmitan
a la funcion cuando sea llamada. Suponga que los tres argumentos
seran del mismo tipo de datos. */

#include <iostream>

using namespace std;

template <class T> int maximo(T args[]);

int main() {
	char args1[] = {'t', 'g', 'k'};
	int args2[] = {50, 100, 10};
	float args3[] = {3.14, 2.71, 0.69};
	double args4[] = {3.141592, 2.718281, 0.693147};

	cout << "El caracter mayor es: " << args1[(maximo(args1))] << endl;
	cout << "El numero entero mayor es: " << args2[maximo(args2)] << endl;
	cout << "El numero real mayor es: " << args3[maximo(args3)] << endl;
	cout << "El numero double mayor es: " << args4[maximo(args4)] << endl;

	cin.get();
	return 0;
}

template <class T> int maximo(T args[]) {
	int mayor = 0;

	for (int i = 0; i < 3; i++) {
		mayor = (args[i] > args[mayor]) ? i : mayor;
	}

	return mayor;
}