#pragma once
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
template<typename T>
class Matriz {
private:
	T tamanio;
	T** matriz;
public:
	Matriz();
	Matriz(T);
	void setTamanio(T);
	void setMatriz(T**);
	T getTamanio();
	T** getMatriz();
	void crearMatriz();
	void llenarMatriz();
	void imprimirMatriz();
	void multiplicarExponenteMatriz(T);
	Matriz<T> multiplicacionMatrices(Matriz<T> matrizTmp);
};
