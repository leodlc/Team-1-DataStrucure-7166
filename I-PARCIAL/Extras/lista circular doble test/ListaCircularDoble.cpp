/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Proyecto tabla de amortizacion
Autor: Cristian maranje											       
Fecha: 27/06/2021													   
Fecha de modificacion: 28/06/2021								   
*/

#include <iostream>
#include "ListaCircularDoble.h"

ListaCircularDoble::ListaCircularDoble()
{
	primero = nullptr;
}

void ListaCircularDoble::insertar(Persona persona)
{

	Nodo *nuevo = new Nodo(persona);
	if (primero == NULL)
	{
		primero = nuevo;
		primero->setSiguiente(primero);
		primero->setAnterior(primero);
	}
	else if (primero->getSiguiente() == primero)
	{
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		ultimo->setAnterior(primero);
		primero->setSiguiente(ultimo);
		primero->setAnterior(ultimo);
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		nuevo->setSiguiente(primero);
		primero->setAnterior(nuevo);
		ultimo = nuevo;
	}
}

void ListaCircularDoble::recorrer(std::function<void(Persona)> callback)
{
	Nodo *temporal = primero;

	do
	{
		callback(temporal->getPersona());
		temporal = temporal->getSiguiente();
	} while (temporal != primero);
}

void ListaCircularDoble::revisarCorreo(Persona persona)
{
	string tmpcorreo = persona.getCorreo();
	int cont = 0;
	Nodo *temporalNodo = primero;
	Persona tmpPersona;
	do
	{
		if (temporalNodo == nullptr)
		{
			break;
		}
		tmpPersona = temporalNodo->getPersona();
		if (tmpPersona.getCorreo() == tmpcorreo)
		{
			cont++;
		}
		temporalNodo = temporalNodo->getSiguiente();
	} while (temporalNodo != primero);

	if (cont >= 1)
	{
		persona.generarCorreo(cont);
	}
}

void ListaCircularDoble::eliminar(long int cedula)
{
	Nodo *temporal = primero;
	Persona localPersona;
	int cont = 0;
	if (temporal != nullptr)
	{
		do
		{
			localPersona = temporal->getPersona();
			if (localPersona.getCI() == cedula)
			{
				Nodo *anterior = temporal->getAnterior();
				Nodo *siguiente = temporal->getSiguiente();
				anterior->setSiguiente(siguiente);
				siguiente->setAnterior(anterior);
				delete temporal;
				cont++;
			}
			temporal = temporal->getSiguiente();
		} while (temporal->getSiguiente() != primero);
	}

	if (cont == 0)
	{
		cout << "No se ha encontrado a la persona.\n";
		system("pause");
	}
}


