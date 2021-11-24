/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: ListaDobleCricular
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/
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
