/*
*   Se le da una funci�n main () que toma un conjunto de entradas. El tipo de entrada gobierna el tipo 
    de operaci�n a realizar, es decir, la concatenaci�n de cadenas y la suma de int o float .
    Debe escribir la plantilla de clase AddElements que tiene una funci�n add () para dar la 
    suma de los elementos int o float . Tambi�n necesita escribir una especializaci�n de plantilla 
    para el tipo de cadena con una funci�n concatenar () para concatenar la segunda cadena a la primera 
    cadena.
    Autor: Leonardo De La Cadena
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include "AddElementos.h"
#include "Oracion.h"

using namespace std;

int main()
{
    
    float numero1;
    float numero2;
    string cadena1, cadena2;
    
    
    cout << "Escriba dos frases: " << endl;
    
    getline(cin, cadena1);
    fflush(stdin);
    cout << "Escriba la ultima frase" << endl;
    getline(cin, cadena2);
    fflush(stdin);
    cout << " Escriba dos numeros: " << endl;

    cin >> numero1;

    cin >> numero2;

    fflush(stdin);
    
    AddElementos<float> add(numero1,numero2);
    Oracion<string> concatenar(cadena1, cadena2);
    cout << "Suma de los numeros ingresados: " << add.addNumeros() << endl;
    cout << "Oracion Ingresada: " << concatenar.concatenar() << endl;

    

}


