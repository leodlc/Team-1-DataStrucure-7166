#include "Numero.h"
template<class T>
Numero<T>::Numero() {
}

template<class T>
Numero<T>::Numero(T newNum) {
	this->num = newNum;
}
template<class T>
T Numero<T>::getNum() {
	return this->num;
}
template<class T>
void Numero<T>::setNum(T newNum) {
	this->num = newNum;
}
template<class T>
Numero<T>& Numero<T>::operator >(Numero<T>& A) {
	if (this->num > A.getNum()) {
		return *this;
	}
	else {
		//this->num = A.getNum();
		return A;
	}
}
template<class T>
Numero<T>& Numero<T>::operator <(Numero<T>& A) {
	if (this->num < A.getNum()) {
		return *this;
	}
	else {
		//this->num = A.getNum();
		return A;
	}
}

template<class T>
bool Numero<T>::operator ==(Numero<T>& A) {
	if (this->num == A.getNum()) {
		return true;
	}
	else {
		return false;
	}
}

template class Numero<int>;
template class Numero<float>;
template class Numero<double>;