/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autores: Alvaro Zumba												 *
 *				Fecha de creaci�n: 1/11/2021										 *
 *				Fecha de modificaci�n: 1/11/2021									 *
 *************************************************************************************/
#include<iostream>
#include "Matriz.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");
	Matriz<int> p;
	p.ingreso1();
	p.ingreso2();
	p.multiplicacion();
}