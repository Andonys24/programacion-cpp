// Sobrecarga de constructores

#include <ctime>
#include <iostream>

using namespace std;

class Date {
  private:
	//   Atributos
	int day, month, year;

  public:
	// Constructores
	Date() { // Constructor sin parametros (Constructor por defecto)
		time_t now = time(0);
		tm *ltm = localtime(&now);

		this->day = ltm->tm_mday;
		this->month = 1 + ltm->tm_mon;
		this->year = 1900 + ltm->tm_year;
	}

	Date(int day, int moth, int year) { // Constructor con parametros
		this->day = day;
		this->month = moth;
		this->year = year;
	}

	Date(long date) { // Segundo constructor con parametros
		this->year = int(date / 10000);			 // Extraer el anio
		this->month = int((date % 10000) / 100); // Extraer el mes
		this->day = int(date % 100);			 // Extraer el dia
	}

	// Metodos
	void getDate() { cout << day << "/" << month << "/" << year << endl; }
};

int main() {
	// Instanciar objeto
	Date today;
	Date date1(1, 12, 2024);
	Date date2(20241231);

	today.getDate();
	date1.getDate();
	date2.getDate();

	cout << "\nPresione una tecla para salir...";
	cin.get();

	return 0;
}