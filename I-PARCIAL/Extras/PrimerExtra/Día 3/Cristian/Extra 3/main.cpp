#include <iostream>
#include "Numero.h"
#include "Operacion.h"
#include "NumeroCientifico.h"

int main()
{
    Numero<int> num;
    NumeroCientifico<double> res;
    int temp;
    std::cout << "PROGAMA QUE CLACULA EL FACTORIAL DE UN NUMERO\n";
    std::cout << "Ingrese el numero: ";
    std::cin >> temp;
    num.setNum(temp);
    res = factorial(num.getNum(), res);
    num.imprimir();
    std::cout << "! ";
    std::cout << "= ";
    res.imprimir();
    return 0;
}
