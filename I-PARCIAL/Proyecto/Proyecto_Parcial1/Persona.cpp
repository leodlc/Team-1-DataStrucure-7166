/***********************************************************************
 /** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
 * Module:  Persona.cpp
 * Author:  *Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
 * Modified: jueves, 18 de noviembre de 2021 19:24:23
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Persona.h"
using namespace std;

Persona::Persona()
{

}


Persona::~Persona()
{

}
std::string Persona::getNombre(void)
{
   return nombre;
}



void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}


std::string Persona::getApellido(void)
{
   return apellido;
}


void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}


std::string Persona::getID(void)
{
   return ID;
}


void Persona::setID(std::string newID)
{
   ID = newID;
}


std::string Persona::getCedula(void)
{
   return cedula;
}


void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}


Fecha Persona::getFechaNacimiento(void)
{
   return fechaNacimiento;
}


void Persona::setFechaNacimiento(Fecha newFechaNacimiento)
{
   fechaNacimiento = newFechaNacimiento;
}


std::string Persona::getCorreo(void)
{
   return correo;
}


void Persona::setCorreo(std::string newCorreo)
{
   correo = newCorreo;
}


