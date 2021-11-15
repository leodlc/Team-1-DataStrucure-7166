/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Memoria dinamica matrices multiplicacion
*FECHA DE CREACION : 12 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 14 DE NOVIEMBRE DE 2021
* */

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "Matriz.h"

using namespace std;

int main(int argc, char** argv) {
	int d;
	cout << "Ingrese el tamanio de las matrices: ";
	cin >> d;

	Matriz<int> m1(d);
	Matriz<int> m2(d);
	Matriz<int> mr(d);


	m1.segmentar();
	m2.segmentar();
	mr.segmentar();

	m1.encerar();
	m2.encerar();
	mr.encerar();

	m1.ingresar();
	m2.ingresar();

	m1.imprimir();
	printf("\n\n");
	m2.imprimir();

	cout << "\nLa multiplicacion de las matrices es: \n";
	mr = m1.procesar(m2);
	mr.imprimir();
	printf("\n\n");

	return 0;
}