/* 18. Escriba una funcion en llamada mayor() que devuelva la fecha
mas reciente de cualquiera par de fechas que se le transmita.
Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor(),
sera devuelta la segunda fecha. */

#include <iostream>

using namespace std;

struct Date {
	int year;
	int moth;
	int day;
};

void pedirFechas(Date[], int);
int mayor(Date[], int);
void mostrarReciente(Date[], int);

int main() {
	const int tam = 2;
	int reciente;
	Date fechas[tam];

	pedirFechas(fechas, tam);
	reciente = mayor(fechas, tam);
	mostrarReciente(fechas, reciente);

	cin.get();
	return 0;
}

void pedirFechas(Date fechas[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << "Ingrese el anio de la fecha " << i + 1 << ": ";
		cin >> fechas[i].year;
		cout << "Ingrese el mes de la fecha " << i + 1 << ": ";
		cin >> fechas[i].moth;
		cout << "Ingrese el dia de la fecha " << i + 1 << ": ";
		cin >> fechas[i].day;

		cout << endl;
	}
}

int mayor(Date fechas[], int tam) {
	int r = 0;
	for (int i = 0; i < tam; i++) {
		if (fechas[i].year > fechas[r].year) {
			r = i;
		} else {
			if (fechas[i].year == fechas[r].year) {
				if (fechas[i].moth > fechas[r].moth) {
					r = i;
				} else {
					if (fechas[i].moth == fechas[r].moth) {
						if (fechas[i].day > fechas[r].day) {
							r = i;
						}
					}
				}
			}
		}
	}
	return r;
}

void mostrarReciente(Date fechas[], int reciente) {
	cout << endl;
	cout << "La fecha mas actual es: ";
	cout << fechas[reciente].year << "/" << fechas[reciente].moth << "/" << fechas[reciente].day << endl;
}