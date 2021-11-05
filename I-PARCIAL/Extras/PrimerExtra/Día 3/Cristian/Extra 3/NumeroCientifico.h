#include <iostream>

#pragma once



template <class T>
class NumeroCientifico
{
private:
    T num=1;
    int notacion=0;

public:
    NumeroCientifico()
    {
        this->num=1;
        this->notacion=0;
    }
    T getNum() const;
    int getNotacion();
    void setNum(T newNum);
    void setNotacion(int newnotacion);
    void imprimir();
};


