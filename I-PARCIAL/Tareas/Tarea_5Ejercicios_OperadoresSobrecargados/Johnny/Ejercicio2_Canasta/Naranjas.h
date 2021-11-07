#pragma once
#include <iostream>

using namespace std;

template <class T>

class Naranjas;

template <class T>
class Naranjas {
public: 
	Naranjas(T n = 0);
	~Naranjas();

	Naranjas<T>& operator+(Naranjas<T>);

	friend ostream& operator<<(ostream& os, Naranjas<T> ms) {
		os << ms.num << " naranjas" << endl;
		return os;
	}
	
private:
	T num;
};


