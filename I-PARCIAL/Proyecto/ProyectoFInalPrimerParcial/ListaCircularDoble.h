#pragma once

#include "Nodo.h"
#include "Validaciones.h"
#include <iostream>
#include <functional>

class ListaCircularDoble
{
private:
	Nodo* primero;
	Nodo* ultimo;

public:
	ListaCircularDoble();
	void insertar(Persona persona);
	void recorrer(std::function<void(Persona)> callback);
	void revisarCorreoUsuario(Persona *persona);
	bool estaVacia();
	void eliminar(long int cedula);
};
