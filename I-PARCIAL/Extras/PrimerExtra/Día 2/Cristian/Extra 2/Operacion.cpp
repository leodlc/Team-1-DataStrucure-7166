#include "Operacion.h"

template <typename T>
T dividir(T num1, T num2)
{
    float res;
    res = num1/num2;
    return res;
}
template class Numero<float>;
template class Operacion<float>;