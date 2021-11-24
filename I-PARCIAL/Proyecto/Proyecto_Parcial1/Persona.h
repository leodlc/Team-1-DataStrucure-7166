/***********************************************************************
 /** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
 * Module:  Persona.h
 * Author:  *Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
  * Modified: Domingo, 21 de noviembre de 2021
 * Purpose: Division Clases Grupo
 ***********************************************************************/

//Alvaro Zumba
#pragma once
#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;
class Persona
{
public:
   string getNombre(void);
   void setNombre(string newNombre);
   string getApellido(void);
   void setApellido(string newApellido);
   string getID(void);
   void setID(string newID);
   string getCedula(void);
   void setCedula(std::string newCedula);
   Fecha getFechaNacimiento(void);
   void setFechaNacimiento(Fecha newFechaNacimiento);
   string getCorreo(void);
   void setCorreo(string newCorreo);
   Persona();
   ~Persona();

protected:
private:
   string nombre;
   string apellido;
   string ID;
   string cedula;
   Fecha fechaNacimiento;
   string correo;


};

