/*
* ******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 
 *				Autor: Leonardo De La Cadena												 
 *				Fecha de creación: 02/11/2021										 
 *				Fecha de modificación: 02/11/2021	
 * Ejercicio: Indicar el numero de personas y numero de pizzas, retornar el numero de trozos
 * por persona y cuantos sobra, tomar en cuenta que las pizzas se parten en 8 partes
 *************************************************************************************
*/

#include <iostream>
#include <stdlib.h>
#include "Encargo.h"
using namespace std;

int main()
{
    int nPersonas, nPizzas, nTrozos=0, nTrozosSobrantes=0, nTrozosPorPersona=0;
    cout << "Bienvenidos a Soft Pizza, Cuantas personas son?" << endl;
    cin >> nPersonas;
    cout << "Cuantas pizzas desean?" << endl;
    cin >> nPizzas;
    Encargo<int> encargo(nPersonas , nPizzas, nTrozos, nTrozosSobrantes, nTrozosPorPersona);
    nTrozos=encargo.calcularNtrozos(nPizzas);
    nTrozosPorPersona = nTrozos / nPersonas;
    nTrozosSobrantes = nTrozos - nTrozosPorPersona * nPersonas;
    cout << "Perfecto tocaran a " << nTrozosPorPersona <<" trozos por persona"<< endl;
    cout << "Ademas, sobraran " << nTrozosSobrantes << " trozos"<<endl;


    

    
}
