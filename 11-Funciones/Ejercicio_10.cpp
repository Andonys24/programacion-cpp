/* 10. Escriba una funcion nombrada calc_anios() que tenga un parametro entero
que represente el numero total de dias desde la fecha 1/1/2000
y parametros de referencia nombrados anios, mes y dias. La funcion es calcular
el anio, mes y dia actual para el numero dado de dias que se le transmitan.
Para este problema suponga que cada anio tiene 365 dias y cada mes tiene 30 dias. */

#include <iostream>

using namespace std;

bool esBisiesto(int);

void calc_anios(int, int &, int &, int &);

int main() {
	int totalDias;
	int anio, mes, dia;

	cout << "Ingrese el número total de días desde el 1/1/2000: ";
	cin >> totalDias;

	calc_anios(totalDias, anio, mes, dia);

	cout << "Fecha calculada: " << dia << "/" << mes << "/" << anio << endl;

	return 0;
}

bool esBisiesto(int anio) { return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0); }

void calc_anios(int totalDias, int &anios, int &mes, int &dias) {
	const int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int diasPorAnio;

	anios = 2000;

	while (true) {
		diasPorAnio = esBisiesto(anios) ? 366 : 365;
		if (totalDias < diasPorAnio)
			break;
		totalDias -= diasPorAnio;
		anios++;
	}

	mes = 1;
	for (int i = 0; i < 12; i++) {
		int diasEnMes = diasPorMes[i];
		if (i == 1 && esBisiesto(anios)) {
			diasEnMes = 29;
		}

		if (totalDias < diasEnMes)
			break;
		totalDias -= diasEnMes;
		mes++;
	}
	dias = totalDias + 1;
}