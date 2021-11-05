#include <iostream>

#pragma once
template <class T>
class Numero
{
private:
    T num = 1;

public:
    T getNum() const;
    void setNum(T newNum);
    void imprimir();
};
