/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Proyecto tabla de amortizacion
Autor: Cristian maranje											       
Fecha: 27/06/2021													   
Fecha de modificacion: 28/06/2021								   
*/

#include "Nodo.h"
#include "Validaciones.h"
#include <iostream>
#include <functional>

class ListaCircularDoble
{
	private:
		Nodo *primero;
		Nodo *ultimo;

	public:
		ListaCircularDoble();
		void insertar(Persona persona);
		void recorrer(std::function<void(Persona)> callback);
		void eliminar(long int cedula);
};

