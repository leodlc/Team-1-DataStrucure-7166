#include <iostream>
#include <cstring>
#include "Nodo.h"

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

using namespace std;
void Nodo::setDato(int newDato){
	dato = newDato;
}

int Nodo::getDato(void){
	return dato;
}

Nodo Nodo::getAnterior(void){
   return *anterior;
}

void Nodo::setAnterior(Nodo *newAnterior){
   anterior = newAnterior;
}

Nodo Nodo::getSiguiente(void){
   return *siguiente;
}

void Nodo::setSiguiente(Nodo *newSiguiente){
   siguiente = newSiguiente;
}

Nodo::Nodo(){
	dato=0;
    siguiente=NULL;
    anterior=NULL;
}

Nodo::Nodo(int newDato,Nodo *newSiguiente,Nodo *newAnterior){
    dato=newDato;
    siguiente=newSiguiente;
    anterior=newAnterior;
}
