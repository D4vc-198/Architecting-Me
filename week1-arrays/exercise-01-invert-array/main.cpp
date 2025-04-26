#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

void leerNumerosDesdeEntrada(int array[], int longitud) {

	cout << "Ingresa " << longitud << " numeros: \n";
	for(int i = 0; i < longitud; i++) {
		while (!(cin >> array[i]))
		{
			cout << "Entrada inválida. Intenta de nuevo" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
	}
}

void imprimirArrayInvertido(const int array[], int longitud) {
	cout << "Array en orden inverso: ";
	for (int i = longitud - 1; i >= 0; i--) {
		cout << array[i] << " "; 
	}
}

int main() {
	int array[ARRAY_SIZE];

	leerNumerosDesdeEntrada(array, ARRAY_SIZE);
	imprimirArrayInvertido(array, ARRAY_SIZE);
	
	cout << endl;
	return 0;
}
