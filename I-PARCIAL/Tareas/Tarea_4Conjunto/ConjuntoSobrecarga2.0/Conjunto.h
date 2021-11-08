#pragma once
#include <iostream>
using namespace std;



template <class T>
class Conjunto
{
private:
	T elemento[4];
	
public:
	Conjunto(T elemento[4]);
	Conjunto();
	~Conjunto();
	void setElementos(T elemento[4]);
	Conjunto getElementos();
	T getUnicoElemento(int);
	void setUnicoElemento(T,int);
	Conjunto<T>& operator ==(Conjunto<T>& A);
	Conjunto<T>& operator !=(Conjunto<T>& A);
};


