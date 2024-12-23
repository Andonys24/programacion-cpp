/* Escriba una funcion nombrada cambio() que tenga un parametro en numero entero
y seis parametros de referencia en numero entero nombrados ciend, ciencuenta,
veinte, diez, cinco y uno, respectivamente. La funcion tiene que considerar
el valor entero transmitido como una cantidad en dolares y convertir el valor
en el numero menor de billetes equivalentes. */

#include <iostream>

using namespace std;

void cambio(int cat, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno);

int main() {
	int cat, cien, cincuenta, veinte, diez, cinco, uno;

	cout << "Ingrese la cantidad en Dolares: ";
	cin >> cat;

	cambio(cat, cien, cincuenta, veinte, diez, cinco, uno);

	cout << "El cambio de los " << cat << "$ es:" << endl;
	cout << cien << " billetes de 100$" << endl;
	cout << cincuenta << " billetes de 50$" << endl;
	cout << veinte << " billetes de 20$" << endl;
	cout << diez << " billetes de 10$" << endl;
	cout << cinco << " billetes de 5$" << endl;
	cout << uno << " billetes de 1$" << endl;

	cin.get();
	return 0;
}

void cambio(int cat, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno) {
	cien = cat / 100;
	cat %= 100;
	cincuenta = cat / 50;
	cat %= 50;
	veinte = cat / 20;
	cat %= 20;
	diez = cat / 10;
	cat %= 10;
	cinco = cat / 5;
	uno = cat % 5;
}