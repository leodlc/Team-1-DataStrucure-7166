/* Vector.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí.
Ejercicio 1: En este ejericio se esta sobrecargando el operador igual, 
friend: nos permite tener acceso a los atributos de la clase
es más conveniente otorgar acceso a nivel de miembro 
a la funcion que no son miembros de una clase oa todos los miembros de una clase separada.
*/

#include <iostream>
#include "Manzana.h"

using namespace std;

int main()
{
	Manzana<int> a(3), b(4), c(5), d, e;  //d y e no le asignamos ningun valor por ende usa por defecto 0 asignado a la vaiable num.

	e = d = a + b + c;
	e = d + a + b;

	cout << "La suma es: " << endl;
	cout <<"\t"<< e << endl;
	cout <<"\t"<< d << endl;
	
	return 0;
}

