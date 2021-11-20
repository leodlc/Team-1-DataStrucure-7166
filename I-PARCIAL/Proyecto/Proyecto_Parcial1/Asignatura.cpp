/***********************************************************************
 /** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
 * Module:  Asignatura.cpp
 * Author:  *Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
 * Modified: jueves, 18 de noviembre de 2021 20:01:28
 * Purpose: Implementation of the class Asignatura
 ***********************************************************************/
#include "Alumno.h"
#include "Profesor.h"
#include "Asignatura.h"
using namespace std;

Asignatura::Asignatura()
{
	alumno = NULL;
	profesor = NULL;
}



Asignatura::~Asignatura()
{

}
string Asignatura::getNombreAsignatura(void)
{
   return nombreAsignatura;
}



void Asignatura::setNombreAsignatura(std::string newNombreAsignatura)
{
   nombreAsignatura = newNombreAsignatura;
}



string Asignatura::getProfesorAsignado(void)
{
   return profesorAsignado;
}



void Asignatura::setProfesorAsignado(std::string newProfesorAsignado)
{
   profesorAsignado = newProfesorAsignado;
}



string Asignatura::getNRC(void)
{
   return NRC;
}


void Asignatura::setNRC(std::string newNRC)
{
   NRC = newNRC;
}

float Asignatura::calcularNotaFinal(void)
{
	return 0;
}



bool Asignatura::aprobacion(void)
{
	return true;
}