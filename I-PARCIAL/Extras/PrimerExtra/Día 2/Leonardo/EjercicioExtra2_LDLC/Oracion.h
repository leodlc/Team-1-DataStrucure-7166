#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
template <typename tipoDato>
class Oracion{
private:
	
	tipoDato cadena1;
	tipoDato cadena2;
public:
	Oracion(tipoDato _cadena1, tipoDato _cadena2) {
		cadena1 = _cadena1;
		cadena2 = _cadena2;
	}
	tipoDato setCadena1(string _cadena1) {

		cadena1 = _cadena1;
	}

	tipoDato setCadena2(string _cadena2) {

		cadena2 = _cadena2;

	}
	tipoDato getCadena1() {

		return cadena1;
	}

	tipoDato getCadena2() {

		return cadena2;
	}
	tipoDato concatenar();

};
template <typename tipoDato>
tipoDato Oracion<tipoDato>::concatenar() {
	return getCadena1() + " " + getCadena2();
}

