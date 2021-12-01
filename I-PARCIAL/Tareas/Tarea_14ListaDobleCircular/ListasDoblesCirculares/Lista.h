/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Lista Doble Circular
*FECHA DE CREACION : 23 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 23 DE NOVIEMBRE DE 2021
* */
#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class ListaDobleCricular{
	private:
		Nodo *cabeza;
		Nodo *cola;
	public:
		ListaDobleCricular();
		bool vacio(void);
		void mostrar();
		void mostrarRecursivo(Nodo*, int);
		void eliminar(int);
		void insertar(int);
};

#endif
