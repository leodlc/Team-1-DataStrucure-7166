#pragma once
#include <iostream>
#include <string>
using namespace std;
template <typename PLANT>
class Parrafo{
private:
	PLANT texto;
public:
	Parrafo(PLANT _texto) {
		texto = _texto;
	}
	int contarPalabras(PLANT _texto) {
		int palabras = 0;
		for (int i = 1; _texto[i] != '\0'; i++) {
			if (_texto[i - 1] == ' ' && isalpha(_texto[i])) {
				++palabras;
			}

		}
		if (isalpha(_texto[0])) {
			palabras++;
		}
		return palabras;
	}



};

