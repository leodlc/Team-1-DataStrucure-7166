#include <iostream>
#include <stdlib.h>
#include "Numeros.h"

template <typename T>
class Operacion
{
public:
    void multiplicar(T num1, T num2, Numero<T> *res);
};
