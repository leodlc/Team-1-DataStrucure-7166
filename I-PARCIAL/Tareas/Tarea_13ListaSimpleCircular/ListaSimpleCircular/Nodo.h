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

class Nodo
{
private:
    int valor;
    Nodo *siguiente;

public:
    Nodo(int val, Nodo *sig)
    {
        this->valor = val;
        this->siguiente = sig;
    }
    
    void setSiguiente(Nodo *sig) { siguiente = sig; }
    Nodo *getSiguiente() { return siguiente; }
    int getValor() { return valor; }
    friend class Lista;
};
