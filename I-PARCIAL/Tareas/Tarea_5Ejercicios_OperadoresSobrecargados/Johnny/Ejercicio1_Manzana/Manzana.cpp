#include "Manzana.h"
#include <iostream>

using namespace std;

template <class T>
Manzana<T>::Manzana(T n) {
	this->num = n;
}

template <class T>
Manzana<T>::~Manzana() {

}
template class Manzana<int>;
