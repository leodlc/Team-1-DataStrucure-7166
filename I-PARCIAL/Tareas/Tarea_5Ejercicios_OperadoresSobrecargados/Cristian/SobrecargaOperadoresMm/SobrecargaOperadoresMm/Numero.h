#pragma once
#include <iostream>
using namespace std;

template<class T>
class Numero {
private:
	T num;
public:
	Numero();
	Numero(T newNum);
	T getNum();
	void setNum(T newNum);
	Numero<T>& operator >(Numero<T>& A);
	Numero<T>& operator <(Numero<T>& A);
	bool operator ==(Numero<T>& A);
};

