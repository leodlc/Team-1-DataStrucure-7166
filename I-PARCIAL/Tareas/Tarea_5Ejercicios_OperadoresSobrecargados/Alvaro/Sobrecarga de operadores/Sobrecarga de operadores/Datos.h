#pragma once

class Operaciones;

class Datos
{
public:
	float getValor1(void);
	void setValor1(float newValor1);
	float getValor2(void);
	void setValor2(float newValor2);
	Datos();
	~Datos();

	Operaciones* operaciones;

private:
	float valor1;
	float valor2;
};
