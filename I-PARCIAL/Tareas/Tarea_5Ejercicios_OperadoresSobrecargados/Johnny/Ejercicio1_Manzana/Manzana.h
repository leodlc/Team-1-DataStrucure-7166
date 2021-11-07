#pragma once
#include <iostream>

using namespace std;
template <class T>
class Manzana;

template <class T>
class Manzana {
public:
	Manzana(T n=0);
	~Manzana();
	
	friend ostream& operator<<(ostream& os, Manzana<T> ms) {
		os << ms.num << " manzanas" << endl;
		return os;
	}
	friend Manzana<T> operator + (Manzana<T> a, Manzana<T> b) {
		return Manzana<T>(a.num + b.num);
	}
	Manzana<T>& operator=(Manzana<T> a) {
		num = a.num;
		return *this;
	}
private:
	T num;

};