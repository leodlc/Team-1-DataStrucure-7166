/***********************************************************************
 * Module:  Operacion.cpp
 * Author:  crisl
 * Modified: 27 October, 2021 9:23:31 PM
 * Purpose: Implementation of the class Operacion
 ***********************************************************************/

#include "Operacion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::sumaFracciones()
// Purpose:    Implementation of Operacion::sumaFracciones()
// Return:     float
////////////////////////////////////////////////////////////////////////

void Operacion::sumaFracciones(Fraccion frac1, Fraccion frac2, Fraccion *fracResultado)
{
  float tempFrac1Num = frac1.getNum(), tempFrac2Num = frac2.getNum(), tempFrac1Den = frac1.getDen(), tempFrac2Den = frac2.getDen();
  //temp = ((frac1.getNum())*(frac2.getDen()))+((frac2.getNum())*(frac1.getDen()));
  fracResultado->setNum(tempFrac1Num * tempFrac2Den + tempFrac2Num * tempFrac1Den);
  fracResultado->setDen(tempFrac1Den*tempFrac2Den);
  //fracResultado.imprimir();
}