// Herencia en POO

#include <iostream>

using namespace std;

class Persona {
  private: // si es protected, se puede acceder desde la clase hija
	string nombre;
	int edad;

  public:
	Persona(string nombre, int edad) {
		this->nombre = nombre;
		this->edad = edad;
	}

	void getDatos() {
		cout << "Nombre: " << nombre << endl;
		cout << "Edad: " << edad << endl;
	}
};

class Alumno : public Persona { // Hereda de Persona
  private:
	string matricula;
	float notaFinal;

  public:
	//   Constructor de la clase Alumno que recibe los atributos de la clase Persona
	Alumno(string nombre, int edad, string matricula, float notaFinal) : Persona(nombre, edad) {
		this->matricula = matricula;
		this->notaFinal = notaFinal;
	}

	void getAlumno() {
		getDatos();
		cout << "Matricula: " << matricula << endl;
		cout << "Nota Final: " << notaFinal << endl;
	}
};

int main() {
	Alumno alumno1("Juan", 20, "1234", 9.5);
    // alumno1.getDatos(); // Se puede acceder a los metodos de la clase padre
	alumno1.getAlumno();

	cout << "\nPresione una tecla para salir...";
	cin.get();

	return 0;
}