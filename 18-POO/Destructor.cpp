// Destructor
#include <iostream>

using namespace std;

class Perro {
  private:
	string nombre, raza;

  public:
	Perro(string nombre, string raza) { // Constructor
		this->nombre = nombre;
		this->raza = raza;
	}

	void getDatos() {
		cout << "Nombre: " << nombre << endl;
		cout << "Raza: " << raza << endl;
	}

	void jugar() { cout << "El perro " << nombre << " está jugando" << endl; }

	~Perro() { // Destructor
		cout << "Se ha destruido el objeto" << endl;
	}
};

int main() {
	Perro perro1("Firulais", "Pastor Alemán");

	perro1.getDatos();
	perro1.jugar();
	perro1.~Perro(); // Llamada al destructor

	cout << "\nPresione una tecla para salir..." << endl;
	cin.get();

	return 0;
}