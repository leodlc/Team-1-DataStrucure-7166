#include <iostream>
#include <cstring>
#include "Lista.h"

using namespace std;

/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Lista Doble
*FECHA DE CREACION : 22 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 22 DE NOVIEMBRE DE 2021
* */

void menu();

int main(int argc, char** argv) {
	int opc, newDato;
	Lista list;
	do{
		system("cls");
		menu();
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Ingresar el dato a insertar: ";
				cin>>newDato;
				list.insertarInicio(newDato);
				break;
			case 2:
				cout<<"Ingresar el dato a insertar: ";
				cin>>newDato;
				list.insertarFinal(newDato);
				break;
			case 3:
				list.imprimir();
				break;
			case 4:
				int pos;
				cout<<"Ingrese el elemento: ";
				cin>>newDato;
				cout<<"Ingrese la posicion: ";
				cin>>pos;
				list.insertarEntre(newDato,pos);
				break;
			case 5:
				cout<<"Ingrese la posicion que quiere eliminar: ";
				cin>>pos;
				list.eliminar(pos);
				break;
			case 6:
				
				break;
		}
		system("pause");
	}while(opc!=6);

	return 0;
}

void menu(){
    cout<<"\n\t\tLISTA\n\n";
    cout<<" 1. INSERTAR AL INICIO               "<<endl;
    cout<<" 2. INSERTAR AL FINAL                "<<endl;
    cout<<" 3. MOSTRAR LISTA                    "<<endl;
    cout<<" 4. INSERTAR ENTRE                   "<<endl;
    cout<<" 5. ELIMINAR ELEMENTO                "<<endl;
    cout<<" 6. SALIR                            "<<endl;
 
    cout<<"\n INGRESE OPCION: ";
}
