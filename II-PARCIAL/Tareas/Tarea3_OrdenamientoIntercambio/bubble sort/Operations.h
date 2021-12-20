#include "Vector.h"
#define dim 100
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

int *generate()
{
    int *_vector = (int *)malloc(dim*sizeof(int));
    for (int i = 0; i < dim; i++)
    {
        *(_vector + i) = rand() % (1001);
    }
    return _vector;
}

void print(Vector vector)
{
    int *tmpVector;
    tmpVector = vector.getVector();
    for (int i = 0; i < dim; i++)
    {
        std::cout << "Posicion " << i + 1 << " Valor: " << *(tmpVector + i) << std::endl;
    }
}

int *bubbleSort(int *arr)
{

    for (int i = 0; i < dim - 1; i++)
    {
        for (int j = 0; j < dim - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                std::swap(*(arr + j), *(arr + j + 1));
            }
        }
    }
    return arr;
}