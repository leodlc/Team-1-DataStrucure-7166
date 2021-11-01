/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autor: Leonardo De La Cadena												 *
 *				Fecha de creación: 01/11/2021										 *
 *				Fecha de modificación: 01/11/2021	
 * Ejercicio que realiza el conteo de palabras de un parrafo ingresado
 *************************************************************************************/


#include <iostream>
#include <string>
#include "Parrafo.h"
using namespace std;

int main()
{
    string texto;
    cout << "Ingrese una cadena de texto " << endl;
    getline(cin, texto);
    Parrafo<string> parrafo(texto);
    cout << "El numero de palabras del texto ingresado es: " << parrafo.contarPalabras(texto) << endl;

    
}

