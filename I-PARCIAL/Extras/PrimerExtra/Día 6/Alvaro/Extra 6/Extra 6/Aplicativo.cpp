
#include <iostream>
#include "Area.h"

using namespace std;

int main() {
	float x, y;
	cout << "Ingrese el valor de la base del triangulo: " << endl;
	cin >> x;
	cout << "Ingrese el valor de la altura del triangulo: " << endl;
	cin >> y;
	Area <float> a(x, y);
	cout << "el area del tirnagulo es:  " << a.areaTriangulo() << endl;
}