#include <iostream>
#include "Naranjas.h"

using namespace std;

int main() {

	Naranjas<float> a(3.1f), b(4.4f), c(5.3f), total;  

	a + b + c;

	cout << "La suma es: " <<a<< endl;

	return 0;
}