/***********************************************************************
 /** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
 * Module:  Asignatura.h
 * Author:  *Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
 * Modified: jueves, 18 de noviembre de 2021 20:01:28
 * Purpose: Declaration of the class Asignatura
 ***********************************************************************/

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Alumno;
class Profesor;

class Asignatura
{
public:
   string getNombreAsignatura(void);
   void setNombreAsignatura(string newNombreAsignatura);
   string getProfesorAsignado(void);
   void setProfesorAsignado(string newProfesorAsignado);
   string getNRC(void);
   void setNRC(string newNRC);
   Asignatura();
   ~Asignatura();
   float calcularNotaFinal(void);
   bool aprobacion(void);

   Alumno** alumno;
   Profesor** profesor;

protected:
private:
   string nombreAsignatura;
   string profesorAsignado;
   string NRC;
   float* calificacion;
   float notaFinal;


};

