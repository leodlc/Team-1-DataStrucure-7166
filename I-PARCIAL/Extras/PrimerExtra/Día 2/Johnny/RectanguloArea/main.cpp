#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Rectangulo.h"



using namespace std;


int main() {


	float largo, ancho;
	cout << "\tBIENVENIDO AL SISTEMA DE CALCULO DE AREAS DE UN RECTANGULO\n";
	cout << "Ingrese el largo del rectangulo: ";
	cin >> largo;
	cout << "Ingresa el ancho del rectangulo: ";
	cin >> ancho;

	Rectangulo<float> rectangulo(largo, ancho);

	cout << "\nEl area del rectangulo es: " << rectangulo.calcularArea() << endl;


	system("pause");
	return 0;
}