/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autores: Alvaro Zumba												 *
 *				Fecha de creación: 29/10/2021										 *
 *				Fecha de modificación: 29/10/2021									 *
 *************************************************************************************/

#include <iostream>
#include "Cono.h"

using namespace std;

int main(){
	double radio, altura;
	cout << "Ingrese el valor del radio del cono: "<<endl;
	cin >> radio;
	cout << "Ingrese el valor de la altura del cono: "<<endl;
	cin >> altura;
	Cono <double> cono(radio, altura);
	cout << "el volumen del cono es:  " << cono.Volumen()<<endl;
}
