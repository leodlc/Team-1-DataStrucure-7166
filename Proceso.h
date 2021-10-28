/***********************************************************************
 * Module:  Proceso.h
 * Author:  AsrockLeo
 * Modified: miércoles, 27 de octubre de 2021 18:02:58
 * Purpose: Declaration of the class Proceso
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Proceso_h)
#define __Class_Diagram_1_Proceso_h

class Proceso
{
public:
   float getDenominador(void);
   void setDenominador(float newDenominador);
   float getNumerador(void);
   void setNumerador(float newNumerador);
   Proceso(float num, float den);
   ~Proceso();
   void imprimir(Proceso objeto);

protected:
private:
   float denominador;
   float numerador;


};

#endif