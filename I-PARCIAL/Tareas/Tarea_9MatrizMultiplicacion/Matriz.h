/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Memoria dinamica matrices multiplicacion
*FECHA DE CREACION : 12 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 14 DE NOVIEMBRE DE 2021
* */
#pragma once
template <class T>
class Matriz
{
private:
	T d;
	T** mat;
public:
	Matriz();
	Matriz(T);
	void segmentar( );
	void encerar();
	void ingresar();
	void imprimir();
	void setDimension(T);
	void setMatriz(T** matri);
	T getDimension();
	T** getMatriz();

	Matriz<T> procesar(Matriz<T> );
};

