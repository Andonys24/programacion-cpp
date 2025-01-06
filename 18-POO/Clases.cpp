// Clases

#include <iostream>

using namespace std;

class Persona {
	// Solo accesible desde la misma clase
  private:
	// Atributos
	string nombre;
	int edad;

	// Accesible desde cualquier clase
  public:
	Persona(string nombre, int edad) { // Constructor
		this->nombre = nombre;
		this->edad = edad;
	};
	// Metodos
	void leer() { cout << nombre << " esta leyendo" << endl; }

	void correr() { cout << nombre << " esta corriendo" << endl; }

	void presentarse() { cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años" << endl; }
};

int main() {
    // Formas de declarar un objeto
	Persona p1 = Persona("Juan", 20);
	Persona p2("Maria", 25);
	Persona p3("Pedro", 30);

	p1.leer();
	p2.correr();
	p3.presentarse();

	cout << "\nPresione una tecla para salir..." << endl;
	cin.get();

	return 0;
}