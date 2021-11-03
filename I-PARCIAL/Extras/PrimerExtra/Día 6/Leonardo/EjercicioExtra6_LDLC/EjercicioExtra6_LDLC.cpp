/******************  Universidad de las Fuerzas Armadas ESPE  ************************
 *				Carrera: Ingenieria deSoftware										 *
 *				Autor: Leonardo De La Cadena												 *
 *				Fecha de creación: 03/11/2021										 *
 *				Fecha de modificación: 03/11/2021
 * Ejercicio que calcula la calificacion final de un estudiante es la media ponderada entre las tres notas:
 * La nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un 60%  y la nota de participacion
 * que cuenta el 10% restante. Escriba un programa que lea la entrada estandar, las tres notas del alumno y escriba en
 * la salida estandar su nota final
 *************************************************************************************/

#include <iostream>
#include "NotaAlumno.h"
using namespace std;

int main()
{
    double practica, teorica, participacion, notaFinal=0;
    cout << "Dige la nota practica: " << endl;
    cin >> practica;
    cout << "Dige la nota teorica: " << endl;
    cin >> teorica;
    cout << "Dige la nota de participacion: " << endl;
    cin >> participacion;

    NotaAlumno<double> nota(practica,teorica,participacion,notaFinal);
    nota.notaPractica(practica);
    nota.notaTeorica(teorica);
    nota.notaParticipacion(participacion);
    nota.calcNotaFinal(notaFinal);

}

