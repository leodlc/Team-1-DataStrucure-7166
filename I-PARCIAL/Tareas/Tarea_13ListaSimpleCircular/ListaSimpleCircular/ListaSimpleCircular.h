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
#include "Nodo.h"

class ListaSimpleCircular
{
private:
    Nodo *primero;
    Nodo *actual;
    int dimLista = 0;
    Nodo *obtenerNodo(int indice);

public:
    ListaSimpleCircular()
    {
        this->primero = NULL;
        this->actual = NULL;
    }
    bool listaVacia() { return (primero == NULL); };
    void insertar(int val);
    void insertarEn(int indice, int val);
    void eliminar(int indice);
    void mostrar();
    void mostrarRecursivo(Nodo *valor,int indice);
    Nodo *getPrimero() { return primero; }
    void setPrimero(Nodo *pri) { primero = pri; }
    Nodo *getActual() { return actual; }
    void setActual(Nodo *act) { actual = act; }
    int getDimLista() {return dimLista;}
    void setDimLista(int dim) {dimLista=dim;}
};
