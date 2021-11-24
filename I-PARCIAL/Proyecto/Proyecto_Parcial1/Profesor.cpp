/***********************************************************************
 /** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
 * Modulo:  Profesor.cpp
 * Autores:  *Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
  * Modified: Domingo, 21 de noviembre de 2021
 * Purpose: Division Clases Grupo
 ***********************************************************************/

#include "Profesor.h"
using namespace std;
Profesor::Profesor()
{

}


Profesor::~Profesor()
{

}
Asignatura Profesor::getAsignaturaImpartida(void)
{
   return asignaturaImpartida;
}


void Profesor::setAsignaturaImpartida(Asignatura newAsignaturaImpartida)
{
   asignaturaImpartida = newAsignaturaImpartida;
}


float Profesor::getNotaAsignada(void)
{
   return notaAsignada;
}


void Profesor::setNotaAsignada(float newNotaAsignada)
{
   notaAsignada = newNotaAsignada;
}

Alumno Profesor::getAlumno(void)
{
   return alumno;
}


void Profesor::setAlumno(Alumno newAlumno)
{
   alumno = newAlumno;
}


void Profesor::ingresarNotaP1(void)
{
   
}


void Profesor::ingresarNotaP2(void)
{
  
}


void Profesor::ingresarNotaP3(void)
{
   
}