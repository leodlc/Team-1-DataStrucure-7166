/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autores: Alvaro Zumba												 *
 *				Fecha de creaci�n: 29/10/2021										 *
 *				Fecha de modificaci�n: 29/10/2021									 *
 *************************************************************************************/

#include <iostream>
#include <conio.h>
#include "Producto.h"
using namespace std;

int main() {
	
	setlocale(LC_ALL, "");
	float num1, num2;
	cout << "Ingrese el valor 1: "<<endl;
	cin >> num1;
	cout << "Ingrese el valor 2: "<<endl;
	cin >> num2;
	Producto <float> producto(num1, num2);
	cout << "la multiplicaci�n es:  " << producto.multiplicacion() << endl;
	cout << "la divisi�n es:  " << producto.division() << endl;
	getch();
	return 0;
}
