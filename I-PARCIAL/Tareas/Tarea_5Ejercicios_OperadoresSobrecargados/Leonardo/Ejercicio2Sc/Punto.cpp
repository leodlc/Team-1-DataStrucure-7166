#include "Punto.h"
#include <iostream>

using namespace std;
template <class T>
Punto<T>::Punto(T puntoX, T puntoY) {
	this->puntoX = puntoX;
	this->puntoY = puntoY;
}
template <class T>
Punto<T>::~Punto() {

}
template <class T>
void Punto<T>::setPuntoX(T puntoX) {
	this->puntoX = puntoX;
}
template <class T>
void Punto<T>::setPuntoY(T puntoY) {
	this->puntoY = puntoY;
}

template <class T>
T Punto<T>::getPuntoX() {
	return this->puntoX;
}

template <class T>
T Punto<T>::getPuntoY() {
	return this->puntoY;
}

template <class T>
Punto<T>& Punto<T>::operator -(const Punto<T>& A) {
	this->puntoX -= A.puntoX;
	this->puntoY -= A.puntoY;
	return *this;
}
template class Punto<int>;
template class Punto<float>;
template class Punto<double>;