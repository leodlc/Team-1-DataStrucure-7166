#include "Numeros.h"

template <typename T>
T Numero<T>::getNum() const
{
    return this->num;
}

template <typename T>
void Numero<T>::setNum(T newNum)
{
    this->num = newNum;
}

template <typename T>
void imprimir(Numero<T> num){
    std::cout<<num<<" ";
}