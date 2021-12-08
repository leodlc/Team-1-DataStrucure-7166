#pragma once

#include <stdlib.h>
#include "Persona.h"
#pragma once
class Nodo
{
private:
	Persona persona;
	Nodo* siguiente;
	Nodo* anterior;

public:
	Nodo(Persona);
	Nodo();
	Persona getPersona();
	void setPersona(Persona persona);

	Nodo* getSiguiente();
	void setSiguiente(Nodo*);

	Nodo* getAnterior();
	void setAnterior(Nodo*);
};