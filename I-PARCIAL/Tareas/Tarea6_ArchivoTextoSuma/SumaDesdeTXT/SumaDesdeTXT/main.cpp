/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: CREACION DE ARCHIVO .TXT, ESCRITURA Y LECTURA DE NUMEROS 
*FECHA DE CREACION : 08 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 09 DE NOVIEMBRE DE 2021
* */

#include <iostream>
#include <fstream>
#include <string>
#include "Archivo.h"
using namespace std;



int main() {
	string nombre;
	cout << "\n Ingrese el nombre del archivo: "; getline(cin, nombre);
	ofstream num = crear(nombre);
	float temp,sum=0.0f;
	string respuesta;
	do {
	cout << "\n Ingrese un numero: "; cin >> temp;
	num << temp << endl;
	cin.ignore();
	cout << "\n Desea ingresar otro numero Y/N:"; getline(cin, respuesta) ; 
	} while (respuesta == "Y"||respuesta == "y");
	
	ifstream nums = leer(nombre);
	if (!nums.is_open()) {
		cerr << "Could not open the file - '"
			<< "Numeros.txt" << "'" << endl;
		return EXIT_FAILURE;
	}


	while (nums >> temp) {
		sum += temp;
		cout << temp << "+ ";
	}
	cout << "= " << sum << endl;
	num.close();	

	return 0;
}