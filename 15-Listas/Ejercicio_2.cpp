/* Ejercicio 2: Crear una lista que almacene "n" numeros reales y calcular su suma y promedio de estos. */

#include <iostream>
#include <limits>

using namespace std;

struct Node {
	double number;
	Node *next;
};

// Protypes
double validateNumber(string messages);
void insertElement(Node *&, double);
void calculateSumAverage(Node *);
void freeMemory(Node *&);

int main() {
	Node *list = nullptr;
	int option = 0;

	// Insert elements into the list
	do {
		insertElement(list, validateNumber("Ingrese un numero real"));
		option = validateNumber("Desea ingresar otro numero? (1. Si / 0. No)");
	} while (option != 0);

	// Calculate the sum and average of the elements in the list
	calculateSumAverage(list);

	// Free memory
	freeMemory(list);

	cin.ignore();
	cout << "\nPresiona una tecla para salir...";
	cin.get();

	return 0;
}

double validateNumber(string messages) {
	double number = 0;
	bool validated = false;

	while (!validated) {
		cout << messages << ": ";
		if (cin >> number) {
			validated = true;
		} else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Por favor, ingrese un numero real valido" << endl;
		}
	}

	return number;
}

void insertElement(Node *&list, double number) {
	Node *newNode = new Node();
	Node *assistant = nullptr;

	newNode->number = number;
	newNode->next = nullptr;

	if (list == nullptr) {
		list = newNode;
	} else {
		assistant = list;
		while (assistant->next != nullptr) {
			assistant = assistant->next;
		}
		assistant->next = newNode;
	}

	cout << "Elemento insertado correctamente." << endl;
}

void calculateSumAverage(Node *list) {
	double sum = 0, average = 0;
	int counter = 0;

	// Calculate all the numbers in the list
	while (list != nullptr) {
		sum += list->number;
		counter++;
		list = list->next;
	}

	// calculate the average
	average = sum / counter;

	// print result
	cout << "La suma de los elementos es: " << sum << endl;
	cout << "El promedio de los elementos es: " << average << endl;
}

void freeMemory(Node *&list) {
	Node *assistant = nullptr;

	while (list != nullptr) {
		assistant = list;
		list = assistant->next;
		delete assistant;
	}
}