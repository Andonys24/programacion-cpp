// Polimorfismo

#include <iostream>

using namespace std;

class Persona {
  private:
	string nombre;
	int edad;

  public:
	Persona(string nombre, int edad) {
		this->nombre = nombre;
		this->edad = edad;
	}

	virtual void mostrar() { // virtual: permite que los metodos sean sobreescritos
		cout << "Nombre: " << nombre << endl;
		cout << "Edad: " << edad << endl;
	}
};

class Alumno : public Persona {
  private:
	float notaFinal;

  public:
	Alumno(string nombre, int edad, float notaFinal) : Persona(nombre, edad) { this->notaFinal = notaFinal; }

	void mostrar() {		// Sobreescritura del metodo mostrar
		Persona::mostrar(); // Llama al metodo mostrar de la clase Persona
		cout << "Nota final: " << notaFinal << endl;
	}
};

class Profesor : public Persona {
  private:
	string materia;

  public:
	Profesor(string nombre, int edad, string materia) : Persona(nombre, edad) { this->materia = materia; }

	void mostrar() {		// Sobreescritura del metodo mostrar
		Persona::mostrar(); // Llama al metodo mostrar de la clase Persona
		cout << "Materia: " << materia << endl;
	}
};

int main() {
	Persona *arreglo[3]; // Arreglo de punteros a objetos de la clase Persona

	arreglo[0] = new Persona("Juan", 20);
	arreglo[1] = new Alumno("Pedro", 21, 15.5);
	arreglo[2] = new Profesor("Maria", 30, "Matematicas");

	arreglo[0]->mostrar();
	cout << endl;
	arreglo[1]->mostrar();
	cout << endl;
	arreglo[2]->mostrar();

	cout << "\nPresione una tecla para salir...";
	cin.get();

	// liberar memoria
	for (int i = 0; i < 3; i++) {
		delete arreglo[i];
		arreglo[i] = nullptr;
	}

	return 0;
}