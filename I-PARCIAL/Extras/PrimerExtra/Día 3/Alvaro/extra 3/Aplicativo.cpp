/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autores: Alvaro Zumba												 *
 *				Fecha de creaci�n: 31/10/2021										 *
 *				Fecha de modificaci�n: 31/10/2021									 *
 *************************************************************************************/
#include<iostream>
#include "Matriz.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    mat<int> p;
    int op;
    do {
        cout << "\n1.suma\n2.resta\n3.salir \ningrese una opci�n :";
        cin >> op;
        switch (op)
        {

        case 1:
            p.ingreso1();
            p.ingreso2();
            p.suma();
            break;
        case 2:
            p.ingreso1();
            p.ingreso2();
            p.resta();
            break;
        case 3: break;
        }
    } while (op != 3);
    return 0;
}
