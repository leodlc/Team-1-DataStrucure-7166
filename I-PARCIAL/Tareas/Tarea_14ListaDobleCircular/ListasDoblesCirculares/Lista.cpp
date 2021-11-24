/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: ListaDobleCricular
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/
#include <stdlib.h>
#include <iostream>
#include "Nodo.h"
#include "Lista.h"

using namespace std;

ListaDobleCricular::ListaDobleCricular(){
	cabeza=NULL;
	cola=NULL;
}

bool ListaDobleCricular::vacio(void){
    if(cabeza==NULL && cola==NULL){
        return true;
    }
    else{
        return false;
    }
}

void ListaDobleCricular::insertar(int dato){
	Nodo* tmp = new Nodo();
	tmp->dato = dato;
	tmp->siguiente = NULL;
	tmp->anterior = NULL;
	
	if(vacio()==true){
        cabeza=tmp;
		cabeza->setSiguiente(cabeza);
		cabeza->setAnterior(cabeza);
    }
    else if (cabeza->getSiguiente() == cabeza){
		cola = tmp;
		cola->setSiguiente(cabeza);
		cola->setAnterior(cabeza);
		cabeza->setSiguiente(cola);
		cabeza->setAnterior(cola);
    }
	else {
		cola->setSiguiente(tmp);
		tmp->setAnterior(cola);
		tmp->setSiguiente(cabeza);
		cabeza->setAnterior(tmp);
		cola = tmp;
	}
}


void ListaDobleCricular::mostrar()
{
	if (cabeza == NULL) {
		std::cout << "La lista esta vacia";
		return;
	}
	else {
		Nodo* tmp = cabeza;
		int indice = 0;
		mostrarRecursivo(tmp, indice);
	}
}

void ListaDobleCricular::mostrarRecursivo(Nodo* valor, int indice) {
	std::cout << "Indice: " << indice++ << " Valor: " << valor->dato << std::endl;
	if (valor->getSiguiente() != cabeza) {
		mostrarRecursivo(valor->getSiguiente(), indice++);
	}
}

void ListaDobleCricular::eliminar(int dato){
	if (cabeza == NULL) {
		cout << "No existe ListaDobleCricular\n";
	}
	else if (cabeza->getSiguiente() == cabeza && cabeza->getDato() == dato) {
		cabeza = NULL;
	}
	else {
		Nodo* auxiliar = cabeza;
		while (auxiliar->getSiguiente() != cabeza && auxiliar->getDato() != dato) {
			auxiliar = auxiliar->getSiguiente();
		}
		if (auxiliar == cabeza && auxiliar->getDato() == dato) {
			cabeza->getSiguiente()->setAnterior(cabeza->getAnterior());
			cabeza->getAnterior()->setSiguiente(cabeza->getSiguiente());
			cabeza = cabeza->getSiguiente();
			delete auxiliar;
		}
		else if (auxiliar->getDato() == dato) {
			auxiliar->getAnterior()->setSiguiente(auxiliar->getSiguiente());
			auxiliar->getSiguiente()->setAnterior(auxiliar->getAnterior());
			delete auxiliar;
		}
	}
	std::cout << "Fin";
}
