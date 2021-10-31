/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autores: Johnny Loachamin												 *
 *				Fecha de creaci�n: 30/10/2021										 *
 *				Fecha de modificaci�n: 31/10/2021									 *
 *************************************************************************************/
#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Vector
{
private:
	T* Pvec; // Variable tipo T como puntero
	int indi; // Controla el �ndice del vector
	int elemen; // Numero de elementos del vector

public:
	// constructor inicializa el vector cuando se crea
	Vector(int n);

	// Destructor libera memoria
	~Vector();

	// Sobrecarga de operador []
	T& operator [] (int i)
	{
		return Pvec[i];
	}
	// Agrega un nuevo elemento
	void agregar(T i);

	// Funci�n estallena, verifica si el vector tiene elementos
	bool estallena();

	// Funci�n vervector elementos que posee
	void vervector();
};


// constructor inicializa el vector cuando se crea
template <typename T>
Vector<T>::Vector(int n)
{
	Pvec = new T[n]; // Reserva un espacio de memoria
	indi = 0; // Es el �ndice del vector
	elemen = n; // Numero de elementos que posee
};
// Destructor libera memoria
template <typename T>
Vector<T>::~Vector()
{
	delete[] Pvec;
}

// Agrega un nuevo elemento
template <typename T>
void Vector<T>::agregar(T i)
{
	Pvec[indi++] = i;
}

// Funci�n estallena, verifica si el vector tiene elementos
template <typename T>
bool Vector<T>::estallena()
{
	return (indi >= elemen);
}

// Funci�n vervector elementos que posee
template <typename T>
void Vector<T>::vervector()
{
	cout << "Elementos del vector..." << endl;
	for (int i = 0; i < indi; i++)
		cout << "--> " << Pvec[i] << endl;
}
