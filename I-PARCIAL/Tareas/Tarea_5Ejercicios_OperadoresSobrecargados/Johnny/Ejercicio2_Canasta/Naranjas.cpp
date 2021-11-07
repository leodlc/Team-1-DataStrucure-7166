#include "Naranjas.h"
#include <iostream>

using namespace std;

template <class T>
Naranjas<T>::Naranjas(T n) {
	this->num = n;
}

template <class T>
Naranjas<T>::~Naranjas() {

}

template <class T>
Naranjas<T>& Naranjas<T>::operator+(Naranjas<T> a) {
	num += a.num;
	return *this;
}


template class Naranjas<float>;
