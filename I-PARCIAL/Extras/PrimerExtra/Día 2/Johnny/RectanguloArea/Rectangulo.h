#pragma once

template<typename T>
class Rectangulo {
private:  //Atributos
	T largo;
	T ancho;
public:	//Metodos
	Rectangulo(T _largo, T _ancho); //Constructor
	~Rectangulo();
	T setLargo(int _largo);
	T setAncho(int _ancho);
	T getAncho();
	T getLargo();

	T calcularArea();

};

template<typename T>

Rectangulo<T>::Rectangulo(T _largo, T _ancho) {

	largo = _largo;
	ancho = _ancho;
}

template<typename T>
Rectangulo<T>::~Rectangulo() {

}

template<typename T>
T Rectangulo<T>::getLargo() {

	return largo;
}

template<typename T>
T Rectangulo<T>::getAncho() {

	return ancho;
}
template<typename T>
T Rectangulo<T>::setLargo(int _largo) {

	return largo;
}

template<typename T>
T Rectangulo<T>::setAncho(int _largo) {

	return ancho;
}

template<typename T>
T Rectangulo<T>::calcularArea()
{
	return getLargo() * getAncho();
}



