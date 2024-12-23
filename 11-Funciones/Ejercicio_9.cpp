/* 9. Escriba una funcion nombrada tiempo() que tenga un parametro en numero
entero llamado totalSeg y tres parametros de referencia enteros nombrados horas, min
y seg. La funcion es convertir el numero de segundos transimitido en un numero
equivalente de horas, minutos y segundos.*/

#include <iostream>

using namespace std;

void tiempo(int, int &, int &, int &);

int main() {
	int tot_seg, horas, minutos, segundos;

	cout << "Ingrese el numero total de segundos: ";
	cin >> tot_seg;

	tiempo(tot_seg, horas, minutos, segundos);

	cout << "Tiempo total de " << tot_seg << " segundos:" << endl;

	cout << horas << ((horas == 1) ? " hora" : " horas") << " con ";
	cout << minutos << ((minutos == 1) ? " minuto" : " minutos") << " y ";
	cout << segundos << ((segundos == 1) ? " segundo" : " segundos") << endl;
	cin.get();
	return 0;
}

void tiempo(int tot_seg, int &horas, int &minutos, int &segundos) {
	horas = tot_seg / 3600;
	tot_seg %= 3600;
	minutos = tot_seg / 60;
	segundos = tot_seg % 60;
}