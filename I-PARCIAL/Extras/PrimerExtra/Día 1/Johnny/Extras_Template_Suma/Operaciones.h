#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

template <typename tipoDato>

class Operaciones {
private:
	tipoDato valor1;
	tipoDato valor2;
public:

	Operaciones(tipoDato _valor1, tipoDato _valor2) {

		valor1 = _valor1;
		valor2 = _valor2;
	}

	tipoDato setValor1(int _valor1) {

		valor1 = _valor1;
	}

	tipoDato setValor2(int _valor2) {

		valor2 = _valor2;

	}


	tipoDato getValor1() {

		return valor1;
	}

	tipoDato getValor2() {

		return valor2;
	}

	tipoDato suma();

};

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::suma() {
	return getValor1() + getValor2();
}

