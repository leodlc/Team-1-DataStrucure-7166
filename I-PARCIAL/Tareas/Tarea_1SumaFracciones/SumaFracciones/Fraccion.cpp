/** UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
*			INGENIERIA SOFTWARE
*
*AUTORES: Cristian Maranje
*Leonardo de la Cadena
*Johnny Loachamin
*Alvaro Zumba
*TEMA: CREACION DE UN PROGRAMA DE SUMA DE FRACCIONES<>
*FECHA DE CREACION : 27 DE OCTUBRE DEL 2021
*FECHA DE MODIFICACION: 28 DE OCTUBRE 2021
* */

/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  crisl
 * Modified: 27 October, 2021 9:23:31 PM
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion()
// Purpose:    Implementation of Fraccion::Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Implementation of Fraccion::~Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::~Fraccion()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNum()
// Purpose:    Implementation of Fraccion::getNum()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getNum(void)
{
   return num;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNum(float newNum)
// Purpose:    Implementation of Fraccion::setNum()
// Parameters:
// - newNum
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setNum(float newNum)
{
   num = newNum;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDen()
// Purpose:    Implementation of Fraccion::getDen()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getDen(void)
{
   return den;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDen(float newDen)
// Purpose:    Implementation of Fraccion::setDen()
// Parameters:
// - newDen
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setDen(float newDen)
{
   den = newDen;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::imprimir(Fraccion objeto)
// Purpose:    Implementation of Fraccion::imprimir()
// Parameters:
// - objeto
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::imprimir()
{
   std::cout <<num<<"/"<<den;
}