/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTOR: Leonardo de la Cadena
*TEMA: CREACION DE UN PROGRAMA CON OPERADORES SOBRECARGADOS
*FECHA DE CREACION : 06 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 06 DE NOVIEMBRE DE 2021
* DESCRIPCION DEL PROGRAMA: Programa en el que se restan dos puntos dados en un plano
* utilizando templates y datos sobrecargados
* */
#include <iostream>
#include "Punto.h"

using namespace std;

int main()
{
	Punto<double> puntoA(5.3, 3.6), puntoB(2.4,1.7);
	Punto<double> P;
	cout << "Resta de los puntos: (" << puntoA.getPuntoX() << " , " << puntoA.getPuntoY() << ") - ("
		<< puntoB.getPuntoX() << " , " << puntoB.getPuntoY() << ")" << endl;
	P = puntoA - puntoB;
	cout << "El resultado es" << endl;
	cout << P.getPuntoX() << " , " << P.getPuntoY() << endl;

}

