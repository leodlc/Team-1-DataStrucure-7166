#include <iostream>
#include <stdlib.h>
#include "Numeros.h"
#include "Operaciones.cpp"

int main() {
    Numero<float> num1,num2,res;
    float tempNum;
    std::cout << "CALCULADORA PARA MULTIPLICAR DOS NUMEROS";
    std::cout << "Ingrese un numero: "; std::cin>>tempNum;
    num1.setNum(tempNum);
    std::cout << "Ingrese el segundo numero: "; std::cin>>tempNum;
    num2.setNum(tempNum);
    res.setNum(multiplicar(num1.getNum(),num2.getNum()));
    num1.imprimir();
    std::cout<<"* ";
    num2.imprimir();
    std::cout<<"= ";
    res.imprimir();
    return 0;
}
