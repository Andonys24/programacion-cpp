/* Ejercicio 3: Realice un programa en C++ de tal manera que se construya una solucion para
la jerarquia(herencia) de clases mostrada en la siguiente forma:

(persona) --> (estudiante) --> (universitario)
		\___ > (empleado)
*/

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

	virtual void getDatos() {
		cout << "Nombre: " << nombre << endl;
		cout << "Edad: " << edad << endl;
	}
};

class Empleado : public Persona {
  private:
	string departamento;
	float salario;

  public:
	Empleado(string nombre, int edad, string departamento, float salario) : Persona(nombre, edad) {
		this->departamento = departamento;
		this->salario = salario;
	}

	void getDatos() {
		Persona::getDatos();
		cout << "Departamento: " << departamento << endl;
		cout << "Salario: $" << salario << endl;
	}
};

class Estudiante : public Persona {
  private:
	string matricula;
	float notaFinal;

  public:
	Estudiante(string nombre, int edad, string matricula, float notaFinal) : Persona(nombre, edad) {
		this->matricula = matricula;
		this->notaFinal = notaFinal;
	}

	void getDatos() {
		Persona::getDatos();
		cout << "Numero de matricula: " << matricula << endl;
		cout << "Nota final: " << notaFinal << endl;
	}
};

class Universitario : public Estudiante {
  private:
	string carrera, universidad;

  public:
	Universitario(string nombre, int edad, string matricula, float notaFinal, string carrera, string universidad)
		: Estudiante(nombre, edad, matricula, notaFinal) {
		this->carrera = carrera;
		this->universidad = universidad;
	}

	void getDatos() {
		Estudiante::getDatos();
		cout << "Carrera: " << carrera << endl;
		cout << "Universidad: " << universidad << endl;
	}
};

int main() {
	Empleado empleado1("Luis", 27, "Recursos Humanos", 10000);
	Estudiante estudiante1("Pedro", 17, "2021010222", 8.5);
	Universitario universitario1("Juanito", 19, "2024010222", 8.7, "Ing. Sistemas", "UNAM");

	cout << "Datos del empleado: " << endl;
	empleado1.getDatos();
	cout << "\nDatos del estudiante: " << endl;
	estudiante1.getDatos();
	cout << "\nDatos del universitario: " << endl;
	universitario1.getDatos();

	cout << "\nPresione una tecla para salir...";
	cin.get();

	return 0;
}