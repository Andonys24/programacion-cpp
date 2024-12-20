/* 8. Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos: el nombre de la persona
y un valor de tipo logico que indica si la persona tiene algun tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores:
uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga
las personas con discapacidad. */

#include <iostream>
#include <vector>

using namespace std;

struct Persona {
	string nombre;
	bool dispacacidad;
};

void limpiar_consola() {
	const char *comando = ((system("clear") == 0) ? "clear" : "cls");
	system(comando);
}

int main() {
	int n, c = 0, d = 0;
	vector<Persona> discapacitadas;
	vector<Persona> capacitadas;

	cout << "Ingrese el numero de personas: ";
	cin >> n;

	vector<Persona> personas(n);

	// Leer los datos del usuario
	for (int i = 0; i < n; i++) {
		limpiar_consola();
		cout << "Ingrese los datos de la persona N." << i + 1 << endl;

		cin.ignore();

		cout << "Nombre: ";
		getline(cin, personas[i].nombre);

		cout << "Tiene alguna Discapacidad (1 para si, 0 para no): ";
		cin >> personas[i].dispacacidad;
	}

	// Dividir las personas capacitdas y discapacitadas
	for (int i = 0; i < n; i++) {
		((personas[i].dispacacidad) ? discapacitadas : capacitadas).push_back(personas[i]);
	}

	// Mostrar resultados
	limpiar_consola();

	cout << "Personas sin discapacidades:" << endl;
	for (const auto &persona : capacitadas) {
		c++;
		cout << c << ". Nombre: " << persona.nombre << endl;
	}
	cout << "Total de personas sin discapacidades: " << c << endl;

	cout << "\nPersonas con discapacidades:" << endl;
	for (const auto &persona : discapacitadas) {
		d++;
		cout << d << ". nombre: " << persona.nombre << endl;
	}
	cout << "Total de personas discapacitadas: " << d << endl;

	cin.get();
	return 0;
}