/* 4. Crear una cadena que tenga la siguiente frase:
"Hola que tal", luego crear otra cadena para preguntarle
al usuario su nombre, por ultimo agregar el nombre al final
de la primera cadena y mostrar el mensaje completo:
"hola que tal (nombre)".*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char mensaje[50] = "Hola que tal ";

	char nombre[30]; // Suponemos que el nombre no será mayor a 30 caracteres

	cout << "¿Cómo te llamas? ";
	cin.getline(nombre, sizeof(nombre));

	strcat(mensaje, nombre);

	cout << mensaje << endl;

	cin.get();
	return 0;
}