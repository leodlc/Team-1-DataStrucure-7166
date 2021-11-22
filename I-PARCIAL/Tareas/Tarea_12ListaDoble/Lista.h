#pragma once
#include "Nodo.h"

/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Lista Doble
*FECHA DE CREACION : 22 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 22 DE NOVIEMBRE DE 2021
* */

class Lista{
	private:
		Nodo *cabeza;
		Nodo *cola;
	public:
		Lista();
		bool vacio(void);
		void imprimir();
		int tamano();
		void eliminar(int);
		void insertarInicio(int);
		void insertarFinal(int);
		void insertarEntre(int,int);
};


