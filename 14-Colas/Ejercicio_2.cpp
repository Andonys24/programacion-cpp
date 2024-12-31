/* 2. Hacer un programa que guarde datos de clientes de un banco,
los almacene en cola, y por ultimo muestre los clientes en el orden correcto. */

#include <iostream>

using namespace std;

struct Cliente {
	string nombre;
	string apellido;
	int edad;
	string telefono;
	Cliente *siguiente;
};

// Prototipos
void limpiarConsola();
void pausarPrograma(string mensaje = "Presione una tecla para continuar", bool ignorar = true);
void insertarDatos(Cliente *&, Cliente *&);
void mostrarClientes(Cliente *, Cliente *);
void limpiarClientes(Cliente *&, Cliente *&);

int main() {
	Cliente *inicio = nullptr, *fin = nullptr;
	bool continuar = true;

	while (continuar) {
		int opcion = 0;

		limpiarConsola();
		cout << "*** Menu ***" << endl;
		cout << "[1] - Insertar cliente" << endl;
		cout << "[2] - Mostrar clientes ingresados" << endl;
		cout << "[3] - Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1:
			limpiarConsola();
			insertarDatos(inicio, fin);
			pausarPrograma("Cliente ingresado correctamente", false);
			break;
		case 2:
			limpiarConsola();
			mostrarClientes(inicio, fin);
			pausarPrograma();
			break;
		case 3:
			continuar = false;
			break;
		default:
			pausarPrograma("Opcion no valida");
			break;
		}
	}

	// Limpiar memoria
	limpiarClientes(inicio, fin);

	// limpiar punteros
	delete inicio;
	delete fin;
	inicio = nullptr;
	fin = nullptr;

	pausarPrograma("Fin del programa");

	return 0;
}

void limpiarConsola() {
	const char *comando = (system("clear") == 0) ? "clear" : "cls";
	system(comando);
}

void pausarPrograma(string mensaje, bool ignorar) {
	if (ignorar) {
		cin.ignore(1000, '\n');
	}

	cout << "\n" << mensaje << "...";
	cin.get();
}

void insertarDatos(Cliente *&inicio, Cliente *&fin) {
	Cliente *newCliente = new Cliente();
	newCliente->siguiente = nullptr;

	// Pedir datos al usuario
	cin.ignore();
	cout << "Ingrese el nombre del cliente: ";
	getline(cin, newCliente->nombre);
	cout << "Ingrese el apellido del cliente: ";
	getline(cin, newCliente->apellido);
	cout << "Ingrese la edad del cliente: ";
	cin >> newCliente->edad;
	cin.ignore();
	cout << "Ingrese el telefono del cliente: ";
	getline(cin, newCliente->telefono);

	// Insertar datos en la cola
	if (inicio == nullptr) {
		inicio = newCliente;
	} else {
		fin->siguiente = newCliente;
	}
	fin = newCliente;
}

void mostrarClientes(Cliente *inicio, Cliente *fin) {
	Cliente *actual = inicio;
	int contador = 1;

	cout << "Clientes: " << endl;

	while (actual != nullptr) {
		cout << "\nCliente #" << contador++ << endl;
		cout << "Nombre: " << actual->nombre << endl;
		cout << "Apellido: " << actual->apellido << endl;
		cout << "Edad: " << actual->edad << endl;
		cout << "Telefono: +504 " << actual->telefono << endl;
		cout << endl;

		actual = actual->siguiente;
	}
}

void limpiarClientes(Cliente *&inicio, Cliente *&fin) {
	while (inicio != nullptr) {
		Cliente *aux = inicio;

		if (inicio == fin) {
			inicio = nullptr;
			fin = nullptr;
		} else {
			inicio = inicio->siguiente;
		}
		delete aux;
	}
}