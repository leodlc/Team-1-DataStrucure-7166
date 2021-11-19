/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: Conteo de pasos en la resolucion de Torres de Hanoi
*FECHA DE CREACION : 18 DE NOVIEMBRE DEL 2021
*FECHA DE MODIFICACION: 18 DE NOVIEMBRE DE 2021
* */
#include <iostream>
using namespace std;


void hanoiMov(int num, char a, char c, char b, int *pasosPunero) {
	if (num == 1) {
		cout << "Mover del bloque " << num << " Desde " << a << " Hata " << c << endl;
		*pasosPunero += 1;
	}
	else {
		hanoiMov(num - 1, a, b, c, pasosPunero);
		cout << "Mover del bloque " << num << " Desde " << a << " Hata " << c << endl;
		*pasosPunero += 1;
		hanoiMov(num - 1, b, c, a, pasosPunero);
	}
}

int main(int argc, char** argv) {
	int num,pasos = 0;
	cout << "\nBloques A, B, C\n";
	cout << "\nIngrese el numero de discos: ";
	cin >> num;
	hanoiMov(num, 'A', 'B', 'C',&pasos);
	cout << "El numero de pasos es: " << pasos;
	return 0;
}