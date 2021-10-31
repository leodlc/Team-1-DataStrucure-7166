/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autores: Johnny Loachamin												 *
 *				Fecha de creación: 30/10/2021										 *
 *				Fecha de modificación: 31/10/2021									 *
 *************************************************************************************/
#include "Menu.h"
#include "Vector.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

void opciones()
{

	Vector <int> V(5); // Definiendo la variable vector de tipo entero
	int ele;
	int opc;

	do{

		fflush(stdin);
		system("cls");
		cout << "MENU DE OPCIONES" << endl;	
	cout << "1. Agregar elemento" << endl;
	cout << "2. Espacio del vector" << endl;
	cout << "3. Ver Vector" << endl;
	cout << "4. Salir " << endl;
	cout << "Seleccione :";
	cin >> opc;
	fflush(stdin);
		switch (opc)
		{
		case 1:
			system("cls");
			cout << "Digitar elemento a agregar:";
			cin >> ele;
			V.agregar(ele);
			system("pause");
			break;
		case 2:
			system("cls");
			if (V.estallena())
				cout << "El vector esta lleno..." << endl;
			else
				cout << "El Vector no esta lleno..." << endl;
			system("pause");
			break;

		case 3:
			system("cls");
			V.vervector();
			system("pause");
			break;
		}
		system("cls");
	} while (opc != 4);

}

