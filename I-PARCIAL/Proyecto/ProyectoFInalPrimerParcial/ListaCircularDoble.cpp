

#include <iostream>
#include "ListaCircularDoble.h"

ListaCircularDoble::ListaCircularDoble()
{
	primero = nullptr;
	ultimo = nullptr;
}

bool ListaCircularDoble::estaVacia(){
	if(primero==nullptr){
		return true;
	}else {
		return false;
	}
}

void ListaCircularDoble::insertar(Persona persona)
{

	Nodo* nuevo = new Nodo(persona);
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
	Nodo* temporal = primero;

	do
	{
		callback(temporal->getPersona());
		temporal = temporal->getSiguiente();
	} while (temporal != primero );
}

void ListaCircularDoble::revisarCorreoUsuario(Persona *persona)
{
	string tmpcorreo = persona->getCorreo();
	int cont = 0;
	Nodo* temporalNodo = primero;
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
			++cont;
		}
		temporalNodo = temporalNodo->getSiguiente();
	} while (temporalNodo != primero);

	if (cont >= 1)
	{
		persona->generarCorreoUsuario(cont);

	}
}

void ListaCircularDoble::eliminar(long int cedula)
{
	Nodo* temporal = primero;
	Persona localPersona;
	int cont = 0;
	if (temporal != nullptr)
	{
		do
		{
			localPersona = temporal->getPersona();
			if (localPersona.getCedula() == cedula)
			{
				Nodo* anterior = temporal->getAnterior();
				Nodo* siguiente = temporal->getSiguiente();
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
