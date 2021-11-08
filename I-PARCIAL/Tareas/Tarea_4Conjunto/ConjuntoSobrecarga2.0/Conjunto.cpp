#include "Conjunto.h"
#include <iostream>

using namespace std;

template <class T>
Conjunto<T>::Conjunto(T elemento[4]) {
	this->elemento[0] = elemento[0];
	this->elemento[1] = elemento[1];
	this->elemento[2] = elemento[2];
	this->elemento[3] = elemento[3];
	
}

template <class T>
Conjunto<T>::Conjunto() {
	this->elemento[0] = 0;
	this->elemento[1] = 0;
	this->elemento[2] = 0;
	this->elemento[3] = 0;

}

template <class T>
Conjunto<T>::~Conjunto() {

}

template <class T>
void Conjunto<T>::setElementos(T elemento[4]) {
	this->elemento[0] = elemento[0];
	this->elemento[1] = elemento[1];
	this->elemento[2] = elemento[2];
	this->elemento[3] = elemento[3];
}


template <class T >
Conjunto<T> Conjunto<T>::getElementos() {
	return this->elemento;
}

template <class T >
T Conjunto<T>::getUnicoElemento(int x) {
	return this->elemento[x];
}

template <class T >
void Conjunto<T>::setUnicoElemento(T num,int x) {
	this->elemento[x] = num;
}


template <class T>
Conjunto<T>& Conjunto<T>::operator ==(Conjunto<T>& A) {
	int cont = 0;
	for (int x = 0; x < 4; x++) {
		for (int y = 0; y < 4; y++) {
			if (this->elemento[x] == A.getUnicoElemento(y)) {
				cout << A.getUnicoElemento(y) << " , ";
				this->elemento[x] = A.getUnicoElemento(y);
				y = 4;
				cont++;
			}

		}
	}
	cout << "\n";
	if (cont == 0) {
		cout << "No hay interseccion.\n";
	}
	return *this;

}

template <class T>
Conjunto<T>& Conjunto<T>::operator !=(Conjunto<T>& A) {
	Conjunto<T> interseccion;
	for (int x = 0; x < 4; x++) {
		cout << A.getUnicoElemento(x) << ", ";
	}
	for (int i = 0; i < 4; i++) {
		cout << this->elemento[i] << ", ";
	}
	cout << "\n";
	return *this;
}
template class Conjunto<int>;
template class Conjunto<float>;
template class Conjunto<double>;

