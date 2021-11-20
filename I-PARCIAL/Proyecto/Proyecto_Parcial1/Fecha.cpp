/***********************************************************************
 /** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
 * Module:  Fecha.cpp
 * Author:  *Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
 * Modified: jueves, 18 de noviembre de 2021 19:23:37
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/

#include "Persona.h"
#include "Fecha.h"
using namespace std;

Fecha::Fecha()
{
	persona = NULL;
}



Fecha::~Fecha()
{

}

std::string Fecha::getDia(void)
{
   return dia;
}



void Fecha::setDia(std::string newDia)
{
   dia = newDia;
}



std::string Fecha::getMes(void)
{
   return mes;
}



void Fecha::setMes(std::string newMes)
{
   mes = newMes;
}



std::string Fecha::getAno(void)
{
   return ano;
}



void Fecha::setAno(std::string newAno)
{
   ano = newAno;
}



