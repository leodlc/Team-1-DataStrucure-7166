/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Listas Simples Circulares
*FECHA DE CREACION : 23 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 23 DE NOVIEMBRE DE 2021
* */

#include <iostream>
#include "ListaSimpleCircular.h"


void ListaSimpleCircular::insertar(int val)
{
    Nodo *nuevo = new Nodo(val , primero);
    if (ListaSimpleCircular::listaVacia())
    {
        primero = nuevo;
    }
    else
    {
        actual->setSiguiente(nuevo);
    }
    actual = nuevo;
    dimLista++;
}

void ListaSimpleCircular::mostrar()
{
    Nodo *tmp = primero;
    int indice = 0;
    mostrarRecursivo(tmp,indice);

}

void ListaSimpleCircular::mostrarRecursivo(Nodo *valor,int indice){
    valor = obtenerNodo(indice);
    std::cout << "Indice: " << indice++ << " Valor: " << valor->getValor() << std::endl;
    if(indice< dimLista)
        mostrarRecursivo(valor->getSiguiente(),indice++);
}

void ListaSimpleCircular::eliminar(int indice)
{
    if (listaVacia()) {
        std::cout << "No existe elementos para eliminar." << std::endl;
    }
    else {
        if (indice < 0 || indice > dimLista) {
            std::cout << "La lista no contine la posicion: " << indice << " intentelo numavmente." << std::endl;
        }
        else if (indice == 0) {
            Nodo* tmp1 = obtenerNodo(indice + 1);
            primero = tmp1;
            dimLista--;
        }
        else if (indice > 0 && indice <= dimLista) {
            Nodo *actual = obtenerNodo(indice - 1);
            Nodo *tmp = obtenerNodo(indice + 1);
            actual->setSiguiente(tmp);
            dimLista--;   
        }
    }
}

Nodo *ListaSimpleCircular::obtenerNodo(int indice)
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

void ListaSimpleCircular::insertarEn(int indice, int val)
{
    Nodo *nuevo = new Nodo(val, primero);
    if (ListaSimpleCircular::listaVacia())
    {
        primero = nuevo;
    }
    else {
        if (indice == 0) {
            insertar(val);
        }
        else if (indice < 0 || indice > dimLista) {
            std::cout << "La lista no contine la posicion: " << indice << " intentelo numavmente." << std::endl;
        }
        else if (indice > 0 && indice <= dimLista) {
            Nodo *actual = obtenerNodo(indice -1);
            Nodo *tmp = actual->getSiguiente();
            actual->setSiguiente(nuevo);
            actual = actual->getSiguiente();
            actual->setSiguiente(tmp);
            dimLista++;
        }
    }
}
