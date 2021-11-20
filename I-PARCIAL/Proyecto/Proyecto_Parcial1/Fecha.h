/***********************************************************************
 /** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
 * Module:  Fecha.h
 * Author:  *Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
 * Modified: jueves, 18 de noviembre de 2021 19:23:37
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona;

class Fecha
{
public:
   string getDia(void);
   void setDia(string newDia);
   string getMes(void);
   void setMes(string newMes);
   string getAno(void);
   void setAno(string newAno);
   Fecha();
   ~Fecha();

   Persona** persona;

protected:
private:
   string dia;
   string mes;
   string ano;


};

