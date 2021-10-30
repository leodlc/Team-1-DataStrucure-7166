/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autores: Alvaro Zumba												 *
 *				Fecha de creación: 29/10/2021										 *
 *				Fecha de modificación: 29/10/2021									 *
 *************************************************************************************/
#include <iostream>
using namespace std;

template <typename t>
class Producto{	
	private:
		t num1;
		t num2;
	public:
		Producto(t _num1, t _num2) {
			num1 = _num1;
			num2 = _num2;
		}
		t setNum1(float _num1) {
			num1 = _num1;
		}
		t setNum2(float _num2) {
			num2 = _num2;
		}
		t getNum1() {
			return num1;
		}
		t getNum2() {
			return num2;
		}
		t multiplicacion();
		t division();
};

template <typename t>
t Producto<t>::multiplicacion() {
	return getNum1() * getNum2();
}
template <typename t>
t Producto<t>::division() {
	if (getNum2() == 0) {
		cout << "No existe la división para 0" << endl;
	}
	else
		return getNum1() / getNum2();
}
