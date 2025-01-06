/* Ejercicio 1: Construya una clase llamada "Rectangulo" que tenga los siguientes atributos:
largo (base) y ancho (altura), y los siguientes metodos: Perimetro() y area(). */

#include <iostream>

using namespace std;

class Rectangulo {
  private:
	float base, altura;

  public:
	Rectangulo(float base, float altura) {
		this->base = base;
		this->altura = altura;
	}

	void getPerimetro() {
		float perimetro = 2 * (base + altura);

		cout << "El perimetro es: " << perimetro << endl;
	}

	void getArea() {
		float area = base * altura;

		cout << "El area es: " << area << endl;
	}
};

int main() {
	Rectangulo r1(7, 4);
	Rectangulo r2(11, 7);

	r1.getArea();
	r1.getPerimetro();
	cout << endl;
	r2.getArea();
	r2.getPerimetro();

	cout << "\nPresione una tecla para salir...";
	cin.get();

	return 0;
}