#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Matriz.h"

int main() {

	int tamanio, exp;
	cout << "ingrese el tamanio de las matrices : ";
	cin >> tamanio;
	cout << "ingrese el exponente : ";
	cin >> exp;
	
	Matriz<int> matriz1(tamanio);
	Matriz<int> matriz2(tamanio);
	Matriz<int> matrizRes(tamanio);
	cout << "Primera Matriz: \n";
	matriz1.crearMatriz();
	matriz1.llenarMatriz();
	matriz1.imprimirMatriz();
	cout << "Primera Matriz elevada a la potencia " << exp << ": \n";
	matriz1.multiplicarExponenteMatriz(exp);
	matriz1.imprimirMatriz();
	cout << "\nSegunda Matriz: \n";
	matriz2.crearMatriz();
	matriz2.llenarMatriz();
	matriz2.imprimirMatriz();
	cout << "Primera Matriz elevada a la potencia " << exp << ": \n";
	matriz2.multiplicarExponenteMatriz(exp);
	matriz2.imprimirMatriz();
	cout << "\nLa multiplicacion de las matrices es: \n";
	matrizRes = matriz1.multiplicacionMatrices(matriz2);
	matrizRes.imprimirMatriz();


	return 0;
}