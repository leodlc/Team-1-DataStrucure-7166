/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: CREACION DE UN PROGRAMA DE NUMEROS COMPLEJOS USANDO METODOS SOBRECARGADOS<>
*FECHA DE CREACION : 05 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 06 DE NOVIEMBRE DE 2021
* */

#pragma once

#include <iostream>

using namespace std;

template <class T>

class Complejo;

template <typename T>
ostream &operator <<(ostream &o, const Complejo<T> &A);

template <class T>
class Complejo {
public:
	Complejo(T real = 0, T img = 0);
	~Complejo();
	void setReal(T real);
	void setImg(T img);
	T getReal();
	T getImg();
	Complejo<T>& operator +(const Complejo<T> &A);
	Complejo<T>& operator -(const Complejo<T>& A);
private:
	T real;
	T img;
};

