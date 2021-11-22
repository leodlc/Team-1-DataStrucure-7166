#include <iostream>
#include "ListaSimple.h"
using namespace std;

/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Lista Simple
*FECHA DE CREACION : 20 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 21 DE NOVIEMBRE DE 2021
* */

int main()
{
    ListaSimple lst;
    int num=0,cont=0;
    cout << "Cuantos elementos desea insertar: ";
    cin >> cont;
    do {
        cout << "Ingrese el numero: ";
        cin >> num;
        lst.insertar(num);
        cont--;
    } while (cont != 0);

    lst.mostrar();
    cout << "La sumas do, le eslementos es: " << lst.proceso();

    cout << "\nEscriba el indice de elemento que desea borrar: ";
    cin >> cont;

    lst.eliminar(cont);
    lst.mostrar();
    cout << "La sumas do, le eslementos es: " << lst.proceso();
    std::cout<<"\n";
    return 0;
}
