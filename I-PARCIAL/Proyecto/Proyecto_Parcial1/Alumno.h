/***********************************************************************
 /** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
 * Module:  Alumno.h
 * Author:  *Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
  * Modified: Domingo, 21 de noviembre de 2021 
 * Purpose: Division Clases Grupo
 ***********************************************************************/
//Cristian Maranje

#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
#include "Asignatura.h"

class Alumno : public Persona
{
public:
   Asignatura getListaAsignatura(void);
   void setListaAsignatura(Asignatura newListaAsignatura);
   float getNotaAdquirida(void);
   void setNotaAdquirida(float newNotaAdquirida);
   Alumno();
   ~Alumno();
   void verNotas(void);

protected:
private:
   Asignatura listaAsignatura[10];
   float notaAdquirida;


};

