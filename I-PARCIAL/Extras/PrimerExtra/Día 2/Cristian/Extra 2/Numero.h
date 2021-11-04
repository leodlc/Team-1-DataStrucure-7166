#include <iostream>
#include <stdlib.h>
#pragma once
template <typename T>
class Numero{
private:
    T num;

public:
    T getNum()const;
    void setNum(T newNum);
    void imprimir();
};
