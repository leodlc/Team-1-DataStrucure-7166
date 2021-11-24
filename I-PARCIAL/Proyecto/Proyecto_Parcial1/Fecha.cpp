/***********************************************************************
 /** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
 * Module:  Fecha.cpp
 * Author:  *Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
  * Modified: Domingo, 21 de noviembre de 2021
 * Purpose: Division Clases Grupo
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



