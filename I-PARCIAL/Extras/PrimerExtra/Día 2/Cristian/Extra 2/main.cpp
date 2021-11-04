#include <iostream>
#include "Numero.h"
#include "Operacion.cpp"
int main(int, char**) {
    Numero<float> num1,num2,res;
    float temp;
    std::cout << "PROGAMA QUE DIVIDE DOS NUMEROS\n";
    std::cout << "Ingrese el primer numero: "; std::cin>>temp;
    num1.setNum(temp);
    std::cout << "Ingrese el segundo numero: "; std::cin>>temp;
    num2.setNum(temp);
    res.setNum(dividir(num1.getNum(),num2.getNum()));
    num1.imprimir();
    std::cout<<"/ ";
    num2.imprimir();
    std::cout<<"= ";
    res.imprimir();
    return 0;

    
}
