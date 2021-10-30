#include "Operaciones.h"

template <typename T>
void multiplicar(T num1, T num2, Numero<T> *res)
{
    res->setNum(num1 * num2);
}