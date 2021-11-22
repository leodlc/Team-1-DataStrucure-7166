#include <iostream>
#include "Nodo.h"

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

class ListaSimple
{
private:
    Nodo *primero;
    Nodo *actual;
    int dimLista = 0;

public:
    ListaSimple()
    {
        this->primero = NULL;
        this->actual = NULL;
    }
    Nodo *obtenerNodo(int indice);
    bool listaVacia() { return (primero == NULL); };
    void insertar(int val);
    void insertarEn(int indice, int val);
    void eliminar(int indice);
    void mostrar();
    Nodo *getPrimero() { return primero; }
    void setPrimero(Nodo *pri) { primero = pri; }
    Nodo *getActual() { return actual; }
    void setActual(Nodo *act) { actual = act; }
    int getDimLista() {return dimLista;}
    void setDimLista(int dim) {dimLista = dim; }
    void mostrarRecursivo(Nodo *valor,int indice);
    int proceso();
};