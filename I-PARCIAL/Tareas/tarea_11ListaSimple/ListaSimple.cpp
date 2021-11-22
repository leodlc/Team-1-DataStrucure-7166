#include <iostream>
#include "ListaSimple.h"


/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Lista Simple
*FECHA DE CREACION : 20 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 21 DE NOVIEMBRE DE 2021
* */

void ListaSimple::insertar(int val)
{
    Nodo *nuevo = new Nodo(val);
    if (ListaSimple::listaVacia())
    {
        primero = nuevo;
    }else
    {
        actual->setSiguiente(nuevo);
    }
    actual = nuevo;
    dimLista++;
}


void ListaSimple::mostrar()
{
    Nodo *tmp = primero;
    int indice = 0;
    mostrarRecursivo(tmp,indice);

}

void ListaSimple::mostrarRecursivo(Nodo *valor,int indice){
    std::cout << "Indice: " << indice++ << " Valor: " << valor->getValor() << std::endl;
    if(indice< dimLista)
        mostrarRecursivo(valor->getSiguiente(),indice++);
}

void ListaSimple::eliminar(int indice)
{
    //elimina el primero
    if(indice==0){
        primero = primero->getSiguiente();
    //elimina el ultimo
    }else if(indice == dimLista){
        Nodo *penultimo = obtenerNodo(indice -2);
        penultimo->setSiguiente(nullptr);
    //elimina entre el primero y el ultimo
    }else{
        Nodo *actual = obtenerNodo(indice - 1);
        Nodo *tmp = obtenerNodo(indice + 1);
        actual->setSiguiente(tmp);
    }
    dimLista--;
}

Nodo *ListaSimple::obtenerNodo(int indice)
{
    int cont = 0;
    Nodo *tmp = primero;
    while (tmp->getSiguiente() != nullptr)
    {
        if (cont == indice)
        {
            break;
        }
        cont++;
        tmp = tmp->getSiguiente();
    }
    return tmp;
}

void ListaSimple::insertarEn(int indice, int val)
{
    Nodo *nuevo = new Nodo(val);
    if(indice == 0){
        Nodo *tmp = primero;
        primero = nuevo;
        primero->setSiguiente(tmp);
    }else{
        Nodo *anterior = obtenerNodo(indice - 1);
        Nodo *tmp = anterior->getSiguiente();
        anterior->setSiguiente(nuevo);
        anterior = anterior->getSiguiente();
        anterior->setSiguiente(tmp);
    }
    dimLista++;
    
}

int ListaSimple::proceso() {
    int suma=0;
    Nodo* tmp = primero;
    do{
        suma += tmp->getValor();
        tmp = tmp->getSiguiente();
    } while (tmp->getSiguiente() != nullptr);
    suma += tmp->getValor();
    return suma;
}

