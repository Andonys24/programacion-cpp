// Metodos constructores y Modificadores (Getters y Setters)

#include <iostream>

using namespace std;

class Punto {
  private: // Atributos privados (Solo accesibles desde la clase)
	int x, y;

  public:
	Punto() { // Constructor por defecto
		x = 0;
		y = 0;
	}

	void setPunto(int x, int y) { // Modificador
		this->x = x;
		this->y = y;
	}

	int getX() { return x; } // Accesor
	int getY() { return y; } // Accesor
};

int main() {
	Punto point1;

	point1.setPunto(10, 20);

	cout << "Coordenadas del punto: " << point1.getX() << ", " << point1.getY() << endl;

	cout << "\nPresione una tecla para salir." << endl;
	cin.get();

	return 0;
}