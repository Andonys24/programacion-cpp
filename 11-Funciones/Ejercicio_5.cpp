/* 5. Escriba una plantilla de funcion llamada despliegue() que despliegue
el valor del argumento unico que se le transmite cuando es invocada la funcion. */

#include <iostream>
#include <variant>
#include <vector>

using namespace std;

template <class T> void despliegue(T dato);

int main() {
	vector<variant<int, float, double, char, string>> lista;
	lista.push_back(4);
	lista.push_back(15.67);
	lista.push_back(567.7890);
	lista.push_back('a');
	lista.push_back("Hola C++");

	for (const auto &item : lista) {
		visit([](auto &&val) { despliegue(val); }, item);
	}

	cin.get();
	return 0;
}

template <class T> void despliegue(T dato) { cout << "El dato es: " << dato << endl; }