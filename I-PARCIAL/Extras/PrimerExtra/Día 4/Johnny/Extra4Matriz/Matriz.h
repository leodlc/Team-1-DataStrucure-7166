/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria de Software										 *
 *				Autores: Johnny Loachamin											 *
 *				Fecha de creación: 01/11/2021										 *
 *				Fecha de modificación: 01/11/2021									 *
 *************************************************************************************/
#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;


template <typename T>
class Matriz
{
protected:
	
	T matriz[100][100];
	T filas=0;	//Numero de filas de la matriz
	T columnas=0; //Numero de columnas de la matriz

public:

	// Define el tamaño y agrega un nuevos elementos
	void pedirDatos();
	void calcularSimetria();
	void verMatriz();
};


template <typename T>
void Matriz<T>::pedirDatos() {

	do {
		
		system("cls");

		if (filas != columnas) {
			cout << "El numero de filas no coincide con el de columnas digite nuevamente" << endl;
		}
		cout << "Ingrese el numero de filas de la matriz: ";
		cin >> filas;
		cout << "Ingrese el numero de columnas de la matriz: ";
		cin >> columnas;

		
	} while (filas != columnas);

	system("cls");
	cout << "Ingrese el los elementos de la matriz" << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "Ingrese el valor [" << i << "][" << j << "] :";
			cin >> matriz[i][j];
		}
		cout << "\n";
	}
}

template <typename T>
void Matriz<T>::calcularSimetria()
{
	int cont = 0, multiplicacion = 0;
	if (filas == columnas) {
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++) {
				if (matriz[i][j] == matriz[j][i]) {
					cont++;
				}
			}
		}
	}
	multiplicacion = filas * columnas;
	if (multiplicacion == cont) {
		cout << "La matriz es simetrica\n";
	}
	else {
		cout << "La matriz No es simetrica\n";
	}
}


template<typename T>
void Matriz<T>::verMatriz() {
	cout << "\nLa matriz original es: " << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << matriz[i][j] << " ";

		}
		cout << "\n";
	}
}