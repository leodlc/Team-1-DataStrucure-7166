/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Manejo de memoria dinamica con matrices
*FECHA DE CREACION : 13 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 14 DE NOVIEMBRE DE 2021
* */
#include "Matriz.h"

template<typename T>
Matriz<T>::Matriz(T _tamanio) {
	this->tamanio = _tamanio;
}
template<typename T>
Matriz<T>::Matriz() {
}
template<typename T>
void Matriz<T>::setTamanio(T _tamanio) {
	this->tamanio = _tamanio;
}
template<typename T>
void Matriz<T>::setMatriz(T** mat) {
	this->matriz = mat;
}
template<typename T>
T Matriz<T>::getTamanio() {
	return tamanio;
}

template<typename T>
T** Matriz<T>::getMatriz() {
	return matriz;
}
template<typename T>
void Matriz<T>::crearMatriz() {
	matriz = (T**)malloc(tamanio * sizeof(T*));
	for (int j = 0; j < tamanio; j++)
		*(matriz + j) = (T*)malloc(tamanio * sizeof(T));
	for (int i = 0; i < tamanio; i++) {
		for (int j = 0; j < tamanio; j++) {
			*(*(matriz + i) + j) = 0;
		}
	}
}
template<typename T>
void Matriz<T>::llenarMatriz() {
	T dato;
	for (int i = 0; i < tamanio; i++)
		for (int j = 0; j < tamanio; j++) {
			cout << "Ingrese el numero de " << i + 1 << " , " << j + 1 << " : ";
			cin >> dato;
			*(*(matriz + i) + j) = dato;
		}

}

template<typename T>
void Matriz<T>::imprimirMatriz() {
	for (int i = 0; i < tamanio; i++) {
		for (int j = 0; j < tamanio; j++)
		{
			cout << *(*(matriz + i) + j);
			printf("%*s", j + 5, "");
		}
		printf("\n");
	}
}

template<typename T>
void Matriz<T>::multiplicarExponenteMatriz(T exponente) {
	T** mT1;
	mT1 = (T**)malloc(tamanio * sizeof(T*));
	for (int j = 0; j < tamanio; j++)
		*(mT1 + j) = (T*)malloc(tamanio * sizeof(T));

	for (int i = 0; i < tamanio; i++)
		for (int j = 0; j < tamanio; j++) {
			*(*(mT1 + i) + j) = *(*(matriz + i) + j);
		}

	for (int k = 1; k < exponente; k++) {
		T** mT3;
		mT3 = (T**)malloc(tamanio * sizeof(T*));
		for (int j = 0; j < tamanio; j++)
			*(mT3 + j) = (T*)malloc(tamanio * sizeof(T));

		for (int i = 0; i < tamanio; i++)
			for (int j = 0; j < tamanio; j++) {
				*(*(mT3 + i) + j) = 0;
			}

		for (int i = 0; i < tamanio; i++) {
			for (int j = 0; j < tamanio; j++) {
				for (int h = 0; h < tamanio; h++) {
					*(*(mT3 + i) + j) = *(*(mT3 + i) + j) + (*(*(mT1 + i) + h)) * (*(*(matriz + h) + j));
				}
			}
		}
		matriz = mT3;
	}
}

template<typename T>
Matriz<T> Matriz<T>::multiplicacionMatrices(Matriz<T> matrizTmp) {
	Matriz<T> mr(tamanio);
	mr.crearMatriz();
	T** res = mr.getMatriz();
	T** mtemp = matrizTmp.getMatriz();
	for (int i = 0; i < tamanio; i++) {
		for (int j = 0; j < tamanio; j++) {
			for (int h = 0; h < tamanio; h++) {
				*(*(res + i) + j) = *(*(res + i) + j) + (*(*(matriz + i) + h)) * (*(*(mtemp + h) + j));
			}
		}
	}
	return mr;
}
template class Matriz<int>;
template class Matriz<float>;
template class Matriz<double>;
