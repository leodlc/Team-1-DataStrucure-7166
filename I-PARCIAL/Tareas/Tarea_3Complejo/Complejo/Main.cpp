/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: CREACION DE UN PROGRAMA DE NUMEROS COMPLEJOS USANDO METODOS SOBRECARGADOS<>
*FECHA DE CREACION : 05 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 06 DE NOVIEMBRE DE 2021
* */

#include <iostream>
#include "Complejo.h"

using namespace std;

int main() {

	Complejo<int> A(1, 3), B(2.4);
	Complejo<int> C;
	int x, y;

	cout << "Suma de complejos "<<endl;
	C = A + B;
	cout << C.getReal() << " + " << C.getImg() <<" i "<< endl;
	C.setImg(0);
	C.setReal(0);
	cout << "Resta de complejos " << endl;
	C = A - B;
	cout << C.getReal() << " - " << C.getImg() << " i " << endl;
	cin.ignore();
	system("pause");

	return 0;
}