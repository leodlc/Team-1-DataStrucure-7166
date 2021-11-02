/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria de Software										 *
 *				Autores: Johnny Loachamin											 *
 *				Fecha de creación: 01/11/2021										 *
 *				Fecha de modificación: 01/11/2021									 *
 *************************************************************************************/
#include "menu.h"
#include "Matriz.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

void opciones()
{
	Matriz<int> p;

	int ele;
	int opc;

	do {

		fflush(stdin);
		system("cls");
		cout << "MENU DE OPCIONES" << endl;
		cout << "1. Agregar elemento a la matriz" << endl;
		cout << "2. Pasar a transpuesta" << endl;
		cout << "3. Ver Matriz orginal y transpuesta" << endl;
		cout << "4. Salir " << endl;
		cout << "Seleccione :";
		cin >> opc;
		fflush(stdin);
		switch (opc)
		{
		case 1:
			system("cls");
			p.pedirDatos();
			system("pause");
			break;
		case 2:
			system("cls");
			p.convertirTranspuesta();
			system("pause");
			break;

		case 3:
			fflush(stdin);
			system("cls");
			p.verMatriz();
			system("pause");
			break;
		}
		system("cls");
	} while (opc != 4);

}