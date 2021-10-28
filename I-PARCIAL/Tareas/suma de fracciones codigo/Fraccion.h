/***********************************************************************
 * Module:  Fraccion.h
 * Author:  crisl
 * Modified: 27 October, 2021 9:23:31 PM
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__suma_de_fracciones_Fracccion_h)
#define __suma_de_fracciones_Fracccion_h
#include <iostream>

class Fraccion
{
public:
   Fraccion();
   ~Fraccion();
   float getNum(void);
   void setNum(float newNum);
   float getDen(void);
   void setDen(float newDen);
   void imprimir();

protected:
private:
   float num=0;
   float den=1;


};

#endif