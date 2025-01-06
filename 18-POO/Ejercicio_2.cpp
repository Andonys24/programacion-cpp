/* Ejercicio 2: Construya ua clase Tiempo que contenga los siguientes atributos enteros:
horas, minutos y segundos. Haga que la clase contenga 2 constructores, el primero debe tener
3 parametros Tiempo(init, int, int) y el segundo  solo tendra un campo que seran los segundos y
desemsamble el numero entero largo en horas y segundos. */

#include <iostream>

using namespace std;

class Tiempo {
  private:
	int horas, minutos, segundos;

  public:
	// Constructores
	Tiempo(int horas, int minutos, int segundos) {
		this->horas = horas;
		this->minutos = minutos;
		this->segundos = segundos;
	}

	Tiempo(long segundos) {
		this->horas = segundos / 3600;
		segundos %= 3600;
		this->minutos = segundos / 60;
		this->segundos = segundos % 60;
	}

	// Metodos
	void getTiempo() {
		cout << "Horas: " << horas << endl;
		cout << "Minutos: " << minutos << endl;
		cout << "Segundos: " << segundos << endl;
	}
};

int main() {
	Tiempo t1(2, 46, 40);
	Tiempo t2(10000);

	t1.getTiempo();
	cout << endl;
	t2.getTiempo();

	cout << "\nPresione una tecla para salir...";
	cin.get();

	return 0;
}