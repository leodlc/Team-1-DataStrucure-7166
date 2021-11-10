/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: CREACION DE ARCHIVO .TXT, ESCRITURA Y LECTURA DE NUMEROS
*FECHA DE CREACION : 08 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 09 DE NOVIEMBRE DE 2021
* */

#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


ofstream crear(string nombre) {
	nombre = nombre + ".txt";
	ofstream num(nombre);
	return num;
}

ifstream leer(string nombre) {
	nombre = nombre + ".txt";
	ifstream nums(nombre);
	return nums;
}
