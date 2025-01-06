/* Ejercicio 4: Crea un programa en C++ que tenga las siguinte jerarquia de clases
y hacer polimorfismo con el metodo comer().

(animal) --> perro
		 --> Humano
*/

#include <iostream>

using namespace std;

class Animal {
  private:
	string especie;
	int edad;

  public:
	Animal(string especie, int edad) {
		this->especie = especie;
		this->edad = edad;
	}

	virtual void comer() { cout << "Yo como "; }

	virtual void getDatos() {
		cout << "Especie: " << especie << endl;
		cout << "Edad: " << edad << endl;
	}
};

class Humano : public Animal {
  private:
	string nombre;
	string apellido;

  public:
	Humano(string nombre, string apellido, string especie, int edad) : Animal(especie, edad) {
		this->nombre = nombre;
		this->apellido = apellido;
	}

	void comer() {
		Animal::comer();
		cout << "en una mesa, sentado en una silla." << endl;
	}

	void getDatos() {
		cout << "Nombre: " << nombre << endl;
		cout << "Apellido: " << apellido << endl;
		Animal::getDatos();
	}
};

class Perro : public Animal {
  private:
	string nombre;

  public:
	Perro(string nombre, string especie, int edad) : Animal(especie, edad) { this->nombre = nombre; }

	void comer() {
		Animal::comer();
		cout << "en el suelo con su plato de comida" << endl;
	}

	void getDatos() {
		cout << "Nombre: " << nombre << endl;
		Animal::getDatos();
	}
};

int main() {
	Animal *animales[2];
	animales[0] = new Perro("Firulais", "Canis lupus familiaris", 5);
	animales[1] = new Humano("Juan", "Perez", "Homo sapiens-sapiens", 20);

	for (int i = 0; i < 2; i++) {
		animales[i]->getDatos();
		animales[i]->comer();
		cout << endl;
	}

	cout << "\nPresione una tecla para salir...";
	cin.get();

	// liberar memoria
	for (int i = 0; i < 2; i++) {
		delete animales[i];
		animales[i] = nullptr;
	}

	return 0;
}