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