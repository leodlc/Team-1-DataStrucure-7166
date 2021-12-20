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

#include <iostream>
#include "Vector.h"
#include "Operations.h"

int main(int, char **)
{
    Vector vector;
    Vector bubble;
    vector.setVector(generate());
    print(vector);
    bubble.setVector(bubbleSort(vector.getVector()));
    print(bubble);
}
