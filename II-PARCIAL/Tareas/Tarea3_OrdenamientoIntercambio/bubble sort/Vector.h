#include <iostream>
#pragma once
/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: buble sort
*FECHA DE CREACION : 19 DE DICIEMBRE DE 2021
*FECHA DE MODIFICACION: 19 DE DICIEMBRE DE 2021
* */

class Vector{
    private:
        int *vector;
    public:
        Vector();
        int* getVector();
        void setVector(int* _vector);
};