/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autores: Alvaro Zumba												 *
 *				Fecha de creación: 29/10/2021										 *
 *				Fecha de modificación: 29/10/2021									 *
 *************************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

template <typename c>
class Cono
{
	private:
        c radio;
        c altura;
    public:
        Cono(c _radio, c _altura){
			radio= _radio;
			altura=_altura;
		}
		c setRadio(double _radio){
			radio=_radio;
		}
		c getRadio(){
			return radio;
		}
		c setAltura(double _altura){
			altura=_altura;
		}
		c getAltura(){
			return altura;
		}
        c Volumen();
};
template<typename c>
c Cono<c>::Volumen(){
	return (3.1416*getRadio()*pow(getRadio(), 2)*getAltura())/3;
}
