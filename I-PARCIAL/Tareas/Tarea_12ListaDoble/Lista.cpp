#include <stdlib.h>
#include <iostream>
#include "Nodo.h"
#include "Lista.h"

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

Lista::Lista(){
	cabeza=NULL;
	cola=NULL;
}

bool Lista::vacio(void){
    if(cabeza==NULL && cola==NULL){
        return true;
    }
    else{
        return false;
    }
}

void Lista::insertarInicio(int dato){
	Nodo* tmp = new Nodo();
	tmp->dato = dato;
	tmp->siguiente = NULL;
	tmp->anterior = NULL;
	
	if(vacio()==true){
        cabeza=tmp;
        cola=tmp;
    }
    else{
        tmp->siguiente = cabeza;
        cabeza->anterior = tmp;
        cabeza = tmp;
    }
}

void Lista::insertarFinal(int dato){
	Nodo* tmp = new Nodo();
	tmp->dato = dato;
	tmp->siguiente = NULL;
	tmp->anterior = NULL;
	
	if(vacio()==true){
        cabeza=tmp;
        cola=tmp;
    }
    else{
		cola->siguiente = tmp;
		tmp->anterior = cola;
		cola = tmp;
    }
}

void Lista::insertarEntre(int dato, int posicion){	
	Nodo* tmp = new Nodo();
	tmp->dato = dato;
	tmp->siguiente = NULL;
	tmp->anterior = NULL;

	if (vacio()) {
		cabeza = tmp;
		cola = tmp;
	}
	else{		
		if(posicion == 1) {
			insertarInicio(dato);
		}
		else if (posicion == (tamano() +1)) {
			insertarFinal(dato);
		}
		else if (posicion < 1 || posicion >= tamano()) {
			std::cout << "La lista no contine la posicion: " << posicion << " intentelo numavmente." << std::endl;
		}
		else if (posicion > 1 && posicion <= tamano()){
			Nodo *aux;
			aux = cabeza;
			for (int i = 1; i < posicion; i++) {
				aux= aux->siguiente; 
			}
			aux->anterior->siguiente = tmp;
			tmp->anterior = aux->anterior;
			tmp->siguiente = aux;
		}
	}
}

void Lista::imprimir(){
	Nodo *aux;
	aux=cabeza;
	int i=0;
	while(aux!=NULL){
		cout<<aux->dato<<endl;
		aux = aux->siguiente;
		i++;
	}
}

int Lista::tamano(){
	int cont=0;
	Nodo *aux;
	aux=cabeza;
	while(aux!=NULL){
		cont++;
		aux = aux->siguiente;
	}
	return cont;
}
void Lista::eliminar(int posicion){
	Nodo* tmp = new Nodo();
	tmp->dato = 0;
	tmp->siguiente = NULL;
	tmp->anterior = NULL;

	if (vacio()) {
		cout << "No existe lista para eliminar." << endl;
	}
	else {
		if (posicion == 1) {
			cabeza = cabeza->siguiente;
		}
		else if (posicion == (tamano() + 1)) {
			cola->anterior->siguiente = nullptr;
		}
		else if (posicion < 1 || posicion >= tamano()) {
			std::cout << "La lista no contine la posicion: " << posicion << " intentelo numavmente." << std::endl;
		}
		else if (posicion > 1 && posicion <= tamano()) {
			Nodo* aux;
			aux = cabeza;
			for (int i = 1; i < posicion; i++) {
				aux = aux->siguiente;
			}
			aux->anterior->siguiente = aux->siguiente;
			aux->siguiente->anterior = aux->anterior;
		}
	}
}
