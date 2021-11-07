#pragma once

#include <iostream>

using namespace std;
template <class T>

class Punto;

template <typename T>
ostream& operator <<(ostream& o, const Punto<T>& A);
template <class T>
class Punto{
private:
	T puntoX;
	T puntoY;
public:
	Punto(T puntoX=0, T puntoY=0);
	~Punto();
	void setPuntoX(T puntoX);
	void setPuntoY(T puntoY);
	T getPuntoX();
	T getPuntoY();
	Punto<T>& operator -(const Punto<T>& A);
};

