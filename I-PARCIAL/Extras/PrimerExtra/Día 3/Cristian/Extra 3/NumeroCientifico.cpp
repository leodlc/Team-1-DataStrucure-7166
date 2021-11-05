#include "NumeroCientifico.h"


template <typename T>
T NumeroCientifico<T>::getNum() const
{
    return num;
}


template <typename T>
void NumeroCientifico<T>::setNum(T newNum)
{
    this->num = newNum;
}

template <typename T>
void NumeroCientifico<T>::imprimir()
{
    std::cout << num << "X10^" << notacion;
}

template <typename T>
int NumeroCientifico<T>::getNotacion()
{
    return notacion;
}

template <typename T>
void NumeroCientifico<T>::setNotacion(int newNotacion)
{
    this->notacion = newNotacion;
}
template class NumeroCientifico<double>;