#pragma once
#include <cstring>

using namespace std;

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

class Nodo{
	private:
		int dato;
		Nodo *anterior;
		Nodo *siguiente;	
	public:
		Nodo(void);
		Nodo(int,Nodo*,Nodo*);
		void setDato(int);
		int getDato(void);
		Nodo getSiguiente(void);
		void setSiguiente(Nodo*);
		Nodo getAnterior(void);
		void setAnterior(Nodo*);
		friend class Lista;

};


