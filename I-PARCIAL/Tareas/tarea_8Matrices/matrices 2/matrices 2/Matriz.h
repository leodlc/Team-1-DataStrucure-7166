/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Manejo de memoria dinamica con matrices
*FECHA DE CREACION : 13 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 14 DE NOVIEMBRE DE 2021
* */
#pragma once
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
template<typename T>
class Matriz {
private:
	T tamanio;
	T** matriz;
public:
	Matriz();
	Matriz(T);
	void setTamanio(T);
	void setMatriz(T**);
	T getTamanio();
	T** getMatriz();
	void crearMatriz();
	void llenarMatriz();
	void imprimirMatriz();
	void multiplicarExponenteMatriz(T);
	Matriz<T> multiplicacionMatrices(Matriz<T> matrizTmp);
};
