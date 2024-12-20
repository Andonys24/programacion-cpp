/* 5. Hacer 2 Estructuras una llamada promedio que tendra los siguientes campos:
nota1, nota2, nota3; y otro llamada alumno que tendra los siguientes campos:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la
estructura alumnos, luego pedir todos los datos para un alumno, luego calcular
su promedio, y por ultimo imprimir todos sus datos incluidos el promedio. */

#include <iomanip>
#include <iostream>

using namespace std;

struct promedio {
	float nota1;
	float nota2;
	float nota3;

	// Constructor
	promedio(float n1 = 0, float n2 = 0, float n3 = 0) : nota1(n1), nota2(n2), nota3(n3) {}

	// Metodo para calcular el promedio
	float calcular_promedio() const { return (nota1 + nota2 + nota3) / 3; }
};

struct alumno {
	string nombre;
	string sexo;
	int edad;
	promedio prom;

	// Constructor
	alumno(string nom, string gen, int e, float n1, float n2, float n3)
		: nombre(nom), sexo(gen), edad(e), prom(n1, n2, n3) {}
};

int main() {
	string nombre, sexo;
	int edad, genero;
	float nota1, nota2, nota3, promedio;

	cout << "Ingresar los datos del Alumno #" << 1 << endl;
	cout << "Nombre: ";
	getline(cin, nombre);
	cout << "Ingrese su genero." << endl;
	cout << "[1] - Femenino" << endl;
	cout << "[2] - Masculino" << endl;
	cout << "opcion: ";
	cin >> genero;

	sexo = ((genero == 1) ? "Femenino" : (genero == 2) ? "Masculino" : "No definido");

	cout << "Edad: ";
	cin >> edad;

	cout << "Nota 1: ";
	cin >> nota1;
	cout << "Nota 2: ";
	cin >> nota2;
	cout << "Nota 3: ";
	cin >> nota3;

	// Crear el objeto o estructura de alumno con el constructor
	alumno alumno1(nombre, sexo, edad, nota1, nota2, nota3);

	// Calcular promedio notas
	promedio = alumno1.prom.calcular_promedio();

	// Imprimir los datos del alumno
	cout << "\nDatos del alumno:" << endl;
	cout << "Nombre: " << alumno1.nombre << endl;
	cout << "Sexo: " << alumno1.sexo << endl;
	cout << "Edad: " << alumno1.edad << endl;
	cout << fixed << setprecision(2);
	cout << "Promedio de sus notas: " << promedio << endl;

	cin.get();
	return 0;
}