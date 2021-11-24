/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Listas Simples Circulares
*FECHA DE CREACION : 23 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 23 DE NOVIEMBRE DE 2021
* */

#include <iostream>
#include "ListaSimpleCircular.h"
using namespace std;

void menu();

int main()
{
	int opc, newDato;
	ListaSimpleCircular list;
	do {
		system("cls");
		menu();
		cin >> opc;
		switch (opc) {
		case 1:
			cout << "Ingresar el dato a insertar: ";
			cin >> newDato;
			list.insertar(newDato);
			break;
		case 2:
			list.mostrar();
			break;
		case 3:
			int pos;
			cout << "Ingrese el elemento: ";
			cin >> newDato;
			cout << "Ingrese la posicion: ";
			cin >> pos;
			list.insertarEn(pos, newDato);
			break;
		case 4:
			cout << "Ingrese la posicion que quiere eliminar: ";
			cin >> pos;
			list.eliminar(pos);
			break;
		case 5:
			return 0;
			break;
		}
		system("pause");
	} while (opc != 6);
    return 0;
}


void menu() {
	cout << "\n\t\tLISTA\n\n";
	cout << " 1. INSERTAR                         " << endl;
	cout << " 2. MOSTRAR LISTA                    " << endl;
	cout << " 3. INSERTAR ENTRE                   " << endl;
	cout << " 4. ELIMINAR ELEMENTO                " << endl;
	cout << " 5. SALIR                            " << endl;

	cout << "\n INGRESE OPCION: ";
}