#include "Conjunto.h"
#include <iostream>

using namespace std;
template <class T>
Conjunto<T>::Conjunto(T elemento[4]) {
	this->elemento[4] = elemento[4];
	
}
template <class T>
Conjunto<T>::~Conjunto() {

}

template <class T>
void Conjunto<T>::setElementos(T elemento[4]) {
	this->elemento[4] = elemento[4];
}


template <class T>
T Conjunto<T>::getElementos() {
	return this->elemento[4];
}




template <class T>
Conjunto<T>& Conjunto<T>::operator ==(const Conjunto<T>& A) {
	this-> elemento[4] == A.elemento[4];
	
	return *this;
}
template class Conjunto<int>;
template class Conjunto<float>;
template class Conjunto<double>;

