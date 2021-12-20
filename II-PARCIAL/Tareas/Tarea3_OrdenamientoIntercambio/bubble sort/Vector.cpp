#include "Vector.h"
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
Vector::Vector()
{
    this->vector = nullptr;   
}

int* Vector::getVector()
{
    return vector;
}

void Vector::setVector(int *_vector)
{
    vector=_vector;
}