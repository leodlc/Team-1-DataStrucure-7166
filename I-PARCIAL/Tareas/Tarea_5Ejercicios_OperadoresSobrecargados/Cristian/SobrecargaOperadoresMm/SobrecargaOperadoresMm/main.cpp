#include <iostream>
#include "Numero.h"
using namespace std;

int main() {
	Numero<float> num1, num2, res;
	float temp;
	cout << "Ingrese un numero: "; cin >> temp;
	num1.setNum(temp);
	cout << "Ingrese un numero: "; cin >> temp;
	num2.setNum(temp);
	if (num1 == num2) {
		cout << num1.getNum()<< " y " << num2.getNum() << " son iguales" << endl;
	}
	else {
		res = num1 > num2;
		cout << "El mayor es :" << res.getNum() << endl;
		res = num1 < num2;
		cout << "El menor es :" << res.getNum() << endl;
	}
	return 0;
}