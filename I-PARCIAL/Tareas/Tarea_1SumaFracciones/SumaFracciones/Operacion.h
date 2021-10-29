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
 * Module:  Operacion.h
 * Author:  crisl
 * Modified: 27 October, 2021 9:23:31 PM
 * Purpose: Declaration of the class Operacion
 ***********************************************************************/

#if !defined(__suma_de_fracciones_Opreacion_h)
#define __suma_de_fracciones_Opreacion_h
#include "Fraccion.h"

class Operacion
{
public:
   void sumaFracciones(Fraccion frac1, Fraccion frac2, Fraccion *fracResultado);

protected:
private:

};

#endif