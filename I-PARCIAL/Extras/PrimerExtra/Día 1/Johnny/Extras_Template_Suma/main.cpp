#include <iostream>
#include <stdio.h>
#include "Operaciones.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	float valor1, valor2;
	cout << "Ingrese el primer número: ";
	cin >> valor1;
	cout << "Ingresa el segundo número: ";
	cin >> valor2;

	Operaciones <float> operacion(valor1, valor2);

	cout << "Suma = " << operacion.suma() << endl;
	

	return 0;

}