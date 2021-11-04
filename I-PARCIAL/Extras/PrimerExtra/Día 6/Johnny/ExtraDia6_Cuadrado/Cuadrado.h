
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
class Cuadrado
{
private:

	T lado;
public:


	void pedirDatos();
	void calcularArea();
	void calcularPerimetro();

};


template <typename T>
void Cuadrado<T>::pedirDatos() {

	cout << "Ingrese el valor de un lado del cuadrado: ";
	cin >> lado;


}

template <typename T>
void Cuadrado<T>::calcularArea()
{
	cout << "El area del cuadrado es: " << lado * lado << endl;
}

template <typename T>
void Cuadrado<T>::calcularPerimetro()
{
	cout << "El perimetro del cuadrado es: " << (lado + lado)*2 << endl;
}
