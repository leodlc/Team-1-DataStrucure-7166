/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: ListaDobleCricular											       
Fecha: 22/11/2021													   
Fecha de modificacion: 23/11/2021								   
*/
#include <iostream>
#include <cstring>
#include "Lista.h"

using namespace std;

void menu();

int main(int argc, char** argv) {
	int opc, newDato;
	ListaDobleCricular list;
	do{
		system("cls");
		menu();
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Ingresar el dato a insertar: ";
				cin>>newDato;
				list.insertar(newDato);
				break;
			case 2:
				list.mostrar();
				break;
			case 3:
				cout<<"Ingrese el dato que quiere eliminar: ";
				cin>> newDato;
				list.eliminar(newDato);
				break;
			case 4:
				return 0;
				break;
		}
		system("pause");
	}while(opc!=6);
	return 0;
}

void menu(){
    cout<<"\n\t\tLISTA\n\n";
    cout<<" 1. INSERTAR AL INICIO               "<<endl;
    cout<<" 2. MOSTRAR LISTA                    "<<endl;
    cout<<" 3. ELIMINAR LISTA                   "<<endl;
    cout<<" 4. SALIR                            "<<endl;
 
    cout<<"\n INGRESE OPCION: ";
}
