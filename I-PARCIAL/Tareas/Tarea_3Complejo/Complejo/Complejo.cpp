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

#include "Complejo.h"

#include <iostream>

using namespace std;
template <class T>
Complejo<T>::Complejo(T real, T img) {
	this->real = real;
	this->img = img;
}

template <class T>
Complejo<T>::~Complejo() {

}

template <class T>
void Complejo<T>::setReal(T real) {
	this->real = real;
}
template <class T>
void Complejo<T>::setImg(T img) {
	this->img = img;
}

template <class T>
T Complejo<T>::getReal() {
	return this->real;
}

template <class T>
T Complejo<T>::getImg() {
	return this->img;
}

template <class T>
Complejo<T>& Complejo<T>::operator +(const Complejo<T>& A) {
	this->img += A.img;
	this->real += A.real;
	return *this;
}

template <class T>
Complejo<T>& Complejo<T>::operator -(const Complejo<T>& A) {
	this->img -= A.img;
	this->real -= A.real;
	return *this;
}

template class Complejo<int>;
template class Complejo<float>;
template class Complejo<double>;

