/* 4. Hacer un arreglo de estructura llamada atleta para N atletas
que contenga los siguientes campos: nombre, pais, numero_medallas.
y devuelva los datos (Nombre, pais) del atleta que ha ganado
el mayor numero de medallas. */

#include <iostream>

using namespace std;

void limpiar_consola() {
	const char *comando = ((system("clear") == 0) ? "clear" : "cls");
	system(comando);
}

struct atleta {
	string nombre;
	string pais;
	int numero_medallas;
};

int main() {
	atleta *atletas = nullptr;
	int n, m = 0;

	// Obtener cantidad de atletas
	cout << "Ingrese la cantidad de atletas a ingresar: ";
	cin >> n;

	// Arreglo dinamico de atletas
	atletas = new atleta[n];

	// Obtener datos de los atletas
	for (int i = 0; i < n; i++) {
		limpiar_consola();
		cin.ignore();
		cout << "Ingrese los datos del atleta #" << i + 1 << endl;
		cout << "Nombre: ";
		getline(cin, atletas[i].nombre);
		cout << "Pais: ";
		getline(cin, atletas[i].pais);
		cout << "Numero de medallas ganadas: ";
		cin >> atletas[i].numero_medallas;
	}

	// Obtener el indice del atleta que gano mas medallas
	for (int i = 0; i < n; i++) {
		if (atletas[i].numero_medallas > atletas[m].numero_medallas) {
			m = i;
		}
	}

	// Imprimir datos en pantalla
	limpiar_consola();
	cout << "El atleta con el mayor numero de medallas es:" << endl;
	cout << "Nombre: " << atletas[m].nombre << endl;
	cout << "Pais: " << atletas[m].pais << endl;
	// cout << "Medallas Ganadas: " << atletas[m].numero_medallas << endl;

	// Limpiar puntero
	delete[] atletas;
	atletas = nullptr;

	cin.get();
	return 0;
}
