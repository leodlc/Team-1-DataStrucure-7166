#pragma once
#include<cmath>
using namespace std;

template <typename t>
class Area
{
private:
	t x;
	t y;
public:
	Area(t _x, t _y) {
		x = _x;
		y = _y;
	}
	t setX(double _x) {
		x = _x;
	}
	t getX() {
		return x;
	}
	t setY(double _y) {
		y = _y;
	}
	t getY() {
		return y;
	}
	t areaTriangulo();
};
template<typename t>
t Area<t>::areaTriangulo() {
	return ((x * y)) / 2;
}
