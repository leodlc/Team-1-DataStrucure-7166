/* UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: CREACION DE UN PROGRAMA DE SUMA DE FRACCIONES<>
*FECHA DE CREACION : 27 DE OCTUBRE DEL 2021
*FECHA DE MODIFICACION: 28 DE OCTUBRE 2021
*/
#include <iostream>
#include "Fraccion.h"
#include "Operacion.h"

int main(int, char**) {
    Fraccion frac1,frac2,*fracResultado = new Fraccion();
    float x;

    std::cout << "Ingrese el numerador de la primera fraccion: "; std::cin >> x;
    frac1.setNum(x);
    std::cout << "Ingrese el denominador de la primera fraccion: "; std::cin >> x;
    frac1.setDen(x);
    std::cout << "Ingrese el numerador de la segunda fraccion: "; std::cin >> x;
    frac2.setNum(x);
    std::cout << "Ingrese el denominador de la segunda fraccion: "; std::cin >> x;
    frac2.setDen(x);
    std::cout << "El reultado es -> ";
    
    frac1.imprimir();
    std::cout <<" + ";
    frac2.imprimir();
    std::cout <<" = ";
    Operacion operacion;
    operacion.sumaFracciones(frac1, frac2, fracResultado);
    fracResultado->imprimir();

    return 0;
}
